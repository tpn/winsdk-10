 
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//

//
// API Set Contract:
//
//    api-ms-win-gaming-deviceinformation-l1-1-*
//
// Abstract:
//
//    This header file provides API function signatures for querying gaming device information.
//

#ifdef MSC_VER
#pragma once
#endif

#ifndef _APISET_GAMINGDEVICEINFORMATION_
#define _APISET_GAMINGDEVICEINFORMATION_

#include <apiset.h>
#include <apisetcconv.h>
#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <windows.h>
#endif

/* APISET_NAME: api-ms-win-gaming-deviceinformation-l1 */
/* APISET_TAG: public */

// #if _APISET_TARGET_VERSION
// #ifdef _APISET_TARGET_VERSION
#if !defined(RC_INVOKED)

#ifndef _APISET_GAMING_DEVICEINFORMATION_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN10_RS3
#define _APISET_GAMING_DEVICEINFORMATION_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)
 // #ifndef _APISET_GAMING_DEVICEINFORMATION_VER


#if defined(__cplusplus)
extern "C" {
#endif

typedef enum GAMING_DEVICE_VENDOR_ID
{
    GAMING_DEVICE_VENDOR_ID_NONE      = 0,
    GAMING_DEVICE_VENDOR_ID_MICROSOFT = 0xC2EC5032
} GAMING_DEVICE_VENDOR_ID;

typedef enum GAMING_DEVICE_DEVICE_ID
{
    GAMING_DEVICE_DEVICE_ID_NONE              = 0,
    GAMING_DEVICE_DEVICE_ID_XBOX_ONE          = 0x768BAE26,
    GAMING_DEVICE_DEVICE_ID_XBOX_ONE_S        = 0x2A7361D9,
    GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X        = 0x5AD617C7,
    GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X_DEVKIT = 0x10F7CDE3
} GAMING_DEVICE_DEVICE_ID;

// Definitions to maintain backwards compat with previous SDKs.
#define GAMING_DEVICE_DEVICE_ID_XBOX_ONE_SCORPIO        GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X
#define GAMING_DEVICE_DEVICE_ID_XBOX_ONE_SCORPIO_DEVKIT GAMING_DEVICE_DEVICE_ID_XBOX_ONE_X_DEVKIT

typedef struct GAMING_DEVICE_MODEL_INFORMATION
{
    GAMING_DEVICE_VENDOR_ID vendorId;
    GAMING_DEVICE_DEVICE_ID deviceId;
} GAMING_DEVICE_MODEL_INFORMATION;

// Returns S_OK and GAMING_DEVICE_VENDOR_ID_NONE/GAMING_DEVICE_DEVICE_ID_NONE on non-Xbox SKUs.
STDAPI
GetGamingDeviceModelInformation(
    _Out_ GAMING_DEVICE_MODEL_INFORMATION * information
    );




#if defined(__cplusplus)
} // end extern "C"
#endif // defined(__cplusplus)

#endif // _APISET_GAMINGDEVICEINFORMATION_

