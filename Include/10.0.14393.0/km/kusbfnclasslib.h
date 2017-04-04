/*++

Copyright (C) Microsoft Corporation. All rights reserved.

Module Name:

    kusbfnclasslib.h

Abstract:

    Defines the interfaces and data structures for the USB Function kernel-mode
    class driver library.

Environment:

    Kernel mode

--*/

#pragma once

//
// Defines
//

#include <kusbfn.h>

#define USBFNKMCLASSLIB_TAG 'mkfU'
#define USBFNKMCLASSLIB_SYNCHRONOUS_IOCTL_TIMEOUT_100NS (20000)
#define USBFNKMCLASSLIB_DEFAULT_CLASS_IDLETIMEOUT (2000)

//
// Type definitions.
//

typedef 
VOID
(USBFNKMCLASSLIB_USB_NOTIFICATION_CALLBACK) (
    __in WDFDEVICE Device,
    __in USBFN_NOTIFICATION Notification,
    __in NTSTATUS Status   
);

typedef USBFNKMCLASSLIB_USB_NOTIFICATION_CALLBACK *PUSBFNKMCLASSLIB_USB_NOTIFICATION_CALLBACK; 

typedef struct _USBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS {
    ULONG Size;
    BOOLEAN LibraryPowerManaged;
    ULONG PowerIdleTimeout;
} USBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS, *PUSBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS;

typedef PVOID KUSBFNCLASSLIBHANDLE;

typedef struct USBFNKMCLASSLIB_COMPLETIONROUTINE {
    PFN_WDF_REQUEST_COMPLETION_ROUTINE pCompletionRoutine;
} USBFNKMCLASSLIB_COMPLETIONROUTINE, *PUSBFNKMCLASSLIB_COMPLETIONROUTINE;

WDF_DECLARE_CONTEXT_TYPE_WITH_NAME(USBFNKMCLASSLIB_COMPLETIONROUTINE, 
                                   UsbFnKmGetRequestData);

//
// Structures for library use.
//

typedef struct _KUSBFNCLASSLIB_PIPE_MEMORY {
    WDFMEMORY PipeMemory;
    USBFNPIPEID PipeId;
} KUSBFNCLASSLIB_PIPE_MEMORY, *PKUSBFNCLASSLIB_PIPE_MEMORY;

//
// Inline functions
//

VOID
FORCEINLINE
USBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS_INIT(
    __out PUSBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS pParameters
)
{
    RtlZeroMemory(pParameters, sizeof(USBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS));
    pParameters->Size = sizeof(USBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS);
    pParameters->LibraryPowerManaged = TRUE;
    pParameters->PowerIdleTimeout = USBFNKMCLASSLIB_DEFAULT_CLASS_IDLETIMEOUT;
}

//
// Function declarations.
//

__drv_maxIRQL(PASSIVE_LEVEL)
NTSTATUS
UsbFnKmClassLibRegisterClassDevice(
    __in WDFDEVICE Device,
    __out KUSBFNCLASSLIBHANDLE* pClassHandle
);
VOID
UsbFnKmClassLibUnregisterClassDevice(
    __in KUSBFNCLASSLIBHANDLE ClassHandle
);

NTSTATUS
UsbFnKmClassLibPowerManagementInit(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in PUSBFNKMCLASSLIB_POWER_MANAGEMENT_PARAMETERS pPowerManagementParameters
);

NTSTATUS
UsbFnKmClassLibGetClassInformation(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __inout PUSBFN_CLASS_INFORMATION_PACKET pClassInformation
);

NTSTATUS
UsbFnKmClassLibGetClassInformationEx(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __inout PUSBFN_CLASS_INFORMATION_PACKET_EX pClassInformation
);

NTSTATUS
UsbFnKmClassLibRegisterString(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in PUSBFN_USB_STRING UsbString
);

NTSTATUS
UsbFnKmClassLibGetInterfaceInfoSize(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in UCHAR InterfaceIndex,
    __in USBFN_BUS_SPEED Speed,
    __inout PUSHORT Size
);

NTSTATUS
UsbFnKmClassLibGetInterfaceInfo(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in UCHAR InterfaceIndex,
    __in USBFN_BUS_SPEED Speed,
    __out_bcount(Size) PUSBFN_INTERFACE_INFO UsbfnInterfaceInfo,
    __in USHORT Size
);

NTSTATUS
UsbFnKmClassLibCreateNotificationRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __in WDFMEMORY NotificationBuffer,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCreateControlStatusHandshakeRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in OPTIONAL PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCreateTransferInRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in USBFNPIPEID PipeId,
    __in WDFMEMORY DataMemory,
    __in PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCreateTransferInAppendZlpRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in USBFNPIPEID PipeId,
    __in WDFMEMORY DataMemory,
    __in PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCreateTransferOutRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in USBFNPIPEID PipeId,
    __in WDFMEMORY DataMemory,
    __in PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCompletedTransferRequestGetLength(
    __in WDFREQUEST Request,
    __out PULONG pTransferLength
);

NTSTATUS
UsbFnKmClassLibCompletedTransferParamsGetPipeId(
    __in PWDF_REQUEST_COMPLETION_PARAMS pParams,
    __out PUSBFNPIPEID pPipeId
);

NTSTATUS
UsbFnKmClassLibCompletedTransferParamsGetData(
    __in PWDF_REQUEST_COMPLETION_PARAMS pParams,
    __out WDFMEMORY* pDataMemory
);

NTSTATUS
UsbFnKmClassLibCreatePipeStateSetRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in USBFNPIPEID PipeId,
    __in BOOLEAN IsStalled,
    __in OPTIONAL PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibCreatePipeStateGetRequest(
    __in KUSBFNCLASSLIBHANDLE ClassHandle,
    __in USBFNPIPEID PipeId,
    __in BOOLEAN* pIsStalled,
    __in OPTIONAL PFN_WDF_REQUEST_COMPLETION_ROUTINE CompletionRoutine,
    __out WDFREQUEST* pRequest
);

NTSTATUS
UsbFnKmClassLibActivateBus(
    __in KUSBFNCLASSLIBHANDLE ClassHandle
);

NTSTATUS
UsbFnKmClassLibDeactivateBus(
    __in KUSBFNCLASSLIBHANDLE ClassHandle
);
