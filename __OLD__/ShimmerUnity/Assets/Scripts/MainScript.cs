/**
 * THESE METHODS MUST BE IMPLEMENTED TO A C# SCRIPT
 * - void onStartShimmer
 * - void onCreateShimmer
 * - void onStopShimmer
 * - void onUpdateShimmer
 * - void onStartStreamingShimmer
 * - void onStopStreamingShimmer
 * - void onConnectedShimmer
 * - void onDisconnectedShimmer
 * - void onFailedShimmer
 * 
 * METHODS IMPLEMENTED TO ANDROID SIDE
 * - static void start(String gameObjectName) //make an instance of shimmer plugin 
 * - void openConfigMenu(View v) //open check list to config sensors (GSR/HR/VBATT/BAR sensors are enabled by default)
 * - void openMenu(View v) //dunno
 * - void connectDevice(View v) //open dialog to select and connect a shimmer device
 * - void disconnectDevice(View v) //disconnect a connected device
 * - void startSDLogging(View v) //to start SD logging
 * - void stopSDLogging(View v) //to finish SD logging
 * - void startStreaming(View v) //to start streaming
 * - void stopStreaming(View v) //to finish streaming
 * - double getShimmerTimestamp() //get TS on shimmer
 * - double getShimmerA13RawData() //get raw signal data from PPG sensor
 * - double getShimmerHeartrate() //get calculated HR data
 * - double getShimmerGSRResistance() //get GSR val in kilo-ohm
 * - double getShimmerGSRConductance() //get GSR val in micro-simmens (maybe)
 * - double getShimmerBarometric() //get air pressure value
 * - double getShimmerTemperature() //get temp data from the barometric sensor (maybe)
 * - double getShimmerVBatt() //get voltage info of a battery inside a shimmer for health report
 * 
 * FUTURE WORK
 * - add methods to configure sensors after the plugin gets initialized
 * - remake mHandler part with WeakHandler to avoid memory leak
 * 
 * # in case HR won't be calculated, try reconnecting shimmer from device selection dialog then the problem will be solved.
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MainScript : MonoBehaviour {

	AndroidJavaClass target;
	AndroidJavaObject instance { get { return target.GetStatic<AndroidJavaObject> ("instance"); } }
	bool bIsConnected = false;
	bool bIsStreaming = false;

	public Text tsText;
	public Text gsrText;
	public Text hrText;

	// Use this for initialization

	void Awake () {
		target = new AndroidJavaClass ("org.empathiccomputing.shimmerunity.ShimmerPlugin");
		target.CallStatic ("start", gameObject.name);
	}

	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void onConnectButtonClicked() {
		Debug.Log ("onConnectButtonClicked");
		instance.Call ("connectDevice", null);
	}

	public void onStartStreamingButtonClicked() {
		instance.Call ("startStreaming", null);
	}

	public void onStopStremaingButtonClicked() {
		instance.Call ("stopStreaming", null);
	}

	public void onStartShimmer(string val) {
		Debug.Log ("onStartShimmer");
	}

	public void onCreateShimmer(string val) {
		Debug.Log ("onCreateShimmer");
	}

	public void onConnectedShimmer(string val) {
		Debug.Log ("onConnectedShimmer");
	}

	public void onDisconnectedShimmer(string val) {
		Debug.Log ("onDisconnectedShimmer");
	}

	public void onFailedShimmer(string val) {
		Debug.Log ("onFailedShimmer");
	}

	public void onStartStreamingShimmer(string val) {
		Debug.Log ("onStartStreamingShimmer");
	}

	public void onStopStreamingShimmer(string val) {
		Debug.Log ("onStopStreamingShimmer");
	}

	public void onStopShimmer(string val) {
		Debug.Log ("onStopShimemr");
	}

	public void onUpdateShimmer(string val) {
		//Debug.Log ("onUpdateShimmer");

		double ts = instance.Call<double>("getShimmerTimestamp");
		int hr = instance.Call<int>("getShimmerHeartrate");
		double gsrr = instance.Call<double>("getShimmerGSRResistance");
		//double vbatt = instance.Call<double>("getShimmerVBatt");

		Debug.Log("TS: " + ts.ToString () + ", GSR: " + gsrr.ToString () + ", HR: " + hr.ToString ());
	}
}
