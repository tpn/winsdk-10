/*++

Copyright (c) Microsoft Corporation

Module Name:

    wpgyro.h

Abstract:

    Header file that defines structures, prototypes and definitions required
    by consumers of Windows Phone gyro sensor.

--*/

#pragma once

#include <wpsensors.h>

#ifdef __cplusplus
extern "C" {
#endif


#define DEFAULT_MIN_GYRO_RANGE      (-2000)     //-2000 degrees per second
#define DEFAULT_MAX_GYRO_RANGE      (+2000)     //+2000 degrees per second

//-----------------------------------------------------------------------------

typedef struct _GYRO_DATA
{
    SENSOR_DATA_HEADER  Header;
    VEC3D               Sample;  // Raw 3D gyro data
} GYRO_DATA, *PGYRO_DATA; 

#ifdef __cplusplus
}
#endif


