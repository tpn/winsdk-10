/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ufxclass.h

Abstract:

    This header defines all interfaces and macros that USB Function client
    drivers will require to implement client driver functionality.

Environment:

    kernel mode

--*/
#pragma once

#include <ufxbase.h>
#include <ufxproprietarycharger.h>
#include <usbfnioctl.h>
#include <usbfnattach.h>

//
// UFXDEVICE Callback: EvtDeviceHostConnect
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_HOST_CONNECT)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_HOST_CONNECT (
    __in UFXDEVICE
    );

typedef EVT_UFX_DEVICE_HOST_CONNECT *PFN_UFX_DEVICE_HOST_CONNECT;

//
// UFXDEVICE Callback: EvtDeviceHostDisconnect
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_HOST_DISCONNECT)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_HOST_DISCONNECT (
    __in UFXDEVICE
    );
    
typedef EVT_UFX_DEVICE_HOST_DISCONNECT *PFN_UFX_DEVICE_HOST_DISCONNECT;

//
// UFXDEVICE Callback: EvtDeviceAddressed
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_ADDRESSED)
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_ADDRESSED (
    __in UFXDEVICE,
    __in USHORT
    );
    
typedef EVT_UFX_DEVICE_ADDRESSED *PFN_UFX_DEVICE_ADDRESSED;

//
// UFXDEVICE Callback: EvtDeviceEndpointAdd
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_ENDPOINT_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UFX_DEVICE_ENDPOINT_ADD (
    __in UFXDEVICE,
    __in const PUSB_ENDPOINT_DESCRIPTOR,
    __inout PUFXENDPOINT_INIT
    );
    
typedef EVT_UFX_DEVICE_ENDPOINT_ADD *PFN_UFX_DEVICE_ENDPOINT_ADD;

//
// UFXDEVICE Callback: EvtDeviceDefaultEndpointAdd
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_DEFAULT_ENDPOINT_ADD)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_DEFAULT_ENDPOINT_ADD (
    __in UFXDEVICE,
    __in USHORT,
    __inout PUFXENDPOINT_INIT
    );
    
typedef EVT_UFX_DEVICE_DEFAULT_ENDPOINT_ADD *PFN_UFX_DEVICE_DEFAULT_ENDPOINT_ADD;

//
// UFXDEVICE Callback: EvtDeviceUsbStateChange
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_USB_STATE_CHANGE)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_USB_STATE_CHANGE (
    __in UFXDEVICE,
    __in USBFN_DEVICE_STATE
    );

typedef EVT_UFX_DEVICE_USB_STATE_CHANGE *PFN_UFX_DEVICE_USB_STATE_CHANGE;

//
// UFXDEVICE Callback: EvtDevicePortChange
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_PORT_CHANGE)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_PORT_CHANGE (
    __in UFXDEVICE,
    __in USBFN_PORT_TYPE
    );

typedef EVT_UFX_DEVICE_PORT_CHANGE *PFN_UFX_DEVICE_PORT_CHANGE;

//
// UFXDEVICE Callback: EvtDevicePortDetect
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_PORT_DETECT)
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_PORT_DETECT (
    __in UFXDEVICE
    );

typedef EVT_UFX_DEVICE_PORT_DETECT *PFN_UFX_DEVICE_PORT_DETECT;

//
// UFXDEVICE Callback: EvtDeviceRemoteWakeupSignal
//

typedef
_Function_class_(EVT_UFX_DEVICE_REMOTE_WAKEUP_SIGNAL)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_REMOTE_WAKEUP_SIGNAL (
    _In_ UFXDEVICE
    );

typedef EVT_UFX_DEVICE_REMOTE_WAKEUP_SIGNAL *PFN_UFX_DEVICE_REMOTE_WAKEUP_SIGNAL;




//
// UFXDEVICE Callback: EvtDeviceControllerReset
//

typedef
_Function_class_(EVT_UFX_DEVICE_CONTROLLER_RESET)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_CONTROLLER_RESET (
    _In_ UFXDEVICE,
    _In_opt_ PUFX_HARDWARE_FAILURE_CONTEXT
    );
    
typedef EVT_UFX_DEVICE_CONTROLLER_RESET *PFN_UFX_DEVICE_CONTROLLER_RESET;

//
// UFXDEVICE Callback: EvtDeviceTestModeSet
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_TEST_MODE_SET)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_TEST_MODE_SET (
    __in UFXDEVICE,
    __in ULONG
    );
    
typedef EVT_UFX_DEVICE_TEST_MODE_SET *PFN_UFX_DEVICE_TEST_MODE_SET;

//
// UFXDEVICE Callback: EvtDeviceTestHook
//

typedef
__drv_functionClass(EVT_UFX_DEVICE_TESTHOOK)
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
EVT_UFX_DEVICE_TESTHOOK (
    __in UFXDEVICE,
    __in PVOID,
    __in size_t,
    __out PVOID,
    __in size_t
    );

typedef EVT_UFX_DEVICE_TESTHOOK *PFN_UFX_DEVICE_TESTHOOK;

//
// UFXDEVICE Callback: EvtDeviceSuperSpeedPowerFeature
//

typedef
_Function_class_(EVT_UFX_DEVICE_SUPER_SPEED_POWER_FEATURE)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_SUPER_SPEED_POWER_FEATURE (
    _In_ UFXDEVICE,
    _In_ USHORT,
    _In_ BOOLEAN
    );

typedef EVT_UFX_DEVICE_SUPER_SPEED_POWER_FEATURE *PFN_UFX_DEVICE_SUPER_SPEED_POWER_FEATURE;

//
// UFXDEVICE Callback: EvtDeviceProprietaryChargerDetect
//

typedef
_Function_class_(EVT_UFX_DEVICE_DETECT_PROPRIETARY_CHARGER)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT (
    _In_ UFXDEVICE
    );

typedef EVT_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT *PFN_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT;

//
// UFXDEVICE Callback: EvtDeviceProprietaryChargerSetProperty
//

typedef
_Function_class_(EVT_UFX_DEVICE_PROPRIETARY_CHARGER_SET_PROPERTY)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_UFX_DEVICE_PROPRIETARY_CHARGER_SET_PROPERTY (
    _In_ UFXDEVICE,
    _In_ WDFREQUEST
    );

typedef EVT_UFX_DEVICE_PROPRIETARY_CHARGER_SET_PROPERTY *PFN_UFX_DEVICE_PROPRIETARY_CHARGER_SET_PROPERTY;

//
// UFXDEVICE Callback: EvtDeviceProprietaryChargerReset
//

typedef
_Function_class_(EVT_UFX_DEVICE_PROPRIETARY_CHARGER_RESET)
_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
EVT_UFX_DEVICE_PROPRIETARY_CHARGER_RESET (
    _In_ UFXDEVICE
    );

typedef EVT_UFX_DEVICE_PROPRIETARY_CHARGER_RESET *PFN_UFX_DEVICE_PROPRIETARY_CHARGER_RESET;

//
// UFXDEVICE callbacks registration structure
//

typedef struct _UFX_DEVICE_CALLBACKS {
    ULONG Size;
    PFN_UFX_DEVICE_HOST_CONNECT EvtDeviceHostConnect;
    PFN_UFX_DEVICE_HOST_DISCONNECT EvtDeviceHostDisconnect;
    PFN_UFX_DEVICE_ADDRESSED EvtDeviceAddressed;
    PFN_UFX_DEVICE_ENDPOINT_ADD EvtDeviceEndpointAdd;    
    PFN_UFX_DEVICE_DEFAULT_ENDPOINT_ADD EvtDeviceDefaultEndpointAdd;  
    PFN_UFX_DEVICE_USB_STATE_CHANGE EvtDeviceUsbStateChange;      
    PFN_UFX_DEVICE_PORT_CHANGE EvtDevicePortChange;
    PFN_UFX_DEVICE_PORT_DETECT EvtDevicePortDetect;
    PFN_UFX_DEVICE_REMOTE_WAKEUP_SIGNAL EvtDeviceRemoteWakeupSignal;
    PFN_UFX_DEVICE_CONTROLLER_RESET EvtDeviceControllerReset;
    PFN_UFX_DEVICE_TEST_MODE_SET EvtDeviceTestModeSet;
    PFN_UFX_DEVICE_TESTHOOK EvtDeviceTestHook;
    PFN_UFX_DEVICE_SUPER_SPEED_POWER_FEATURE EvtDeviceSuperSpeedPowerFeature;
    PFN_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT EvtDeviceProprietaryChargerDetect;
    PFN_UFX_DEVICE_PROPRIETARY_CHARGER_SET_PROPERTY EvtDeviceProprietaryChargerSetProperty;
    PFN_UFX_DEVICE_PROPRIETARY_CHARGER_RESET EvtDeviceProprietaryChargerReset;
} UFX_DEVICE_CALLBACKS, *PUFX_DEVICE_CALLBACKS;



//
// UFXDEVICE Function: UFX_DEVICE_CALLBACKS_INIT
//
VOID
FORCEINLINE
UFX_DEVICE_CALLBACKS_INIT (
    __out PUFX_DEVICE_CALLBACKS Callbacks
    )    
{
    RtlZeroMemory(Callbacks, sizeof(UFX_DEVICE_CALLBACKS));
    Callbacks->Size = sizeof(UFX_DEVICE_CALLBACKS);
}

//
// UFXDEVICE Function: UFX_DEVICE_CAPABILITIES_INIT
//
VOID
FORCEINLINE
UFX_DEVICE_CAPABILITIES_INIT (
    __out PUFX_DEVICE_CAPABILITIES Capabilities
    )
{
    RtlZeroMemory(Capabilities, sizeof(UFX_DEVICE_CAPABILITIES));
    Capabilities->Size = sizeof(UFX_DEVICE_CAPABILITIES);
    Capabilities->InEndpointBitmap = 0xFFFF;
    Capabilities->OutEndpointBitmap = 0xFFFF;
}

//
// UFXDEVICE Function: UfxFdoInit
//

typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
UFX_FDO_INIT (
    __in PUFX_GLOBALS,
    __in WDFDRIVER,
    __inout PWDFDEVICE_INIT,
    __inout PWDF_OBJECT_ATTRIBUTES        
    );

typedef UFX_FDO_INIT *PFN_UFX_FDO_INIT;

_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UfxFdoInit (
    __in WDFDRIVER WdfDriver,
    __inout PWDFDEVICE_INIT DeviceInit,
    __inout PWDF_OBJECT_ATTRIBUTES FdoAttributes
    )
{
    return((PFN_UFX_FDO_INIT)
           UfxClassFunctions[UfxFdoInitIndex])(UfxGlobals, 
                                               WdfDriver,
                                               DeviceInit,
                                               FdoAttributes);
}

//
// UFXDEVICE Function: UfxDeviceCreate
//

typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
UFX_DEVICE_CREATE (
    __in PUFX_GLOBALS,
    __in WDFDEVICE,
    __in PUFX_DEVICE_CALLBACKS,
    __in PUFX_DEVICE_CAPABILITIES,
    __in_opt PWDF_OBJECT_ATTRIBUTES,
    __out UFXDEVICE*
    );
    
typedef UFX_DEVICE_CREATE *PFN_UFX_DEVICE_CREATE;

_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UfxDeviceCreate (
    __in WDFDEVICE WdfDevice,
    __in PUFX_DEVICE_CALLBACKS Callbacks,
    __in PUFX_DEVICE_CAPABILITIES Capabilities,
    __in_opt PWDF_OBJECT_ATTRIBUTES Attributes,
    __out UFXDEVICE* UfxDevice
    )
{
    return ((PFN_UFX_DEVICE_CREATE)
            UfxClassFunctions[UfxDeviceCreateIndex])(UfxGlobals, 
                                                     WdfDevice, 
                                                     Callbacks, 
                                                     Capabilities,
                                                     Attributes, 
                                                     UfxDevice);
}

//
// UFXDEVICE Function: UfxDeviceEventComplete
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_EVENT_COMPLETE (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in NTSTATUS
    );

typedef UFX_DEVICE_EVENT_COMPLETE *PFN_UFX_DEVICE_EVENT_COMPLETE;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceEventComplete (
    __in UFXDEVICE UfxDevice,
    __in NTSTATUS Status
    )
{
    ((PFN_UFX_DEVICE_EVENT_COMPLETE)
     UfxClassFunctions[UfxDeviceEventCompleteIndex])(UfxGlobals, 
                                                     UfxDevice,
                                                     Status);
}

//
// UFXDEVICE Function: UfxDeviceNotifyHardwareReady
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_HARDWARE_READY (
    __in PUFX_GLOBALS,
    __in UFXDEVICE
    );

typedef UFX_DEVICE_NOTIFY_HARDWARE_READY *PFN_UFX_DEVICE_NOTIFY_HARDWARE_READY;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyHardwareReady (
    __in UFXDEVICE UfxDevice
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_HARDWARE_READY)
     UfxClassFunctions[UfxDeviceNotifyHardwareReadyIndex])(UfxGlobals, 
                                                           UfxDevice);
}

//
// UFXDEVICE Function: UfxDeviceNotifyAttach
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_ATTACH (
    __in PUFX_GLOBALS,
    __in UFXDEVICE
    );

typedef UFX_DEVICE_NOTIFY_ATTACH *PFN_UFX_DEVICE_NOTIFY_ATTACH;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyAttach (
    __in UFXDEVICE UfxDevice
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_ATTACH)
     UfxClassFunctions[UfxDeviceNotifyAttachIndex])(UfxGlobals, 
                                                    UfxDevice);
}

//
// UFXDEVICE Functioin: UfxDeviceNotifyDetach
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_DETACH (
    __in PUFX_GLOBALS,
    __in UFXDEVICE
    );
    
typedef UFX_DEVICE_NOTIFY_DETACH *PFN_UFX_DEVICE_NOTIFY_DETACH;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyDetach (
    __in UFXDEVICE UfxDevice
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_DETACH)
     UfxClassFunctions[UfxDeviceNotifyDetachIndex])(UfxGlobals, 
                                                    UfxDevice);
}

//
// UFXDEVICE Function: UfxDeviceNotifySuspend
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_SUSPEND (
    __in PUFX_GLOBALS,
    __in UFXDEVICE
    );

typedef UFX_DEVICE_NOTIFY_SUSPEND *PFN_UFX_DEVICE_NOTIFY_SUSPEND;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifySuspend (
    __in UFXDEVICE UfxDevice
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_SUSPEND)
     UfxClassFunctions[UfxDeviceNotifySuspendIndex])(UfxGlobals, 
                                                     UfxDevice);
}

// 
// UFXDEVICE Function: UfxDeviceNotifyResume
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_RESUME (
    __in PUFX_GLOBALS,
    __in UFXDEVICE
    );
    
typedef UFX_DEVICE_NOTIFY_RESUME *PFN_UFX_DEVICE_NOTIFY_RESUME;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyResume (
    __in UFXDEVICE UfxDevice
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_RESUME)
     UfxClassFunctions[UfxDeviceNotifyResumeIndex])(UfxGlobals, 
                                                    UfxDevice);
}

//
// UFXDEVICE Function: UfxDeviceNotifyReset
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_RESET (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in USB_DEVICE_SPEED
    );

typedef UFX_DEVICE_NOTIFY_RESET *PFN_UFX_DEVICE_NOTIFY_RESET;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyReset (
    __in UFXDEVICE UfxDevice,
    __in USB_DEVICE_SPEED DeviceSpeed
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_RESET)
     UfxClassFunctions[UfxDeviceNotifyResetIndex])(UfxGlobals, 
                                                   UfxDevice, 
                                                   DeviceSpeed);
}

//
// UFXDEVICE Function: UfxDevicePortDetectComplete
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_PORT_DETECT_COMPLETE (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in USBFN_PORT_TYPE
    );
    
typedef UFX_DEVICE_PORT_DETECT_COMPLETE *PFN_UFX_DEVICE_PORT_DETECT_COMPLETE;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDevicePortDetectComplete (
    __in UFXDEVICE UfxDevice,
    __in USBFN_PORT_TYPE PortType
    )
{
    ((PFN_UFX_DEVICE_PORT_DETECT_COMPLETE)
     UfxClassFunctions[UfxDevicePortDetectCompleteIndex])(UfxGlobals, 
                                                          UfxDevice, 
                                                          PortType);
}

//
// UFXDEVICE Function: UfxDevicePortDetectComplete
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_PORT_DETECT_COMPLETE_EX (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in USBFN_PORT_TYPE,
    __in USBFN_ACTION
    );
    
typedef UFX_DEVICE_PORT_DETECT_COMPLETE_EX *PFN_UFX_DEVICE_PORT_DETECT_COMPLETE_EX;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDevicePortDetectCompleteEx (
    __in UFXDEVICE UfxDevice,
    __in USBFN_PORT_TYPE PortType,
    __in USBFN_ACTION Action
    )
{
    ((PFN_UFX_DEVICE_PORT_DETECT_COMPLETE_EX)
     UfxClassFunctions[UfxDevicePortDetectCompleteExIndex])(UfxGlobals, 
                                                            UfxDevice, 
                                                            PortType,
                                                            Action);
}

//
// UFXDEVICE Function: UfxDeviceProprietaryChargerDetectComplete
//

typedef
__drv_maxIRQL(PASSIVE_LEVEL)
VOID
UFX_DEVICE_PROPRIETARY_CHARGER_DETECT_COMPLETE (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in PUFX_PROPRIETARY_CHARGER
    );
    
typedef UFX_DEVICE_PROPRIETARY_CHARGER_DETECT_COMPLETE *PFN_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT_COMPLETE;

__drv_maxIRQL(PASSIVE_LEVEL)
VOID
FORCEINLINE
UfxDeviceProprietaryChargerDetectComplete (
    __in UFXDEVICE UfxDevice,
    __in PUFX_PROPRIETARY_CHARGER DetectedCharger
    )
{
    ((PFN_UFX_DEVICE_PROPRIETARY_CHARGER_DETECT_COMPLETE)
     UfxClassFunctions[UfxDeviceProprietaryChargerDetectCompleteIndex])(UfxGlobals, 
                                                                        UfxDevice, 
                                                                        DetectedCharger);
}

//
// UFXDEVICE Function: UfxDeviceNotifyHardwareFailure
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
UFX_DEVICE_NOTIFY_HARDWARE_FAILURE (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in PUFX_HARDWARE_FAILURE_CONTEXT
    );
   
typedef UFX_DEVICE_NOTIFY_HARDWARE_FAILURE *PFN_UFX_DEVICE_NOTIFY_HARDWARE_FAILURE;

_IRQL_requires_max_(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxDeviceNotifyHardwareFailure (
    _In_ UFXDEVICE UfxDevice,
    _In_opt_ PUFX_HARDWARE_FAILURE_CONTEXT HardwareFailureContext
    )
{
    ((PFN_UFX_DEVICE_NOTIFY_HARDWARE_FAILURE)
     UfxClassFunctions[UfxDeviceNotifyHardwareFailureIndex])(UfxGlobals,
                                                             UfxDevice,
                                                             HardwareFailureContext);
}


//
// UFXDEVICE Function: UfxDeviceIoControl
//

typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UFX_DEVICE_IO_CONTROL (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in WDFREQUEST,
    __in size_t,
    __in size_t,
    __in ULONG
    );

typedef UFX_DEVICE_IO_CONTROL *PFN_UFX_DEVICE_IO_CONTROL;


_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UfxDeviceIoControl (
    __in UFXDEVICE UfxDevice,
    __in WDFREQUEST Request,
    __in size_t OutputBufferLength,
    __in size_t InputBufferLength,
    __in ULONG IoControlCode
    )
{
    return ((PFN_UFX_DEVICE_IO_CONTROL)
            UfxClassFunctions[UfxDeviceIoControlIndex])(UfxGlobals,
                                                        UfxDevice,
                                                        Request,
                                                        OutputBufferLength,
                                                        InputBufferLength,
                                                        IoControlCode);
}
    
//
// UFXDEVICE Function: UfxDeviceIoInternalControl
//

typedef
_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UFX_DEVICE_IO_INTERNAL_CONTROL (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __in WDFREQUEST,
    __in size_t,
    __in size_t,
    __in ULONG
    );

typedef UFX_DEVICE_IO_INTERNAL_CONTROL *PFN_UFX_DEVICE_IO_INTERNAL_CONTROL;


_Must_inspect_result_
__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
FORCEINLINE
UfxDeviceIoInternalControl (
    __in UFXDEVICE UfxDevice,
    __in WDFREQUEST Request,
    __in size_t OutputBufferLength,
    __in size_t InputBufferLength,
    __in ULONG IoControlCode
    )
{
    return ((PFN_UFX_DEVICE_IO_INTERNAL_CONTROL)
            UfxClassFunctions[UfxDeviceIoInternalControlIndex])(UfxGlobals,
                                                                UfxDevice,
                                                                Request,
                                                                OutputBufferLength,
                                                                InputBufferLength,
                                                                IoControlCode);
}
    
//
// UFXENDPOINT callbacks registration struct
//

typedef struct _UFX_ENDPOINT_CALLBACKS {
    ULONG Size;
} UFX_ENDPOINT_CALLBACKS, *PUFX_ENDPOINT_CALLBACKS;

//
// UFXENDPOINT Function: UFX_ENDPOINT_EVENT_CALLBACKS_INIT
//
VOID
FORCEINLINE
UFX_ENDPOINT_CALLBACKS_INIT (
    __out PUFX_ENDPOINT_CALLBACKS Callbacks
    )    
{
    RtlZeroMemory(Callbacks, sizeof(UFX_ENDPOINT_CALLBACKS));
    Callbacks->Size = sizeof(UFX_ENDPOINT_CALLBACKS);
}
    
//
// UFXENDPOINT Function: UfxEndpointCreate
//

typedef
_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
UFX_ENDPOINT_CREATE (
    __in PUFX_GLOBALS,
    __in UFXDEVICE,
    __inout PUFXENDPOINT_INIT,
    __in_opt PWDF_OBJECT_ATTRIBUTES,
    __in PWDF_IO_QUEUE_CONFIG,
    __in_opt PWDF_OBJECT_ATTRIBUTES,
    __in PWDF_IO_QUEUE_CONFIG,
    __in_opt PWDF_OBJECT_ATTRIBUTES,
    __out UFXENDPOINT*
    );
    
typedef UFX_ENDPOINT_CREATE *PFN_UFX_ENDPOINT_CREATE;

_Must_inspect_result_
__drv_requiresIRQL(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
UfxEndpointCreate (
    __in UFXDEVICE UfxDevice,
    __inout PUFXENDPOINT_INIT EndpointInit,
    __in_opt PWDF_OBJECT_ATTRIBUTES Attributes,
    __in PWDF_IO_QUEUE_CONFIG TransferQueueConfig,
    __in_opt PWDF_OBJECT_ATTRIBUTES TransferQueueAttributes,
    __in PWDF_IO_QUEUE_CONFIG CommandQueueConfig,
    __in_opt PWDF_OBJECT_ATTRIBUTES CommandQueueAttributes,
    __out UFXENDPOINT* UfxEndpoint
    )
{
    return ((PFN_UFX_ENDPOINT_CREATE)
            UfxClassFunctions[UfxEndpointCreateIndex])(UfxGlobals, 
                                                       UfxDevice,
                                                       EndpointInit,
                                                       Attributes,
                                                       TransferQueueConfig,
                                                       TransferQueueAttributes,
                                                       CommandQueueConfig,
                                                       CommandQueueAttributes,
                                                       UfxEndpoint);
}

//
// UFXENDPOINT Function: UfxEndpointInitSetCallbacks
//

typedef 
__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
FORCEINLINE
UFX_ENDPOINT_INIT_SET_EVENT_CALLBACKS (
    __in PUFX_GLOBALS,
    __inout PUFXENDPOINT_INIT EndpointInit,
    __in PUFX_ENDPOINT_CALLBACKS Callbacks
    );

typedef UFX_ENDPOINT_INIT_SET_EVENT_CALLBACKS *PFN_UFX_ENDPOINT_INIT_SET_CALLBACKS;

__drv_requiresIRQL(PASSIVE_LEVEL)
VOID
FORCEINLINE
UfxEndpointInitSetEventCallbacks (
    __inout PUFXENDPOINT_INIT EndpointInit,
    __in PUFX_ENDPOINT_CALLBACKS Callbacks
    )
{
    ((PFN_UFX_ENDPOINT_INIT_SET_CALLBACKS)
     UfxClassFunctions[UfxEndpointInitSetEventCallbacksIndex])(UfxGlobals, 
                                                               EndpointInit,
                                                               Callbacks);
}

//
// UFXENDPOINT Function: UfxEndpointNotifySetup
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UFX_ENDPOINT_NOTIFY_SETUP (
    __in PUFX_GLOBALS,
    __in UFXENDPOINT UfxEndpoint,
    __in PUSB_DEFAULT_PIPE_SETUP_PACKET SetupInfo
    );
 
typedef UFX_ENDPOINT_NOTIFY_SETUP *PFN_UFX_ENDPOINT_NOTIFY_SETUP;

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
FORCEINLINE
UfxEndpointNotifySetup (
    __in UFXENDPOINT UfxEndpoint,
    __in PUSB_DEFAULT_PIPE_SETUP_PACKET SetupInfo
    )
{
    ((PFN_UFX_ENDPOINT_NOTIFY_SETUP)
     UfxClassFunctions[UfxEndpointNotifySetupIndex])(UfxGlobals, 
                                                     UfxEndpoint,
                                                     SetupInfo);
}

//
// UFXENDPOINT Function: UfxEndpointGetTransferQueue
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFQUEUE
FORCEINLINE
UFX_ENDPOINT_GET_TRANSFER_QUEUE (
    __in PUFX_GLOBALS,
    __in UFXENDPOINT
    );
 
typedef UFX_ENDPOINT_GET_TRANSFER_QUEUE *PFN_UFX_ENDPOINT_GET_TRANSFER_QUEUE;

__drv_maxIRQL(DISPATCH_LEVEL)
WDFQUEUE
FORCEINLINE
UfxEndpointGetTransferQueue (
    __in UFXENDPOINT UfxEndpoint
    )
{
    return  ((PFN_UFX_ENDPOINT_GET_TRANSFER_QUEUE)
             UfxClassFunctions[UfxEndpointGetTransferQueueIndex])(UfxGlobals, 
                                                                  UfxEndpoint);
}

//
// UFXENDPOINT Function: UfxEndpointGetCommandQueue
//

typedef
__drv_maxIRQL(DISPATCH_LEVEL)
WDFQUEUE
FORCEINLINE
UFX_ENDPOINT_GET_COMMAND_QUEUE (
    __in PUFX_GLOBALS,
    __in UFXENDPOINT
    );
 
typedef UFX_ENDPOINT_GET_COMMAND_QUEUE *PFN_UFX_ENDPOINT_GET_COMMAND_QUEUE;

__drv_maxIRQL(DISPATCH_LEVEL)
WDFQUEUE
FORCEINLINE
UfxEndpointGetCommandQueue (
    __in UFXENDPOINT UfxEndpoint
    )
{
    return  ((PFN_UFX_ENDPOINT_GET_COMMAND_QUEUE)
             UfxClassFunctions[UfxEndpointGetCommandQueueIndex])(UfxGlobals, 
                                                                 UfxEndpoint);
}