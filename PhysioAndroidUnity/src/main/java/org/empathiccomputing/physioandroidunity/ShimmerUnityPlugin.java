package org.empathiccomputing.physioandroidunity;

import android.annotation.SuppressLint;
import android.app.Fragment;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.Toast;

import com.shimmerresearch.algorithms.Filter;
import com.shimmerresearch.android.Shimmer;
import com.shimmerresearch.android.guiUtilities.ShimmerBluetoothDialog;
import com.shimmerresearch.android.guiUtilities.ShimmerDialogConfigurations;
import com.shimmerresearch.android.manager.ShimmerBluetoothManagerAndroid;
import com.shimmerresearch.biophysicalprocessing.PPGtoHRwithHRV;
import com.shimmerresearch.biophysicalprocessing.GSRMetrics;
import com.shimmerresearch.bluetooth.ShimmerBluetooth;
import com.shimmerresearch.comms.wiredProtocol.UartPacketDetails;
import com.shimmerresearch.driver.CallbackObject;
import com.shimmerresearch.driver.Configuration;
import com.shimmerresearch.driver.FormatCluster;
import com.shimmerresearch.driver.ObjectCluster;
import com.shimmerresearch.driver.ShimmerDevice;

import java.io.IOException;
import java.lang.ref.WeakReference;
import java.text.Format;
import java.util.Collection;

import static com.shimmerresearch.android.guiUtilities.ShimmerBluetoothDialog.EXTRA_DEVICE_ADDRESS;

import com.unity3d.player.UnityPlayer;

import org.empathiccomputing.physioandroidunity.ShimmerGSRData;

public class ShimmerUnityPlugin extends Fragment {
    // generic callback functions
    private final static String ON_ACTIVITY_RESULT      = "onActivityResult";
    private final static String ON_CREATE               = "onCreate";
    private final static String ON_SESS_STARTED         = "onSessionStarted";
    private final static String ON_SESS_RESUMED         = "onSessionResumed";
    private final static String ON_SESS_PAUSED          = "onSessionPaused";
    private final static String ON_SESS_FINISHED        = "onSessionFinished";
    private final static String ON_REQ_FAILED           = "onRequestPermissionFailed";
    private final static String ON_DESTROY              = "onDestroy";

    // Shimmer GSR+ specific
    private final static String ON_CREATE_SHMR          = "onCreateShimmer";
    private final static String ON_CONNECTED_SHMR       = "onConnectedShimmer";
    private final static String ON_DISCONNECTED_SHMR    = "onDisconnectedShimmer";
    private final static String ON_FAILED_SHMR          = "onFailedShimmer";
    private final static String ON_DESTROY_SHMR         = "onDestroyShimmer";
    private final static String ON_MESSAGE_SHMR         = "onMessageShimmer";

    private final static String ON_START_SHMR           = "onStartShimmer";
    private final static String ON_STOP_SHMR            = "onStopShimmer";
    private final static String ON_UPDATE_SHMR          = "onUpdateShimmer";

    private final static String TAG     = "ShimmerUnityPlugin";
    private final static boolean DEBUG  = true;
    private final static Integer kSamplingRateHz = 128;

    // specific response messages
    private final static String RES_OK      = "OK";
    private final static String RES_ERROR   = "ERROR";
    private final static String RES_NONE    = "NONE";
    private final static String RES_DATA    = "DATA";
    private final static String RES_MSG     = "MSG";

    ShimmerBluetoothManagerAndroid btManager_ = null;

    ShimmerDevice device_ = null;
    String _shmrBtAdd = "00:00:00:00:00:00";

    PPGtoHRwithHRV ppgToHr_ = null;
    Filter lpf_, hpf_ = null;
    GSRMetrics gsrMetrics_ = null;

    public static ShimmerUnityPlugin instance_;
    String _gameObjectName;
    boolean bInitial = true;

    private ShimmerGSRData  _dat = null;

    public static void init(String gameObjectName) {
        if (DEBUG) Log.d(TAG, "<start>");
        instance_ = new ShimmerUnityPlugin();
        instance_._gameObjectName = gameObjectName;
        UnityPlayer.currentActivity
                   .getFragmentManager()
                   .beginTransaction()
                   .add(instance_,
                        ShimmerUnityPlugin.TAG)
                   .commit();
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        if(DEBUG) Log.d(TAG, "<onCreate>");
        super.onCreate(savedInstanceState);
        setRetainInstance(true);

        try {
            btManager_ = new ShimmerBluetoothManagerAndroid(UnityPlayer.currentActivity,
                                                            mHandler);
            ppgToHr_ = new PPGtoHRwithHRV(kSamplingRateHz);
            lpf_ = new Filter(Filter.LOW_PASS,  kSamplingRateHz, new double[]{5.0});
            hpf_ = new Filter(Filter.HIGH_PASS, kSamplingRateHz, new double[]{0.5});
            gsrMetrics_ = new GSRMetrics(kSamplingRateHz);
            _dat = new ShimmerGSRData();
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_CREATE, RES_OK);
        } catch (Exception e) {
            Log.e(TAG, "Couldn't create ShimmerUnityPlugin. Refer this: " + e);
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_CREATE, RES_ERROR);
        }
    }

    @Override
    public void onStart() {
        if(DEBUG) Log.d(TAG, "<onStart>");
        super.onStart();
        UnityPlayer.UnitySendMessage(_gameObjectName, ON_SESS_STARTED, RES_OK);
    }

    @Override
    public void onResume() {
        if(DEBUG) Log.d(TAG, "<onResume>");
        super.onResume();
        // put some lines here if you need to handle a Shimmer sensor in a particular way
        UnityPlayer.UnitySendMessage(_gameObjectName, ON_SESS_RESUMED, RES_OK);
    }

    @Override
    public void onPause() {
        if(DEBUG) Log.d(TAG, "<onPause>");
        super.onPause();
        // put some lines here if you need to handle a Shimmer sensor in a particular way
        UnityPlayer.UnitySendMessage(_gameObjectName, ON_SESS_PAUSED, RES_OK);
    }

    @Override
    public void onStop() {
        if(DEBUG) Log.d(TAG, "<onStop>");
        super.onStop();

        if(device_ != null) {
            if (device_.isSDLogging()) {
                device_.stopSDLogging();
            }
            if (device_.isStreaming()) {
                device_.stopStreaming();
            }
            btManager_.disconnectShimmer(device_);
            device_ = null;
        }

        Log.d(TAG, "Shimmer device disconnected");

        UnityPlayer.UnitySendMessage(_gameObjectName, ON_SESS_FINISHED, RES_OK);
    }

    @Override
    public void onDestroy() {
        if(DEBUG) Log.d(TAG, "<onDestroy>");
        super.onDestroy();

        UnityPlayer.UnitySendMessage(_gameObjectName, ON_DESTROY, RES_OK);
    }

    /**
     * Get the result from the paired devices dialog
     * @param requestCode
     * @param resultCode
     * @param data
     */
    @Override
    public void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (DEBUG) Log.d(TAG, "<onActivityResult>");
        super.onActivityResult(requestCode, resultCode, data);

        if(requestCode == 2) {
            if (resultCode == UnityPlayer.currentActivity.RESULT_OK) {
                btManager_.disconnectAllDevices();   //Disconnect all devices first
                //Get the Bluetooth mac address of the selected device:
                String macAdd = data.getStringExtra(EXTRA_DEVICE_ADDRESS);
                btManager_.connectShimmerThroughBTAddress(macAdd);   //Connect to the selected device
                _shmrBtAdd = macAdd;

                UnityPlayer.UnitySendMessage(_gameObjectName, ON_ACTIVITY_RESULT, RES_OK);
            } else {
                UnityPlayer.UnitySendMessage(_gameObjectName, ON_ACTIVITY_RESULT, RES_ERROR);
            }

        }
    }

    Handler mHandler = new Handler(){
        @Override
        public void handleMessage(Message msg){
            if(DEBUG) Log.d(TAG, "<handleMessage>");
            super.handleMessage(msg);

            switch (msg.what) {
                case ShimmerBluetooth.MSG_IDENTIFIER_DATA_PACKET:
                    if(msg.obj instanceof ObjectCluster) {
                        ObjectCluster oc = (ObjectCluster) msg.obj;
                        //Retrieve all possible formats for the current sensor device:
                        Collection<FormatCluster> allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.TIMESTAMP);
                        FormatCluster timeStampCluster = (ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        _dat.ts = timeStampCluster.mData;
                        // Log.i(TAG, "Time Stamp: " + ts);

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.INT_EXP_ADC_A13);
                        FormatCluster a13Cluster = (ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (a13Cluster != null) {
                            _dat.a13_raw = a13Cluster.mData;
                            // Log.i(TAG, "A13: " + a13Data);

                            //Process PPG signal and calculate heart rate
                            try {
                                double dataFilteredLP = lpf_.filterData(_dat.a13_raw);
                                double dataFilteredHP = hpf_.filterData(dataFilteredLP);
                                _dat.a13_filt = dataFilteredHP;
                                _dat.hr = (int) Math.round(ppgToHr_.ppgToHrConversion(dataFilteredHP, _dat.ts));
                                ppgToHr_.calculateTimeDomainHRVContinuous();
                                _dat.hrv = ppgToHr_.getRRInterval();
                                // Log.i(TAG, "HR: " + heartRate);
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.GSR_CONDUCTANCE);
                        FormatCluster gsrConductanceCluster = (ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (gsrConductanceCluster != null) {
                            _dat.gsr_con = gsrConductanceCluster.mData;
                        }

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.GSR_RESISTANCE);
                        FormatCluster gsrResistanceCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (gsrResistanceCluster != null) {
                            _dat.gsr_res = gsrResistanceCluster.mData;
                        }

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.PRESSURE_BMP180);
                        FormatCluster pressureCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (pressureCluster != null) {
                            _dat.bar = pressureCluster.mData;
                        }

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.TEMPERATURE_BMP180);
                        FormatCluster tempCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (tempCluster != null) {
                            _dat.temp = tempCluster.mData;
                        }

                        allFmts = oc.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.BATT_PERCENTAGE);
                        FormatCluster vbattCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFmts, "CAL"));
                        if (vbattCluster != null) {
                            _dat.vbatt = vbattCluster.mData;
                        }

                        UnityPlayer.UnitySendMessage(_gameObjectName, ON_UPDATE_SHMR, "");
                    }
                    break;
                case ShimmerBluetooth.MSG_IDENTIFIER_STATE_CHANGE:
                    ShimmerBluetooth.BT_STATE state = null;
                    String macAddress = "";

                    if (msg.obj instanceof ObjectCluster) {
                        state = ((ObjectCluster) msg.obj).mState;
                        macAddress = ((ObjectCluster) msg.obj).getMacAddress();
                    } else if (msg.obj instanceof CallbackObject) {
                        state = ((CallbackObject) msg.obj).mState;
                        macAddress = ((CallbackObject) msg.obj).mBluetoothAddress;
                    }

                    Log.d(TAG, "Shimmer state changed! Shimmer = " + macAddress + ", new state = " + state);

                    switch (state) {
                        case CONNECTED:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now CONNECTED");
                            device_ = btManager_.getShimmerDeviceBtConnectedFromMac(_shmrBtAdd);
                            if (device_ != null && bInitial) {
                                Log.i(TAG, "Got the ShimmerDevice!");
                                device_.setSamplingRateShimmer(kSamplingRateHz);
                                device_.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_INT_EXP_ADC_A13, true);
                                device_.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_TIMESTAMP, true);
                                device_.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_GSR, true);
                                device_.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_BMPX80_PRESSURE, true);
                                device_.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_VBATT, true);
                                btManager_.configureShimmer(device_);
                                UnityPlayer.UnitySendMessage(_gameObjectName, ON_CONNECTED_SHMR, "");
                                bInitial = false;
                            } else {
                                Log.i(TAG, "ShimmerDevice returned is NULL!");
                            }
                            break;
                        case CONNECTING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is CONNECTING");
                            break;
                        case STREAMING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now STREAMING");
                            UnityPlayer.UnitySendMessage(_gameObjectName, ON_START_SHMR, "");
                            break;
                        case STREAMING_AND_SDLOGGING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now STREAMING AND LOGGING");
                            break;
                        case SDLOGGING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now SDLOGGING");
                            break;
                        case DISCONNECTED:
                            Log.i(TAG, "Shimmer [" + macAddress + "] has been DISCONNECTED");
                            UnityPlayer.UnitySendMessage(_gameObjectName, ON_STOP_SHMR, "");
                            bInitial = true;
                            break;
                        case CONNECTION_FAILED:
                            Log.i(TAG, "Shimmer [" + macAddress + "] connection FAILED");
                            UnityPlayer.UnitySendMessage(_gameObjectName, ON_FAILED_SHMR, "");
                            break;
                    }
                    break;
                case Shimmer.MESSAGE_TOAST:
                    UnityPlayer.UnitySendMessage(_gameObjectName, ON_MESSAGE_SHMR, msg.getData().getString(Shimmer.TOAST));
                    break;
            }
        }
    };

    public double getTimestamp() {
        return _dat.ts;
    }
    public double getA13RawData() {
        return _dat.a13_raw;
    }
    public double getA13FilteredData() {
        return _dat.a13_filt;
    }
    public int getHeartrate() {
        return _dat.hr;
    }

    /**
     * @todo current impl is to retrieve RR interval so we need to fix it to get HRV
     * @return
     */
    public double getHRV() {
        return _dat.hrv;
    }

    public double getGSRResistance() {
        return _dat.gsr_res;
    }
    public double getGSRConductance() {
        return _dat.gsr_con;
    }
    public double getBarometric() {
        return _dat.bar;
    }
    public double getTemperature() {
        return _dat.temp;
    }
    public double getVBatt() {
        return _dat.vbatt;
    }

    public void startStreaming(){
        if (DEBUG) Log.d(TAG, "<startStreaming>");
        if (device_ != null) {
            device_.startStreaming();
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_START_SHMR, RES_OK);
        } else {
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_START_SHMR, RES_ERROR);
        }
    }

    public void stopStreaming(){
        if (DEBUG) Log.d(TAG, "<stopStreaming>");
        if (device_ != null) {
            device_.stopStreaming();
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_STOP_SHMR, RES_OK);
        } else {
            UnityPlayer.UnitySendMessage(_gameObjectName, ON_STOP_SHMR, RES_ERROR);
        }
    }

//    /**
//     * Called when the configurations button is clicked
//     * @param v
//     */
//    public void openConfigMenu(View v){
//        if (DEBUG) Log.d(TAG, "<openConfigMenu>");
//
//        if(device_ != null) {
//            if(!device_.isStreaming() && !device_.isSDLogging()) {
//                ShimmerDialogConfigurations.buildShimmerConfigOptions(device_, UnityPlayer.currentActivity, btManager_);
//            }
//            else {
//                Log.e(TAG, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING");
//                UnityPlayer.UnitySendMessage(_gameObjectName, ON_MESSAGE_SHMR, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING");
//            }
//        }
//        else {
//            Log.e(TAG, "Cannot open menu! Shimmer device is not connected");
//            UnityPlayer.UnitySendMessage(_gameObjectName, ON_MESSAGE_SHMR, "Cannot open menu! Shimmer device is not connected");
//        }
//    }
//
//    /**
//     * Called when the menu button is clicked
//     * @param v
//     * @throws IOException
//     */
//    public void openMenu(View v) throws IOException {
//        if (DEBUG) Log.d(TAG, "<openMenu>");
//
//        if(device_ != null) {
//            if(!device_.isStreaming() && !device_.isSDLogging()) {
//                ShimmerDialogConfigurations.buildShimmerSensorEnableDetails(device_, UnityPlayer.currentActivity, btManager_);
//            }
//            else {
//                Log.e(TAG, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING");
//                Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING", Toast.LENGTH_SHORT).show();
//            }
//        }
//        else {
//            Log.e(TAG, "Cannot open menu! Shimmer device is not connected");
//            Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is not connected", Toast.LENGTH_SHORT).show();
//        }
//    }

    /**
     * Called when the connect button is clicked
     */
    public void connectDevice() {
        if (DEBUG) Log.d(TAG, "<connectDevice>");
        Intent intent = new Intent(UnityPlayer.currentActivity, ShimmerBluetoothDialog.class);
        startActivityForResult(intent, ShimmerBluetoothDialog.REQUEST_CONNECT_SHIMMER);
    }

    public void disconnectDevice() {
        if (DEBUG) Log.d(TAG, "<disconnectDevice>");
        if(device_ != null) {
            if(device_.isStreaming()) {
                device_.stopStreaming();
            } else if(device_.isSDLogging()) {
                device_.stopSDLogging();
            }
            try {
                device_.disconnect();
                device_ = null;
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void startSDLogging() {
        if (DEBUG) Log.d(TAG, "<startSDLogging>");
        if (device_ != null) {
            ((ShimmerBluetooth) device_).writeConfigTime(System.currentTimeMillis());
            device_.startSDLogging();
        }
    }

    public void stopSDLogging() {
        if (DEBUG) Log.d(TAG, "<stopSDLogging>");
        if (device_ != null) {
            device_.stopSDLogging();
        }
    }
}