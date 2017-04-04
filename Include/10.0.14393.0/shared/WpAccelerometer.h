/*++

Copyright (c) Microsoft Corporation

Module Name:

    WpAccelerometer.h

Abstract:

    Header file that defines structures,and definitions required
    by consumers of Windows Phone Accelerometer.

--*/

#include <wpSensors.h>

#pragma once


//
// Factory calibration structures and related constants.
//
typedef struct _ACC_FACTORY_CALIBRATION
{
    short Reserved;
    short SensorId;
    float RangeMin;
    float RangeMax;
    VEC3D Offset;
} ACC_FACTORY_CALIBRATION, *PACC_FACTORY_CALIBRATION;
typedef struct _ACC_DATA
{ 
    SENSOR_DATA_HEADER Header;

    // 
    // Signed acceleration in G units (9.8 meters per second squared)
    //
    VEC3D  Sample;
} ACC_DATA, *PACC_DATA;

typedef float ACC_RANGE_RESOLUTION;

#define ACC_CAPABILITY_HW_ORIENTATION   (0x80000000)

#define DPP_FILE_LOCATION               L"C:\\DPP\\Sensors\\Accelerometer.bin"

#define REG_VALUE_NAME_SIZE 64
#define ACC_CALIBRATION_REG_LOCATION    L"System\\Sensors\\Acc\\Calibration"
#define ACC_CALIBRATION_REG_FORMAT      L"ACC_%c_OFFSET_%d"
#define ACC_CALIBRATION_REG_X           L'X'
#define ACC_CALIBRATION_REG_Y           L'Y'
#define ACC_CALIBRATION_REG_Z           L'Z'


#define ACC_2GSCALE_MIN (-2.0F)
#define ACC_2GSCALE_MAX (2.0F)


