package org.empathiccomputing.physioandroidunity;

// data struct
public class ShimmerGSRData {
    // generic
    double  ts          = -1.0;
    double  temp        = -1.0;
    double  vbatt       = -1.0;

    // motion
    double acc_x        = 0.0;
    double acc_y        = 0.0;
    double acc_z        = 0.0;
    double gyr_x        = 0.0;
    double gyr_y        = 0.0;
    double gyr_z        = 0.0;

    // Shimmer GSR+ unique
    double  a13_raw     = -1.0;
    double  a13_filt    = -1.0;
    int     hr          = -1;
    double  hrv         = -1.0;
    double  gsr_res     = -1.0;
    double  gsr_con     = -1.0;
    double  bar         = -1.0;
}
