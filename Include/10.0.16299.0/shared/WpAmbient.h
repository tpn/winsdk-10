/*++

Copyright (c) Microsoft Corporation

Module Name:

    WpAmbient.h

Abstract:

    Windows Phone Ambient Light sensor header file

--*/


#pragma once


#include <wpSensors.h>

#ifdef __cplusplus
extern "C" {
#endif


//-----------------------------------------------------------------------------
#define ALS_MAX_VALUE   ((ULONG) 0xFFFFFFFF)

typedef struct _ALS_DATA
{
    SENSOR_DATA_HEADER Header;

    //
    // Readings in milli Lux
    //
    ULONG Sample;
} ALS_DATA, *PALS_DATA;


//-----------------------------------------------------------------------------
#define ALS_SENSOR_CAPS_NOTIFICATION_ABOVE         SENSOR_CAPS_NOTIFICATION_ABOVE  
#define ALS_SENSOR_CAPS_NOTIFICATION_BELOW         SENSOR_CAPS_NOTIFICATION_BELOW  
#define ALS_SENSOR_CAPS_NOTIFICATION_INRANGE       SENSOR_CAPS_NOTIFICATION_INRANGE  
#define ALS_SENSOR_CAPS_NOTIFICATION_OUTOFRANGE    SENSOR_CAPS_NOTIFICATION_OUTOFRANGE  

#define ALS_SENSOR_NOTIFICATION_THRESHOLD_NONE     0
#define ALS_SENSOR_NOTIFICATION_THRESHOLD_ABOVE    SENSOR_NOTIFICATION_THRESHOLD_ABOVE
#define ALS_SENSOR_NOTIFICATION_THRESHOLD_BELOW    SENSOR_NOTIFICATION_THRESHOLD_BELOW
#define ALS_SENSOR_NOTIFICATION_THRESHOLD_IN       SENSOR_NOTIFICATION_THRESHOLD_IN
#define ALS_SENSOR_NOTIFICATION_THRESHOLD_OUT      SENSOR_NOTIFICATION_THRESHOLD_OUT

#define ALS_MAX_RANGE 0xFFFFFFFF
#define ALS_MIN_RANGE 0x01

//-----------------------------------------------------------------------------


//-----------------------------------------------------------------------------

typedef struct _ALS_NOTIFICATION
{
    size_t  Size;

    //
    // for ALS, must be one of ALS_SENSOR_NOTIFICATION_THRESHOLD_xyz types
    //
    ULONG   NotificationType;

    //
    // min value to configure if using 
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_BELOW or 
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_IN or
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_OUT flags - ignored otherwise 
    //
    ULONG  SampleMin;

    //
    // max value to configure if using 
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_ABOVE or 
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_IN or
    //  ALS_SENSOR_NOTIFICATION_THRESHOLD_OUT flags - ignored otherwise 
    //
    ULONG   SampleMax;
} ALS_NOTIFICATION, *PALS_NOTIFICATION;

//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif



