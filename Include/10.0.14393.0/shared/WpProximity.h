//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
//
// proximity.h - Proximity sensor header file
//


#pragma once


#include <wpSensors.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum _PROXIMITY_DETECT_STATE
{
    INVALID_DETECTSTATE = -1,
    NOTDETECTED,
    DETECTED
} PROXIMITY_DETECT_STATE, *PPROXIMITY_DETECT_STATE;


//-----------------------------------------------------------------------------

typedef struct _PROXIMITY_DATA
{
    SENSOR_DATA_HEADER  Header;

    //
    // DETECTED if object detected, 
    // NOTDETECTED otherwise
    //
    PROXIMITY_DETECT_STATE  Sample;
} PROXIMITY_DATA, *PPROXIMITY_DATA; 

//-----------------------------------------------------------------------------

//-----------------------------------------------------------------------------

typedef struct _PROXIMITY_NOTIFICATION
{
    size_t  Size;

    //
    // for Proximity, must be SENSOR_NOTIFICATION_THRESHOLD_CROSSINGS
    //
    ULONG   NotificationType;
} PROXIMITY_NOTIFICATION, *PPROXIMITY_NOTIFICATION;

//-----------------------------------------------------------------------------


#ifdef __cplusplus
}
#endif
