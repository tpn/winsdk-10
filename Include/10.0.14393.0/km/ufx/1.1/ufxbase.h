/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ufxbase.h

Abstract:

    Defines shared UFX types

Environment:

    Kernel mode

--*/

#pragma once

#include <ntddk.h>
#include <wdf.h>
#include <usbfnbase.h>

//
// Treat UFX objects as HANDLE types
//
DECLARE_HANDLE(UFXDEVICE);
DECLARE_HANDLE(UFXENDPOINT);

//
// Opaque init structures associated with UFX objects
//
typedef struct _UFXENDPOINT_INIT *PUFXENDPOINT_INIT;

//
// UFXDEVICE Export Method Indexes
//
typedef enum _UFX_CLASS_FUNCTIONS {
    UfxFdoInitIndex = 0,
    UfxDeviceCreateIndex,
    UfxDeviceEventCompleteIndex,
    UfxDeviceNotifyHardwareReadyIndex,
    UfxDeviceNotifyAttachIndex,
    UfxDeviceNotifyDetachIndex,
    UfxDeviceNotifySuspendIndex,
    UfxDeviceNotifyResumeIndex,
    UfxDeviceNotifyResetIndex,
    UfxDevicePortDetectCompleteIndex,
    UfxDeviceProprietaryChargerDetectCompleteIndex,
    UfxDeviceNotifyHardwareFailureIndex,
    UfxDeviceIoControlIndex,
    UfxDeviceIoInternalControlIndex,
    UfxEndpointCreateIndex,
    UfxEndpointInitSetEventCallbacksIndex,
    UfxEndpointNotifySetupIndex,
    UfxEndpointGetTransferQueueIndex,
    UfxEndpointGetCommandQueueIndex,
    UfxDevicePortDetectCompleteExIndex,
    UfxFunctionsMax
} UFX_CLASS_FUNCTIONS;

typedef void (*PFN_UFX_CLASS)(void);
extern PFN_UFX_CLASS UfxClassFunctions[UfxFunctionsMax];

//
// ClassBindInfo (client wdf driver globals)
//
typedef struct _UFX_GLOBALS {
    // Size in bytes of this structure
    ULONG Size;
    PWDF_DRIVER_GLOBALS WdfDriverGlobals;
} UFX_GLOBALS, *PUFX_GLOBALS;

typedef struct _UFX_DEVICE_CAPABILITIES {
    ULONG Size;
    USB_DEVICE_SPEED MaxSpeed;
    //
    // If Remote Wakeup is supported:
    // Time interval (in milliseconds) UFX needs to wait after the bus 
    // is suspended and before signaling remote wakeup 
    //
    ULONG RemoteWakeSignalDelay;
    BOOLEAN PdcpSupported;
    
    USHORT InEndpointBitmap;
    USHORT OutEndpointBitmap;
} UFX_DEVICE_CAPABILITIES, *PUFX_DEVICE_CAPABILITIES;

//
// Provided by the client on calling UfxDeviceNotifyHardwareFailure.
// The client should duplicate this structure, and replace 'Data'
// with whatever values they desire to be captured in a report.
// The 'Size' field is the total size of the returned structure,
// and the 'ExceptionCode' should uniquely identify this failure.
// 
// UFX will return this structure to the client when calling
// EvtDeviceControllerReset
//
typedef struct _UFX_HARDWARE_FAILURE_CONTEXT {
    ULONG Size;
    ULONG ExceptionCode;
    UCHAR Data[1];
} UFX_HARDWARE_FAILURE_CONTEXT, *PUFX_HARDWARE_FAILURE_CONTEXT;

typedef enum _USBFN_ACTION {
    UsbfnActionNone = 0,
    UsbfnActionNoCad,
    UsbfnActionDetectProprietaryCharger
} USBFN_ACTION, *PUSBFN_ACTION;

extern PUFX_GLOBALS UfxGlobals;

//
// Internal IOCTLs between UFX and client
//
#define IOCTL_INTERNAL_USBFN_DESCRIPTOR_UPDATE             CTL_CODE(FILE_DEVICE_BUS_EXTENDER,  \
                                                                    0x100,                     \
                                                                    METHOD_IN_DIRECT,          \
                                                                    FILE_READ_DATA |           \
                                                                    FILE_WRITE_DATA)