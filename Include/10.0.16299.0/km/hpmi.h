/*++

Copyright (C) Microsoft Corporation

Module Name:

    hpmi.h

Abstract:

    This file defines Hardware Power Management Interface contract.
    Configures following features:
      - Software Defined Battery (SDB)
      - Windows Battery Utilization Hints

--*/

#pragma once

//
// GUID definition are required to be outside of header inclusion pragma to
// avoid error during pre-compiled headers.
//

#include <initguid.h>

////////////////////////////////////////////////////////////////////////////////
//
// Constants.
//

//
// HPMI Device Interface Class.
//

// {DEDAE202-1D20-4C40-A6F3-1897E319D54F}
DEFINE_GUID(GUID_DEVINTERFACE_HPMI, 0xdedae202, 0x1d20, 0x4c40, 0xa6, 0xf3, 0x18, 0x97, 0xe3, 0x19, 0xd5, 0x4f);

////////////////////////////////////////////////////////////////////////////////
//
// Data types.
//

//
// Boolean type value.
//

typedef enum _HPMI_HINT_BOOL {
    // No data is available.
    HpmiBoolUnavailable = 0,

    // Condition is asserted to be false.
    HpmiBoolFalse,

    // Condition is asserted to be true.
    HpmiBoolTrue,

    // Value not used.
    HpmiBoolMax
} HPMI_HINT_BOOL, *PHPMI_HINT_BOOL;

////////////////////////////////////////////////////////////////////////////////
//
// IoControl definitions.
//

//
// Query command sent to HPMI to query features supported by HPMI and Windows
// services requested by HPMI.
//
// This IOCTL may be issued multiple times, HPMI must respond with same
// information in HPMI_QUERY_CAPABILITIES_RESPONSE, as a response to all
// subsequent IOCTL calls.
//

#define IOCTL_HPMI_QUERY_CAPABILITIES                       CTL_CODE(FILE_DEVICE_BATTERY, 0x200, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//
// Set command sent to HPMI to provide battery utilization hints.
//
// This IOCTL may be issued multiple times if HPMI requests
// HPMI_REQUEST_SERVICE_BATTERY_UTILIZATION_HINTS service.
//

#define IOCTL_HPMI_BATTERY_UTILIZATION_HINT             	CTL_CODE(FILE_DEVICE_BATTERY, 0x201, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

////////////////////////////////////////////////////////////////////////////////
//
// IoControl payload.
//

//
// IOCTL_HPMI_QUERY_CAPABILITIES - Command.
//

typedef struct _HPMI_QUERY_CAPABILITIES {

    //
    // Set to HPMI_QUERY_CAPABILITIES_VERSION_1.
    //

    ULONG Version;
} HPMI_QUERY_CAPABILITIES, *PHPMI_QUERY_CAPABILITIES;

#define HPMI_QUERY_CAPABILITIES_VERSION_1                   (1)
#define HPMI_QUERY_CAPABILITIES_SIZEOF_VERSION_1            sizeof(HPMI_QUERY_CAPABILITIES)

//
// IOCTL_HPMI_QUERY_CAPABILITIES - Response.
//

#define HPMI_REQUEST_SERVICE_NONE                           (0x00000000)    // No Windows services is requested.
#define HPMI_REQUEST_SERVICE_BATTERY_UTILIZATION_HINTS      (0x00000001)    // Battery utilization hints requested from Windows.

#define HPMI_CAPABILITY_NOT_SUPPORTED                       (0x00000000)    // HPMI supports no capabilities.
#define HPMI_CAPABILITY_SDB_OEM_SIMPLE_AGE_BALANCING        (0x00000001)    // OEM device specific age balancing SDB support

typedef struct _HPMI_QUERY_CAPABILITIES_RESPONSE {

    //
    // Set to HPMI_QUERY_CAPABILITIES_RESPONSE_VERSION_1.
    //

    ULONG Version;

    //
    // Requests one or more Windows services as defined by
    // HPMI_REQUEST_SERVICE_XXX.
    //

    ULONG RequestService;

    //
    // Specifies Software Defined Battery features supported by the system.
    //
    // This field is set to combination of one or more HPMI_CAPABILITY_SDB_XXX
    // values logically OR'd. Should be set to HPMI_CAPABILITY_NOT_SUPPORTED to
    // indicate that SDB is not support.
    //

    ULONG SdbCapabilities;
} HPMI_QUERY_CAPABILITIES_RESPONSE, *PHPMI_QUERY_CAPABILITIES_RESPONSE;

#define HPMI_QUERY_CAPABILITIES_RESPONSE_VERSION_1          (1)
#define HPMI_QUERY_CAPABILITIES_RESPONSE_SIZEOF_VERSION_1   sizeof(HPMI_QUERY_CAPABILITIES_RESPONSE)

//
// IOCTL_HPMI_BATTERY_UTILIZATION_HINT - Command.
//

typedef struct _HPMI_BATTERY_UTILIZATION_HINT {

    //
    // Set to HPMI_BATTERY_UTILIZATION_HINT_VERSION_1.
    //

    ULONG Version;

    //
    // This hint indicates if the OEM Battery Manager should attempt to save as
	// much charge as possible in the non-hot swappable batteries (i.e. the
	// batteries are generally referred to as "internal batteries", these
	// batteries cannot be removed while system is operational).
    //
    // Interpretation of values:
    //  - HpmiBoolUnavailable:
    //      Battery utilization hint is unavailable at the moment.
    //  - HpmiBoolFalse:
    //      It is not necessary to preserve charge in the internal batteries
	//      at the moment.
    //  - HpmiBoolTrue:
    //      Every attempt should be made to save as much charge as possible in
    //      the internal batteries.
    //

    HPMI_HINT_BOOL PreserveNonHotSwappableBatteries;
} HPMI_BATTERY_UTILIZATION_HINT, *PHPMI_BATTERY_UTILIZATION_HINT;

#define HPMI_BATTERY_UTILIZATION_HINT_VERSION_1              (1)
#define HPMI_BATTERY_UTILIZATION_HINT_SIZEOF_VERSION_1       sizeof(HPMI_BATTERY_UTILIZATION_HINT)

