/*++
Copyright (c) 1990-2012  Microsoft Corporation. All rights reserved.

Module Name:
    sensorMTE.h

Abstract:
    IOCTL codes and structures for OEM MTE related interfaces

 --*/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// Perform sensor built-in self test, if supported.
// May return STATUS_NOT_IMPLEMENTED
// Input-output parameters and their structure is depending on OEM sensor driver
#define IOCTL_SENSOR_OEM_BIST \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 300 + 1, METHOD_BUFFERED, FILE_ANY_ACCESS)
// Return next sample as raw data from sensor
#define IOCTL_SENSOR_OEM_CALIBRATION_QUERY \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 300 + 2, METHOD_BUFFERED, FILE_ANY_ACCESS)
// Re-read calibration data
#define IOCTL_SENSOR_OEM_CALIBRATION_READ_DPP \
    CTL_CODE(FILE_DEVICE_UNKNOWN, 300 + 3, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define OEM_CALIBRATION_MANUFACTURER_SIZE_MAX     (16)
#define OEM_CALIBRATION_MODEL_SIZE_MAX             (16)

// Common header for sensor raw data. 
typedef struct _SENSOR_OEM_RAW_DATA_HEADER
{
    // sizeof(SENSOR_OEM_RAW_DATA_HEADER) + the specific sensor's raw data
    ULONG         Size;

    // Manufacturer of the sensor device
    UCHAR Manufacturer[OEM_CALIBRATION_MANUFACTURER_SIZE_MAX];

    // Model of the sensor device
    UCHAR Model[OEM_CALIBRATION_MODEL_SIZE_MAX];
} SENSOR_OEM_RAW_DATA_HEADER;

typedef struct _SENSOR_OEM_RAW_DATA
{
    SENSOR_OEM_RAW_DATA_HEADER Header;

    // Placeholder for sensor specific data structure
    BYTE        value[1];
} SENSOR_OEM_RAW_DATA, *PSENSOR_OEM_RAW_DATA;

// Common header for sensor calibration data. 
typedef struct _SENSOR_OEM_CALIBRATION_DPP_HEADER
{
    // sizeof (SENSOR_OEM_CALIBRATION_DPP_HEADER) + the specific sensor's raw data
    ULONG         Size;

    // Manufacturer of the sensor device
    UCHAR Manufacturer[OEM_CALIBRATION_MANUFACTURER_SIZE_MAX];

    // Model of the sensor device
    UCHAR Model[OEM_CALIBRATION_MODEL_SIZE_MAX];
} SENSOR_OEM_CALIBRATION_DPP_HEADER, *PSENSOR_OEM_CALIBRATION_DPP_HEADER;

typedef struct _SENSOR_OEM_CALIBRATION_DPP_DATA
{
    SENSOR_OEM_CALIBRATION_DPP_HEADER Header;

    // Placeholder for sensor specific data structure
    BYTE        value[1];
} SENSOR_OEM_CALIBRATION_DPP_DATA, *PSENSOR_OEM_CALIBRATION_DPP_DATA;

#ifdef __cplusplus
}
#endif
