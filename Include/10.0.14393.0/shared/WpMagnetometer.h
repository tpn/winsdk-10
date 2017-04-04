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
#pragma once

#include <wpSensors.h>

typedef struct 
{
    SENSOR_DATA_HEADER  Header;
    VEC3D               SampleRaw;          // Raw magnetometer sample
    VEC3D               SampleCalibrated;   // Calibrated magnetometer sample
    SHORT               ErrorMargin;        // Error margin of this sample
} MAG_DATA, *PMAG_DATA;

