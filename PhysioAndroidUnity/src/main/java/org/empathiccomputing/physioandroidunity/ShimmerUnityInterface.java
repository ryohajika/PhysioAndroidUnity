package org.empathiccomputing.physioandroidunity;

import android.content.Intent;

public interface ShimmerUnityInterface {
    // generic interface info
    public void onActivityResult(int requestCode, int resultCode, Intent data);
    public void onCreate();
    public void onSessionStarted();
    public void onSessionFinished();
    public void onRequestPermissionFailed(String errormsg);
    public void onDestroy();

    // Shimmer GSR+ specific
    public void onCreateShimmer();
    public void onConnectedShimmer();
    public void onDisconnectedShimmer();
    public void onFailedShimmer();
    public void onDestroyShimmer();

    public void onStartShimmer();
    public void onStopShimmer();
    public void onUpdateShimmer();
}
