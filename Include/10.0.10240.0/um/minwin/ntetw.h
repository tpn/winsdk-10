/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntetw.h

Abstract:

    ETW new km/um header.

--*/

#ifndef _NTETW_H_
#define _NTETW_H_

#pragma once

#include <evntcons.h>
#include <ntwmi.h>

//
// Maximum supported buffer size in KB - Win8 (16MB)
//
// N.B. Prior to Win8 the value was 1MB (1024KB).
//

#define MIN_ETW_BUFFER_SIZE      1             // in KBytes
#define MAX_ETW_BUFFER_SIZE      (16 * 1024)   // in KBytes
#define MAX_ETW_BUFFER_SIZE_WIN7 (1 * 1024)    // in KBytes
#define MAX_ETW_EVENT_SIZE       0xFFFF        // MAX_USHORT


#define ETW_KERNEL_RUNDOWN_START 0x00000001
#define ETW_KERNEL_RUNDOWN_STOP  0x00000002
#define ETW_CKCL_RUNDOWN_START   0x00000004
#define ETW_CKCL_RUNDOWN_STOP    0x00000008
#define ETW_FILENAME_RUNDOWN     0x00000010

//
// Constants for UMGL (User Mode Global Logging).
//
// N.B. There is enough space reserved in UserSharedData
//      to support up to 16 providers, but to avoid needless
//      scanning MAX_PROVIDERS constant is currently set to 8.
//
// N.B. Heap and CritSec providers can be controlled with IFEO
//      making the indexes fixed.
//

#define ETW_UMGL_INDEX_HEAP             0
#define ETW_UMGL_INDEX_CRITSEC          1
#define ETW_UMGL_INDEX_LDR              2
#define ETW_UMGL_INDEX_THREAD_POOL      3
#define ETW_UMGL_INDEX_HEAPRANGE        4
#define ETW_UMGL_INDEX_HEAPSUMMARY      5
#define ETW_UMGL_INDEX_UMS              6
#define ETW_UMGL_INDEX_WNF              7
#define ETW_UMGL_INDEX_THREAD           8
#define ETW_UMGL_INDEX_SPARE2           9
#define ETW_UMGL_INDEX_SPARE3           10
#define ETW_UMGL_INDEX_SPARE4           11
#define ETW_UMGL_INDEX_SPARE5           12
#define ETW_UMGL_INDEX_SPARE6           13
#define ETW_UMGL_INDEX_SPARE7           14
#define ETW_UMGL_INDEX_SPARE8           15

#define ETW_UMGL_MAX_PROVIDERS          9

typedef struct _ETW_UMGL_KEY {
    UCHAR LoggerId;
    UCHAR Flags;
} ETW_UMGL_KEY, *PETW_UMGL_KEY;

#define UMGL_LOGGER_ID(Index)               (((PETW_UMGL_KEY)(&USER_SHARED_DATA->UserModeGlobalLogger[Index]))->LoggerId)
#define UMGL_LOGGER_FLAGS(Index)            (((PETW_UMGL_KEY)(&USER_SHARED_DATA->UserModeGlobalLogger[Index]))->Flags)

#define IS_UMGL_LOGGING_ENABLED(Index)      (UMGL_LOGGER_ID(Index) != 0)

#define IS_UMGL_FLAG_ENABLED(Index, Flag)   ((UMGL_LOGGER_FLAGS(Index) & Flag) != 0)

#if !defined(NTOS_KERNEL_RUNTIME)

#define IS_HEAP_LOGGING_ENABLED()           (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_HEAP) && \
                                             (NtCurrentPeb()->HeapTracingEnabled != FALSE))

#define IS_HEAP_RANGE_LOGGING_ENABLED()     (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_HEAPRANGE))

#define HEAP_LOGGER_ID                      (UMGL_LOGGER_ID(ETW_UMGL_INDEX_HEAP))

#else

#define IS_HEAP_LOGGING_ENABLED()           (PERFINFO_IS_GROUP_ON(PERF_HEAP))

#define IS_HEAP_RANGE_LOGGING_ENABLED()     (IS_HEAP_LOGGING_ENABLED())

#define HEAP_LOGGER_ID                      (HANDLE)0 //not used in kernel mode

#endif // !defined(NTOS_KERNEL_RUNTIME)

#define IS_CRITSEC_LOGGING_ENABLED()        (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_CRITSEC) && \
                                             (NtCurrentPeb()->CritSecTracingEnabled != FALSE))

#define CRITSEC_LOGGER_ID                   (UMGL_LOGGER_ID(ETW_UMGL_INDEX_CRITSEC))

#define IS_LOADER_LOGGING_ENABLED_FLAG(Flag) \
                                            (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_LDR) && \
                                            ((UMGL_LOGGER_FLAGS(ETW_UMGL_INDEX_LDR) & Flag) != 0) )

#define IS_PER_PROCESS_LOADER_LOGGING_ENABLED_FLAG(Flag) \
                                            (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_LDR) && \
                                            (NtCurrentPeb()->LibLoaderTracingEnabled != FALSE) && \
                                            ((UMGL_LOGGER_FLAGS(ETW_UMGL_INDEX_LDR) & Flag) != 0) )

#define IS_GLOBAL_LOADER_LOGGING_ENABLED()  (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_LDR))

#define LOADER_LOGGER_ID                    (UMGL_LOGGER_ID(ETW_UMGL_INDEX_LDR))

#define HEAPRANGE_LOGGER_ID                 (UMGL_LOGGER_ID(ETW_UMGL_INDEX_HEAPRANGE))

#define IS_THREAD_POOL_LOGGING_ENABLED()    (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_THREAD_POOL))

#define THREAD_POOL_LOGGER_ID               (UMGL_LOGGER_ID(ETW_UMGL_INDEX_THREAD_POOL))

#define IS_UMS_LOGGING_ENABLED()            (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_UMS))

#define UMS_LOGGER_ID                       (UMGL_LOGGER_ID(ETW_UMGL_INDEX_UMS))

#define HEAPSUMMARY_LOGGER_ID               (UMGL_LOGGER_ID(ETW_UMGL_INDEX_HEAPSUMMARY))

#define IS_HEAPSUMMARY_LOGGING_ENABLED()    (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_HEAPSUMMARY))

#define WNF_LOGGER_ID                       (UMGL_LOGGER_ID(ETW_UMGL_INDEX_WNF))

#define IS_WNF_LOGGING_ENABLED()            (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_WNF))

#define UMGL_THREAD_LOGGER_ID               (UMGL_LOGGER_ID(ETW_UMGL_INDEX_THREAD))

#define IS_UMGL_THREAD_LOGGING_ENABLED()    (IS_UMGL_LOGGING_ENABLED(ETW_UMGL_INDEX_THREAD))

//
// Flags used by user mode loader logging to UMGL.
//

#define ETW_UMGL_LDR_MUI_VERBOSE_FLAG 0x0001
#define ETW_UMGL_LDR_MUI_TEST_FLAG    0x0002
#define ETW_UMGL_LDR_RELOCATION_FLAG  0x0004

#define ETW_UMGL_LDR_NEW_DLL_FLAG   0x0010
#define ETW_UMGL_LDR_TEST_FLAG      0x0020
#define ETW_UMGL_LDR_SECURITY_FLAG  0x0040

//
// Constants for heap log
//

#define MEMORY_FROM_LOOKASIDE                   1       //Activity from LookAside
#define MEMORY_FROM_LOWFRAG                     2       //Activity from Low Frag Heap
#define MEMORY_FROM_MAINPATH                    3       //Activity from Main Code Path
#define MEMORY_FROM_SLOWPATH                    4       //Activity from Slow C
#define MEMORY_FROM_INVALID                     5
#define MEMORY_FROM_SEGMENT_HEAP                6       //Activity from segment heap.

//
// Header preparation macro for UMGL
//

#define EVENT_HEADER_EVENT64      ((USHORT)(((TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE) >> 16) | \
                                      TRACE_HEADER_TYPE_EVENT_HEADER64))

#define EVENT_HEADER_EVENT32      ((USHORT)(((TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE) >> 16) | \
                                      TRACE_HEADER_TYPE_EVENT_HEADER32))

#define EVENT_HEADER_ERROR        ((USHORT)(((TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE) >> 16) | \
                                      TRACE_HEADER_TYPE_ERROR))

#define TRACE_HEADER_FULL32       (TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE \
                                  | (TRACE_HEADER_TYPE_FULL_HEADER32 << 16))

#define TRACE_HEADER_FULL64       (TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE \
                                  | (TRACE_HEADER_TYPE_FULL_HEADER64 << 16))

#define TRACE_HEADER_INSTANCE32   (TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE \
                                  | (TRACE_HEADER_TYPE_INSTANCE32 << 16))

#define TRACE_HEADER_INSTANCE64   (TRACE_HEADER_FLAG | TRACE_HEADER_EVENT_TRACE \
                                  | (TRACE_HEADER_TYPE_INSTANCE64 << 16))

#ifdef _WIN64

#define EVENT_HEADER_EVENT      EVENT_HEADER_EVENT64
#define TRACE_HEADER_FULL       TRACE_HEADER_FULL64
#define TRACE_HEADER_INSTANCE   TRACE_HEADER_INSTANCE64

#else

#define EVENT_HEADER_EVENT      EVENT_HEADER_EVENT32
#define TRACE_HEADER_FULL       TRACE_HEADER_FULL32
#define TRACE_HEADER_INSTANCE   TRACE_HEADER_INSTANCE32

#endif

#define PREPARE_ETW_TRACE_HEADER_GUID(Header, EventStruct, EventType, EventGuid, LoggerId) \
    (Header)->Size = sizeof(EventStruct); \
    (Header)->Class.Type = (EventType); \
    RtlCopyMemory(&((Header)->Guid), (EventGuid), sizeof(*(EventGuid))); \

#ifndef ETW_WOW6432

FORCEINLINE
ULONG
EtwGetExtendedSystemHeaderSize (
    _In_ ULONG Marker
    )
{
    ULONG PmcCounters;
    ULONG HeaderSize = 0;

    //
    // Account for PEBS extended item if present.
    //

    if ((Marker & TRACE_HEADER_PEBS_INDEX_FLAG) != 0) {
        HeaderSize += sizeof(EVENT_EXTENDED_ITEM_PEBS_INDEX);
    }

    //
    // Account for PMC counter reading if present.
    //

    if ((PmcCounters = (Marker & TRACE_HEADER_PMC_COUNTERS_MASK)) != 0) {
        PmcCounters = (PmcCounters >> TRACE_HEADER_PMC_COUNTERS_SHIFT);
        HeaderSize += PmcCounters * sizeof(ULONG64);
    }

    return HeaderSize;
}

#endif

//
// Internal Flags for different processing modes.
// Applies to the TRACE_LOGFILE_HEADER ReservedFlags field.
//

// Used with OpenTrace(), prevents conversion of TimeStamps to UTC
#define EVENT_TRACE_USE_RAWTIMESTAMP 0x00000002

// Used with OpenTrace(), retrieves event from file as is.
#define EVENT_TRACE_GET_RAWEVENT     0x00000100

// Used with OpenTrace() to ReadBehind  a live logger session
#define EVENT_TRACE_READ_BEHIND      0x00000200

//
// Used in EventCallbacks to indicate that the InstanceId field
// is a sequence number.
//

#define EVENT_TRACE_USE_SEQUENCE  0x0004


//
// Data Block structure for ETW notification
//

typedef enum _ETW_NOTIFICATION_TYPE {
    EtwNotificationTypeNoReply = 1,     // No data block reply
    EtwNotificationTypeLegacyEnable,    // Enable notification for RegisterTraceGuids
    EtwNotificationTypeEnable,          // Enable notification for EventRegister
    EtwNotificationTypePrivateLogger,   // Private logger notification for ETW
    EtwNotificationTypePerflib,         // PERFLIB V2 counter data request/delivery block
    EtwNotificationTypeAudio,           // Private notification for audio policy
    EtwNotificationTypeSession,         // Session related ETW notifications
    EtwNotificationTypeReserved,        // For internal use (test)
    EtwNotificationTypeCredentialUI,    // Private notification for media center elevation detection
    EtwNotificationTypeInProcSession,   // Private in-proc session related ETW notifications
    EtwNotificationTypeMax

} ETW_NOTIFICATION_TYPE;

#define ETW_MAX_DATA_BLOCK_BUFFER_SIZE              (65536)

typedef enum {
    EtwStartLoggerCode       = 1,
    EtwStopLoggerCode        = 2,
    EtwQueryLoggerCode       = 3,
    EtwUpdateLoggerCode      = 4,
    EtwFlushLoggerCode       = 5,
    EtwActivityIdCreate      = 12,
    EtwWdiScenarioCode       = 13,
    EtwWdiSemUpdate          = 20
} ETWTRACECONTROLCODE;

#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union
typedef struct _ETW_NOTIFICATION_HEADER {

    ETW_NOTIFICATION_TYPE NotificationType; // Notification type
    ULONG                 NotificationSize; // Notification size in bytes

    ULONG                 Offset;           // Offset to the next notification
    BOOLEAN               ReplyRequested;   // Reply Requested

    ULONG                 Timeout;          // Timeout in milliseconds when requesting reply

    union {
        ULONG             ReplyCount;       // Out to sender: the number of notifications sent
        ULONG             NotifyeeCount;    // Out to notifyee: the order during notification
    } DUMMYUNIONNAME;


    ULONGLONG             Reserved2;

    ULONG                 TargetPID;
    ULONG                 SourcePID;

    GUID                  DestinationGuid;  // Desctination GUID
    GUID                  SourceGuid;       // Source GUID

} ETW_NOTIFICATION_HEADER, *PETW_NOTIFICATION_HEADER;
#pragma warning(pop)

//
// The Kernel Event Version is used to indicate if any kernel
// event has changed.  Make sure you change the version if you
// change any kernel hooks.
//
//  1 -- NetworkConfig event
//  2 -- New StackWalking
//  3 -- Hardfault event layout
//  4 -- SeparateRundown
//  5 -- OfficeProfiler
//  5 -- Process CommandLine
//  6 -- Registry event layout
//  7 -- DiskIo flag for VolSnap
//  8 -- CpuConfig event layout
//  8 -- Thread SubProcessTag
//  9 -- ProcessPerfCtrs event layout
// 10 -- Driver Major Function event layout
// 11 -- SubProcessTag in ServiceConfig
// 11 -- ImageLoad event layout
// 12 -- CSwitch: replace NewThreadQuantum with PreviousCState, retire OldThreadQuantum
// 13 -- CSwitch: add NewThreadPriorityDecrement and OldThreadRemainingQuantum
// 14 -- SoftFaults reflection for OfficeProfiler
//    -- Reserved for Vista SP1/Server08 changes
// 20 -- ReadyThread flags
// 21 -- Sampled profile flags
// 22 -- OfficeProfiler support removed
// 23 -- Page and I/O priority added to thread information
// 24 -- Updated format for heap events
// 25 -- Thread: StartAddr replaced with Affinity
//    -- Reserved for Win7 SP changes [26 - 34]
// 26 -- FltIO event tracing backported from Win8 (Win7 SP)
// 27 -- ProviderGroup and TraceLogging support backported from Threshold (Win7 SP)
// 35 -- FileIo events changed to use system header and issuing thread id
// 36 -- MM Instrumentation Update Win8
// 37 -- Priority added to SampledProfile event
// 38 -- 16MB buffer size support
// 39 -- ISR Vector byte -> word
// 40 -- MemorySpeed in SysConfig
// 41 -- Scheduling rank added to sampled profile event
// 42 -- Added new heap events for tracking LFH affinity manager
//    -- Reserved for Win8 SP1 changes [43 - 49]
// 50 -- Added ExitTime in P-Zombie events
//    -- Added Logger resource usage to Kernel-EventTracing provider rundown
//    -- Added Terminate Event to collect stack on the call to terminate a process
// 51 -- Added DllCharacterists and signed information to image load/unload/rundown
// 52 -- Added SpinLockHoldThreshold in the configuration of spinlock instrumentation
// 53 -- Added heap event to track subsegments changing affinity.
// 54 -- Added heap event to identify when the lfh reuse threshold is triggered
//    -- Reserved for Win8.1 SP changes [55-59]
// 55 -- ProviderGroup and TraceLogging support backported from Threshold (Win8.1)
// 60 -- SystemTime clock type now uses SystemTimePrecise
//

#define ETW_KERNEL_EVENT_VERSION        60

typedef struct _ETW_KERNEL_HEADER_EXTENSION {
    PERFINFO_GROUPMASK GroupMasks;
    ULONG Version;
} ETW_KERNEL_HEADER_EXTENSION, *PETW_KERNEL_HEADER_EXTENSION;


#define ETW_SET_MARK_WITH_FLUSH 0x00000001

typedef struct _ETW_SET_MARK_INFORMATION {
    ULONG Flag;
    WCHAR Mark[1];
} ETW_SET_MARK_INFORMATION, *PETW_SET_MARK_INFORMATION;

//
// Constants/Structures used with NtQuerySystemInformation
//

typedef enum _EVENT_TRACE_INFORMATION_CLASS {
    EventTraceKernelVersionInformation,
    EventTraceGroupMaskInformation,
    EventTracePerformanceInformation,    // (private, subject to change)
    EventTraceTimeProfileInformation,
    EventTraceSessionSecurityInformation,
    EventTraceSpinlockInformation,
    EventTraceStackTracingInformation,
    EventTraceExecutiveResourceInformation,
    EventTraceHeapTracingInformation,
    EventTraceHeapSummaryTracingInformation,
    EventTracePoolTagFilterInformation,
    EventTracePebsTracingInformation,
    EventTraceProfileConfigInformation,
    EventTraceProfileSourceListInformation,
    EventTraceProfileEventListInformation,
    EventTraceProfileCounterListInformation,
    EventTraceStackCachingInformation,
    EventTraceObjectTypeFilterInformation,
    MaxEventTraceInfoClass               // always be the last enum
} EVENT_TRACE_INFORMATION_CLASS;

typedef struct _EVENT_TRACE_VERSION_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG EventTraceKernelVersion;
} EVENT_TRACE_VERSION_INFORMATION, *PEVENT_TRACE_VERSION_INFORMATION;

typedef struct _EVENT_TRACE_GROUPMASK_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    TRACEHANDLE TraceHandle;
    PERFINFO_GROUPMASK EventTraceGroupMasks;
} EVENT_TRACE_GROUPMASK_INFORMATION, *PEVENT_TRACE_GROUPMASK_INFORMATION;

typedef struct _EVENT_TRACE_PERFORMANCE_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    LARGE_INTEGER LogfileBytesWritten;
} EVENT_TRACE_PERFORMANCE_INFORMATION, *PEVENT_TRACE_PERFORMANCE_INFORMATION;

typedef struct _EVENT_TRACE_TIME_PROFILE_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG ProfileInterval;
} EVENT_TRACE_TIME_PROFILE_INFORMATION, *PEVENT_TRACE_TIME_PROFILE_INFORMATION;

typedef struct _EVENT_TRACE_SESSION_SECURITY_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    SECURITY_INFORMATION SecurityInformation;
    TRACEHANDLE TraceHandle;
    UCHAR SecurityDescriptor[1];
} EVENT_TRACE_SESSION_SECURITY_INFORMATION, *PEVENT_TRACE_SESSION_SECURITY_INFORMATION;

typedef struct _EVENT_TRACE_SPINLOCK_INFORMATION_V1 {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG SpinLockSpinThreshold;
    ULONG SpinLockAcquireSampleRate;
    ULONG SpinLockContentionSampleRate;
} EVENT_TRACE_SPINLOCK_INFORMATION_V1, *PEVENT_TRACE_SPINLOCK_INFORMATION_V1;

typedef struct _EVENT_TRACE_SPINLOCK_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG SpinLockSpinThreshold;
    ULONG SpinLockAcquireSampleRate;
    ULONG SpinLockContentionSampleRate;
    ULONG SpinLockHoldThreshold;
} EVENT_TRACE_SPINLOCK_INFORMATION, *PEVENT_TRACE_SPINLOCK_INFORMATION;

typedef struct _EVENT_TRACE_SYSTEM_EVENT_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    TRACEHANDLE TraceHandle;
    ULONG HookId[1];
} EVENT_TRACE_SYSTEM_EVENT_INFORMATION, *PEVENT_TRACE_SYSTEM_EVENT_INFORMATION;

typedef struct _EVENT_TRACE_TAG_FILTER_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    TRACEHANDLE TraceHandle;
    ULONG Filter[1];
} EVENT_TRACE_TAG_FILTER_INFORMATION, *PEVENT_TRACE_TAG_FILTER_INFORMATION;

typedef struct _EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG ReleaseSamplingRate;
    ULONG ContentionSamplingRate;
    ULONG NumberOfExcessiveTimeouts;
} EVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION, *PEVENT_TRACE_EXECUTIVE_RESOURCE_INFORMATION;

typedef struct _EVENT_TRACE_HEAP_TRACING_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG ProcessId[1];
} EVENT_TRACE_HEAP_TRACING_INFORMATION, *PEVENT_TRACE_HEAP_TRACING_INFORMATION;

//
// N.B. Pool and Handle tracing use the same structure for filtering.
//

typedef EVENT_TRACE_TAG_FILTER_INFORMATION
    EVENT_TRACE_POOLTAG_FILTER_INFORMATION, *PEVENT_TRACE_POOLTAG_FILTER_INFORMATION;

typedef EVENT_TRACE_TAG_FILTER_INFORMATION
    EVENT_TRACE_OBJECT_TYPE_FILTER_INFORMATION, *PEVENT_TRACE_OBJECT_TYPE_FILTER_INFORMATION;

//
// N.B. StackTracing, Pebs, Profiling use the same structure - list of HookId's for system events.
//

typedef EVENT_TRACE_SYSTEM_EVENT_INFORMATION EVENT_TRACE_STACK_TRACING_INFORMATION, *PEVENT_TRACE_STACK_TRACING_INFORMATION;
typedef EVENT_TRACE_SYSTEM_EVENT_INFORMATION EVENT_TRACE_PEBS_TRACING_INFORMATION, *PEVENT_TRACE_PEBS_TRACING_INFORMATION;
typedef EVENT_TRACE_SYSTEM_EVENT_INFORMATION EVENT_TRACE_PROFILE_EVENT_INFORMATION, *PEVENT_TRACE_PROFILE_EVENT_INFORMATION;

#define ETW_MAX_PROFILING_SOURCES 4
#define ETW_MAX_PMC_EVENTS        4
#define ETW_MAX_PMC_COUNTERS      4

typedef struct _EVENT_TRACE_PROFILE_LIST_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    ULONG Spare;
    PROFILE_SOURCE_INFO Profile[ANYSIZE_ARRAY];
} EVENT_TRACE_PROFILE_LIST_INFORMATION, *PEVENT_TRACE_PROFILE_LIST_INFORMATION;

typedef struct _EVENT_TRACE_PROFILE_COUNTER_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    TRACEHANDLE TraceHandle;
    ULONG ProfileSource[1];
} EVENT_TRACE_PROFILE_COUNTER_INFORMATION, *PEVENT_TRACE_PROFILE_COUNTER_INFORMATION;

typedef EVENT_TRACE_PROFILE_COUNTER_INFORMATION EVENT_TRACE_PROFILE_CONFIG_INFORMATION, *PEVENT_TRACE_PROFILE_CONFIG_INFORMATION;

typedef struct _EVENT_TRACE_STACK_CACHING_INFORMATION {
    EVENT_TRACE_INFORMATION_CLASS EventTraceInformationClass;
    TRACEHANDLE TraceHandle;
    BOOLEAN Enabled;
    UCHAR Reserved[3];
    ULONG CacheSize;
    ULONG BucketCount;
} EVENT_TRACE_STACK_CACHING_INFORMATION, *PEVENT_TRACE_STACK_CACHING_INFORMATION;

//
// Structures and types used for session notification
//

typedef enum _ETW_SESSION_NOTIFICATION_TYPE {
    EtwSessionNotificationMediaChanged = 1,
    EtwSessionNotificationSessionTerminated,
    EtwSessionNotificationLogfileError,
    EtwSessionNotificationRealtimeError,
    EtwSessionNotificationSessionStarted,
    EtwSessionNotificationMax
} ETW_SESSION_NOTIFICATION_TYPE;

typedef struct _ETW_SESSION_NOTIFICATION_PACKET {
    ETW_NOTIFICATION_HEADER NotificationHeader;
    ETW_SESSION_NOTIFICATION_TYPE Type;
    NTSTATUS Status;
    TRACEHANDLE TraceHandle;
    ULONG Reserved[2];
} ETW_SESSION_NOTIFICATION_PACKET, *PETW_SESSION_NOTIFICATION_PACKET;


#ifndef _ETW_KM_

#ifdef __cplusplus
extern "C" {
#endif

typedef ULONG (NTAPI *PETW_NOTIFICATION_CALLBACK) (
    PETW_NOTIFICATION_HEADER NotificationHeader,
    PVOID Context
    );

ULONG
WMIAPI
EtwSetMark(
    _In_opt_ TRACEHANDLE TraceHandle,
    _In_ PETW_SET_MARK_INFORMATION MarkInfo,
    _In_ ULONG Size
    );

//
// Event API that takes EventProperty.
// Internally public for Crimson.
//
ULONG
EVNTAPI
EtwEventWriteFull(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT EventProperty,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventRegister(
    _In_ LPCGUID ProviderId,
    _In_opt_ PENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PREGHANDLE RegHandle
    );

ULONG
EVNTAPI
EtwEventUnregister(
    _In_ REGHANDLE RegHandle
    );

ULONG
EVNTAPI
EtwEventSetInformation(
    _In_ REGHANDLE RegHandle,
    _In_ EVENT_INFO_CLASS InformationClass,
    _In_reads_bytes_(InformationLength) PVOID EventInformation,
    _In_ ULONG InformationLength
    );

ULONG
EVNTAPI
EtwRegisterSecurityProvider(
    );

BOOLEAN
EVNTAPI
EtwEventProviderEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    );

BOOLEAN
EVNTAPI
EtwEventEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    );

ULONG
EVNTAPI
EtwEventWrite(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventWriteTransfer(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventWriteString(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword,
    _In_ PCWSTR String
    );

ULONG
EVNTAPI
EtwEventWriteEx(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG64 Filter,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventWriteStartScenario(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR   UserData
    );

ULONG
EVNTAPI
EtwEventWriteEndScenario(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwWriteUMSecurityEvent(
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ USHORT EventProperty,
    _In_ ULONG UserDataCount,
    _In_opt_ PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventWriteNoRegistration(
    _In_ LPCGUID ProviderId,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

ULONG
EVNTAPI
EtwEventActivityIdControl(
    _In_ ULONG ControlCode,
    _Inout_ LPGUID ActivityId
    );

ULONG
EVNTAPI
EtwNotificationRegister(
    _In_ LPCGUID Guid,
    _In_ ULONG Type,
    _In_ PETW_NOTIFICATION_CALLBACK Callback,
    _In_opt_ PVOID Context,
    _Out_ PREGHANDLE RegHandle
    );

ULONG
EVNTAPI
EtwNotificationUnregister (
    _In_ REGHANDLE RegHandle,
    _Out_opt_ PVOID * Context
    );

ULONG
EVNTAPI
EtwSendNotification(
    _In_ PETW_NOTIFICATION_HEADER DataBlock,
    _In_ ULONG ReceiveDataBlockSize,
    _Inout_ PVOID ReceiveDataBlock,
    _Out_ PULONG ReplyReceived,
    _Out_ PULONG ReplySizeNeeded
    );

ULONG
EVNTAPI
EtwReplyNotification(
    _In_ PETW_NOTIFICATION_HEADER Notification
    );

ULONG
EtwEnumerateProcessRegGuids(
    _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
    _In_ ULONG OutBufferSize,
    _Out_ PULONG ReturnLength
    );

_Success_(return == 0L)
ULONG
EtwQueryRealtimeConsumer (
    _In_ TRACEHANDLE TraceHandle,
    _Out_ PULONG EventsLostCount,
    _Out_ PULONG BuffersLostCount
    );

#ifdef __cplusplus
}
#endif

#endif  // _ETW_KM_

#endif
