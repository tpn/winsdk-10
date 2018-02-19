/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    pep_x.h

Abstract:

    This module contains the internal structure definitions and APIs used by
    the Power Engine Plugins (PEPs.)

    This module may contain definitions that are exposed in kit headers
    for use by external developers.

--*/

#ifndef PEPLEGACY
#define PEPLEGACY
#endif

#ifdef PEPFX
#error Only include pepfx.h or pep_x.h, not both.
#endif

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#if (NTDDI_VERSION >= NTDDI_WIN8)

#ifdef __cplusplus
extern "C" {
#endif

#pragma push
#pragma warning(disable:4214) // bitfield types other than int
#pragma warning(disable:4201) // nameless struct/union

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

//
// Include ACPI IOCTL header as definitions below rely on it.
//

#include <acpiioct.h>

#endif

//
// Power control codes for PPM power control callback.
//

// {38BD8901-AB20-4908-ABAA-AC34674BDFF3}
DEFINE_GUID(PEP_PPM_POWER_CONTROL_QUERY_PARKING_PAGE,
            0x38bd8901, 0xab20, 0x4908, 0xab, 0xaa, 0xac, 0x34, 0x67, 0x4b, 0xdf, 0xf3);

//
// Context for PPM power control codes.
//

typedef struct _PEP_PPM_CONTEXT_QUERY_PARKING_PAGE {
    PHYSICAL_ADDRESS PhysicalPageAddress;
    PVOID VirtualPageAddress;
} PEP_PPM_CONTEXT_QUERY_PARKING_PAGE, *PPEP_PPM_CONTEXT_QUERY_PARKING_PAGE;

//
// PEP interfaces for runtime framework.
//

DECLARE_HANDLE(PEPHANDLE);

typedef
VOID
POFXCALLBACKREQUESTWORKER (
    _In_ POHANDLE PluginHandle
    );

typedef POFXCALLBACKREQUESTWORKER *PPOFXCALLBACKREQUESTWORKER;

_IRQL_requires_max_(HIGH_LEVEL)
typedef
VOID
POFXCALLBACKCRITICALRESOURCE (
    _In_ POHANDLE DeviceHandle,
    _In_ ULONG Component,
    _In_ BOOLEAN Active
    );

typedef POFXCALLBACKCRITICALRESOURCE *PPOFXCALLBACKCRITICALRESOURCE;

_IRQL_requires_max_(HIGH_LEVEL)
typedef
NTSTATUS
POFXCALLBACKPROCESSORHALT (
    _In_ ULONG Flags,
    _Inout_opt_ PVOID Context,
    _In_ PPROCESSOR_HALT_ROUTINE Halt
    );

typedef POFXCALLBACKPROCESSORHALT *PPOFXCALLBACKPROCESSORHALT;

_IRQL_requires_max_(HIGH_LEVEL)
typedef
NTSTATUS
POFXCALLBACKREQUESTINTERRUPT (
    _In_ ULONG Gsiv
    );

typedef POFXCALLBACKREQUESTINTERRUPT *PPOFXCALLBACKREQUESTINTERRUPT;

#define PEP_UNMASKED_INTERRUPT_INFORMATION_V1 0x00000001
#define PEP_ENUMERATE_UNMASKED_INTERRUPT_FLAGS_NONE 0x0

typedef union _PEP_UNMASKED_INTERRUPT_FLAGS {
    struct {
        USHORT SecondaryInterrupt: 1;
        USHORT Reserved: 15;
    };

    USHORT AsUSHORT;

} PEP_UNMASKED_INTERRUPT_FLAGS, *PPEP_UNMASKED_INTERRUPT_FLAGS;

typedef struct _PEP_UNMASKED_INTERRUPT_INFORMATION {
    USHORT Version;
    USHORT Size;
    PEP_UNMASKED_INTERRUPT_FLAGS Flags;
    KINTERRUPT_MODE Mode;
    KINTERRUPT_POLARITY Polarity;
    ULONG Gsiv;
    USHORT PinNumber;
    PEPHANDLE DeviceHandle;
} PEP_UNMASKED_INTERRUPT_INFORMATION, *PPEP_UNMASKED_INTERRUPT_INFORMATION;

_IRQL_requires_max_(HIGH_LEVEL)
typedef
BOOLEAN
(*PPO_ENUMERATE_INTERRUPT_SOURCE_CALLBACK)(
    _In_ PVOID CallbackContext,
    _In_ PPEP_UNMASKED_INTERRUPT_INFORMATION InterruptInformation
    );

_IRQL_requires_max_(HIGH_LEVEL)
typedef
NTSTATUS
POFXCALLBACKENUMERATEUNMASKEDINTERRUPTS (
    _In_opt_ POHANDLE PluginHandle,
    _In_opt_ ULONG EnumerateFlags,
    _In_ PPO_ENUMERATE_INTERRUPT_SOURCE_CALLBACK Callback,
    _In_ PVOID CallbackContext,
    _Inout_ PPEP_UNMASKED_INTERRUPT_INFORMATION InterruptInformation
    );

typedef POFXCALLBACKENUMERATEUNMASKEDINTERRUPTS *PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS;

typedef
NTSTATUS
POFXCALLBACKPROCESSORIDLEVETO (
    _In_ POHANDLE ProcessorHandle,
    _In_ ULONG ProcessorState,
    _In_ ULONG VetoReason,
    _In_ BOOLEAN Increment
    );

typedef POFXCALLBACKPROCESSORIDLEVETO *PPOFXCALLBACKPROCESSORIDLEVETO;

typedef
NTSTATUS
POFXCALLBACKPLATFORMIDLEVETO (
    _In_ POHANDLE ProcessorHandle,
    _In_ ULONG PlatformState,
    _In_ ULONG VetoReason,
    _In_ BOOLEAN Increment
    );

typedef POFXCALLBACKPLATFORMIDLEVETO *PPOFXCALLBACKPLATFORMIDLEVETO;

typedef struct _PEP_PROCESSOR_IDLE_STATE_UPDATE {
    ULONG Version;
    ULONG Latency;
    ULONG BreakEvenDuration;
} PEP_PROCESSOR_IDLE_STATE_UPDATE, *PPEP_PROCESSOR_IDLE_STATE_UPDATE;

#define PEP_PROCESSOR_IDLE_STATE_UPDATE_VERSION_1 1

typedef
NTSTATUS
POFXCALLBACKUPDATEPROCESSORIDLESTATE (
    _In_ POHANDLE ProcessorHandle,
    _In_ ULONG ProcessorState,
    _In_ PPEP_PROCESSOR_IDLE_STATE_UPDATE Update
    );

typedef POFXCALLBACKUPDATEPROCESSORIDLESTATE *PPOFXCALLBACKUPDATEPROCESSORIDLESTATE;

typedef struct _PEP_PLATFORM_IDLE_STATE_UPDATE {
    ULONG Version;
    ULONG Latency;
    ULONG BreakEvenDuration;
} PEP_PLATFORM_IDLE_STATE_UPDATE, *PPEP_PLATFORM_IDLE_STATE_UPDATE;

#define PEP_PLATFORM_IDLE_STATE_UPDATE_VERSION_1 1

typedef
NTSTATUS
POFXCALLBACKUPDATEPLATFORMIDLESTATE (
    _In_ POHANDLE ProcessorHandle,
    _In_ ULONG PlatformState,
    _In_ PPEP_PLATFORM_IDLE_STATE_UPDATE Update
    );

typedef POFXCALLBACKUPDATEPLATFORMIDLESTATE *PPOFXCALLBACKUPDATEPLATFORMIDLESTATE;

//
// Define a generic PoFx request handler routine. This is supported in PEPv3
// and above. Note request IDs for this API will be defined in near future.
//

_IRQL_requires_max_(HIGH_LEVEL)
typedef
NTSTATUS
POFXCALLBACKREQUESTCOMMON (
    _In_ ULONG RequestId,
    _Inout_opt_ PVOID Data
    );

typedef POFXCALLBACKREQUESTCOMMON *PPOFXCALLBACKREQUESTCOMMON;

// END_PEPFX
#define PEP_KERNEL_INFORMATION_V1 0x00000001
#define PEP_KERNEL_INFORMATION_V2 0x00000002
// BEGIN_PEPFX

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define PEP_KERNEL_INFORMATION_V3 0x00000003

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef struct _PEP_KERNEL_INFORMATION_STRUCT_V1 {
    USHORT Version;
    USHORT Size;
    POHANDLE Plugin;
    PPOFXCALLBACKREQUESTWORKER RequestWorker;

    //
    // Callbacks for assisting processor idle state execution.
    //

    PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS EnumerateUnmaskedInterrupts;
    PPOFXCALLBACKPROCESSORHALT ProcessorHalt;
    PPOFXCALLBACKREQUESTINTERRUPT RequestInterrupt;
    PPOFXCALLBACKCRITICALRESOURCE TransitionCriticalResource;
} PEP_KERNEL_INFORMATION_STRUCT_V1, *PPEP_KERNEL_INFORMATION_STRUCT_V1;

typedef struct _PEP_KERNEL_INFORMATION_STRUCT_V2 {
    USHORT Version;
    USHORT Size;
    POHANDLE Plugin;
    PPOFXCALLBACKREQUESTWORKER RequestWorker;

    //
    // Callbacks for assisting processor idle state execution.
    //

    PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS EnumerateUnmaskedInterrupts;
    PPOFXCALLBACKPROCESSORHALT ProcessorHalt;
    PPOFXCALLBACKREQUESTINTERRUPT RequestInterrupt;
    PPOFXCALLBACKCRITICALRESOURCE TransitionCriticalResource;

    //
    // Callbacks for runtime changes to processor and platform idle states.
    //

    PPOFXCALLBACKPROCESSORIDLEVETO ProcessorIdleVeto;
    PPOFXCALLBACKPLATFORMIDLEVETO PlatformIdleVeto;
    PPOFXCALLBACKUPDATEPROCESSORIDLESTATE UpdateProcessorIdleState;
    PPOFXCALLBACKUPDATEPLATFORMIDLESTATE UpdatePlatformIdleState;
} PEP_KERNEL_INFORMATION_STRUCT_V2, *PPEP_KERNEL_INFORMATION_STRUCT_V2;
// BEGIN_PEPFX

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef struct _PEP_KERNEL_INFORMATION_STRUCT_V3 {
    USHORT Version;
    USHORT Size;
    POHANDLE Plugin;
    PPOFXCALLBACKREQUESTWORKER RequestWorker;

    //
    // Callbacks for assisting processor idle state execution.
    //

    PPOFXCALLBACKENUMERATEUNMASKEDINTERRUPTS EnumerateUnmaskedInterrupts;
    PPOFXCALLBACKPROCESSORHALT ProcessorHalt;
    PPOFXCALLBACKREQUESTINTERRUPT RequestInterrupt;
    PPOFXCALLBACKCRITICALRESOURCE TransitionCriticalResource;

    //
    // Callbacks for runtime changes to processor and platform idle states.
    //

    PPOFXCALLBACKPROCESSORIDLEVETO ProcessorIdleVeto;
    PPOFXCALLBACKPLATFORMIDLEVETO PlatformIdleVeto;
    PPOFXCALLBACKUPDATEPROCESSORIDLESTATE UpdateProcessorIdleState;
    PPOFXCALLBACKUPDATEPLATFORMIDLESTATE UpdatePlatformIdleState;

    //
    // PEPv3 callbacks.
    //

    PPOFXCALLBACKREQUESTCOMMON RequestCommon;
} PEP_KERNEL_INFORMATION_STRUCT_V3, *PPEP_KERNEL_INFORMATION_STRUCT_V3;

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

// END_PEPFX
#if (PEP_KERNEL_INFORMATION_VERSION == PEP_KERNEL_INFORMATION_V1)
typedef PEP_KERNEL_INFORMATION_STRUCT_V1 PEP_KERNEL_INFORMATION, *PPEP_KERNEL_INFORMATION;
#if PRAGMA_DEPRECATED_DDK
// Use PEP_KERNEL_INFORMATION_V3 and associated PEP_KERNEL_INFORMATION_STRUCT_V3
#pragma deprecated(_PEP_KERNEL_INFORMATION_STRUCT_V1)
#pragma deprecated(PEP_KERNEL_INFORMATION_STRUCT_V1)
#pragma deprecated(PPEP_KERNEL_INFORMATION_STRUCT_V1)
#pragma deprecated(PEP_KERNEL_INFORMATION)
#pragma deprecated(PPEP_KERNEL_INFORMATION)
#endif // PRAGMA_DEPRECATED_DDK
#elif (PEP_KERNEL_INFORMATION_VERSION == PEP_KERNEL_INFORMATION_V2)
typedef PEP_KERNEL_INFORMATION_STRUCT_V2 PEP_KERNEL_INFORMATION, *PPEP_KERNEL_INFORMATION;
#if PRAGMA_DEPRECATED_DDK
// Use PEP_KERNEL_INFORMATION_V3 and associated PEP_KERNEL_INFORMATION_STRUCT_V3
#pragma deprecated(_PEP_KERNEL_INFORMATION_STRUCT_V2)
#pragma deprecated(PEP_KERNEL_INFORMATION_STRUCT_V2)
#pragma deprecated(PPEP_KERNEL_INFORMATION_STRUCT_V2)
#pragma deprecated(PEP_KERNEL_INFORMATION)
#pragma deprecated(PPEP_KERNEL_INFORMATION)
#endif // PRAGMA_DEPRECATED_DDK
#elif ((NTDDI_VERSION >= NTDDI_WINTHRESHOLD) && (PEP_KERNEL_INFORMATION_VERSION == PEP_KERNEL_INFORMATION_V3))
typedef PEP_KERNEL_INFORMATION_STRUCT_V3 PEP_KERNEL_INFORMATION, *PPEP_KERNEL_INFORMATION;
#else
#pragma message ("PEP_KERNEL_INFORMATION_VERSION undefined!")
#endif
// BEGIN_PEPFX

typedef PO_FX_COMPONENT_IDLE_STATE PEP_IDLE_STATE, *PPEP_IDLE_STATE;

typedef struct _PEP_COMPONENT_V2 {
    GUID Id;
    ULONGLONG Flags;
    ULONG DeepestWakeableIdleState;
    ULONG IdleStateCount;
    _Field_size_full_(IdleStateCount) PPO_FX_COMPONENT_IDLE_STATE IdleStates;
} PEP_COMPONENT_V2, *PPEP_COMPONENT_V2;

#define PEP_DEVICE_FLAG_POWER_REQUIRED 0x0000000000000001

typedef struct _PEP_DEVICE_REGISTER_V2 {
    ULONGLONG Flags;
    ULONG ComponentCount;
    _Field_size_full_(ComponentCount) PPEP_COMPONENT_V2 Components[ANYSIZE_ARRAY];
} PEP_DEVICE_REGISTER_V2, *PPEP_DEVICE_REGISTER_V2;

typedef enum _PEP_WORK_TYPE {
    // END_PEPFX
    PepWorkActiveComplete,                    // Deprecated: see below
    PepWorkRequestIdleState,                  // Deprecated: see below
    PepWorkDevicePower,                       // Deprecated: see below
    PepWorkRequestPowerControl = 3,           // PEPFX
    PepWorkDeviceIdle,                        // Deprecated: see below
    PepWorkCompleteIdleState = 5,             // PEPFX
    PepWorkCompletePerfState,                 // PEPFX
    PepWorkAcpiNotify,                        // PEPFX
    PepWorkAcpiEvaluateControlMethodComplete, // PEPFX
    PepWorkMax                                // PEPFX
    // BEGIN_PEPFX
} PEP_WORK_TYPE, *PPEP_WORK_TYPE;

#if PRAGMA_DEPRECATED_DDK

//
// The following notifications are deprecated in the Mini PEP model as Po 
// tells the PEP which idle and device power states it should transition instead
// of the PEP requesting them.
//

#pragma deprecated(PepWorkActiveComplete)
#pragma deprecated(PepWorkRequestIdleState)
#pragma deprecated(PepWorkDevicePower)
#pragma deprecated(PepWorkDeviceIdle)

#endif

typedef enum _PEP_DEVICE_ACCEPTANCE_TYPE {
    PepDeviceNotAccepted,
    // END_PEPFX
    PepDeviceAcceptedReserved, // Deprecated
    // BEGIN_PEPFX
    PepDeviceAccepted = 2,
    PepDeviceAceptedMax
} PEP_DEVICE_ACCEPTANCE_TYPE, *PPEP_DEVICE_ACCEPTANCE_TYPE;

#if PRAGMA_DEPRECATED_DDK
#pragma deprecated(PepDeviceAcceptedReserved)
#endif

// END_PEPFX
#if (NTDDI_VERSION <= NTDDI_WIN10_RS3) //ABRACADABRA_NTDDI_WIN10_RS3

#define PepDeviceAcceptedMini PepDeviceAccepted

#if PRAGMA_DEPRECATED_DDK
#pragma deprecated(PepDeviceAcceptedMini) // Use PepDeviceAccepted
#endif

#endif

typedef struct _PEP_WORK_ACTIVE_COMPLETE {
    POHANDLE DeviceHandle;
    ULONG Component;
} PEP_WORK_ACTIVE_COMPLETE, *PPEP_WORK_ACTIVE_COMPLETE;

typedef struct _PEP_WORK_IDLE_STATE {
    POHANDLE DeviceHandle;
    ULONG Component;
    ULONG State;
} PEP_WORK_IDLE_STATE, *PPEP_WORK_IDLE_STATE;

typedef struct _PEP_WORK_DEVICE_POWER {
    POHANDLE DeviceHandle;
    BOOLEAN PowerRequired;
} PEP_WORK_DEVICE_POWER, *PPEP_WORK_DEVICE_POWER;

// BEGIN_PEPFX
typedef struct _PEP_WORK_POWER_CONTROL {
    POHANDLE DeviceHandle;
    LPCGUID PowerControlCode;
    PVOID RequestContext;
    PVOID InBuffer;
    SIZE_T InBufferSize;
    PVOID OutBuffer;
    SIZE_T OutBufferSize;
} PEP_WORK_POWER_CONTROL, *PPEP_WORK_POWER_CONTROL;

// END_PEPFX
typedef struct _PEP_WORK_DEVICE_IDLE {
    POHANDLE DeviceHandle;
    BOOLEAN IgnoreIdleTimeout;
} PEP_WORK_DEVICE_IDLE, *PPEP_WORK_DEVICE_IDLE;

// BEGIN_PEPFX
typedef struct _PEP_WORK_COMPLETE_IDLE_STATE {
    POHANDLE DeviceHandle;
    ULONG Component;
} PEP_WORK_COMPLETE_IDLE_STATE, *PPEP_WORK_COMPLETE_IDLE_STATE;

typedef struct _PEP_WORK_COMPLETE_PERF_STATE {
    POHANDLE DeviceHandle;
    ULONG Component;
    BOOLEAN Succeeded;
} PEP_WORK_COMPLETE_PERF_STATE, *PPEP_WORK_COMPLETE_PERF_STATE;

typedef struct _PEP_WORK_ACPI_NOTIFY {
    POHANDLE DeviceHandle;
    ULONG NotifyCode;
} PEP_WORK_ACPI_NOTIFY, *PPEP_WORK_ACPI_NOTIFY;

#define PEP_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE_FLAG_NONE 0x0

typedef struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE {
    POHANDLE DeviceHandle;
    ULONG CompletionFlags;
    NTSTATUS MethodStatus;
    PVOID CompletionContext;
    SIZE_T OutputArgumentSize;
    PACPI_METHOD_ARGUMENT OutputArguments;
} PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE,
    *PPEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE;

typedef struct _PEP_WORK_INFORMATION {
    PEP_WORK_TYPE WorkType;
    union {
        // END_PEPFX
        PEP_WORK_ACTIVE_COMPLETE ActiveComplete;                              // Deprecated: see below
        PEP_WORK_IDLE_STATE IdleState;                                        // Deprecated: see below
        PEP_WORK_DEVICE_POWER DevicePower;                                    // Deprecated: see below
        PEP_WORK_POWER_CONTROL PowerControl;                                  // PEPFX
        PEP_WORK_DEVICE_IDLE DeviceIdle;                                      // Deprecated: see below
        PEP_WORK_COMPLETE_IDLE_STATE CompleteIdleState;                       // PEPFX
        PEP_WORK_COMPLETE_PERF_STATE CompletePerfState;                       // PEPFX
        PEP_WORK_ACPI_NOTIFY AcpiNotify;                                      // PEPFX
        PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE ControlMethodComplete; // PEPFX
        // BEGIN_PEPFX
    };
} PEP_WORK_INFORMATION, *PPEP_WORK_INFORMATION;

#if PRAGMA_DEPRECATED_DDK

//
// Deprecated: See definition of PEP_WORK_TYPE for further details.
//

#pragma deprecated(_PEP_WORK_ACTIVE_COMPLETE)
#pragma deprecated(PEP_WORK_ACTIVE_COMPLETE)
#pragma deprecated(PPEP_WORK_ACTIVE_COMPLETE)

#pragma deprecated(_PEP_WORK_IDLE_STATE)
#pragma deprecated(PEP_WORK_IDLE_STATE)
#pragma deprecated(PPEP_WORK_IDLE_STATE)

#pragma deprecated(_PEP_WORK_DEVICE_POWER)
#pragma deprecated(PEP_WORK_DEVICE_POWER)
#pragma deprecated(PPEP_WORK_DEVICE_POWER)

#pragma deprecated(_PEP_WORK_DEVICE_IDLE)
#pragma deprecated(PEP_WORK_DEVICE_IDLE)
#pragma deprecated(PPEP_WORK_DEVICE_IDLE)

#endif // PRAGMA_DEPRECATED_DDK

typedef
_Function_class_(PEPCALLBACKNOTIFYDPM)
_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
PEPCALLBACKNOTIFYDPM (
    _In_ ULONG Notification,
    _In_ PVOID Data
    );

typedef PEPCALLBACKNOTIFYDPM *PPEPCALLBACKNOTIFYDPM;

typedef
_Function_class_(PEPCALLBACKNOTIFYPPM)
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
PEPCALLBACKNOTIFYPPM (
    _In_ PEPHANDLE Handle,
    _In_ ULONG Notification,
    _Inout_opt_ PVOID Data
    );

typedef PEPCALLBACKNOTIFYPPM *PPEPCALLBACKNOTIFYPPM;

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef
_Function_class_(PEPCALLBACKNOTIFYACPI)
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
PEPCALLBACKNOTIFYACPI (
    _In_ ULONG Notification,
    _Inout_opt_ PVOID Data
    );

typedef PEPCALLBACKNOTIFYACPI *PPEPCALLBACKNOTIFYACPI;

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef struct _PEP_CRASHDUMP_INFORMATION {
    PEPHANDLE DeviceHandle;
    PVOID DeviceContext;
} PEP_CRASHDUMP_INFORMATION, *PPEP_CRASHDUMP_INFORMATION;

typedef
_Function_class_(PEPCALLBACKPOWERONCRASHDUMPDEVICE)
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
PEPCALLBACKPOWERONCRASHDUMPDEVICE (
    _In_ PPEP_CRASHDUMP_INFORMATION CrashdumpInformation
    );

typedef PEPCALLBACKPOWERONCRASHDUMPDEVICE *PPEPCALLBACKPOWERONCRASHDUMPDEVICE;

#endif

//
// Runtime device notifications for PEP.
//

// END_PEPFX
#if PRAGMA_DEPRECATED_DDK
#pragma deprecated(PEP_DPM_COMPONENT_ACTIVE) // See definition of PEP_WORK_TYPE for further details.
#endif

#define PEP_DPM_PREPARE_DEVICE                          0x01 // PEPFX
#define PEP_DPM_ABANDON_DEVICE                          0x02 // PEPFX
#define PEP_DPM_REGISTER_DEVICE                         0x03 // PEPFX
#define PEP_DPM_UNREGISTER_DEVICE                       0x04 // PEPFX
#define PEP_DPM_DEVICE_POWER_STATE                      0x05 // PEPFX
#define PEP_DPM_RESERVED_06                             0x06
#define PEP_DPM_COMPONENT_ACTIVE                        0x07 // Deprecated: see above
#define PEP_DPM_RESERVED_08                             0x08
#define PEP_DPM_RESERVED_09                             0x09
#define PEP_DPM_RESERVED_0A                             0x0A
#define PEP_DPM_RESERVED_0B                             0x0B
#define PEP_DPM_RESERVED_0C                             0x0C
#define PEP_DPM_WORK                                    0x0D // PEPFX
#define PEP_DPM_POWER_CONTROL_REQUEST                   0x0E // PEPFX
#define PEP_DPM_POWER_CONTROL_COMPLETE                  0x0F // PEPFX
#define PEP_DPM_SYSTEM_LATENCY_UPDATE                   0x10 // PEPFX
#define PEP_DPM_RESERVED_11                             0x11
#define PEP_DPM_DEVICE_STARTED                          0x12 // PEPFX
#define PEP_DPM_NOTIFY_COMPONENT_IDLE_STATE             0x13 // PEPFX
#define PEP_DPM_RESERVED_14                             0x14
#define PEP_DPM_REGISTER_DEBUGGER                       0x15 // PEPFX
#define PEP_DPM_RESERVED_16                             0x16
#define PEP_DPM_RESERVED_17                             0x17
// BEGIN_PEPFX

#if (NTDDI_VERSION == NTDDI_WIN8)

#define PEP_DPM_LOW_POWER_EPOCH                         0x18

#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

// END_PEPFX
#define PEP_DPM_RESERVED_18                             0x18
// BEGIN_PEPFX
#define PEP_DPM_REGISTER_CRASHDUMP_DEVICE               0x19
#define PEP_DPM_DEVICE_IDLE_CONSTRAINTS                 0x1A
#define PEP_DPM_COMPONENT_IDLE_CONSTRAINTS              0x1B

#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define PEP_DPM_QUERY_COMPONENT_PERF_CAPABILTIES        0x1C
#define PEP_DPM_QUERY_COMPONENT_PERF_SET                0x1D
#define PEP_DPM_QUERY_COMPONENT_PERF_SET_NAME           0x1E
#define PEP_DPM_QUERY_COMPONENT_PERF_STATES             0x1F
#define PEP_DPM_REGISTER_COMPONENT_PERF_STATES          0x20
#define PEP_DPM_REQUEST_COMPONENT_PERF_STATE            0x21
#define PEP_DPM_QUERY_CURRENT_COMPONENT_PERF_STATE      0x22
#define PEP_DPM_QUERY_DEBUGGER_TRANSITION_REQUIREMENTS  0x23
#define PEP_DPM_QUERY_SOC_SUBSYSTEM_COUNT               0x24
#define PEP_DPM_QUERY_SOC_SUBSYSTEM                     0x25
#define PEP_DPM_RESET_SOC_SUBSYSTEM_ACCOUNTING          0x26
#define PEP_DPM_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME       0x27
#define PEP_DPM_QUERY_SOC_SUBSYSTEM_METADATA            0x28

#endif

//
// Runtime processor notifications for PEP.
//

// END_PEPFX

#if PRAGMA_DEPRECATED_DDK

//
// These runtime processor notifications are deprecated and should not be used.
//

#pragma deprecated(PEP_NOTIFY_PPM_QUERY_IDLE_STATES)
#pragma deprecated(PEP_NOTIFY_PPM_IDLE_SELECT)
#pragma deprecated(PEP_NOTIFY_PPM_IDLE_CANCEL)
#pragma deprecated(PEP_NOTIFY_PPM_QUERY_LP_SETTINGS)
#endif

#define PEP_NOTIFY_PPM_QUERY_CAPABILITIES               0x01 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_IDLE_STATES                0x02 // Deprecated: see above
#define PEP_NOTIFY_PPM_IDLE_SELECT                      0x03 // Deprecated: see above
#define PEP_NOTIFY_PPM_IDLE_CANCEL                      0x04 // Deprecated: see above
#define PEP_NOTIFY_PPM_IDLE_EXECUTE                     0x05 // PEPFX
#define PEP_NOTIFY_PPM_IDLE_COMPLETE                    0x06 // PEPFX
#define PEP_NOTIFY_PPM_IS_PROCESSOR_HALTED              0x07 // PEPFX
#define PEP_NOTIFY_PPM_INITIATE_WAKE                    0x08 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_FEEDBACK_COUNTERS          0x09 // PEPFX
#define PEP_NOTIFY_PPM_FEEDBACK_READ                    0x0A // PEPFX
#define PEP_NOTIFY_PPM_QUERY_PERF_CAPABILITIES          0x0B // PEPFX
#define PEP_NOTIFY_PPM_PERF_CONSTRAINTS                 0x0C // PEPFX
#define PEP_NOTIFY_PPM_PERF_SET                         0x0D // PEPFX
#define PEP_NOTIFY_PPM_PARK_SELECTION                   0x0E // PEPFX
#define PEP_NOTIFY_PPM_CST_STATES                       0x0F // PEPFX
#define PEP_NOTIFY_PPM_QUERY_PLATFORM_STATES            0x10 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_LP_SETTINGS                0x11 // Deprecated: see above
#define PEP_NOTIFY_PPM_QUERY_IDLE_STATES_V2             0x12 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_PLATFORM_STATE             0x13 // PEPFX
#define PEP_NOTIFY_PPM_TEST_IDLE_STATE                  0x14 // PEPFX
#define PEP_NOTIFY_PPM_IDLE_PRE_EXECUTE                 0x15 // PEPFX
#define PEP_NOTIFY_PPM_UPDATE_PLATFORM_STATE            0x16 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_PLATFORM_STATE_RESIDENCIES 0x17 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_VETO_REASONS               0x18 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_VETO_REASON                0x19 // PEPFX
#define PEP_NOTIFY_PPM_ENUMERATE_BOOT_VETOES            0x1A // PEPFX
#define PEP_NOTIFY_PPM_QUERY_COORDINATED_STATE_NAME     0x1B // PEPFX
#define PEP_NOTIFY_PPM_QUERY_PROCESSOR_STATE_NAME       0x1C // PEPFX
#define PEP_NOTIFY_PPM_QUERY_COORDINATED_STATES         0x1D // PEPFX
#define PEP_NOTIFY_PPM_QUERY_COORDINATED_DEPENDENCY     0x1E // PEPFX
#define PEP_NOTIFY_PPM_PARK_SELECTION_V2                0x1F // PEPFX
#define PEP_NOTIFY_PPM_PARK_MASK                        0x20 // PEPFX
#define PEP_NOTIFY_PPM_PERF_CHECK_COMPLETE              0x21 // PEPFX
#define PEP_NOTIFY_PPM_LPI_SUPPORTED                    0x22 // PEPFX
#define PEP_NOTIFY_PPM_LPI_PROCESSOR_STATES             0x23 // PEPFX
#define PEP_NOTIFY_PPM_LPI_COORDINATED_STATES           0x24 // PEPFX
#define PEP_NOTIFY_PPM_LPI_PRE_EXECUTE                  0x25 // PEPFX
#define PEP_NOTIFY_PPM_LPI_COMPLETE                     0x26 // PEPFX
#define PEP_NOTIFY_PPM_ENTER_SYSTEM_STATE               0x27 // PEPFX 
#define PEP_NOTIFY_PPM_RESUME_FROM_SYSTEM_STATE         0x28 // PEPFX 
#define PEP_NOTIFY_PPM_QUERY_DISCRETE_PERF_STATES       0x29 // PEPFX
#define PEP_NOTIFY_PPM_QUERY_DOMAIN_INFO                0x2a // PEPFX
#define PEP_NOTIFY_PPM_PERF_SET_STATE                   0x2b // PEPFX

// BEGIN_PEPFX
typedef struct _PEP_PREPARE_DEVICE {
    PCUNICODE_STRING DeviceId;
    BOOLEAN DeviceAccepted;
} PEP_PREPARE_DEVICE, *PPEP_PREPARE_DEVICE;

typedef struct _PEP_ABANDON_DEVICE {
    PCUNICODE_STRING DeviceId;
    BOOLEAN DeviceAccepted;
} PEP_ABANDON_DEVICE, *PPEP_ABANDON_DEVICE;

typedef struct _PEP_REGISTER_DEVICE_V2 {
    PCUNICODE_STRING DeviceId;
    POHANDLE KernelHandle;
    PPEP_DEVICE_REGISTER_V2 Register;
    PEPHANDLE DeviceHandle;
    PEP_DEVICE_ACCEPTANCE_TYPE DeviceAccepted;
} PEP_REGISTER_DEVICE_V2, *PPEP_REGISTER_DEVICE_V2;

typedef struct _PEP_UNREGISTER_DEVICE {
    PEPHANDLE DeviceHandle;
} PEP_UNREGISTER_DEVICE, *PPEP_UNREGISTER_DEVICE;

typedef struct _PEP_DEVICE_POWER_STATE {
    PEPHANDLE DeviceHandle;
    DEVICE_POWER_STATE PowerState;
    BOOLEAN Complete;
    BOOLEAN SystemTransition;
} PEP_DEVICE_POWER_STATE, *PPEP_DEVICE_POWER_STATE;

// END_PEPFX
// Deprecated: see definition of PEP_WORK_TYPE for further details. 
typedef struct _PEP_COMPONENT_ACTIVE {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    BOOLEAN Active;
    PPEP_WORK_INFORMATION WorkInformation;
    BOOLEAN NeedWork;
} PEP_COMPONENT_ACTIVE, *PPEP_COMPONENT_ACTIVE;

#if PRAGMA_DEPRECATED_DDK

#pragma deprecated(_PEP_COMPONENT_ACTIVE)
#pragma deprecated(PEP_COMPONENT_ACTIVE)
#pragma deprecated(PPEP_COMPONENT_ACTIVE)

#endif
// BEGIN_PEPFX
typedef struct _PEP_WORK {
    PPEP_WORK_INFORMATION WorkInformation;
    BOOLEAN NeedWork;
} PEP_WORK, *PPEP_WORK;

typedef struct _PEP_POWER_CONTROL_REQUEST {
    PEPHANDLE DeviceHandle;
    LPCGUID PowerControlCode;
    PVOID InBuffer;
    SIZE_T InBufferSize;
    PVOID OutBuffer;
    SIZE_T OutBufferSize;
    SIZE_T BytesReturned;
    NTSTATUS Status;
} PEP_POWER_CONTROL_REQUEST, *PPEP_POWER_CONTROL_REQUEST;

typedef struct _PEP_POWER_CONTROL_COMPLETE {
    PEPHANDLE DeviceHandle;
    LPCGUID PowerControlCode;
    PVOID RequestContext;
    SIZE_T BytesReturned;
    NTSTATUS Status;
} PEP_POWER_CONTROL_COMPLETE, *PPEP_POWER_CONTROL_COMPLETE;

typedef struct _PEP_SYSTEM_LATENCY {
    ULONGLONG Latency;
} PEP_SYSTEM_LATENCY, *PPEP_SYSTEM_LATENCY;

typedef struct _PEP_DEVICE_STARTED {
    PEPHANDLE DeviceHandle;
} PEP_DEVICE_STARTED, *PPEP_DEVICE_STARTED;

typedef struct _PEP_NOTIFY_COMPONENT_IDLE_STATE {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG IdleState;
    BOOLEAN DriverNotified;
    BOOLEAN Completed;
} PEP_NOTIFY_COMPONENT_IDLE_STATE, *PPEP_NOTIFY_COMPONENT_IDLE_STATE;

typedef struct _PEP_REGISTER_DEBUGGER {
    PEPHANDLE DeviceHandle;
} PEP_REGISTER_DEBUGGER, *PPEP_REGISTER_DEBUGGER;


#if (NTDDI_VERSION == NTDDI_WIN8)

typedef struct _PEP_LOW_POWER_EPOCH {
    BOOLEAN LowPowerEpoch;
} PEP_LOW_POWER_EPOCH, *PPEP_LOW_POWER_EPOCH;

#endif

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef struct _PEP_REGISTER_CRASHDUMP_DEVICE {
    PPEPCALLBACKPOWERONCRASHDUMPDEVICE PowerOnDumpDeviceCallback;
    PEPHANDLE DeviceHandle;
} PEP_REGISTER_CRASHDUMP_DEVICE, *PPEP_REGISTER_CRASHDUMP_DEVICE;

#define PEP_UNSPECIFIED_MINIMUM_STATE (MAXULONG)

typedef struct _PEP_DEVICE_PLATFORM_CONSTRAINTS {
    PEPHANDLE DeviceHandle;
    __field_ecount_full(PlatformStateCount)
    PDEVICE_POWER_STATE MinimumDStates;
    ULONG PlatformStateCount;
} PEP_DEVICE_PLATFORM_CONSTRAINTS, *PPEP_DEVICE_PLATFORM_CONSTRAINTS;

typedef struct _PEP_COMPONENT_PLATFORM_CONSTRAINTS {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    __field_ecount_full(PlatformStateCount)
    PULONG MinimumFStates;
    ULONG PlatformStateCount;
} PEP_COMPONENT_PLATFORM_CONSTRAINTS, *PPEP_COMPONENT_PLATFORM_CONSTRAINTS;

#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
typedef enum _PEP_PERF_STATE_UNIT {
    PepPerfStateUnitOther,
    PepPerfStateUnitFrequency,
    PepPerfStateUnitBandwidth,
    PepPerfStateUnitMax
} PEP_PERF_STATE_UNIT, *PPEP_PERF_STATE_UNIT;

typedef enum _PEP_PERF_STATE_TYPE {
    PepPerfStateTypeDiscrete,
    PepPerfStateTypeRange,
    PepPerfStateTypeMax
} PEP_PERF_STATE_TYPE, *PPEP_PERF_STATE_TYPE;

typedef struct _PEP_PERF_STATE {
    ULONGLONG Value;
    PVOID Context;
} PEP_PERF_STATE, *PPEP_PERF_STATE;

typedef struct _PEP_QUERY_COMPONENT_PERF_CAPABILITIES {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG SetCount;
} PEP_QUERY_COMPONENT_PERF_CAPABILITIES,
    *PPEP_QUERY_COMPONENT_PERF_CAPABILITIES;

typedef struct _PEP_QUERY_COMPONENT_PERF_SET {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG Set;
    ULONGLONG Flags;
    PEP_PERF_STATE_UNIT Unit;
    PEP_PERF_STATE_TYPE Type;
    union {
        struct {
            ULONG Count;
        } Discrete;
        struct {
            ULONGLONG Minimum;
            ULONGLONG Maximum;
        } Range;
    };
} PEP_QUERY_COMPONENT_PERF_SET, *PPEP_QUERY_COMPONENT_PERF_SET;

typedef struct _PEP_QUERY_COMPONENT_PERF_SET_NAME {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG Set;
    USHORT NameSize;
    PWCHAR Name;
} PEP_QUERY_COMPONENT_PERF_SET_NAME, *PPEP_QUERY_COMPONENT_PERF_SET_NAME;

typedef struct _PEP_QUERY_COMPONENT_PERF_STATES {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG Set;
    PPEP_PERF_STATE States;
} PEP_QUERY_COMPONENT_PERF_STATES, *PPEP_QUERY_COMPONENT_PERF_STATES;

typedef struct _PEP_COMPONENT_PERF_SET {
    UNICODE_STRING Name;
    ULONGLONG Flags;
    PEP_PERF_STATE_UNIT Unit;
    PEP_PERF_STATE_TYPE Type;
    union {
        struct {
            ULONG Count;
            PPEP_PERF_STATE States;
        } Discrete;
        struct {
            ULONGLONG Minimum;
            ULONGLONG Maximum;
        } Range;
    };
} PEP_COMPONENT_PERF_SET, *PPEP_COMPONENT_PERF_SET;

typedef struct _PEP_COMPONENT_PERF_INFO {
    ULONG SetCount;
    PEP_COMPONENT_PERF_SET PerfStateSets[ANYSIZE_ARRAY];
} PEP_COMPONENT_PERF_INFO, *PPEP_COMPONENT_PERF_INFO;

typedef struct _PEP_REGISTER_COMPONENT_PERF_STATES {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONGLONG Flags;
    PPEP_COMPONENT_PERF_INFO PerfStateInfo;
} PEP_REGISTER_COMPONENT_PERF_STATES, *PPEP_REGISTER_COMPONENT_PERF_STATES;

typedef struct _PEP_COMPONENT_PERF_STATE_REQUEST {
    ULONG Set;
    union {
        ULONG StateIndex;
        ULONGLONG StateValue;
    };
} PEP_COMPONENT_PERF_STATE_REQUEST, *PPEP_COMPONENT_PERF_STATE_REQUEST;

typedef struct _PEP_REQUEST_COMPONENT_PERF_STATE {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    BOOLEAN Completed;
    BOOLEAN Succeeded;
    ULONG PerfRequestsCount;
    PPEP_COMPONENT_PERF_STATE_REQUEST PerfRequests;
} PEP_REQUEST_COMPONENT_PERF_STATE, *PPEP_REQUEST_COMPONENT_PERF_STATE;

typedef struct _PEP_QUERY_CURRENT_COMPONENT_PERF_STATE {
    PEPHANDLE DeviceHandle;
    ULONG Component;
    ULONG Set;
    union {
        ULONG StateIndex;
        ULONGLONG StateValue;
    };
} PEP_QUERY_CURRENT_COMPONENT_PERF_STATE,
    *PPEP_QUERY_CURRENT_COMPONENT_PERF_STATE;

typedef struct _PEP_DEBUGGER_TRANSITION_REQUIREMENTS {
    PEPHANDLE DeviceHandle;
    ULONG PlatformStateCount;
    _Field_size_full_(PlatformStateCount) PBOOLEAN PowerTransitionRequired;
} PEP_DEBUGGER_TRANSITION_REQUIREMENTS, *PPEP_DEBUGGER_TRANSITION_REQUIREMENTS;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM_COUNT {
    ULONG PlatformIdleStateIndex;
    ULONG SubsystemCount;
    ULONG Flags;
} PEP_QUERY_SOC_SUBSYSTEM_COUNT, *PPEP_QUERY_SOC_SUBSYSTEM_COUNT;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM {
    ULONG PlatformIdleStateIndex;
    ULONG SubsystemIndex;
    PVOID SubsystemHandle;
    UNICODE_STRING ParentName;
    UNICODE_STRING SubsystemName;
    ULONG MetadataCount;
    ULONG Flags;
} PEP_QUERY_SOC_SUBSYSTEM, *PPEP_QUERY_SOC_SUBSYSTEM;

typedef struct _PEP_RESET_SOC_SUBSYSTEM_ACCOUNTING {
    ULONG PlatformIdleStateIndex;
    ULONG Flags;
} PEP_RESET_SOC_SUBSYSTEM_ACCOUNTING, *PPEP_RESET_SOC_SUBSYSTEM_ACCOUNTING;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME {
    ULONG PlatformIdleStateIndex;
    PVOID SubsystemHandle;
    PCUNICODE_STRING SubsystemName;
    ULONG64 BlockingTime;
    ULONG Flags;
} PEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME, *PPEP_QUERY_SOC_SUBSYSTEM_BLOCKING_TIME;

typedef struct _PEP_SOC_SUBSYSTEM_METADATA {
    UNICODE_STRING Key;
    UNICODE_STRING Value;
} PEP_SOC_SUBSYSTEM_METADATA, *PPEP_SOC_SUBSYSTEM_METADATA;

typedef struct _PEP_QUERY_SOC_SUBSYSTEM_METADATA {
    ULONG PlatformIdleStateIndex;
    PVOID SubsystemHandle;
    PCUNICODE_STRING SubsystemName;
    ULONG Flags;
    ULONG MetadataCount;
    PPEP_SOC_SUBSYSTEM_METADATA Metadata[ANYSIZE_ARRAY];
} PEP_QUERY_SOC_SUBSYSTEM_METADATA, *PPEP_QUERY_SOC_SUBSYSTEM_METADATA;

#endif

//
// PPM definitions for PEP runtime framework.
//

// END_PEPFX
typedef struct _PEP_PROCESSOR_IDLE_STATE {
    union {
        ULONG Ulong;
        struct {
            ULONG Interruptible          :1;
            ULONG CacheCoherent          :1;
            ULONG ThreadContextRetained  :1;
            ULONG CStateType             :4;
            ULONG Reserved               :25;
        };
    };
} PEP_PROCESSOR_IDLE_STATE, *PPEP_PROCESSOR_IDLE_STATE;

// BEGIN_PEPFX
typedef struct _PEP_PROCESSOR_IDLE_STATE_V2 {
    union {
        ULONG Ulong;
        struct {
            ULONG Interruptible          :1;
            ULONG CacheCoherent          :1;
            ULONG ThreadContextRetained  :1;
            ULONG CStateType             :4;
            ULONG WakesSpuriously        :1;
            ULONG PlatformOnly           :1;
            ULONG Autonomous             :1;
            ULONG Reserved               :22;
        };
    };
    ULONG Latency;
    ULONG BreakEvenDuration;
} PEP_PROCESSOR_IDLE_STATE_V2, *PPEP_PROCESSOR_IDLE_STATE_V2;

#define PEP_PROCESSOR_LATENCY_C_STATE   0xffffffff

typedef struct _PEP_PROCESSOR_IDLE_DEPENDENCY  {
    // END_PEPFX
    union {
    POHANDLE TargetProcessor; // PEPFX
    PVOID DeviceContext;
    };
    // BEGIN_PEPFX
    UCHAR ExpectedState;
    BOOLEAN AllowDeeperStates;
    BOOLEAN LooseDependency;
} PEP_PROCESSOR_IDLE_DEPENDENCY , *PPEP_PROCESSOR_IDLE_DEPENDENCY;

// END_PEPFX
//
// For efficiency of translation, the idle dependency message is translated
// inline by PO. To avoid exposing this abstraction to the PEP, wdm.h does not
// include the union.
//
// Assert the size of the two types is identical, to avoid hidden side effects
// of the union.
//

C_ASSERT(FIELD_SIZE(PEP_PROCESSOR_IDLE_DEPENDENCY, TargetProcessor) ==
         FIELD_SIZE(PEP_PROCESSOR_IDLE_DEPENDENCY, DeviceContext));

typedef enum {
    PepIdleTypeProcessor = 0, // Idle duration applies to current processor.
    PepIdleTypePlatform,      // Idle duration applies to all processors.
    PepIdleTypeMax
} PEP_PROCESSOR_IDLE_TYPE, *PPEP_PROCESSOR_IDLE_TYPE;

typedef struct _PEP_PROCESSOR_IDLE_CONSTRAINTS {
    ULONGLONG IdleDuration;
    BOOLEAN Interruptible;
    PEP_PROCESSOR_IDLE_TYPE Type;
} PEP_PROCESSOR_IDLE_CONSTRAINTS, *PPEP_PROCESSOR_IDLE_CONSTRAINTS;

typedef enum {
    PepIdleCancelWorkPending = 0,        // Current processor has pending work.
    PepIdleCancelDependencyCheckFailed,  // Secondaries are not ready.
    PepIdleCancelNoCState,               // Corresponding C-state is missing.
    PepIdleCancelMax
} PEP_PROCESSOR_IDLE_CANCEL_CODE, *PPEP_PROCESSOR_IDLE_CANCEL_CODE;

// BEGIN_PEPFX
typedef struct _PEP_PPM_QUERY_CAPABILITIES {
    ULONG FeedbackCounterCount;
    ULONG IdleStateCount;
    BOOLEAN PerformanceStatesSupported;
    BOOLEAN ParkingSupported;
    UCHAR DiscretePerformanceStateCount;
} PEP_PPM_QUERY_CAPABILITIES, *PPEP_PPM_QUERY_CAPABILITIES;

// END_PEPFX
typedef struct _PEP_PPM_QUERY_IDLE_STATES {
    ULONG Count;
    ULONG MaximumCoordinatedProcessors;
    _Field_size_(Count) PEP_PROCESSOR_IDLE_STATE IdleStates[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_IDLE_STATES, *PPEP_PPM_QUERY_IDLE_STATES;

// BEGIN_PEPFX
typedef struct _PEP_PPM_QUERY_IDLE_STATES_V2 {
    ULONG Count;
    _Field_size_(Count) PEP_PROCESSOR_IDLE_STATE_V2 IdleStates[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_IDLE_STATES_V2, *PPEP_PPM_QUERY_IDLE_STATES_V2;

typedef struct _PEP_PPM_QUERY_PLATFORM_STATES {
    ULONG PlatformStateCount;
} PEP_PPM_QUERY_PLATFORM_STATES, *PPEP_PPM_QUERY_PLATFORM_STATES;

typedef struct _PEP_PLATFORM_IDLE_STATE {
    // END_PEPFX
    union {
    POHANDLE InitiatingProcessor; // PEPFX
    PVOID DeviceContext;
    };
    // BEGIN_PEPFX
    UCHAR InitiatingState;
    ULONG Latency;
    ULONG BreakEvenDuration;
    _Field_range_(0, DependencyArrayCount) ULONG DependencyArrayUsed;
    ULONG DependencyArrayCount;
    _Field_size_part_(DependencyArrayCount, DependencyArrayUsed) PEP_PROCESSOR_IDLE_DEPENDENCY DependencyArray[ANYSIZE_ARRAY];
} PEP_PLATFORM_IDLE_STATE, *PPEP_PLATFORM_IDLE_STATE;

typedef struct _PEP_PPM_QUERY_PLATFORM_STATE {
    ULONG StateIndex;
    PEP_PLATFORM_IDLE_STATE State;
} PEP_PPM_QUERY_PLATFORM_STATE, *PPEP_PPM_QUERY_PLATFORM_STATE;

// END_PEPFX
#if PRAGMA_DEPRECATED_DDK
#pragma deprecated(PEP_PPM_LP_SETTINGS_V1)
#endif
#define PEP_PPM_LP_SETTINGS_V1      1
#define PEP_PPM_LP_SETTINGS_VERSION PEP_PPM_LP_SETTINGS_V1
typedef struct _PEP_PPM_QUERY_LP_SETTINGS {
    HANDLE RegistryRoot;
} PEP_PPM_QUERY_LP_SETTINGS, *PPEP_PPM_QUERY_LP_SETTINGS;

typedef struct _PEP_PPM_IDLE_SELECT {
    PPEP_PROCESSOR_IDLE_CONSTRAINTS Constraints;
    BOOLEAN AbortTransition;
    ULONG IdleStateIndex;
    _Field_range_(0, DependencyArrayCount) ULONG DependencyArrayUsed;
    ULONG DependencyArrayCount;
    _Field_size_part_(DependencyArrayCount, DependencyArrayUsed) PPEP_PROCESSOR_IDLE_DEPENDENCY DependencyArray;
    ULONG PlatformIdleStateIndex;
} PEP_PPM_IDLE_SELECT, *PPEP_PPM_IDLE_SELECT;

#define PEP_PPM_EXPECTED_STATE_WAKE    (UCHAR)(-1)
// BEGIN_PEPFX

#define PEP_IDLE_VETO_NONE            0

#define PEP_PLATFORM_IDLE_STATE_NONE 0xffffffff

#define PEP_PROCESSOR_IDLE_STATE_UNKNOWN 0xffffffff

typedef struct _PEP_PPM_TEST_IDLE_STATE {
    ULONG ProcessorState;
    ULONG PlatformState;
    ULONG VetoReason;
} PEP_PPM_TEST_IDLE_STATE, *PPEP_PPM_TEST_IDLE_STATE;

// END_PEPFX
typedef struct _PEP_PPM_IDLE_CANCEL {
    PEP_PROCESSOR_IDLE_CANCEL_CODE CancelCode;
} PEP_PPM_IDLE_CANCEL, *PPEP_PPM_IDLE_CANCEL;

// BEGIN_PEPFX
typedef struct _PEP_PPM_IDLE_EXECUTE {
    NTSTATUS Status;
    ULONG ProcessorState;
    ULONG PlatformState;
} PEP_PPM_IDLE_EXECUTE, *PPEP_PPM_IDLE_EXECUTE;

typedef struct _PEP_PPM_IDLE_EXECUTE_V2 {
    NTSTATUS Status;
    ULONG ProcessorState;
    ULONG PlatformState;
    ULONG CoordinatedStateCount;
    _Field_size_(CoordinatedStateCount) PULONG CoordinatedStates;
} PEP_PPM_IDLE_EXECUTE_V2, *PPEP_PPM_IDLE_EXECUTE_V2;

typedef struct _PEP_PPM_IDLE_COMPLETE {
    ULONG ProcessorState;
    ULONG PlatformState;
} PEP_PPM_IDLE_COMPLETE, *PPEP_PPM_IDLE_COMPLETE;

typedef struct _PEP_PPM_IDLE_COMPLETE_V2 {
    ULONG ProcessorState;
    ULONG PlatformState;
    ULONG CoordinatedStateCount;
    _Field_size_(CoordinatedStateCount) PULONG CoordinatedStates;
} PEP_PPM_IDLE_COMPLETE_V2, *PPEP_PPM_IDLE_COMPLETE_V2;

typedef struct _PEP_PPM_IS_PROCESSOR_HALTED {
    BOOLEAN Halted;
} PEP_PPM_IS_PROCESSOR_HALTED, *PPEP_PPM_IS_PROCESSOR_HALTED;

typedef struct _PEP_PPM_INITIATE_WAKE {
    BOOLEAN NeedInterruptForCompletion;
} PEP_PPM_INITIATE_WAKE, *PPEP_PPM_INITIATE_WAKE;

typedef struct _PEP_PROCESSOR_FEEDBACK_COUNTER {
    struct {
        ULONG Affinitized       :1;
        ULONG Type              :2;
        ULONG Counter           :4;
        ULONG DiscountIdle      :1;
        ULONG Reserved          :24;
    };
    ULONG NominalRate;
} PEP_PROCESSOR_FEEDBACK_COUNTER, *PPEP_PROCESSOR_FEEDBACK_COUNTER;

typedef struct _PEP_PPM_QUERY_FEEDBACK_COUNTERS {
    ULONG Count;
    PEP_PROCESSOR_FEEDBACK_COUNTER Counters[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_FEEDBACK_COUNTERS, *PPEP_PPM_QUERY_FEEDBACK_COUNTERS;

#define PROCESSOR_FEEDBACK_TYPE_INSTANTANEOUS     0x00
#define PROCESSOR_FEEDBACK_TYPE_RELATIVE          0x01

#define PROCESSOR_FEEDBACK_COUNTER_FREQUENCY      0x00
#define PROCESSOR_FEEDBACK_COUNTER_PERFORMANCE    0x01

typedef struct _PEP_PPM_FEEDBACK_READ {
    ULONG CounterIndex;
    union {
        ULONG64 InstantaneousValue;
        struct {
            ULONG64 NominalCount;
            ULONG64 ActualCount;
        };
    };
} PEP_PPM_FEEDBACK_READ, *PPEP_PPM_FEEDBACK_READ;

typedef struct _PEP_PPM_QUERY_PERF_CAPABILITIES {
    ULONG HighestPerformance;
    ULONG NominalPerformance;
    ULONG LowestNonlinearPerformance;
    ULONG LowestPerformance;
    ULONG DomainId;
    ULONG DomainMembers;
} PEP_PPM_QUERY_PERF_CAPABILITIES, *PPEP_PPM_QUERY_PERF_CAPABILITIES;

#define PERFORMANCE_LIMIT_THERMAL               (1 << 0)
#define PERFORMANCE_LIMIT_POWER                 (1 << 1)
#define PERFORMANCE_LIMIT_DOMAIN_DEPENDENCY     (1 << 2)

typedef struct _PEP_PPM_QUERY_PERF_CONSTRAINTS {
    ULONG GuaranteedPerformanceLimit;
    ULONG LimitReasons;
} PEP_PPM_PERF_CONSTRAINTS, *PPEP_PPM_PERF_CONSTRAINTS;

typedef struct _PEP_PPM_PERF_SET {
    ULONG MinimumPerformance;
    ULONG MaximumPerformance;
    ULONG DesiredPerformance;
    ULONG TimeWindow;
    ULONG PerformanceTolerance;
} PEP_PPM_PERF_SET, *PPEP_PPM_PERF_SET;

typedef struct _PEP_PROCESSOR_PARK_PREFERENCE {
    // END_PEPFX
    union {
    PEPHANDLE Processor; // PEPFX
    POHANDLE KernelContext;
    };
    // BEGIN_PEPFX
    UCHAR PoPreference;
    UCHAR PepPreference;
} PEP_PROCESSOR_PARK_PREFERENCE, *PPEP_PROCESSOR_PARK_PREFERENCE;

#define PROCESSOR_PARK_PREFERENCE_NONE          0
#define PROCESSOR_PARK_PREFERENCE_PARKED        1
#define PROCESSOR_PARK_PREFERENCE_UNPARKED      2

typedef struct _PEP_PPM_PARK_SELECTION {
    ULONG AdditionalUnparkedProcessors;
    ULONG Count;
    _Field_size_full_(Count) PPEP_PROCESSOR_PARK_PREFERENCE Processors;
} PEP_PPM_PARK_SELECTION, *PPEP_PPM_PARK_SELECTION;

#define PROCESSOR_PARK_TYPE_CORE_PARKING       0x0
#define PROCESSOR_PARK_TYPE_INTERRUPT_STEERING 0x1

typedef struct _PEP_PPM_PARK_SELECTION_V2 {
    ULONG AdditionalUnparkedProcessors;
    ULONG Count;
    _Field_size_full_(Count) PPEP_PROCESSOR_PARK_PREFERENCE Processors;
    ULONGLONG EvaluationTime;
    UCHAR EvaluationType;
} PEP_PPM_PARK_SELECTION_V2, *PPEP_PPM_PARK_SELECTION_V2;

typedef struct _PEP_PROCESSOR_PARK_STATE {
    // END_PEPFX
    union {
        PEPHANDLE Processor; // PEPFX
        POHANDLE KernelContext;
    };
    // BEGIN_PEPFX
    BOOLEAN Parked;
    UCHAR Reserved[3];
} PEP_PROCESSOR_PARK_STATE, *PPEP_PROCESSOR_PARK_STATE;

typedef struct _PEP_PPM_PARK_MASK {
    ULONG Count;
    ULONGLONG EvaluationTime;
    _Field_size_full_(Count) PPEP_PROCESSOR_PARK_STATE Processors;
} PEP_PPM_PARK_MASK, *PPEP_PPM_PARK_MASK;

typedef struct _PEP_PPM_PERF_CHECK_COMPLETE {
    ULONGLONG EvaluationTime;
} PEP_PPM_PERF_CHECK_COMPLETE, *PPEP_PPM_PERF_CHECK_COMPLETE;

typedef struct _PEP_PPM_CST_STATE {
    UCHAR Type;
    USHORT Latency;
    ULONG Power;
    UCHAR AddressSpaceId;
    UCHAR BitWidth;
    UCHAR BitOffset;
    UCHAR AccessSize;
    PHYSICAL_ADDRESS Address;
} PEP_PPM_CST_STATE, *PPEP_PPM_CST_STATE;

typedef struct _PEP_PPM_CST_STATES {
    ULONG Count;
    _Field_size_(Count) PPEP_PPM_CST_STATE IdleStates;
} PEP_PPM_CST_STATES, *PPEP_PPM_CST_STATES;

// {29181FA1-4BF3-4c2e-B314-A6D226322B00}
DEFINE_GUID(GUID_PPM_PERF_CONSTRAINT_CHANGE,
0x29181fa1, 0x4bf3, 0x4c2e, 0xb3, 0x14, 0xa6, 0xd2, 0x26, 0x32, 0x2b, 0x0);

typedef struct _PEP_PPM_PLATFORM_STATE_RESIDENCY {
    ULONG64 Residency;
    ULONG64 TransitionCount;
} PEP_PPM_PLATFORM_STATE_RESIDENCY, *PPEP_PPM_PLATFORM_STATE_RESIDENCY;

typedef struct _PEP_PPM_PLATFORM_STATE_RESIDENCIES {
    ULONG Count;
    PPEP_PPM_PLATFORM_STATE_RESIDENCY States;
} PEP_PPM_PLATFORM_STATE_RESIDENCIES, *PPEP_PPM_PLATFORM_STATE_RESIDENCIES;

typedef struct _PEP_PPM_QUERY_VETO_REASONS {
    ULONG VetoReasonCount;
} PEP_PPM_QUERY_VETO_REASONS, *PPEP_PPM_QUERY_VETO_REASONS;

typedef struct _PEP_PPM_QUERY_VETO_REASON {
    ULONG VetoReason;
    USHORT NameSize;
    PWSTR Name;
} PEP_PPM_QUERY_VETO_REASON, *PPEP_PPM_QUERY_VETO_REASON;

typedef struct _PEP_PPM_QUERY_STATE_NAME {
    ULONG StateIndex;
    USHORT NameSize;
    PWSTR Name;
} PEP_PPM_QUERY_STATE_NAME, *PPEP_PPM_QUERY_STATE_NAME;

typedef struct _PEP_COORDINATED_IDLE_STATE {
    ULONG Latency;
    ULONG BreakEvenDuration;
    ULONG DependencyCount;
    ULONG MaximumDependencySize;
} PEP_COORDINATED_IDLE_STATE, *PPEP_COORDINATED_IDLE_STATE;

typedef struct _PEP_PPM_QUERY_COORDINATED_STATES {
    ULONG Count;
    _Field_size_(Count) PEP_COORDINATED_IDLE_STATE States[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_COORDINATED_STATES, *PPEP_PPM_QUERY_COORDINATED_STATES;

typedef struct _PEP_COORDINATED_DEPENDENCY_OPTION {
    UCHAR ExpectedStateIndex;
    BOOLEAN LooseDependency;
    BOOLEAN InitiatingState;
    BOOLEAN DependentState;
} PEP_COORDINATED_DEPENDENCY_OPTION, *PPEP_COORDINATED_DEPENDENCY_OPTION;

typedef struct _PEP_PPM_QUERY_COORDINATED_DEPENDENCY {
    ULONG StateIndex;
    ULONG DependencyIndex;
    ULONG DependencySize;
    _Field_range_(0, DependencySize) ULONG DependencySizeUsed;
    // END_PEPFX
    union {
        POHANDLE TargetProcessor; // PEPFX
        PVOID DeviceContext;
    };
    // BEGIN_PEPFX
    _Field_size_part_(DependencySize, DependencySizeUsed) PEP_COORDINATED_DEPENDENCY_OPTION Options[ANYSIZE_ARRAY];
} PEP_PPM_QUERY_COORDINATED_DEPENDENCY, *PPEP_PPM_QUERY_COORDINATED_DEPENDENCY;

typedef struct _PEP_PPM_LPI_SUPPORTED {
    BOOLEAN OverrideLpiStates;
} PEP_PPM_LPI_SUPPORTED, *PPEP_PPM_LPI_SUPPORTED;

typedef struct _PEP_PPM_LPI_REGISTER {
    UCHAR               AddressSpaceID;
    UCHAR               BitWidth;
    UCHAR               BitOffset;
    UCHAR               AccessSize;
    PHYSICAL_ADDRESS    Address;
} PEP_PPM_LPI_REGISTER, *PPEP_PPM_LPI_REGISTER;    

typedef struct _PEP_PPM_PROCESSOR_LPI_STATE {
    ULONG MinResidency;
    ULONG WakeupLatency;
    union {
        ULONG AsUlong;
        struct {
            ULONG Enabled                :1;
            ULONG Reserved               :31;
        };
    } Flags;
    union {
        ULONG AsUlong;
        struct {
            ULONG CoreContextLost        :1;
            ULONG TraceContextLost       :1;
            ULONG GICR                   :1;
            ULONG GICD                   :1;
            ULONG Reserved               :28;
        } Arm;
    } ArchContextFlags;
    ULONG ResidencyCounterFrequency;
    PEP_PPM_LPI_REGISTER EntryMethod;
    PEP_PPM_LPI_REGISTER ResidencyCounter;
    PEP_PPM_LPI_REGISTER UsageCounter;
    PWSTR StateName;
} PEP_PPM_PROCESSOR_LPI_STATE, *PPEP_PPM_PROCESSOR_LPI_STATE;

typedef struct _PEP_PPM_LPI_PROCESSOR_STATES {
    ULONG Count;
    PEP_PPM_PROCESSOR_LPI_STATE LpiStates[ANYSIZE_ARRAY];
} PEP_PPM_LPI_PROCESSOR_STATES, *PPEP_PPM_LPI_PROCESSOR_STATES;

typedef struct _PEP_PPM_LPI_COORDINATED_DEPENDENCY {
    // END_PEPFX
    union {
        PEPHANDLE TargetProcessor; // PEPFX
        PVOID KernelContext;
    };
    // BEGIN_PEPFX
    ULONG OptionCount;
    PULONG Options;
} PEP_PPM_LPI_COORDINATED_DEPENDENCY, *PPEP_PPM_LPI_COORDINATED_DEPENDENCY;

typedef struct _PEP_PPM_COORDINATED_LPI_STATE {
    ULONG MinResidency;
    ULONG WakeupLatency;
    union {
        ULONG AsUlong;
        struct {
            ULONG Enabled                :1;
            ULONG Reserved               :31;
        };
    } Flags;
    union {
        ULONG AsUlong;
        struct {
            ULONG CoreContextLost        :1;
            ULONG TraceContextLost       :1;
            ULONG GICR                   :1;
            ULONG GICD                   :1;
            ULONG Reserved               :28;
        } Arm;
    } ArchContextFlags;
    ULONG ResidencyCounterFrequency;
    BOOLEAN IntegerEntryMethod;
    union {
        PEP_PPM_LPI_REGISTER AsRegister;
        ULONG64 AsInteger;
    } EntryMethod;
    PEP_PPM_LPI_REGISTER ResidencyCounter;
    PEP_PPM_LPI_REGISTER UsageCounter;
    PWSTR StateName;
    ULONG DependencyCount;
    PPEP_PPM_LPI_COORDINATED_DEPENDENCY Dependencies;
} PEP_PPM_COORDINATED_LPI_STATE, *PPEP_PPM_COORDINATED_LPI_STATE;

typedef struct _PEP_PPM_LPI_COORDINATED_STATES {
    ULONG Count;
    PEP_PPM_COORDINATED_LPI_STATE LpiStates[ANYSIZE_ARRAY];
} PEP_PPM_LPI_COORDINATED_STATES, *PPEP_PPM_LPI_COORDINATED_STATES;

typedef struct _PEP_PPM_LPI_PRE_EXECUTE {
    NTSTATUS Status;
    ULONG CoordinatedStateCount;
    _Field_size_(CoordinatedStateCount) PULONG CoordinatedStates;
} PEP_PPM_LPI_PRE_EXECUTE, *PPEP_PPM_LPI_PRE_EXECUTE;

typedef struct _PEP_PPM_LPI_COMPLETE {
    ULONG CoordinatedStateCount;
    _Field_size_(CoordinatedStateCount) PULONG CoordinatedStates;
} PEP_PPM_LPI_COMPLETE, *PPEP_PPM_LPI_COMPLETE;

typedef struct _PEP_PPM_ENTER_SYSTEM_STATE {
    SYSTEM_POWER_STATE TargetState;
} PEP_PPM_ENTER_SYSTEM_STATE, *PPEP_PPM_ENTER_SYSTEM_STATE;

typedef struct _PEP_PPM_RESUME_FROM_SYSTEM_STATE {
    SYSTEM_POWER_STATE TargetState;
} PEP_PPM_RESUME_FROM_SYSTEM_STATE, *PPEP_PPM_RESUME_FROM_SYSTEM_STATE;

typedef struct _PEP_PROCESSOR_PERF_STATE {
    ULONG Performance;
    ULONG Frequency;
    ULONG Reserved[4];
} PEP_PROCESSOR_PERF_STATE, *PPEP_PROCESSOR_PERF_STATE;

typedef struct _PEP_PPM_QUERY_DISCRETE_PERF_STATES {
    ULONG Count;
    _Field_size_full_(Count) PPEP_PROCESSOR_PERF_STATE States;
} PEP_PPM_QUERY_DISCRETE_PERF_STATES, *PPEP_PPM_QUERY_DISCRETE_PERF_STATES;

#define PROCESSOR_DOMAIN_COORDIANTION_SW_ALL     0x00
#define PROCESSOR_DOMAIN_COORDIANTION_SW_ANY     0x01
#define PROCESSOR_DOMAIN_COORDIANTION_HW_ALL     0x02

typedef struct _PEP_PPM_QUERY_DOMAIN_INFO {
    ULONG DomainId;
    UCHAR CoordinationType;
    BOOLEAN IdleProcessorsDiscounted;
    BOOLEAN SchedulerDirectedTransitionsSupported;
    ULONG WorstCaseTransitionLatency;
    ULONG WorstCaseTransitionOverhead;
} PEP_PPM_QUERY_DOMAIN_INFO, *PPEP_PPM_QUERY_DOMAIN_INFO;

typedef struct _PEP_PPM_PERF_SET_STATE {
    UCHAR MinimumPerformanceState;
    UCHAR MaximumPerformanceState;
    UCHAR DesiredPerformanceState;
} PEP_PPM_PERF_SET_STATE, *PPEP_PPM_PERF_SET_STATE;

// END_PEPFX

#if PRAGMA_DEPRECATED_DDK

#pragma deprecated(_PEP_PROCESSOR_IDLE_STATE)
#pragma deprecated(PEP_PROCESSOR_IDLE_STATE)
#pragma deprecated(PPEP_PROCESSOR_IDLE_STATE)

#pragma deprecated(PepIdleTypeProcessor)
#pragma deprecated(PepIdleTypePlatform)
#pragma deprecated(PEP_PROCESSOR_IDLE_TYPE)
#pragma deprecated(PPEP_PROCESSOR_IDLE_TYPE)

#pragma deprecated(_PEP_PROCESSOR_IDLE_CONSTRAINTS)
#pragma deprecated(PEP_PROCESSOR_IDLE_CONSTRAINTS)
#pragma deprecated(PPEP_PROCESSOR_IDLE_CONSTRAINTS)

#pragma deprecated(PepIdleCancelWorkPending)
#pragma deprecated(PepIdleCancelDependencyCheckFailed)
#pragma deprecated(PepIdleCancelNoCState)
#pragma deprecated(PEP_PROCESSOR_IDLE_CANCEL_CODE)
#pragma deprecated(PPEP_PROCESSOR_IDLE_CANCEL_CODE)

#pragma deprecated(_PEP_PPM_QUERY_IDLE_STATES)
#pragma deprecated(PEP_PPM_QUERY_IDLE_STATES)
#pragma deprecated(PPEP_PPM_QUERY_IDLE_STATES)

#pragma deprecated(_PEP_PPM_QUERY_LP_SETTINGS)
#pragma deprecated(PEP_PPM_QUERY_LP_SETTINGS)
#pragma deprecated(PPEP_PPM_QUERY_LP_SETTINGS)

#pragma deprecated(_PEP_PPM_IDLE_SELECT)
#pragma deprecated(PEP_PPM_IDLE_SELECT)
#pragma deprecated(PPEP_PPM_IDLE_SELECT)

#pragma deprecated(_PEP_PPM_IDLE_CANCEL)
#pragma deprecated(PEP_PPM_IDLE_CANCEL)
#pragma deprecated(PPEP_PPM_IDLE_CANCEL)

#endif // PRAGMA_DEPRECATED_DDK
#define PEP_INFORMATION_V2 0x00000002

// BEGIN_PEPFX
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define PEP_INFORMATION_V3 0x00000003
#define PEP_INFORMATION_VERSION PEP_INFORMATION_V3

// END_PEPFX
#else

#define PEP_INFORMATION_VERSION PEP_INFORMATION_V2

// BEGIN_PEPFX
#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef struct _PEP_INFORMATION {
    USHORT Version;
    USHORT Size;
    PPEPCALLBACKNOTIFYDPM AcceptDeviceNotification;
    PPEPCALLBACKNOTIFYPPM AcceptProcessorNotification;

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

    PPEPCALLBACKNOTIFYACPI AcceptAcpiNotification;

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

} PEP_INFORMATION, *PPEP_INFORMATION;

//
// PEP_REGISTER_DEVICE structure remains the same in PEPv2 and PEPv3.
//

#if (PEP_INFORMATION_VERSION >= PEP_INFORMATION_V2) 
typedef PEP_COMPONENT_V2 PEP_COMPONENT, *PPEP_COMPONENT;
typedef PEP_DEVICE_REGISTER_V2 PEP_DEVICE_REGISTER, *PPEP_DEVICE_REGISTER;
typedef PEP_REGISTER_DEVICE_V2 PEP_REGISTER_DEVICE, *PPEP_REGISTER_DEVICE;
#else
#error PEP_INFORMATION_VERSION undefined!
#endif

#ifdef PEP_KERNEL_INFORMATION_VERSION
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterPlugin (
    _In_ PPEP_INFORMATION PepInformation,
    _Inout_ PPEP_KERNEL_INFORMATION KernelInformation
    );
#endif

//
// Processor halt flags.
//

#define PROCESSOR_HALT_CACHE_FLUSH_OVERRIDE             (1 << 0)
#define PROCESSOR_HALT_CACHE_COHERENT                   (1 << 1)
#define PROCESSOR_HALT_CONTEXT_RETAINED                 (1 << 2)
#define PROCESSOR_HALT_RETURN_NOT_SAFE                  (1 << 3)
#define PROCESSOR_HALT_VIA_PSCI_CPU_SUSPEND             (1 << 4)

#define PEP_FLAG_WORKER_CONCURRENCY                     0x00000001

#ifdef PEP_KERNEL_INFORMATION_VERSION
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterPluginEx (
    _In_ PPEP_INFORMATION PepInformation,
    _In_ ULONGLONG Flags,
    _Inout_ PPEP_KERNEL_INFORMATION KernelInformation
    );
#endif

typedef struct _PO_FX_CORE_DEVICE {
    ULONG Version;
    ULONG ComponentCount;
    PPO_FX_COMPONENT_ACTIVE_CONDITION_CALLBACK ComponentActiveConditionCallback;
    PPO_FX_COMPONENT_IDLE_CONDITION_CALLBACK ComponentIdleConditionCallback;
    PPO_FX_COMPONENT_CRITICAL_TRANSITION_CALLBACK ComponentCriticalTransitionCallback;
    PPO_FX_COMPONENT_IDLE_STATE_CALLBACK ComponentIdleStateCallback;
    PVOID DeviceContext;
    _Field_size_full_(ComponentCount) PO_FX_COMPONENT Components[ANYSIZE_ARRAY];
} PO_FX_CORE_DEVICE, *PPO_FX_CORE_DEVICE;

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PoFxRegisterCoreDevice (
    _In_ PCUNICODE_STRING Id,
    _In_ PPO_FX_CORE_DEVICE Device,
    _Out_ POHANDLE *Handle
    );

// **************************************************************************
//
// ---------- Runtime ACPI notifications section ----------------------------
//
// **************************************************************************

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

//
// PEP ACPI notifications.
//

#define PEP_NOTIFY_ACPI_PREPARE_DEVICE                              0x01
#define PEP_NOTIFY_ACPI_ABANDON_DEVICE                              0x02
#define PEP_NOTIFY_ACPI_REGISTER_DEVICE                             0x03
#define PEP_NOTIFY_ACPI_UNREGISTER_DEVICE                           0x04
#define PEP_NOTIFY_ACPI_ENUMERATE_DEVICE_NAMESPACE                  0x05
#define PEP_NOTIFY_ACPI_QUERY_OBJECT_INFORMATION                    0x06
#define PEP_NOTIFY_ACPI_EVALUATE_CONTROL_METHOD                     0x07
#define PEP_NOTIFY_ACPI_QUERY_DEVICE_CONTROL_RESOURCES              0x08
#define PEP_NOTIFY_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES         0x09
#define PEP_NOTIFY_ACPI_WORK                                        0x0A

//
// PEP_NOTIFY_ACPI_PREPARE_DEVICE types
//

//
// Define input and output flags for PEP_NOTIFY_ACPI_REGISTER_DEVICE
// notification.
//

#define PEP_ACPI_PREPARE_DEVICE_INPUT_FLAG_NONE   0x0

#define PEP_ACPI_PREPARE_DEVICE_OUTPUT_FLAG_NONE  0x0

//
// Define the PEP_NOTIFY_ACPI_PREPARE_DEVICE notification payload.
//

typedef struct _PEP_ACPI_PREPARE_DEVICE {
    PCUNICODE_STRING AcpiDeviceName;
    ULONG InputFlags;
    BOOLEAN DeviceAccepted;
    ULONG OutputFlags;
} PEP_ACPI_PREPARE_DEVICE, *PPEP_ACPI_PREPARE_DEVICE;

//
// PEP_NOTIFY_ACPI_ABANDON_DEVICE types
//

//
// Define the PEP_NOTIFY_ACPI_ABANDON_DEVICE notification payload.
//

typedef struct _PEP_ACPI_ABANDON_DEVICE {
    PCUNICODE_STRING AcpiDeviceName;
    BOOLEAN DeviceAccepted;
} PEP_ACPI_ABANDON_DEVICE, *PPEP_ACPI_ABANDON_DEVICE;

//
// PEP_NOTIFY_ACPI_REGISTER_DEVICE types
//

//
// Define input and output flags for PEP_NOTIFY_ACPI_REGISTER_DEVICE
// notification.
//

#define PEP_ACPI_REGISTER_DEVICE_INPUT_FLAG_NONE   0x0

#define PEP_ACPI_REGISTER_DEVICE_OUTPUT_FLAG_NONE  0x0

//
// Define the PEP_NOTIFY_ACPI_REGISTER_DEVICE notification payload.
//

typedef struct _PEP_ACPI_REGISTER_DEVICE {
    PCUNICODE_STRING AcpiDeviceName;
    ULONG InputFlags;
    POHANDLE KernelHandle;
    PEPHANDLE DeviceHandle;
    ULONG OutputFlags;
} PEP_ACPI_REGISTER_DEVICE, *PPEP_ACPI_REGISTER_DEVICE;

//
// PEP_NOTIFY_ACPI_UNREGISTER_DEVICE types
//

//
// Define input flags for PEP_NOTIFY_ACPI_UNREGISTER_DEVICE notification.
//

#define PEP_ACPI_UNREGISTER_DEVICE_INPUT_FLAG_NONE   0x0

//
// Define the PEP_NOTIFY_ACPI_UNREGISTER_DEVICE notification payload.
//

typedef struct _PEP_ACPI_UNREGISTER_DEVICE {
    PEPHANDLE DeviceHandle;
    ULONG InputFlags;
} PEP_ACPI_UNREGISTER_DEVICE, *PPEP_ACPI_UNREGISTER_DEVICE;

//
// PEP_NOTIFY_ACPI_ENUMERATE_DEVICE_NAMESPACE (EDN) types
//

typedef union _PEP_ACPI_OBJECT_NAME {
    UCHAR Name[4];
    ULONG NameAsUlong;
} PEP_ACPI_OBJECT_NAME, *PPEP_ACPI_OBJECT_NAME;

typedef enum _PEP_ACPI_OBJECT_TYPE {
    PepAcpiObjectTypeMethod,
    PepAcpiObjectTypeDevice,
    PepAcpiObjectTypeMaximum
} PEP_ACPI_OBJECT_TYPE, *PPEP_ACPI_OBJECT_TYPE;

typedef struct _PEP_ACPI_OBJECT_NAME_WITH_TYPE {
    PEP_ACPI_OBJECT_NAME Name;
    PEP_ACPI_OBJECT_TYPE Type;
} PEP_ACPI_OBJECT_NAME_WITH_TYPE, *PPEP_ACPI_OBJECT_NAME_WITH_TYPE;

#define PEP_ACPI_EDN_FLAG_NONE                  0x0

typedef struct _PEP_ACPI_ENUMERATE_DEVICE_NAMESPACE {
    PEPHANDLE DeviceHandle;
    ULONG RequestFlags; // PEP_ACPI_EDN_FLAG_* value
    NTSTATUS Status;
    ULONG ObjectCount;
    SIZE_T ObjectBufferSize;
    _Field_size_bytes_full_(ObjectBufferSize)
        PEP_ACPI_OBJECT_NAME_WITH_TYPE Objects[ANYSIZE_ARRAY];
} PEP_ACPI_ENUMERATE_DEVICE_NAMESPACE, *PPEP_ACPI_ENUMERATE_DEVICE_NAMESPACE;

//
// PEP_NOTIFY_ACPI_QUERY_OBJECT_INFORMATION (QOI) types
//

//
// Define generic object flags (low-order byte in ObjectFlags).
//

#define PEP_ACPI_OBJECT_FLAG_NONE                0x0
//
// ACPI Method Object Flags (i.e. Type == PepAcpiObjectTypeMethod).
//

typedef struct _PEP_ACPI_QUERY_OBJECT_INFORMATION {
    PEPHANDLE DeviceHandle;
    PEP_ACPI_OBJECT_NAME Name;
    PEP_ACPI_OBJECT_TYPE Type;
    ULONG ObjectFlags;
    union {
        struct {
            ULONG InputArgumentCount;
            ULONG OutputArgumentCount;
        } MethodObject;

    } DUMMYUNIONNAME;
} PEP_ACPI_QUERY_OBJECT_INFORMATION, *PPEP_ACPI_QUERY_OBJECT_INFORMATION;

//
// PEP_NOTIFY_ACPI_EVALUATE_CONTROL_METHOD (ECM) types
//

//
// Define input flags for PEP_NOTIFY_ACPI_EVALUATE_CONTROL_METHOD notification.
//

#define PEP_ACPI_ECM_FLAG_NONE                      0x0
#define PEP_ACPI_ECM_FLAG_RELATIVE_NAME             0x1
#define PEP_ACPI_ECM_FLAG_FULLY_QUALIFIED_NAME      0x2

typedef struct _PEP_ACPI_EVALUATE_CONTROL_METHOD {
    PEPHANDLE DeviceHandle;
    ULONG RequestFlags; // PEP_ACPI_ECM_FLAG_* value

    //
    // Method name. For relative method names, it is supplied in the ULONG
    // field. For fully-qualified names, it is passed in as an ANSI string.
    //

    union {
        ULONG MethodName;
        ANSI_STRING MethodNameString;
    };

    //
    // Method evaluation status.
    //

    NTSTATUS MethodStatus;

    //
    // Asynchronous completion context.
    //

    PVOID CompletionContext;

    //
    // Input arguments, their count and size.
    //

    ULONG InputArgumentCount;
    SIZE_T InputArgumentSize;
    PACPI_METHOD_ARGUMENT InputArguments;

    //
    // Output arguments, their count and size.
    //

    ULONG OutputArgumentCount;
    SIZE_T OutputArgumentSize;
    PACPI_METHOD_ARGUMENT OutputArguments;
} PEP_ACPI_EVALUATE_CONTROL_METHOD, *PPEP_ACPI_EVALUATE_CONTROL_METHOD;

//
// PEP_NOTIFY_ACPI_QUERY_DEVICE_CONTROL_RESOURCES types
//

#define PEP_ACPI_QDCR_FLAG_NONE            0x0

typedef struct _PEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES {
    PEPHANDLE DeviceHandle;
    ULONG RequestFlags; // PEP_ACPI_QDCR_FLAG_* value
    NTSTATUS Status;

    //
    // Output BIOS resource buffer.
    //

    SIZE_T BiosResourcesSize;
    ACPI_METHOD_ARGUMENT BiosResources[ANYSIZE_ARRAY];
} PEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES,
    *PPEP_ACPI_QUERY_DEVICE_CONTROL_RESOURCES;

//
// PEP_NOTIFY_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES types
//

#define PEP_ACPI_TDCR_FLAG_NONE            0x0

typedef struct _PEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES {
    PEPHANDLE DeviceHandle;
    ULONG RequestFlags; // PEP_ACPI_TDCR_FLAG_* value
    NTSTATUS Status;
    SIZE_T TranslatedResourcesSize;
    PCM_RESOURCE_LIST TranslatedResources;
} PEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES,
    *PPEP_ACPI_TRANSLATED_DEVICE_CONTROL_RESOURCES;

// **************************************************************************
//
// ------ PEP ACPI resource descriptors and associated helper routines. -----
//
// **************************************************************************

#define PEP_REQUEST_COMMON_ACPI_CONVERT_TO_BIOS_RESOURCES 0x01

//
// Defines for UART specifc flags.
//

#define PEP_ACPI_UART_SERIAL_FLAG_FLOW_CTL_NONE (0x0000 << 0)
#define PEP_ACPI_UART_SERIAL_FLAG_FLOW_CTL_HW (0x0001 << 0)
#define PEP_ACPI_UART_SERIAL_FLAG_FLOW_CTL_XONXOFF (0x0002 << 0)
#define PEP_ACPI_UART_SERIAL_FLAG_FLOW_CTL_MASK (0x0003 << 0)
#define PEP_ACPI_UART_SERIAL_FLAG_STOP_BITS_0 (0x0000 << 2)
#define PEP_ACPI_UART_SERIAL_FLAG_STOP_BITS_1 (0x0001 << 2)
#define PEP_ACPI_UART_SERIAL_FLAG_STOP_BITS_1_5 (0x0002 << 2)
#define PEP_ACPI_UART_SERIAL_FLAG_STOP_BITS_2 (0x0003 << 2)
#define PEP_ACPI_UART_SERIAL_FLAG_STOP_BITS_MASK (0x0003 << 2)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_5 (0x0000 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_6 (0x0001 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_7 (0x0002 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_8 (0x0003 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_9 (0x0004 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_DATA_BITS_MASK (0x0007 << 4)
#define PEP_ACPI_UART_SERIAL_FLAG_BIG_ENDIAN (0x0001 << 7)
#define PEP_ACPI_UART_SERIAL_PARITY_NONE 0x00
#define PEP_ACPI_UART_SERIAL_PARITY_EVEN  0x01
#define PEP_ACPI_UART_SERIAL_PARITY_ODD 0x02
#define PEP_ACPI_UART_SERIAL_PARITY_MARK 0x03
#define PEP_ACPI_UART_SERIAL_PARITY_SPACE 0x04
#define PEP_ACPI_UART_SERIAL_LINES_DCD (0x0001 << 2)
#define PEP_ACPI_UART_SERIAL_LINES_RI (0x0001 << 3)
#define PEP_ACPI_UART_SERIAL_LINES_DSR (0x0001 << 4)
#define PEP_ACPI_UART_SERIAL_LINES_DTR (0x0001 << 5)
#define PEP_ACPI_UART_SERIAL_LINES_CTS (0x0001 << 6)
#define PEP_ACPI_UART_SERIAL_LINES_RTS (0x0001 << 7)

//
// Defines for SPI specifc flags.
//

#define PEP_ACPI_SPI_SERIAL_BUS_SPECIFIC_FLAG_3WIRE_MODE 0x0001
#define PEP_ACPI_SPI_SERIAL_BUS_PHASE_FOO  0x00
#define PEP_ACPI_SPI_SERIAL_BUS_PHASE_BAR 0x01
#define PEP_ACPI_SPI_SERIAL_BUS_POLARITY_LOW  0x00
#define PEP_ACPI_SPI_SERIAL_BUS_POLARITY_HIGH 0x01

//
// Extended Address specific flags.
//

#define PEP_ACPI_ADDRESS_TYPE_MEMORY_MASK 0x1E
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_NONCACHEABLE 0x00
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_CACHEABLE 0x02
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_WRITE_COMBINE 0x04
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_PREFETCHABLE 0x06
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_RANGE_MASK 0x18
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_RANGE_MEMORY 0x00
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_RANGE_RESERVED 0x08
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_RANGE_ACPI 0x10
#define PEP_ACPI_ADDRESS_TYPE_MEMORY_RANGE_NVS 0x18
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_UC 0x0000000000000001
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_WC 0x0000000000000002
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_WT 0x0000000000000004
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_WB 0x0000000000000008
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_UCE 0x0000000000000010
#define PEP_ACPI_ADDRESS_TYPE_ACPI_MEMORY_NV 0x0000000000008000
#define PEP_ACPI_ADDRESS_TYPE_IO_NON_ISA_RANGE 0x01
#define PEP_ACPI_ADDRESS_TYPE_IO_ISA_RANGE 0x02
#define PEP_ACPI_ADDRESS_TYPE_IO_ENTIRE_RANGE 0x03

typedef enum _GPIO_PIN_CONFIG_TYPE {
    PullDefault,
    PullUp,
    PullDown,
    PullNone
} GPIO_PIN_CONFIG_TYPE;

typedef enum _GPIO_PIN_IORESTRICTION_TYPE {
    IoRestrictionNone,
    IoRestrictionInputOnly,
    IoRestrictionOutputOnly,
    IoRestrictionNoneAndPreserve
} GPIO_PIN_IORESTRICTION_TYPE;

typedef enum _PEP_ACPI_RESOURCE_TYPE {
    PepAcpiMemory,
    PepAcpiIoPort,
    PepAcpiInterrupt,
    PepAcpiGpioIo,
    PepAcpiGpioInt,
    PepAcpiSpbI2c,
    PepAcpiSpbSpi,
    PepAcpiSpbUart,
    PepAcpiExtendedMemory,
    PepAcpiExtendedIo
} PEP_ACPI_RESOURCE_TYPE;

typedef union _PEP_ACPI_RESOURCE_FLAGS    {
    ULONG AsULong;

    struct {
        ULONG Shared:1;
        ULONG Wake:1;
        ULONG ResourceUsage:1;
        ULONG SlaveMode:1;
        ULONG AddressingMode:1;
        ULONG SharedMode:1;
        ULONG Reserved:26;
    } DUMMYSTRUCTNAME;

} PEP_ACPI_RESOURCE_FLAGS, *PPEP_ACPI_RESOURCE_FLAGS;

//
// PEP ACPI io and memory common resource descriptor. Type must always
// be the first field in the structure.
//

typedef struct _PEP_ACPI_IO_MEMORY_RESOURCE {
    PEP_ACPI_RESOURCE_TYPE Type;
    UCHAR Information;
    PHYSICAL_ADDRESS MinimumAddress;
    PHYSICAL_ADDRESS MaximumAddress;
    ULONG Alignment;
    ULONG Length;
} PEP_ACPI_IO_MEMORY_RESOURCE, *PPEP_ACPI_IO_MEMORY_RESOURCE;

//
// PEP ACPI interrupt resource descriptor. Type must always
// be the first field in the structure.
//

typedef struct _PEP_ACPI_INTERRUPT_RESOURCE {
    PEP_ACPI_RESOURCE_TYPE Type;
    KINTERRUPT_MODE InterruptType;
    KINTERRUPT_POLARITY InterruptPolarity;
    PEP_ACPI_RESOURCE_FLAGS Flags;
    UCHAR Count;
    PULONG Pins;
} PEP_ACPI_INTERRUPT_RESOURCE, *PPEP_ACPI_INTERRUPT_RESOURCE;

//
// PEP Gpio Io and Interrupt resource descriptor. Type must always
// be the first field in the structure.
//

typedef struct _PEP_ACPI_GPIO_RESOURCE {
    PEP_ACPI_RESOURCE_TYPE Type;
    PEP_ACPI_RESOURCE_FLAGS Flags;
    KINTERRUPT_MODE InterruptType;
    KINTERRUPT_POLARITY InterruptPolarity;
    GPIO_PIN_CONFIG_TYPE PinConfig;
    GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType;
    USHORT DriveStrength;
    USHORT DebounceTimeout;
    PUSHORT PinTable;
    USHORT PinCount;
    UCHAR ResourceSourceIndex;
    PUNICODE_STRING ResourceSourceName;
    PUCHAR VendorData;
    USHORT VendorDataLength;
} PEP_ACPI_GPIO_RESOURCE, *PPEP_ACPI_GPIO_RESOURCE;

//
// PEP SPB common resource descriptor. Type must always
// be the first field in the structure. This structure will be
// part of SPB I2C, UART, SPI resource descriptors.
//

typedef struct _PEP_ACPI_SPB_RESOURCE {
    PEP_ACPI_RESOURCE_TYPE Type;
    PEP_ACPI_RESOURCE_FLAGS Flags;
    USHORT TypeSpecificFlags;
    UCHAR ResourceSourceIndex;
    PUNICODE_STRING ResourceSourceName;
    PCHAR VendorData;
    USHORT VendorDataLength;
} PEP_ACPI_SPB_RESOURCE, *PPEP_ACPI_SPB_RESOURCE;

//
// PEP SPB I2C resource descriptor. PEP_ACPI_SPB_RESOURCE
// must be the first field in the structure.
//

typedef struct _PEP_ACPI_SPB_I2C_RESOURCE {
    PEP_ACPI_SPB_RESOURCE SpbCommon;
    ULONG ConnectionSpeed;
    USHORT SlaveAddress;
} PEP_ACPI_SPB_I2C_RESOURCE, *PPEP_ACPI_SPB_I2C_RESOURCE;

//
// PEP SPB SPI resource descriptor. PEP_ACPI_SPB_RESOURCE
// must be the first field in the structure.
//

typedef struct _PEP_ACPI_SPB_SPI_RESOURCE {
    PEP_ACPI_SPB_RESOURCE SpbCommon;
    ULONG ConnectionSpeed;
    UCHAR DataBitLength;
    UCHAR Phase;
    UCHAR Polarity;
    USHORT DeviceSelection;
} PEP_ACPI_SPB_SPI_RESOURCE, *PPEP_ACPI_SPB_SPI_RESOURCE;

//
// PEP SPB UART resource descriptor. PEP_ACPI_SPB_RESOURCE
// must be the first field in the structure.
//

typedef struct _PEP_ACPI_SPB_UART_RESOURCE {
    PEP_ACPI_SPB_RESOURCE SpbCommon;
    ULONG BaudRate;
    USHORT RxBufferSize;
    USHORT TxBufferSize;
    UCHAR Parity;
    UCHAR LinesInUse;
} PEP_ACPI_SPB_UART_RESOURCE, *PPEP_ACPI_SPB_UART_RESOURCE;

//
// PEP Extended Address resource descriptor. Type must always
// be the first field in the structure.
//

typedef struct _PEP_ACPI_EXTENDED_ADDRESS {
    PEP_ACPI_RESOURCE_TYPE Type;
    PEP_ACPI_RESOURCE_FLAGS Flags;
    UCHAR ResourceFlags;
    UCHAR GeneralFlags;
    UCHAR TypeSpecificFlags;
    UCHAR RevisionId;
    UCHAR Reserved;
    ULONGLONG Granularity;
    ULONGLONG MinimumAddress;
    ULONGLONG MaximumAddress;
    ULONGLONG TranslationAddress;
    ULONGLONG AddressLength;
    ULONGLONG TypeAttribute;
    PUNICODE_STRING DescriptorName;
} PEP_ACPI_EXTENDED_ADDRESS, *PPEP_ACPI_EXTENDED_ADDRESS;

//
// PEP ACPI common resource descriptor. Type must always be the
// first field in all of the structs within this union.
//

typedef union _PEP_ACPI_RESOURCE {
    PEP_ACPI_RESOURCE_TYPE Type;
    PEP_ACPI_IO_MEMORY_RESOURCE IoMemory;
    PEP_ACPI_INTERRUPT_RESOURCE Interrupt;
    PEP_ACPI_GPIO_RESOURCE Gpio;
    PEP_ACPI_SPB_I2C_RESOURCE SpbI2c;
    PEP_ACPI_SPB_SPI_RESOURCE SpbSpi;
    PEP_ACPI_SPB_UART_RESOURCE SpbUart;
    PEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;
} PEP_ACPI_RESOURCE, *PPEP_ACPI_RESOURCE;

#define PEP_ACPI_RESOURCE_LENGTH sizeof(PEP_ACPI_RESOURCE)

//
// Definiton for PEP_ACPI_REQUEST_COMMON_CONVERT_TO_BIOS_RESOURCES.
//

typedef struct _PEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES {
    NTSTATUS TranslationStatus;
    PPEP_ACPI_RESOURCE InputBuffer;
    SIZE_T InputBufferSize;
    PVOID OutputBuffer;
    SIZE_T OutputBufferSize;
    ULONG Flags;
} PEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES,
    *PPEP_ACPI_REQUEST_CONVERT_TO_BIOS_RESOURCES;

#define PEP_ACPI_REQUEST_COMMON_CONVERT_TO_BIOS_RESOURCES 0x01

//
// PEP_ACPI_REQUEST_COMMON_CONVERT_TO_BIOS_RESOURCES flag types.
//

#define PEP_ACPI_REQUEST_COMMON_FLAGS_NONE 0x0
#define PEP_ACPI_REQUEST_COMMON_FLAGS_NO_END_TAG 0x01

//
// Inline function to initialize PEP ACPI memory resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_MEMORY_RESOURCE (
    _In_ UCHAR ReadWrite,
    _In_ ULONG MinimumAddress,
    _In_ ULONG MaximumAddress,
    _In_ ULONG Alignment,
    _In_ ULONG MemorySize,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_IO_MEMORY_RESOURCE Memory32Resource;

    Memory32Resource = (PPEP_ACPI_IO_MEMORY_RESOURCE)Resource;
    Memory32Resource->Type = PepAcpiMemory;
    Memory32Resource->Information = ReadWrite;
    Memory32Resource->MinimumAddress.LowPart = MinimumAddress;
    Memory32Resource->MaximumAddress.LowPart = MaximumAddress;
    Memory32Resource->Alignment = Alignment;
    Memory32Resource->Length = MemorySize;
    return;
}

//
// Inline function to initialize PEP ACPI Io port resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_IOPORT_RESOURCE (
    _In_ UCHAR Decode,
    _In_ USHORT MinimumAddress,
    _In_ USHORT MaximumAddress,
    _In_ UCHAR Alignment,
    _In_ UCHAR PortLength,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_IO_MEMORY_RESOURCE IoPortResource;

    IoPortResource = (PPEP_ACPI_IO_MEMORY_RESOURCE)Resource;
    IoPortResource->Type = PepAcpiIoPort;
    IoPortResource->Information = Decode;
    IoPortResource->MinimumAddress.LowPart = MinimumAddress;
    IoPortResource->MaximumAddress.LowPart = MaximumAddress;
    IoPortResource->Alignment = Alignment;
    IoPortResource->Length = PortLength;
    return;
}

//
// Inline function to initialize PEP ACPI Interrupt resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_INTERRUPT_RESOURCE (
    _In_ BOOLEAN ResourceUsage,
    _In_ KINTERRUPT_MODE EdgeLevel,
    _In_ KINTERRUPT_POLARITY InterruptLevel,
    _In_ BOOLEAN ShareType,
    _In_ BOOLEAN Wake,
    _In_ PULONG PinTable,
    _In_ UCHAR PinCount,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_INTERRUPT_RESOURCE InterruptResource;

    InterruptResource = (PPEP_ACPI_INTERRUPT_RESOURCE)Resource;
    InterruptResource->Type = PepAcpiInterrupt;
    InterruptResource->Flags.ResourceUsage = ResourceUsage;
    InterruptResource->InterruptType = EdgeLevel;
    InterruptResource->InterruptPolarity = InterruptLevel;
    InterruptResource->Flags.Shared = ShareType;
    InterruptResource->Flags.Wake = Wake;
    InterruptResource->Count = PinCount;
    InterruptResource->Pins = PinTable;
    return;
}

//
// Inline function to initialize PEP ACPI GPIO Io resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_GPIO_IO_RESOURCE (
    _In_ BOOLEAN Shareable,
    _In_ BOOLEAN CanWake,
    _In_ GPIO_PIN_CONFIG_TYPE PinConfig,
    _In_ USHORT DebounceTimeout,
    _In_ USHORT DriveStrength,
    _In_ GPIO_PIN_IORESTRICTION_TYPE IoRestriction,
    _In_ UCHAR ResourceSourceIndex,
    _In_ PUNICODE_STRING ResourceSourceName,
    _In_ BOOLEAN ResourceUsage,
    _In_ PUCHAR VendorData,
    _In_ USHORT VendorDataLength,
    _In_ PUSHORT PinTable,
    _In_ USHORT PinCount,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_GPIO_RESOURCE GpioIo;

    GpioIo = (PPEP_ACPI_GPIO_RESOURCE)Resource;
    GpioIo->Type = PepAcpiGpioIo;
    GpioIo->Flags.Shared = Shareable;
    GpioIo->Flags.Wake = CanWake;
    GpioIo->PinConfig = PinConfig;
    GpioIo->DebounceTimeout = DebounceTimeout;
    GpioIo->DriveStrength = DriveStrength;
    GpioIo->IoRestrictionType = IoRestriction;
    GpioIo->ResourceSourceIndex = ResourceSourceIndex;
    GpioIo->ResourceSourceName = ResourceSourceName;
    GpioIo->Flags.ResourceUsage = ResourceUsage;
    GpioIo->VendorData = VendorData;
    GpioIo->VendorDataLength = VendorDataLength;
    GpioIo->PinTable = PinTable;
    GpioIo->PinCount = PinCount;
    return;
}

//
// Inline function to initialize PEP ACPI GPIO Interrupt resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_GPIO_INT_RESOURCE (
    _In_ KINTERRUPT_MODE InterruptType,
    _In_ KINTERRUPT_POLARITY LevelType,
    _In_ BOOLEAN Shareable,
    _In_ BOOLEAN CanWake,
    _In_ GPIO_PIN_CONFIG_TYPE PinConfig,
    _In_ USHORT DebounceTimeout,
    _In_ UCHAR ResourceSourceIndex,
    _In_ PUNICODE_STRING ResourceSourceName,
    _In_ BOOLEAN ResourceUsage,
    _In_ PUCHAR VendorData,
    _In_ USHORT VendorDataLength,
    _In_ PUSHORT PinTable,
    _In_ UCHAR PinCount,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_GPIO_RESOURCE GpioInt;

    GpioInt = (PPEP_ACPI_GPIO_RESOURCE)Resource;
    GpioInt->Type = PepAcpiGpioInt;
    GpioInt->InterruptType = InterruptType;
    GpioInt->InterruptPolarity = LevelType;
    GpioInt->Flags.Shared = Shareable;
    GpioInt->Flags.Wake = CanWake;
    GpioInt->PinConfig = PinConfig;
    GpioInt->DebounceTimeout = DebounceTimeout;
    GpioInt->ResourceSourceIndex = ResourceSourceIndex;
    GpioInt->ResourceSourceName = ResourceSourceName;
    GpioInt->Flags.ResourceUsage = ResourceUsage;
    GpioInt->VendorData = VendorData;
    GpioInt->VendorDataLength = VendorDataLength;
    GpioInt->PinTable = PinTable;
    GpioInt->PinCount = PinCount;
    GpioInt->DriveStrength = 0;
    return;
}

//
// Inline function to initialize PEP ACPI SPB I2C resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_SPB_I2C_RESOURCE (
    _In_ USHORT SlaveAddress,
    _In_ BOOLEAN DeviceInitiated,
    _In_ ULONG ConnectionSpeed,
    _In_ BOOLEAN AddressingMode,
    _In_ PUNICODE_STRING ResourceSource,
    _In_ UCHAR ResourceSourceIndex,
    _In_ BOOLEAN ResourceUsage,
    _In_ BOOLEAN SharedMode,
    _In_ PCHAR VendorData,
    _In_ USHORT VendorDataLength,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_SPB_I2C_RESOURCE SpbI2c;

    SpbI2c = (PPEP_ACPI_SPB_I2C_RESOURCE)Resource;
    SpbI2c->SpbCommon.Type = PepAcpiSpbI2c;
    SpbI2c->SpbCommon.Flags.AddressingMode = AddressingMode;
    SpbI2c->SpbCommon.Flags.SlaveMode = DeviceInitiated;
    SpbI2c->SpbCommon.ResourceSourceIndex = ResourceSourceIndex;
    SpbI2c->SpbCommon.ResourceSourceName = ResourceSource;
    SpbI2c->SpbCommon.Flags.ResourceUsage = ResourceUsage;
    SpbI2c->SpbCommon.VendorData = VendorData;
    SpbI2c->SpbCommon.VendorDataLength = VendorDataLength;
    SpbI2c->ConnectionSpeed = ConnectionSpeed;
    SpbI2c->SlaveAddress = SlaveAddress;
    SpbI2c->SpbCommon.Flags.SharedMode = SharedMode;
    return;
}

//
// Inline function to initialize PEP ACPI SPB UART resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_SPB_UART_RESOURCE (
    _In_ ULONG BaudRate,
    _In_ UCHAR BitsPerByte,
    _In_ UCHAR StopBits,
    _In_ UCHAR LinesInUse,
    _In_ UCHAR IsBigEndian,
    _In_ UCHAR Parity,
    _In_ UCHAR FlowControl,
    _In_ USHORT RxSize,
    _In_ USHORT TxSize,
    _In_ PUNICODE_STRING ResourceSource,
    _In_ UCHAR ResourceSourceIndex,
    _In_ BOOLEAN ResourceUsage,
    _In_ BOOLEAN SharedMode,
    _In_ PCHAR VendorData,
    _In_ USHORT VendorDataLength,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_SPB_UART_RESOURCE SpbUart;

    SpbUart = (PPEP_ACPI_SPB_UART_RESOURCE)Resource;
    SpbUart->SpbCommon.Type = PepAcpiSpbUart;
    SpbUart->SpbCommon.TypeSpecificFlags = BitsPerByte;
    SpbUart->SpbCommon.TypeSpecificFlags |= StopBits;
    SpbUart->SpbCommon.TypeSpecificFlags |= FlowControl;
    SpbUart->SpbCommon.TypeSpecificFlags |= IsBigEndian;
    SpbUart->SpbCommon.ResourceSourceIndex = ResourceSourceIndex;
    SpbUart->SpbCommon.ResourceSourceName = ResourceSource;
    SpbUart->SpbCommon.Flags.ResourceUsage = ResourceUsage;
    SpbUart->SpbCommon.VendorData = VendorData;
    SpbUart->SpbCommon.VendorDataLength = VendorDataLength;
    SpbUart->BaudRate = BaudRate;
    SpbUart->Parity = Parity;
    SpbUart->RxBufferSize = RxSize;
    SpbUart->TxBufferSize = TxSize;
    SpbUart->LinesInUse = LinesInUse;
    SpbUart->SpbCommon.Flags.SharedMode = SharedMode;
    return;
}

//
// Inline function to initialize PEP ACPI SPB SPI resource.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_SPB_SPI_RESOURCE (
    _In_ USHORT DeviceSelection,
    _In_ UCHAR DeviceSelectionPolarity,
    _In_ UCHAR WireMode,
    _In_ UCHAR DataBitLength,
    _In_ BOOLEAN SlaveMode,
    _In_ ULONG ConnectionSpeed,
    _In_ UCHAR ClockPolarity,
    _In_ UCHAR ClockPhase,
    _In_ PUNICODE_STRING ResourceSource,
    _In_ UCHAR ResourceSourceIndex,
    _In_ BOOLEAN ResourceUsage,
    _In_ BOOLEAN SharedMode,
    _In_ PCHAR VendorData,
    _In_ USHORT VendorDataLength,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_SPB_SPI_RESOURCE SpbSpi;

    SpbSpi = (PPEP_ACPI_SPB_SPI_RESOURCE)Resource;
    SpbSpi->SpbCommon.Type = PepAcpiSpbSpi;
    SpbSpi->SpbCommon.TypeSpecificFlags = DeviceSelectionPolarity;
    SpbSpi->SpbCommon.TypeSpecificFlags |= WireMode;
    SpbSpi->SpbCommon.ResourceSourceIndex = ResourceSourceIndex;
    SpbSpi->SpbCommon.ResourceSourceName = ResourceSource;
    SpbSpi->SpbCommon.Flags.ResourceUsage = ResourceUsage;
    SpbSpi->SpbCommon.Flags.SlaveMode = SlaveMode;
    SpbSpi->SpbCommon.VendorData = VendorData;
    SpbSpi->SpbCommon.VendorDataLength = VendorDataLength;
    SpbSpi->ConnectionSpeed = ConnectionSpeed;
    SpbSpi->DataBitLength = DataBitLength;
    SpbSpi->Polarity = ClockPolarity;
    SpbSpi->Phase = ClockPhase;
    SpbSpi->DeviceSelection = DeviceSelection;
    SpbSpi->SpbCommon.Flags.SharedMode = SharedMode;
    return;
}

//
// Inline function to initialize PEP ACPI Extended Memory.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_EXTENDED_MEMORY_RESOURCE (
    _In_ BOOLEAN ResourceUsage,
    _In_ UCHAR Decode,
    _In_ BOOLEAN IsMinFixed,
    _In_ BOOLEAN IsMaxFixed,
    _In_ UCHAR Cacheable,
    _In_ BOOLEAN ReadWrite,
    _In_ ULONGLONG AddressGranularity,
    _In_ ULONGLONG AddressMinimum,
    _In_ ULONGLONG AddressMaximum,
    _In_ ULONGLONG AddressTranslation,
    _In_ ULONGLONG RangeLength,
    _In_ ULONGLONG TypeSpecificAttributes,
    _In_ PUNICODE_STRING DescriptorName,
    _In_ UCHAR MemoryRangeType,
    _In_ BOOLEAN TranslationTypeNonStatic,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;

    ExtendedAddress = (PPEP_ACPI_EXTENDED_ADDRESS)Resource;
    ExtendedAddress->Type = PepAcpiExtendedMemory;
    ExtendedAddress->GeneralFlags = ResourceUsage;
    ExtendedAddress->GeneralFlags |= (Decode << 1);
    ExtendedAddress->GeneralFlags |= (IsMinFixed << 2);
    ExtendedAddress->GeneralFlags |= (IsMaxFixed << 3);
    ExtendedAddress->TypeSpecificFlags = ReadWrite;
    ExtendedAddress->TypeSpecificFlags |= Cacheable;
    ExtendedAddress->TypeSpecificFlags |= (TranslationTypeNonStatic << 3);
    ExtendedAddress->TypeSpecificFlags |= MemoryRangeType;
    ExtendedAddress->Granularity = AddressGranularity;
    ExtendedAddress->MinimumAddress = AddressMinimum;
    ExtendedAddress->MaximumAddress = AddressMaximum;
    ExtendedAddress->TranslationAddress = AddressTranslation;
    ExtendedAddress->AddressLength = RangeLength;
    ExtendedAddress->TypeAttribute = TypeSpecificAttributes;
    ExtendedAddress->DescriptorName = DescriptorName;
    return;
}

//
// Inline function to initialize PEP ACPI Extended Io.
//

VOID
FORCEINLINE
PEP_ACPI_INITIALIZE_EXTENDED_IO_RESOURCE (
    _In_ BOOLEAN ResourceUsage,
    _In_ UCHAR Decode,
    _In_ BOOLEAN IsMinFixed,
    _In_ BOOLEAN IsMaxFixed,
    _In_ UCHAR ISARanges,
    _In_ ULONGLONG AddressGranularity,
    _In_ ULONGLONG AddressMinimum,
    _In_ ULONGLONG AddressMaximum,
    _In_ ULONGLONG AddressTranslation,
    _In_ ULONGLONG RangeLength,
    _In_ ULONGLONG TypeSpecificAttributes,
    _In_ PUNICODE_STRING DescriptorName,
    _In_ BOOLEAN TranslationTypeNonStatic,
    _In_ BOOLEAN TanslationSparseDensity,
    _Out_ PPEP_ACPI_RESOURCE Resource
    )
{

    PPEP_ACPI_EXTENDED_ADDRESS ExtendedAddress;

    ExtendedAddress = (PPEP_ACPI_EXTENDED_ADDRESS)Resource;
    ExtendedAddress->Type = PepAcpiExtendedIo;
    ExtendedAddress->GeneralFlags = ResourceUsage;
    ExtendedAddress->GeneralFlags |= (Decode << 1);
    ExtendedAddress->GeneralFlags |= (IsMinFixed << 2);
    ExtendedAddress->GeneralFlags |= (IsMaxFixed << 3);
    ExtendedAddress->TypeSpecificFlags = ISARanges;
    ExtendedAddress->TypeSpecificFlags |= (TranslationTypeNonStatic << 3);
    ExtendedAddress->TypeSpecificFlags |= (TanslationSparseDensity << 5);
    ExtendedAddress->Granularity = AddressGranularity;
    ExtendedAddress->MinimumAddress = AddressMinimum;
    ExtendedAddress->MaximumAddress = AddressMaximum;
    ExtendedAddress->TranslationAddress = AddressTranslation;
    ExtendedAddress->AddressLength = RangeLength;
    ExtendedAddress->DescriptorName = DescriptorName;
    ExtendedAddress->TypeAttribute = TypeSpecificAttributes;
    return;
}

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#pragma pop

#ifdef __cplusplus
}
#endif

#endif // #if (NTDDI_VERSION >= NTDDI_WIN8)
