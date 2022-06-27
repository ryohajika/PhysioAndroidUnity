# PhysioAndroidUnity is a combo of an Unity 3D project with an Android Studio project to talk to wearable physiological sensors for UI/UX research purposes.

This is a prototyping project happened at the [Empathic Computing Laboratory](http://empathiccomputing.org) to retrieve physiological sensing data from those wearable devices in the lab (Shimmer GSR+, Empatica E4, Muse EEG headband) back in 2018-2019.
It's quite old project but it attracted a demand from the lab people again so I'm trying to reviving this.
The available sensor and protocol will be updated soon.

## How it works
Each sensor connection will be managed as "Fragment" within [Android app lifecycle](https://developer.android.com/guide/components/activities/fragment-lifecycle), which would be working as an invisible layer laid on an Unity mobile application for Android phones. We do this to handle different manner of device connection management (or even license validation trick) between such devices. We compile each fragment as a "fat-aar" library which contains own code and third-party libraries to talk to a sensor from an Unity project.

## Supported sensors at the moment:
- Shimmer GSR+ sensor (GSR, PPG, Accelerometer, Gyroscope)

## Developed on:
- macOS 12.4, Android Studio Chipmunk (2021.2.1 Patch 1), Unity 3D 2021.3.4f1 (LTS)

### Created by:
Ryo Hajika (Empathic Computing Laboratory, imaginaryShort)
