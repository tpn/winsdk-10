/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    usbfnattach.h

Abstract:

    This header file exposes the driver interface for USB port/charger detection and attach/detatch detection

--*/

//
// Pragmas
//
#pragma once

//
// USBFN structs for charger and attach/detach detection
//

//
// Interface for Battery Charging 1.2 source detection/signaling
// and attach/detach detection
//
// {3934502d-E301-4542-BDBE-B9A359DC3ABB}
DEFINE_GUID(GUID_USBFN_INTERFACE_ATTACH, 
0x3934502d, 0xe301, 0x4542, 0xbd, 0xbe, 0xb9, 0xa3, 0x59, 0xdc, 0x3a, 0xbb);

//
// Attach actions
//
typedef enum _USBFN_ATTACH_ACTION {
    UsbfnPortDetected = 0,
    UsbfnPortDetectedNoCad,
    UsbfnProceedWithAttach,
    UsbfnIgnoreAttach,
    UsbfnDetectProprietaryCharger,
} USBFN_ATTACH_ACTION, *PUSBFN_ATTACH_ACTION;

//
// Detected port type and attach action
//
typedef struct _USBFN_ON_ATTACH {
    USBFN_PORT_TYPE PortType;
    USBFN_ATTACH_ACTION AttachAction;
} USBFN_ON_ATTACH, *PUSBFN_ON_ATTACH; 
    
//
// Returns BC 1.2 port type and attach action
//
typedef
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
USBFN_GET_ATTACH_ACTION (
    __in PVOID Context,
    __out PUSBFN_ON_ATTACH OnAttach
    );

typedef USBFN_GET_ATTACH_ACTION *PFN_USBFN_GET_ATTACH_ACTION;

//
// Aborts any pending Get Attach Action request
//
typedef
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
USBFN_GET_ATTACH_ACTION_ABORT (
    __in PVOID Context
    );

typedef USBFN_GET_ATTACH_ACTION_ABORT *PFN_USBFN_GET_ATTACH_ACTION_ABORT;

//
// Notification of device state change
//
typedef
NTSTATUS
_IRQL_requires_max_(PASSIVE_LEVEL)
USBFN_SET_DEVICE_STATE (
    _In_ PVOID Context,
    _In_ USBFN_DEVICE_STATE DeviceState,
    _In_ USBFN_BUS_SPEED BusSpeed
    );

typedef USBFN_SET_DEVICE_STATE *PFN_USBFN_SET_DEVICE_STATE;


typedef struct _USBFN_INTERFACE_ATTACH {
    INTERFACE                            InterfaceHeader;

    //
    // Version 1
    //
    PFN_USBFN_GET_ATTACH_ACTION         GetAttachAction;
    PFN_USBFN_GET_ATTACH_ACTION_ABORT   GetAttachActionAbortOperation;
    PFN_USBFN_SET_DEVICE_STATE          SetDeviceState;
} USBFN_INTERFACE_ATTACH, *PUSBFN_INTERFACE_ATTACH;
