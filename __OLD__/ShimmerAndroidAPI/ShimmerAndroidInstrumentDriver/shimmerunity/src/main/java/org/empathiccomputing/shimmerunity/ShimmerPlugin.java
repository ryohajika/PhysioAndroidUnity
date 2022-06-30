package org.empathiccomputing.shimmerunity;

import android.app.Fragment;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.os.Handler;
import android.os.Message;
import android.util.Log;
import android.view.View;
import android.widget.TextView;
import android.widget.Toast;

import com.shimmerresearch.algorithms.Filter;
import com.shimmerresearch.android.Shimmer;
import com.shimmerresearch.android.guiUtilities.ShimmerBluetoothDialog;
import com.shimmerresearch.android.guiUtilities.ShimmerDialogConfigurations;
import com.shimmerresearch.android.manager.ShimmerBluetoothManagerAndroid;
import com.shimmerresearch.biophysicalprocessing.PPGtoHRwithHRV;
import com.shimmerresearch.biophysicalprocessing.GSRMetrics;
import com.shimmerresearch.bluetooth.ShimmerBluetooth;
import com.shimmerresearch.driver.CallbackObject;
import com.shimmerresearch.driver.Configuration;
import com.shimmerresearch.driver.FormatCluster;
import com.shimmerresearch.driver.ObjectCluster;
import com.shimmerresearch.driver.ShimmerDevice;

import com.unity3d.player.UnityPlayer;

import java.io.IOException;
import java.lang.ref.WeakReference;
import java.text.Format;
import java.util.Collection;

import static com.shimmerresearch.android.guiUtilities.ShimmerBluetoothDialog.EXTRA_DEVICE_ADDRESS;

public class ShimmerPlugin extends Fragment {

    ShimmerBluetoothManagerAndroid btManager;
    ShimmerDevice shimmerDevice;
    String shimmerBtAdd = "00:00:00:00:00:00";  //Put the address of the Shimmer device you want to connect here

    private final static boolean DEBUG = true;
    private final static String TAG = "ShimmerPlugin";
    private final static Integer kSamplingRateHz = 128;
    //TextView textView;

    /*
    static private class DataHandler extends Handler {
        private final WeakReference<Context> mContext;

        DataHandler(Context ctx) {
            super();
            mContext = new WeakReference<Context>(ctx);
        }
    }
    */
    // DataHandler mHandler;

    PPGtoHRwithHRV ppgToHr;
    Filter lpf, hpf;
    GSRMetrics gsrMetrics;

    public static ShimmerPlugin instance;
    String gameObjectName;
    boolean bIsFirstTime = true;

    /********* CALLBACKS *********/
    private static final String U_ON_START = "onStartShimmer";
    private static final String U_ON_CREATE = "onCreateShimmer";
    private static final String U_ON_STOP = "onStopShimmer";
    private static final String U_ON_UPDATE = "onUpdateShimmer";
    private static final String U_ON_START_STREAMING = "onStartStreamingShimmer";
    private static final String U_ON_STOP_STREAMING = "onStopStreamingShimmer";
    private static final String U_ON_CONNECTED = "onConnectedShimmer";
    private static final String U_ON_DISCONNECTED = "onDisconnectedShimmer";
    private static final String U_ON_FAILED = "onFailedShimmer";

    /********* VALUES **********/
    private double shimmerTimestamp;
    private double shimmerA13RawData;
    private int shimmerHeartrate;
    private double shimmerGSRResistance;
    private double shimmerGSRConductance;
    private double shimmerBarometric;
    private double shimmerTemperature;
    private double shimmerVBatt;


    public static void start(String gameObjectName) {
        if (DEBUG) Log.d(TAG, "<start>");
        instance = new ShimmerPlugin();
        instance.gameObjectName = gameObjectName;
        UnityPlayer.currentActivity.getFragmentManager().beginTransaction().add(instance, ShimmerPlugin.TAG).commit();
    }

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setRetainInstance(true);

        if (DEBUG) Log.d(TAG, "<onCreate>");

        try {
            // mHandler = new DataHandler(this);
            btManager = new ShimmerBluetoothManagerAndroid(UnityPlayer.currentActivity, mHandler);
            ppgToHr = new PPGtoHRwithHRV(kSamplingRateHz);
            lpf = new Filter(Filter.LOW_PASS, kSamplingRateHz, new double[] {5});
            hpf = new Filter(Filter.HIGH_PASS, kSamplingRateHz, new double[] {0.5});
            gsrMetrics = new GSRMetrics(kSamplingRateHz);
        } catch (Exception e) {
            Log.e(TAG, "Couldn't create ShimmerPlugin. Error: " + e);
        }

        UnityPlayer.UnitySendMessage(gameObjectName, U_ON_CREATE, "");
    }

    @Override
    public void onStart() {
        if (DEBUG) Log.d(TAG, "<onStart>");
        //Connect the Shimmer using its Bluetooth Address
        try {
            //btManager.connectShimmerThroughBTAddress(shimmerBtAdd);
        } catch (Exception e) {
            Log.e(TAG, "Error. Shimmer device not paired or Bluetooth is not enabled");
            Toast.makeText(UnityPlayer.currentActivity,
                    "Error. Shimmer device not paired or Bluetooth is not enabled. " +
                    "Please close the app and pair or enable Bluetooth",
                    Toast.LENGTH_LONG).show();
        }
        super.onStart();

        UnityPlayer.UnitySendMessage(gameObjectName, U_ON_START, "");
    }

    @Override
    public void onStop() {
        if (DEBUG) Log.d(TAG, "<onStop>");

        //Disconnect the Shimmer device when app is stopped
        if(shimmerDevice != null) {
            if(shimmerDevice.isSDLogging()) {
                shimmerDevice.stopSDLogging();
                Log.d(TAG, "Stopped Shimmer Logging");
            }
            else if(shimmerDevice.isStreaming()) {
                shimmerDevice.stopStreaming();
                Log.d(TAG, "Stopped Shimmer Streaming");
            }
            else {
                shimmerDevice.stopStreamingAndLogging();
                Log.d(TAG, "Stopped Shimmer Streaming and Logging");
            }
        }
        btManager.disconnectAllDevices();
        Log.i(TAG, "Shimmer DISCONNECTED");
        super.onStop();

        UnityPlayer.UnitySendMessage(gameObjectName, U_ON_STOP, "");
    }

    @Override
    public void onDestroy(){
        if (DEBUG) Log.d(TAG, "<onDestroy>");

        btManager.stopStreamingAllDevices();
        btManager.disconnectAllDevices();

        super.onDestroy();
    }

    //static class DataHandler extends Handler {
    //    private final WeakReference<ShimmerPlugin> mSP;

    //    DataHandler(ShimmerPlugin sp) {
    //        mSP = new WeakReference<ShimmerPlugin>(sp);
    //    }

    private Handler mHandler = new Handler() {

        @Override
        public void handleMessage(Message msg) {
            if (DEBUG) Log.d(TAG, "<mHandler - handleMessage>");

            switch (msg.what) {
                case ShimmerBluetooth.MSG_IDENTIFIER_DATA_PACKET:
                    if ((msg.obj instanceof ObjectCluster)) {

                        ObjectCluster objectCluster = (ObjectCluster) msg.obj;

                        //Retrieve all possible formats for the current sensor device:
                        Collection<FormatCluster> allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.TIMESTAMP);
                        FormatCluster timeStampCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        shimmerTimestamp = timeStampCluster.mData;
                        // Log.i(TAG, "Time Stamp: " + ts);

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.INT_EXP_ADC_A13);
                        FormatCluster a13Cluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (a13Cluster != null) {
                            shimmerA13RawData = a13Cluster.mData;
                            // Log.i(TAG, "A13: " + a13Data);

                            //Process PPG signal and calculate heart rate
                            try {
                                double dataFilteredLP = lpf.filterData(shimmerA13RawData);
                                double dataFilteredHP = hpf.filterData(dataFilteredLP);
                                shimmerHeartrate = (int) Math.round(ppgToHr.ppgToHrConversion(dataFilteredHP, shimmerTimestamp));
                                // Log.i(TAG, "HR: " + heartRate);
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.GSR_CONDUCTANCE);
                        FormatCluster gsrConductanceCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (gsrConductanceCluster != null) {
                            shimmerGSRConductance = gsrConductanceCluster.mData;
                        }

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.GSR_RESISTANCE);
                        FormatCluster gsrResistanceCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (gsrResistanceCluster != null) {
                            shimmerGSRResistance = gsrResistanceCluster.mData;
                        }

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.PRESSURE_BMP180);
                        FormatCluster pressureCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (pressureCluster != null) {
                            shimmerBarometric = pressureCluster.mData;
                        }

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.TEMPERATURE_BMP180);
                        FormatCluster tempCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (tempCluster != null) {
                            shimmerTemperature = tempCluster.mData;
                        }

                        allFormats = objectCluster.getCollectionOfFormatClusters(Configuration.Shimmer3.ObjectClusterSensorName.BATT_PERCENTAGE);
                        FormatCluster vbattCluster = ((FormatCluster) ObjectCluster.returnFormatCluster(allFormats, "CAL"));
                        if (vbattCluster != null) {
                            shimmerVBatt = vbattCluster.mData;
                        }

                        UnityPlayer.UnitySendMessage(gameObjectName, U_ON_UPDATE, "");
                    }
                    break;
                case Shimmer.MESSAGE_TOAST:
                    /** Toast messages sent from {@link Shimmer} are received here. E.g. device xxxx now streaming.
                     *  Note that display of these Toast messages is done automatically in the Handler in {@link com.shimmerresearch.android.shimmerService.ShimmerService} */
                    Toast.makeText(UnityPlayer.currentActivity, msg.getData().getString(Shimmer.TOAST), Toast.LENGTH_SHORT).show();
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
                            shimmerDevice = btManager.getShimmerDeviceBtConnectedFromMac(shimmerBtAdd);
                            if (shimmerDevice != null && bIsFirstTime) {
                                Log.i(TAG, "Got the ShimmerDevice!");
                                shimmerDevice.setSamplingRateShimmer(kSamplingRateHz);
                                shimmerDevice.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_INT_EXP_ADC_A13, true);
                                shimmerDevice.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_TIMESTAMP, true);
                                shimmerDevice.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_GSR, true);
                                shimmerDevice.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_BMPX80_PRESSURE, true);
                                shimmerDevice.setSensorEnabledState(Configuration.Shimmer3.SENSOR_ID.SHIMMER_VBATT, true);
                                btManager.configureShimmer(shimmerDevice);
                                UnityPlayer.UnitySendMessage(gameObjectName, U_ON_CONNECTED, "");
                                bIsFirstTime = false;
                            } else {
                                Log.i(TAG, "ShimmerDevice returned is NULL!");
                            }
                            break;
                        case CONNECTING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is CONNECTING");
                            break;
                        case STREAMING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now STREAMING");
                            UnityPlayer.UnitySendMessage(gameObjectName, U_ON_START_STREAMING, "");
                            break;
                        case STREAMING_AND_SDLOGGING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now STREAMING AND LOGGING");
                            break;
                        case SDLOGGING:
                            Log.i(TAG, "Shimmer [" + macAddress + "] is now SDLOGGING");
                            break;
                        case DISCONNECTED:
                            Log.i(TAG, "Shimmer [" + macAddress + "] has been DISCONNECTED");
                            UnityPlayer.UnitySendMessage(gameObjectName, U_ON_DISCONNECTED, "");
                            bIsFirstTime = true;
                            break;
                        case CONNECTION_FAILED:
                            Log.i(TAG, "Shimmer [" + macAddress + "] connection FAILED");
                            UnityPlayer.UnitySendMessage(gameObjectName, U_ON_FAILED, "");
                            break;
                    }
                    break;
            }
            super.handleMessage(msg);
        }
    };

    public double getShimmerTimestamp() {
        return shimmerTimestamp;
    }
    public double getShimmerA13RawData() {
        return shimmerA13RawData;
    }
    public int getShimmerHeartrate() {
        return shimmerHeartrate;
    }
    public double getShimmerGSRResistance() {
        return shimmerGSRResistance;
    }
    public double getShimmerGSRConductance() {
        return shimmerGSRConductance;
    }
    public double getShimmerBarometric() {
        return shimmerBarometric;
    }
    public double getShimmerTemperature() {
        return shimmerTemperature;
    }
    public double getShimmerVBatt() {
        return shimmerVBatt;
    }

    public void startStreaming(View v){
        if (DEBUG) Log.d(TAG, "<startStreaming>");
        if (shimmerDevice != null) {
            shimmerDevice.startStreaming();
        }
    }

    public void stopStreaming(View v){
        if (DEBUG) Log.d(TAG, "<stopStreaming>");
        if (shimmerDevice != null) {
            shimmerDevice.stopStreaming();
            UnityPlayer.UnitySendMessage(gameObjectName, U_ON_STOP_STREAMING, "");
        }
    }

    /**
     * Called when the configurations button is clicked
     * @param v
     */
    public void openConfigMenu(View v){
        if (DEBUG) Log.d(TAG, "<openConfigMenu>");

        if(shimmerDevice != null) {
            if(!shimmerDevice.isStreaming() && !shimmerDevice.isSDLogging()) {
                ShimmerDialogConfigurations.buildShimmerConfigOptions(shimmerDevice, UnityPlayer.currentActivity, btManager);
            }
            else {
                Log.e(TAG, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING");
                Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING", Toast.LENGTH_SHORT).show();
            }
        }
        else {
            Log.e(TAG, "Cannot open menu! Shimmer device is not connected");
            Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is not connected", Toast.LENGTH_SHORT).show();
        }
    }

    /**
     * Called when the menu button is clicked
     * @param v
     * @throws IOException
     */
    public void openMenu(View v) throws IOException {
        if (DEBUG) Log.d(TAG, "<openMenu>");

        if(shimmerDevice != null) {
            if(!shimmerDevice.isStreaming() && !shimmerDevice.isSDLogging()) {
                //ShimmerDialogConfigurations.buildShimmerSensorEnableDetails(shimmerDevice, MainActivity.this);
                ShimmerDialogConfigurations.buildShimmerSensorEnableDetails(shimmerDevice, UnityPlayer.currentActivity, btManager);
            }
            else {
                Log.e(TAG, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING");
                Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is STREAMING AND/OR LOGGING", Toast.LENGTH_SHORT).show();
            }
        }
        else {
            Log.e(TAG, "Cannot open menu! Shimmer device is not connected");
            Toast.makeText(UnityPlayer.currentActivity, "Cannot open menu! Shimmer device is not connected", Toast.LENGTH_SHORT).show();
        }
    }

    /**
     * Called when the connect button is clicked
     * @param v
     */
    public void connectDevice(View v) {
        if (DEBUG) Log.d(TAG, "<connectDevice>");
        Intent intent = new Intent(UnityPlayer.currentActivity, ShimmerBluetoothDialog.class);
        startActivityForResult(intent, ShimmerBluetoothDialog.REQUEST_CONNECT_SHIMMER);
    }

    public void disconnectDevice(View v) {
        if (DEBUG) Log.d(TAG, "<disconnectDevice>");
        if(shimmerDevice != null) {
            if(shimmerDevice.isStreaming()) {
                shimmerDevice.stopStreaming();
            } else if(shimmerDevice.isSDLogging()) {
                shimmerDevice.stopSDLogging();
            }
            try {
                shimmerDevice.disconnect();
                shimmerDevice = null;
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public void startSDLogging(View v) {
        if (DEBUG) Log.d(TAG, "<startSDLogging>");
        if (shimmerDevice != null) {
            ((ShimmerBluetooth) shimmerDevice).writeConfigTime(System.currentTimeMillis());
            shimmerDevice.startSDLogging();
        }
    }

    public void stopSDLogging(View v) {
        if (DEBUG) Log.d(TAG, "<stopSDLogging>");
        if (shimmerDevice != null) {
            shimmerDevice.stopSDLogging();
        }
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
        if(requestCode == 2) {
            if (resultCode == UnityPlayer.currentActivity.RESULT_OK) {
                btManager.disconnectAllDevices();   //Disconnect all devices first
                //Get the Bluetooth mac address of the selected device:
                String macAdd = data.getStringExtra(EXTRA_DEVICE_ADDRESS);
                btManager.connectShimmerThroughBTAddress(macAdd);   //Connect to the selected device
                shimmerBtAdd = macAdd;
            }

        }
        super.onActivityResult(requestCode, resultCode, data);
    }
}
