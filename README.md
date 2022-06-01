# PhysiologicalUnity is an Unity3D project for Android phones to access wearable physiological sensors.

This is a prototyping project happened at the [Empathic Computing Laboratory](http://empathiccomputing.org) to retrieve physiological sensing data from those wearable devices in the lab (Shimmer GSR+, Empatica E4, Muse EEG headband) back in 2018-2019.
It's quite old project but it attracted a demand from the lab people again so I'm trying to reviving this.
The available sensor and protocol will be updated soon.

## How it works
Each sensor connection will be managed as "Activity" within [Android app lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle), which would be working as an invisible layer laid on an Unity mobile application for Android system. This is because each sensor has different manner of device connection management (or even license validation trick). We compile each activity as a "fat-aar" library which contains an Android Activity and its protocol to talk to a sensor from an Unity project.

## Current supported sensors:
- Shimmer GSR+ sensor (GSR, PPG, Accelerometer, Gyroscope)

### Created by:
Ryo Hajika (Empathic Computing Laboratory, imaginaryShort)
