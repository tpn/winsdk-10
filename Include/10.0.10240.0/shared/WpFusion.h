/*++

Copyright (c) Microsoft Corporation

Module Name:

    WpFusion.h

Abstract:

    Windows Phone Fusion header file

--*/

#pragma once

#include <wpSensors.h>
#include <wpMagnetometer.h>


#ifdef __cplusplus
extern "C" {
#endif


#define PROPERTY_NAME_LENGTH (32)                               // Length of the name of the properties
// For use with IOCTL_SENSOR_GET_PROPERTY
#define MAG_MARGIN_PRECISE_PROPNAME   (L"MAG MARGIN PRECISE")   // If The error margin is less than +/- this value in 
                                                                // deg (float): This is a very accurate sample, and 
                                                                // should be useful for all applications, including 
                                                                // dead reckoning and motion controllers. 
#define MAG_MARGIN_ACCURATE_PROPNAME  (L"MAG MARGIN ACCURATE")  // If The error margin is less than +/- this value in 
                                                                // deg (float): This is an accurate sample, and should 
                                                                // be useful most applications like augmented reality, 
                                                                // maps and games. The application should remove any 
                                                                // recalibration UI below this value.
#define MAG_MARGIN_POOR_PROPNAME      (L"MAG MARGIN POOR")      // If The error margin is less than +/- this value in 
                                                                // deg (float): This is a very inaccurate sample and 
                                                                // would be unusable for most applications. The 
                                                                // application might consider prompting the user 
                                                                // to move the device is a '8' motion.


//-----------------------------------------------------------------------------

typedef struct
{
    float              TrueBearing;     // True (or Geographic) Bearing of the device. Angle From 0-359 between the 
                                        // True North and the device bearing axis (see BearingAxis). 
                                        // True Bearing = Magnetic Bearing + Magnetic Declination
    float              MagDeclination;  // Magnetic declination is the angle between True North and the Magnetic North.
                                        // The declination is positive when the Magnetic North is East of True North. 
                                        // From -180 to 180
    float              MagBearing;      // Bearing of the device. Angle From 0-359 between the magnetic North and the 
                                        // device bearing axis (see BearingAxis)
    COORDINATE_AXIS    BearingAxis;     // Bearing is the direction of this axis
    SHORT              ErrorMargin;     // Error margin of magnetometer (used for calibration UI event) 0-180              
    VEC3D              MagRaw;          // Raw magnetometer sample
    VEC3D              MagCalibrated;   // Calibrated magnetometer sample
    VEC3D              Gravity;         // Synthesized Gravity vector: 3D vector representing the direction and the
                                        // norm of the gravity (in g: 1g=9.81m.s-2) in the device reference frame. It
                                        // also represents the opposite direction of the Z-axis in the Earth reference 
                                        // frame.

} COMPASSMAG_DATA, *PCOMPASSMAG_DATA;


typedef struct
{
    ULONG Size;          //Size of this structure
    ULONG BearingDelta;  //Delta for the bearing
} COMPASSMAG_THRESHOLD, *PCOMPASSMAG_THRESHOLD;
//-----------------------------------------------------------------------------


typedef struct 
{
    VEC3D               East;               // 3D vector representing the East unit vector (X) expressed in device 
                                            // coordinates (opposite of gravity)
    VEC3D               TrueNorth;          // 3D vector representing the direction of the True (or Geographic) North.
                                            // Its norm is always 1. It also represents the direction of the Y-axis in
                                            // the Earth reference frame.
    VEC3D               Up;                 // 3D vector representing the Up unit vector (Z) expressed in device 
                                            // coordinates (opposite of gravity)
    VEC3D               EulerAngles;        // 3D vector representing the attitude Euler Angles (x=Pitch, y=Roll,
                                            // z=Yaw - Order of rotation is Z-X'-Y" - intrinsic rotations - right
                                            // handed space) 
    QUATERNION          Quaternion;         // Quaternion representing the attitude of the device
    MATRIX3X3           RotationMatrix3x3;  // 3x3 Matrix representing the attitude of the device through a rotation 
                                            // Matrix converting the device frame of reference the Earth frame of 
                                            // reference.
} ATTITUDE_DATA, *PATTITUDE_DATA;


typedef struct
{
    VEC3D               RotationRate;       // 3D vector representing the drift-adjusted rotation rate along each 
                                            // axis of the device in degrees per seconds. This is similar to the Raw
                                            // Gyro data, but compensated by the reallignment on Acc and Mag data
    VEC3D               LinearAcceleration; // 3D Vector representing the pure linear acceleration performed on the 
                                            // device frame of reference in G-Force. It does not include 
                                            // the effect gravity if device not in free or semi-free fall.

} KINETIC_DATA, *PKINETIC_DATA;


// FusionStates bits:
typedef enum
{
    FUS_STATE_INITIALIZED = 0x0001, // Bit set indicates that the Sensor Fusion is initialized and valid samples are 
                                    // being generated
    FUS_STATE_USE_GYRO    = 0x0002  // Bit set indicates that the gyro is being used for Sensor Fusion (9-axis / full 
                                    // fusion - not in degraded mode). The KineticData field is valid in that case
} FUSION_STATES;


typedef struct
{
    SENSOR_DATA_HEADER Header;
    FUSION_STATES FusionStates;     // State bitfield
    COMPASSMAG_DATA CompassData;
    ATTITUDE_DATA AttitudeData;
    KINETIC_DATA KineticData;
} FUSION_DATA, *PFUSION_DATA;


typedef struct
{
    DWORD Size;                 // Size of this structure
    float AngleDelta;           // Delta angles
    float AccelerationDelta;    // Delta acceleration
} FUSION_THRESHOLD, *PFUSION_THRESHOLD;



#ifdef __cplusplus
}
#endif

