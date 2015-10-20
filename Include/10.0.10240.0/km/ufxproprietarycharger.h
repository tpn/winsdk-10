/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    ufxproprietarycharger.h

Abstract:

    This exposes driver interfaces for USB proprietary charging support.

Environment:

    Kernel mode

--*/

//
// Pragmas
//
#pragma once

//
// Includes
//
#include <poclass.h>
#include <charging.h>


//
// UFX structs for proprietary charging
//

typedef struct _UFX_PROPRIETARY_CHARGER {
    //
    // Charger Id
    //

    GUID ChargerId;

    //
    // Minimum required Dx state when connected
    //

    DEVICE_POWER_STATE DxState;
} UFX_PROPRIETARY_CHARGER, *PUFX_PROPRIETARY_CHARGER;


//
// UFX driver functions for proprietary charging
//

//
// Performs charger detection and returns the detected charger details
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UFX_PROPRIETARY_CHARGER_DETECT (
    __in PVOID Context,
    __out PUFX_PROPRIETARY_CHARGER DetectedCharger
    );

typedef UFX_PROPRIETARY_CHARGER_DETECT *PFN_UFX_PROPRIETARY_CHARGER_DETECT;

//
// Sets a configurable property on the charger
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
UFX_PROPRIETARY_CHARGER_SET_PROPERTY (
    __in PVOID Context,
    __in PCONFIGURABLE_CHARGER_PROPERTY_HEADER Property
    );

typedef UFX_PROPRIETARY_CHARGER_SET_PROPERTY *PFN_UFX_PROPRIETARY_CHARGER_SET_PROPERTY;

//
// Aborts any pending proprietary charger operation
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
UFX_PROPRIETARY_CHARGER_ABORT_OPERATION (
    __in PVOID Context
    );

typedef UFX_PROPRIETARY_CHARGER_ABORT_OPERATION *PFN_UFX_PROPRIETARY_CHARGER_ABORT_OPERATION;

//
// Resets all proprietary charger state
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
UFX_PROPRIETARY_CHARGER_RESET_OPERATION (
    __in PVOID Context
    );

typedef UFX_PROPRIETARY_CHARGER_RESET_OPERATION *PFN_UFX_PROPRIETARY_CHARGER_RESET_OPERATION;


//
// Device Interfaces
//

//
// Interface to perform proprietary charging source detection and signaling
//
// {D3D11A34-ABA6-40D6-B81E-99D0F6662DF2}
DEFINE_GUID(GUID_UFX_INTERFACE_PROPRIETARY_CHARGER, 
0xd3d11a34, 0xaba6, 0x40d6, 0xb8, 0x1e, 0x99, 0xd0, 0xf6, 0x66, 0x2d, 0xf2);


typedef struct _UFX_INTERFACE_PROPRIETARY_CHARGER {
    INTERFACE                                   InterfaceHeader;

    //
    // Version 1
    //
    PFN_UFX_PROPRIETARY_CHARGER_DETECT          ProprietaryChargerDetect;
    PFN_UFX_PROPRIETARY_CHARGER_SET_PROPERTY    ProprietaryChargerSetProperty;
    PFN_UFX_PROPRIETARY_CHARGER_ABORT_OPERATION ProprietaryChargerAbortOperation;
    PFN_UFX_PROPRIETARY_CHARGER_RESET_OPERATION ProprietaryChargerResetOperation;

} UFX_INTERFACE_PROPRIETARY_CHARGER, *PUFX_INTERFACE_PROPRIETARY_CHARGER;

