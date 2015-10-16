/*++

Copyright (c) Microsoft Corporation

Module Name:

    WpOrientation.h

Abstract:

    Header file that defines structures and definitions required
    by consumers of Windows Phone Orientation.

--*/

#include <wpSensors.h>

#pragma once

//
// Device Orientations
//
typedef enum
{
    DEVICE_ORIENTATION_UNKNOWN          = 0x00,
    DEVICE_ORIENTATION_PORTRAIT_UP      = 0x01,
    DEVICE_ORIENTATION_LANDSCAPE_LEFT   = 0x02,
    DEVICE_ORIENTATION_PORTRAIT_DOWN    = 0x04,
    DEVICE_ORIENTATION_LANDSCAPE_RIGHT  = 0x08,
    DEVICE_ORIENTATION_FACE_UP          = 0x10,     
    DEVICE_ORIENTATION_FACE_DOWN        = 0x20
} DEVICE_ORIENTATION, *PDEVICE_ORIENTATION;

typedef struct _DEVICE_ORIENTATION_DATA
{ 
    SENSOR_DATA_HEADER Header;

    DEVICE_ORIENTATION  Sample;
} ORIENTATION_DATA, *PORIENTATION_DATA;

#define IS_VALID_ORIENTATION(Orientation) \
    (DEVICE_ORIENTATION_PORTRAIT_UP == (Orientation) ? TRUE : \
    DEVICE_ORIENTATION_PORTRAIT_DOWN == (Orientation) ? TRUE : \
    DEVICE_ORIENTATION_FACE_UP == (Orientation) ? TRUE : \
    DEVICE_ORIENTATION_FACE_DOWN == (Orientation) ? TRUE : \
    DEVICE_ORIENTATION_LANDSCAPE_RIGHT == (Orientation) ? TRUE : \
    DEVICE_ORIENTATION_LANDSCAPE_LEFT == (Orientation) ? TRUE : FALSE )

#define GET_ORIENTATION_NAME(Orientation) \
    (DEVICE_ORIENTATION_PORTRAIT_UP == (Orientation) ? L"PORTRAIT UP" : \
    DEVICE_ORIENTATION_PORTRAIT_DOWN == (Orientation) ? L"PORTRAIT DOWN" : \
    DEVICE_ORIENTATION_FACE_UP == (Orientation) ? L"FACE UP" : \
    DEVICE_ORIENTATION_FACE_DOWN == (Orientation) ? L"FACE DOWN" : \
    DEVICE_ORIENTATION_LANDSCAPE_RIGHT == (Orientation) ? L"LANDSCAPE LEFT" : \
    DEVICE_ORIENTATION_LANDSCAPE_LEFT == (Orientation) ? L"LANDSCAPE RIGHT" : L"UNKNOWN" )

typedef PVOID DEVICE_ORIENTATION_CONTEXT;

typedef
VOID
(*PDEVICE_ORIENTATION_CALLBACK) (
    _In_ PVOID CallbackContext, 
    _In_ DEVICE_ORIENTATION Orientation
    );

HRESULT DeviceOrientationInit(
    _In_ PDEVICE_ORIENTATION_CALLBACK CallBack,
    _In_ PVOID CallbackContext,
    _Out_ DEVICE_ORIENTATION_CONTEXT *OrientationContext);

HRESULT DeviceOrientationStart(
    _In_ DEVICE_ORIENTATION_CONTEXT OrientationContext);

HRESULT DeviceOrientationStop(
    _In_ DEVICE_ORIENTATION_CONTEXT OrientationContext);

HRESULT DeviceOrientationDeinit(
    _In_ DEVICE_ORIENTATION_CONTEXT OrientationContext);
    

