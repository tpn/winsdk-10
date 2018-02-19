/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    treeclx.h

Abstract:

    This module defines the Trusted Runtime WDF class-extension interfaces

Revision History:

--*/

#pragma once
#include <TrustedRT.h>
#include <stdarg.h>

//
// Supported versions.
//
// Version 1:
//

#define TRUSTED_RUNTIME_VERSION_V1 1
#define TRUSTED_RUNTIME_V1_MINOR_VERSION_0 0
#define TRUSTED_RUNTIME_V1_MINOR_VERSION TRUSTED_RUNTIME_V1_MINOR_VERSION_0

//
// Latest version
//

#define TRUSTED_RUNTIME_VERSION TRUSTED_RUNTIME_VERSION_V1
#define TRUSTED_RUNTIME_MINOR_VERSION TRUSTED_RUNTIME_V1_MINOR_VERSION

//
// Use a specific bus GUID to identify children. Common bus GUIDs are published
// in wdmguid.h but this should not be needed outside of this file.
// {4E815EE1-20F8-41EF-8CFF-3C283F02D722}
//

DEFINE_GUID(GUID_BUS_TYPE_TREE, 0x4E815EE1, 0x20F8, 0x41EF, 0x8C, 0xFF, 0x3C, 0x28, 0x3F, 0x02, 0xD7, 0x22);

typedef VOID(*TRFUNC) (VOID);

typedef struct _TR_SECURE_DEVICE_CALLBACKS_V1 TR_SECURE_DEVICE_CALLBACKS_V1,
                                              *PTR_SECURE_DEVICE_CALLBACKS_V1;

typedef TR_SECURE_DEVICE_CALLBACKS_V1 TR_SECURE_DEVICE_CALLBACKS,
                                      *PTR_SECURE_DEVICE_CALLBACKS;

typedef struct _TR_SECURE_SERVICE_CALLBACKS_V1 TR_SECURE_SERVICE_CALLBACKS_V1,
                                               *PTR_SECURE_SERVICE_CALLBACKS_V1;

typedef TR_SECURE_SERVICE_CALLBACKS_V1 TR_SECURE_SERVICE_CALLBACKS,
                                       *PTR_SECURE_SERVICE_CALLBACKS;

typedef enum _TRFUNCENUM {
    TrSecureDeviceHandoffMasterDeviceControlTableIndex = 0,
    TrSecureDeviceHandoffServiceDeviceControlTableIndex,
    TrSecureDeviceLogMessageTableIndex,
    TrSecureDeviceQueryOSServiceTableIndex,
    TrSecureDeviceCallOSServiceTableIndex,
    TrSecureDeviceCompleteAsyncRequestTableIndex,

    TrFunctionTableNumEntries
} TRFUNCENUM;

typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICEHANDOFFMASTERDEVICECONTROL)(
    _In_ WDFOBJECT BindContextObject,
    _Inout_ PWDFDEVICE_INIT DeviceInit,
    _In_ PTR_SECURE_DEVICE_CALLBACKS Callbacks,
    _Out_opt_ WDFDEVICE *MasterDevice
    );

typedef
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICEHANDOFFSERVICEDEVICECONTROL)(
    _In_ WDFOBJECT BindContextObject,
    _Inout_ PWDFDEVICE_INIT DeviceInit,
    _In_ LPGUID ServiceGuid,
    _In_opt_ PTR_SECURE_SERVICE_CALLBACKS Callbacks,
    _Out_opt_ WDFDEVICE *ServiceDevice
    );

typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICELOGMESSAGE)(
    _In_ WDFOBJECT BindContext,
    _In_ WDFDEVICE Device,
    _In_ ULONG Severity,
    _Printf_format_string_ _In_ PCSTR Message,
    _In_ va_list Arguments
    );

typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICEQUERYOSSERVICE)(
    _In_ WDFOBJECT BindContext,
    _In_ WDFDEVICE Device,
    _In_ LPCGUID OSServiceGuid,
    _Out_ PTR_SERVICE_INFORMATION Information
    );

typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICECALLOSSSERVICE)(
    _In_ WDFOBJECT BindContext,
    _In_ WDFDEVICE Device,
    _In_ LPCGUID OSServiceGuid,
    _In_ PTR_SERVICE_REQUEST CallData,
    _Out_opt_ ULONG_PTR *BytesWritten
    );

typedef
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_TRSECUREDEVICECOMPLETEASYNCREQUEST)(
    _In_ WDFOBJECT BindContext,
    _In_ PVOID RequestHandle,
    _In_ NTSTATUS Result,
    _In_ ULONG_PTR BytesWritten
    );

//
// ----------------------------------------------------------------------------
//

typedef
_Function_class_(EVT_TR_CREATE_SECURE_DEVICE_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_CREATE_SECURE_DEVICE_CONTEXT(
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_CREATE_SECURE_DEVICE_CONTEXT
        *PFN_TR_CREATE_SECURE_DEVICE_CONTEXT;

typedef
_Function_class_(EVT_TR_DESTROY_SECURE_DEVICE_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_DESTROY_SECURE_DEVICE_CONTEXT(
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_DESTROY_SECURE_DEVICE_CONTEXT
        *PFN_TR_DESTROY_SECURE_DEVICE_CONTEXT;

typedef
_Function_class_(EVT_TR_PREPARE_HARDWARE_SECURE_ENVIRONMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_PREPARE_HARDWARE_SECURE_ENVIRONMENT(
    _In_ WDFDEVICE MasterDevice,
    _In_ WDFCMRESLIST RawResources,
    _In_ WDFCMRESLIST TranslatedResources
    );

typedef EVT_TR_PREPARE_HARDWARE_SECURE_ENVIRONMENT
       *PFN_TR_PREPARE_HARDWARE_SECURE_ENVIRONMENT;

typedef
_Function_class_(EVT_TR_RELEASE_HARDWARE_SECURE_ENVIRONMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_RELEASE_HARDWARE_SECURE_ENVIRONMENT(
    _In_ WDFDEVICE MasterDevice,
    _In_ WDFCMRESLIST TranslatedResources
    );

typedef EVT_TR_RELEASE_HARDWARE_SECURE_ENVIRONMENT
       *PFN_TR_RELEASE_HARDWARE_SECURE_ENVIRONMENT;

typedef
_Function_class_(EVT_TR_CONNECT_SECURE_ENVIRONMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_CONNECT_SECURE_ENVIRONMENT(
    _In_ WDFDEVICE MasterDevice
    );

typedef EVT_TR_CONNECT_SECURE_ENVIRONMENT *PFN_TR_CONNECT_SECURE_ENVIRONMENT;

typedef
_Function_class_(EVT_TR_DISCONNECT_SECURE_ENVIRONMENT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_DISCONNECT_SECURE_ENVIRONMENT(
    _In_ WDFDEVICE MasterDevice
    );

typedef EVT_TR_DISCONNECT_SECURE_ENVIRONMENT
        *PFN_TR_DISCONNECT_SECURE_ENVIRONMENT;

typedef enum _TR_SECURE_DEPENDENCY_TYPE {
    TRSecureOSDependency,
    TRSecureResourceDependency
} TR_SECURE_DEPENDENCY_TYPE;

typedef struct _TR_SECURE_DEPENDENCY_V1 {
    TR_SECURE_DEPENDENCY_TYPE Type;
    ULONG MaxRequired;
    GUID Id;
} TR_SECURE_DEPENDENCY_V1, *PTR_SECURE_DEPENDENCY_V1;

typedef TR_SECURE_DEPENDENCY_V1 TR_SECURE_DEPENDENCY, *PTR_SECURE_DEPENDENCY;

typedef struct _TR_SECURE_SERVICE_V1 {
    ULONG DescriptionSize;
    GUID ServiceGuid;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG ExtensionOffset;
    ULONG CountDependencies;
    TR_SECURE_DEPENDENCY_V1 Dependencies[ANYSIZE_ARRAY];
} TR_SECURE_SERVICE_V1, *PTR_SECURE_SERVICE_V1;

typedef TR_SECURE_SERVICE_V1 TR_SECURE_SERVICE, *PTR_SECURE_SERVICE;

#define TR_SECURE_SERVICE_EXTENSION_VERSION_1 1

typedef struct _TR_SECURE_SERVICE_EXTENSION_V1 {
    ULONG ExtensionVersion;

    //
    // Byte offset from beginning of TR_SECURE_SERVICE struct to
    // NULL-terminated WCHAR string SDDL.
    //
    ULONG SecurityDescriptorStringOffset;
} TR_SECURE_SERVICE_EXTENSION_V1, *PTR_SECURE_SERVICE_EXTENSION_V1;

#define TR_SECURE_SERVICE_EXTENSION_VERSION   TR_SECURE_SERVICE_EXTENSION_VERSION_1

typedef TR_SECURE_SERVICE_EXTENSION_V1 TR_SECURE_SERVICE_EXTENSION,
                                       *PTR_SECURE_SERVICE_EXTENSION;

typedef
_Function_class_(EVT_TR_ENUMERATE_SECURE_SERVICES)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_ENUMERATE_SECURE_SERVICES(
    _In_ WDFDEVICE MasterDevice,
    _In_ ULONG Index,
    _Inout_updates_bytes_opt_(*DescriptionSize) PUCHAR SecureServiceDescription,
    _Inout_ ULONG *DescriptionSize
    );

typedef EVT_TR_ENUMERATE_SECURE_SERVICES *PFN_TR_ENUMERATE_SECURE_SERVICES;

typedef
_Function_class_(EVT_TR_PROCESS_OTHER_DEVICE_IO)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_TR_PROCESS_OTHER_DEVICE_IO(
    _In_ WDFDEVICE MasterDevice,
    _In_ WDFREQUEST Request
    );

typedef EVT_TR_PROCESS_OTHER_DEVICE_IO *PFN_TR_PROCESS_OTHER_DEVICE_IO;

typedef
_Function_class_(EVT_TR_QUERY_SERVICE_CALLBACKS)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
PTR_SECURE_SERVICE_CALLBACKS
EVT_TR_QUERY_SERVICE_CALLBACKS(
    _In_ WDFDEVICE MasterDevice,
    _In_ LPGUID ServiceGuid
    );

typedef EVT_TR_QUERY_SERVICE_CALLBACKS *PFN_TR_QUERY_SERVICE_CALLBACKS;

typedef
_Function_class_(EVT_TR_CREATE_SECURE_SERVICE_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_CREATE_SECURE_SERVICE_CONTEXT(
    _In_ WDFDEVICE MasterDevice,
    _In_ LPCGUID ServiceGuid,
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_CREATE_SECURE_SERVICE_CONTEXT
        *PFN_TR_CREATE_SECURE_SERVICE_CONTEXT;

typedef
_Function_class_(EVT_TR_DESTROY_SECURE_SERVICE_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_DESTROY_SECURE_SERVICE_CONTEXT(
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_DESTROY_SECURE_SERVICE_CONTEXT
        *PFN_TR_DESTROY_SECURE_SERVICE_CONTEXT;

typedef
_Function_class_(EVT_TR_CONNECT_SECURE_SERVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_CONNECT_SECURE_SERVICE(
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_CONNECT_SECURE_SERVICE *PFN_TR_CONNECT_SECURE_SERVICE;

typedef
_Function_class_(EVT_TR_DISCONNECT_SECURE_SERVICE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_DISCONNECT_SECURE_SERVICE(
    _In_ WDFDEVICE ServiceDevice
    );

typedef EVT_TR_DISCONNECT_SECURE_SERVICE *PFN_TR_DISCONNECT_SECURE_SERVICE;

typedef
_Function_class_(EVT_TR_CREATE_SECURE_SERVICE_SESSION_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_CREATE_SECURE_SERVICE_SESSION_CONTEXT(
    _In_ WDFDEVICE ServiceDevice,
    _Out_ WDFOBJECT *SessionContextObject
    );

typedef EVT_TR_CREATE_SECURE_SERVICE_SESSION_CONTEXT
        *PFN_TR_CREATE_SECURE_SERVICE_SESSION_CONTEXT;

typedef
_Function_class_(EVT_TR_DESTROY_SECURE_SERVICE_SESSION_CONTEXT)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_DESTROY_SECURE_SERVICE_SESSION_CONTEXT(
    _In_ WDFDEVICE ServiceDevice,
    _Inout_ WDFOBJECT *SessionContextObject
    );

typedef EVT_TR_DESTROY_SECURE_SERVICE_SESSION_CONTEXT
        *PFN_TR_DESTROY_SECURE_SERVICE_SESSION_CONTEXT;

#define TR_SERVICE_REQUEST_FROM_USERMODE        1

typedef
_Function_class_(EVT_TR_PROCESS_SECURE_SERVICE_REQUEST)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
EVT_TR_PROCESS_SECURE_SERVICE_REQUEST(
    _In_ WDFDEVICE ServiceDevice,
    _In_ WDFOBJECT SessionContext,
    _In_ PVOID RequestHandle,
    _In_ KPRIORITY Priority,
    _In_ PTR_SERVICE_REQUEST Request,
    _In_ ULONG Flags,
    _Out_ PULONG_PTR BytesWritten,
    _Inout_opt_ PVOID* RequestContext
    );

typedef EVT_TR_PROCESS_SECURE_SERVICE_REQUEST
        *PFN_TR_PROCESS_SECURE_SERVICE_REQUEST;

typedef
_Function_class_(EVT_TR_CANCEL_SECURE_SERVICE_REQUEST)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_TR_CANCEL_SECURE_SERVICE_REQUEST(
    _In_ WDFDEVICE ServiceDevice,
    _In_ WDFOBJECT SessionContext,
    _In_ PVOID RequestHandle,
    _Inout_opt_ _Post_equal_to_(NULL) PVOID* RequestContext
    );

typedef EVT_TR_CANCEL_SECURE_SERVICE_REQUEST
        *PFN_TR_CANCEL_SECURE_SERVICE_REQUEST;

typedef
_Function_class_(EVT_TR_PROCESS_OTHER_SECURE_SERVICE_IO)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
EVT_TR_PROCESS_OTHER_SECURE_SERVICE_IO(
    _In_ WDFDEVICE ServiceDevice,
    _In_ WDFOBJECT SessionContext,
    _In_ WDFREQUEST Request
    );

typedef EVT_TR_PROCESS_OTHER_SECURE_SERVICE_IO
        *PFN_TR_PROCESS_OTHER_SECURE_SERVICE_IO;

#define TR_DEVICE_NO_SERIALIZATION              0x00000000
#define TR_DEVICE_SERIALIZE_PER_SESSION         0x00000001
#define TR_DEVICE_SERIALIZE_PER_SERVICE         0x00000002
#define TR_DEVICE_SERIALIZE_ALL_REQUESTS        0x00000003
#define TR_DEVICE_SERIALIZE_MASK                0x00000003

#define TR_DEVICE_STACK_RESERVE_NONE            0x00000000
#define TR_DEVICE_STACK_RESERVE_2K              0x00000004
#define TR_DEVICE_STACK_RESERVE_4K              0x00000008
#define TR_DEVICE_STACK_RESERVE_8K              0x0000000C
#define TR_DEVICE_STACK_RESERVE_MASK            0x0000000C

struct _TR_SECURE_DEVICE_CALLBACKS_V1 {
    ULONG Flags;

    PFN_TR_CREATE_SECURE_DEVICE_CONTEXT  EvtTrCreateSecureDeviceContext;
    PFN_TR_DESTROY_SECURE_DEVICE_CONTEXT EvtTrDestroySecureDeviceContext;

    PFN_TR_PREPARE_HARDWARE_SECURE_ENVIRONMENT EvtTrPrepareHardwareSecureEnvironment;
    PFN_TR_RELEASE_HARDWARE_SECURE_ENVIRONMENT EvtTrReleaseHardwareSecureEnvironment;

    PFN_TR_CONNECT_SECURE_ENVIRONMENT    EvtTrConnectSecureEnvironment;
    PFN_TR_DISCONNECT_SECURE_ENVIRONMENT EvtTrDisconnectSecureEnvironment;

    PFN_TR_ENUMERATE_SECURE_SERVICES EvtTrEnumerateSecureServices;
    PFN_TR_PROCESS_OTHER_DEVICE_IO   EvtTrProcessOtherDeviceIo;

    PFN_TR_QUERY_SERVICE_CALLBACKS   EvtTrQueryServiceCallbacks;
};

struct _TR_SECURE_SERVICE_CALLBACKS_V1 {
    ULONG Flags;

    PFN_TR_CREATE_SECURE_SERVICE_CONTEXT  EvtTrCreateSecureServiceContext;
    PFN_TR_DESTROY_SECURE_SERVICE_CONTEXT EvtTrDestroySecureServiceContext;

    PFN_TR_CONNECT_SECURE_SERVICE    EvtTrConnectSecureService;
    PFN_TR_DISCONNECT_SECURE_SERVICE EvtTrDisconnectSecureService;

    PFN_TR_CREATE_SECURE_SERVICE_SESSION_CONTEXT  EvtTrCreateSecureSessionContext;
    PFN_TR_DESTROY_SECURE_SERVICE_SESSION_CONTEXT EvtTrDestroySecureSessionContext;

    PFN_TR_PROCESS_SECURE_SERVICE_REQUEST  EvtTrProcessSecureServiceRequest;
    PFN_TR_CANCEL_SECURE_SERVICE_REQUEST   EvtTrCancelSecureServiceRequest;
    PFN_TR_PROCESS_OTHER_SECURE_SERVICE_IO EvtTrProcessOtherSecureServiceIo;
};

extern WDFOBJECT TrBindContext;
extern TRFUNC TrFunctions[];

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
TrSecureDeviceHandoffMasterDeviceControl(
    _Inout_ PWDFDEVICE_INIT DeviceInit,
    _In_ PTR_SECURE_DEVICE_CALLBACKS Callbacks,
    _Out_opt_ WDFDEVICE *MasterDevice
    )

{

    return ((PFN_TRSECUREDEVICEHANDOFFMASTERDEVICECONTROL)
        TrFunctions[TrSecureDeviceHandoffMasterDeviceControlTableIndex])(
        TrBindContext,
        DeviceInit,
        Callbacks,
        MasterDevice);
}

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FORCEINLINE
TrSecureDeviceHandoffServiceDeviceControl(
    _Inout_ PWDFDEVICE_INIT DeviceInit,
    _In_ LPGUID ServiceGuid,
    _In_opt_ PTR_SECURE_SERVICE_CALLBACKS Callbacks,
    _Out_opt_ WDFDEVICE *ServiceDevice
    )

{

    return ((PFN_TRSECUREDEVICEHANDOFFSERVICEDEVICECONTROL)
        TrFunctions[TrSecureDeviceHandoffServiceDeviceControlTableIndex])(
        TrBindContext,
        DeviceInit,
        ServiceGuid,
        Callbacks,
        ServiceDevice);
}

NTSTATUS
__inline
TrSecureDeviceLogMessage(
    _In_ WDFDEVICE Device,
    _In_ ULONG Severity,
    _Printf_format_string_ _In_ PCSTR Message,
    ...
    )

{

    va_list Arguments;

    va_start(Arguments, Message);
    return ((PFN_TRSECUREDEVICELOGMESSAGE)
            TrFunctions[TrSecureDeviceLogMessageTableIndex])(TrBindContext,
                                                             Device,
                                                             Severity,
                                                             Message,
                                                             Arguments);
}

_Must_inspect_result_
NTSTATUS
FORCEINLINE
TrSecureDeviceQueryOSService(
    _In_ WDFDEVICE Device,
    _In_ LPCGUID OSServiceGuid,
    _Out_ PTR_SERVICE_INFORMATION Information
    )

{

    return ((PFN_TRSECUREDEVICEQUERYOSSERVICE)
            TrFunctions[TrSecureDeviceQueryOSServiceTableIndex])(
                TrBindContext,
                Device,
                OSServiceGuid,
                Information);
}

_Must_inspect_result_
NTSTATUS
FORCEINLINE
TrSecureDeviceCallOSService (
    _In_ WDFDEVICE Device,
    _In_ LPCGUID OSServiceGuid,
    _In_ PTR_SERVICE_REQUEST CallData,
    _Out_opt_ ULONG_PTR *BytesWritten
    )

{

    return ((PFN_TRSECUREDEVICECALLOSSSERVICE)
            TrFunctions[TrSecureDeviceCallOSServiceTableIndex])(
                TrBindContext,
                Device,
                OSServiceGuid,
                CallData,
                BytesWritten);
}

_Must_inspect_result_
NTSTATUS
FORCEINLINE
TrSecureDeviceCompleteAsyncRequest(
    _In_ PVOID RequestHandle,
    _In_ NTSTATUS Result,
    _In_ ULONG_PTR BytesWritten
    )

{

    return ((PFN_TRSECUREDEVICECOMPLETEASYNCREQUEST)
            TrFunctions[TrSecureDeviceCompleteAsyncRequestTableIndex])(
                TrBindContext,
                RequestHandle,
                Result,
                BytesWritten);
}
