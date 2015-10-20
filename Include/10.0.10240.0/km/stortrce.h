/*++

Copyright (c) 2004  Microsoft Corporation

Module Name:

    stortrce.w

Abstract:

    These are the structures and definitions used for tracing
    in storage miniports.

Authors:

Revision History:

--*/

//
// Add a little bit of no-op header versioning so that the header-versioning detection
// tool is happy. We'll add real header versioning later if we eventually need it.
//

#if NTDDI_VERSION >= NTDDI_WINXP
#endif

#include <stdarg.h>

#ifndef _NTSTORTRCE_
#define _NTSTORTRCE_

#define INLINE  __inline

//
// Determine the right PortNotification call for the miniport
//
#ifndef _PortTraceNotification

//
// Storport miniport
//
#ifdef _NTSTORPORT_
#define _PortTraceNotification StorPortNotification
#endif

//
// Scsi miniport
//
#ifdef _NTSRB_
#undef _PortTraceNotification
#define _PortTraceNotification   ScsiPortNotification
#endif

//
// Ata miniport
//
#ifdef _NTIRB_
#undef _PortTraceNotification
#define _PortTraceNotification   AtaPortTraceNotification
#endif

#ifndef _PortTraceNotification
#error "PortNotification not defined. Include scsi.h or storport.h or irb.h"
#endif

#endif   //#ifndef _PortTraceNotification

#ifndef StorMoveMemory

#ifdef _NTSTORPORT_
#define StorMoveMemory  StorPortMoveMemory
#endif

#ifdef _NTSRB_
#undef StorMoveMemory
#define StorMoveMemory   ScsiPortMoveMemory
#endif

#ifdef _NTIRB_
#undef StorMoveMemory
#define StorMoveMemory   AtaPortMoveMemory
#endif

#ifndef StorMoveMemory
#error "StorMoveMemory not defined. Include scsi.h or storport.h or irb.h"
#endif

#endif //#ifndef StorMoveMemory

typedef PVOID STORAGE_TRACE_CONTEXT;

//
// Prototype for the cleanup routine
//
typedef 
VOID
(*STOR_CLEANUP_TRACING) (
        _In_ PVOID Arg1
        );

//
// This structure is used to initializing the storage tracing library.
//
typedef struct _STORAGE_TRACE_INIT_INFO {
    //
    // The size, in bytes, of this structure.
    //
    ULONG Size;

    //
    // The number of diagnostic contexts the caller wants pre-allocated for
    // diagnostic events. By pre-allocating contexts, the caller will be
    // able to generate diagnostic events at any IRQL.
    //
    ULONG NumDiagEventRecords;

    //
    // The size, in bytes, of the user-defined data space to be allocated in
    // each pre-allocated diagnostic context.
    //
    ULONG DiagEventRecordUserDataSize;

    //
    // The number of error log records the caller wants pre-allocated.
    //
    ULONG NumErrorLogRecords;

    //
    // The trace GUID of the caller uniquely identifies the component as a
    // diagnostic event source.
    //
    GUID TraceGuid;

    //
    // Callback to cleanup tracing
    //
    STOR_CLEANUP_TRACING TraceCleanupRoutine;

    //
    // A pointer to the caller's driver object.
    //
    PVOID DriverObject;

    //
    // OUT : TraceContext to be used for error/diag support
    //
    PVOID TraceContext;

} STORAGE_TRACE_INIT_INFO, *PSTORAGE_TRACE_INIT_INFO;


//
// This structure is used to hold the user data that is attached to a
// diagnostic event.
//
typedef struct _STORAGE_DIAG_EVENT_RECORD {

    //
    // The size, in bytes of this structure. This value includes the
    // size of the information.
    //
    ULONG Size;

    //
    // Reserved.
    //
    ULONG Reserved;

    //
    // Additional information to be sent with the diagnostic event.
    //
    UCHAR Info[1];
} STORAGE_DIAG_EVENT_RECORD, *PSTORAGE_DIAG_EVENT_RECORD;


//
// This structure holds information about a diagnostic trace event.
//
typedef struct _STORAGE_TRACE_DPS_INFO {
    //
    // The event ID uniquely identifies a diagnostic event. Applications
    // can use the value to identify certain and take specific actions
    // accordingly.
    //
    GUID EventId;

    //
    // The flags field is used to control how the tracing library sends a
    // diagnostic trace event.
    //
    ULONG Flags;

    //
    // The status of the attempt to log the diagnostic event is recorded in
    // the status field.
    //
    ULONG Status;

    //
    // This field specifies the number of TRACE_CONTEXT records the caller is
    // supplying in the Contexts array.
    //
    ULONG NumContexts;

    //
    // An array of TRACE_CONTEXT structures. To be sent with the diagnostic
    // event.
    //
    PVOID Contexts;

    //
    // Specifies the size of the user data area.
    //
    ULONG UserDataSize;
    
} STORAGE_TRACE_DPS_INFO, *PSTORAGE_TRACE_DPS_INFO;

//
// This structure holds the error log from the miniport
//
typedef struct _STORAGE_ERRORLOG_PACKET {
    UCHAR         MajorFunctionCode;
    UCHAR         RetryCount;
    USHORT        DumpDataSize;
    USHORT        NumberOfStrings;
    USHORT        StringOffset;
    USHORT        EventCategory;
    ULONG         ErrorCode;
    ULONG         UniqueErrorValue;
    ULONG         FinalStatus;
    ULONG         SequenceNumber;
    ULONG         IoControlCode;
    LARGE_INTEGER DeviceOffset;
    ULONG         DumpData[1];
} STORAGE_ERRORLOG_PACKET, *PSTORAGE_ERRORLOG_PACKET;

//
// Tracing related notification types
//
typedef enum _STORAGE_TRACE_NOTIFY_TYPE {
    //
    // Initialization and cleanup
    //
    InitTracing = 1000,                 // 0x3E8 (1000)
    CleanupTracing,                     // 0x3E9 (1001)

    //
    // WPP support
    //
    TraceMessage = 2000,                // 0x7D0 (2000)
    InitGlobalLogger,                   // 0x7D1 (2001)
    WMIRegistrationControl,             // 0x7E2 (2002)
    WmiQueryTraceInfo,                  // 0x7E3 (2003)
    InitUnicodeString,                  // 0x7E4 (2004) 
    TraceDebugPrint,                    // 0x7E5 (2005)
        
    //
    // WDI support
    //
    AllocDiagEvent = 3000,              // 0xBB8 (3000)
    FreeDiagEvent,                      // 0xBB9 (3001)
    LogDiagEvent,                       // 0xBBA (3002)

    //
    // Error log support
    //
    WriteErrorLogRecord = 4000,         // 0xFA0 (4000)
    AllocErrorLog,
    FreeErrorLog

} STORAGE_TRACE_NOTIFY_TYPE, *PSTORAGE_TRACE_NOTIFY_TYPE;


//
// StorDebugPrint
//

typedef struct _STOR_DEBUGPRINT_ARGS {
    PCHAR                      Message;
    va_list                    ArgList;
} STOR_DEBUGPRINT_ARGS, *PSTOR_DEBUGPRINT_ARGS;

//
// StorInitTracing
//

typedef struct _STOR_INIT_TRACING_ARGS {
    PVOID   InitInfo;
    ULONG   Result;
} STOR_INIT_TRACING_ARGS, *PSTOR_INIT_TRACING_ARGS;


//
// StorCleanupTracing
//

typedef struct _STOR_CLEANUP_TRACING_ARGS {
    PVOID                      TraceContext;
} STOR_CLEANUP_TRACING_ARGS, *PSTOR_CLEANUP_TRACING_ARGS;

//
// WriteErrorLogEntry
//

typedef struct _STOR_WRITE_EL_RECORD_ARGS {
    PVOID                      TraceContext;
    PVOID                      ErrorLogPacket;
} STOR_WRITE_EL_RECORD_ARGS, *PSTOR_WRITE_EL_RECORD_ARGS;

//
// AllocateErrorLogEntry
//

typedef struct _STOR_ALLOC_EL_RECORD_ARGS {
    PVOID                      TraceContext;
    ULONG                      Size;
    PSTORAGE_ERRORLOG_PACKET   Result;
} STOR_ALLOC_EL_RECORD_ARGS, *PSTOR_ALLOC_EL_RECORD_ARGS;

//
// FreeErrorLogEntry
//

typedef struct _STOR_FREE_EL_RECORD_ARGS {
    PVOID                      TraceContext;
    PSTORAGE_ERRORLOG_PACKET   ErrorLogPacket;
} STOR_FREE_EL_RECORD_ARGS, *PSTOR_FREE_EL_RECORD_ARGS;


//
// TraceDriverLogEvent
//

typedef struct _STOR_LOG_DIAG_EVENT_ARGS {
    PVOID                      TraceContext;
    PVOID                      ContextEvent;
    ULONG                      result;
} STOR_LOG_DIAG_EVENT_ARGS, *PSTOR_LOG_DIAG_EVENT_ARGS;


//
// TraceDriverAllocEvent
//

typedef struct _STOR_ALLOC_DIAG_EVENT_ARGS {
    PVOID                      TraceContext;
    ULONG                      UserDataSize;
    BOOLEAN                    Allocate;
    PVOID                      result;    
} STOR_ALLOC_DIAG_EVENT_ARGS, *PSTOR_ALLOC_DIAG_EVENT_ARGS;


//
// TraceDriverFreeEvent
//

typedef struct _STOR_FREE_DIAG_EVENT_ARGS {
    PVOID                      TraceContext;
    PVOID                      EventRecord;
} STOR_FREE_DIAG_EVENT_ARGS, *PSTOR_FREE_DIAG_EVENT_ARGS;


//
// WmiTraceMessage
//

typedef struct _STOR_WMI_TRACE_MESSAGE_ARGS {
    ULONG64                    TraceHandle;
    ULONG                      MessageFlags;
    LPCGUID                    MessageGuid;
    USHORT                     MessageNumber;
    va_list                    Args;
    ULONG                      result;
} STOR_WMI_TRACE_MESSAGE_ARGS, *PSTOR_WMI_TRACE_MESSAGE_ARGS;

//
// RtlInitUnicodeString
//

typedef struct _STOR_INIT_UNICODE_STRING_ARGS {
    PVOID                      DestinationString;
    PCWSTR                     SourceString;
} STOR_INIT_UNICODE_STRING_ARGS, *PSTOR_INIT_UNICODE_STRING_ARGS;


//
// IoWMIRegistrationControl
//

typedef struct _STOR_WMI_REGCONTROL_ARGS {
    PVOID                      DeviceObject;
    ULONG                      Action;
    ULONG                      result;
} STOR_WMI_REGCONTROL_ARGS, *PSTOR_WMI_REGCONTROL_ARGS;


//
// IoWMIRegistrationControl
//

typedef struct _STOR_WMI_QUERYTRACEINFO_ARGS {
    ULONG                      TraceInformationClass;
    PVOID                      TraceInformation;
    ULONG                      TraceInformationLength;
    PULONG                     RequiredLength;
    PVOID                      Buffer;
    ULONG                      result;
} STOR_WMI_QUERYTRACEINFO_ARGS, *PSTOR_WMI_QUERYTRACEINFO_ARGS;


//
// WppInitGlobalLogger
//

typedef struct _STOR_INITGLOBALLOGGER_ARGS {
    LPCGUID                     ControlGuid;
    PVOID                       Logger;
    PVOID                       Flags;
    PVOID                       Level;
} STOR_INITGLOBALLOGGER_ARGS, *PSTOR_INITGLOBALLOGGER_ARGS;

//
// memset
//
#define StorMemSet(dst, val, count) \
{ \
    ULONG _i = count; \
    while (_i) { \
        *((char *)dst+_i-1) = (char)val; \
        _i--; \
    } \
} 

//
// StorInitTracing
//

ULONG
__inline
StorInitTracing(
    _In_ PVOID  InitInfo
    )
{
    STOR_INIT_TRACING_ARGS args = {0};

    args.InitInfo = InitInfo;
    args.Result = 0xC00000BB;
    _PortTraceNotification(TraceNotification, NULL, InitTracing, &args);

    return args.Result;
}

//
// StorCleanupTracing
//

VOID
__inline
StorCleanupTracing(
    _In_ PVOID TraceContext
    )
{
    STOR_CLEANUP_TRACING_ARGS args = {0};

    args.TraceContext = TraceContext;
    _PortTraceNotification(TraceNotification, NULL, CleanupTracing, &args);
}

//
// TraceDriverLogEvent
//

ULONG
__inline
StorTraceDiagLogEvent(
    _In_ PVOID                 DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ PVOID                 Event
    )
{
    STOR_LOG_DIAG_EVENT_ARGS args = {0};

    args.TraceContext = TraceContext;
    args.ContextEvent = Event;
    _PortTraceNotification(TraceNotification, DeviceExtension, LogDiagEvent, &args);
    return args.result;
}

//
// TraceDriverAllocEvent
//

PVOID
__inline
StorTraceDiagAllocEvent(
    _In_ PVOID                 DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ ULONG                 DataSize,
    _In_ BOOLEAN               Allocate
    )
{
    STOR_ALLOC_DIAG_EVENT_ARGS args = {0};

    args.TraceContext = TraceContext;
    args.UserDataSize = DataSize;
    args.Allocate = Allocate;
    _PortTraceNotification(TraceNotification, DeviceExtension, AllocDiagEvent, &args);

    return args.result;
}

//
// TraceDriverFreeEvent
//

VOID
__inline
StorTraceDiagFreeEvent(
    _In_ PVOID                 DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT TraceContext,
    _In_ PVOID                 Event
    )
{
    STOR_FREE_DIAG_EVENT_ARGS args = {0};

    args.TraceContext = TraceContext;
    args.EventRecord = Event;
    _PortTraceNotification(TraceNotification, DeviceExtension, FreeDiagEvent, &args);
}

//
// WriteErrorLogEntry
//

VOID
__inline
StorTraceErrorWriteRecord(
    _In_ PVOID  DeviceExtension,
    _In_ PVOID  Arg1,
    _In_ PVOID  Arg2
    )
{
    STOR_WRITE_EL_RECORD_ARGS args = {0};

    args.TraceContext = Arg1;
    args.ErrorLogPacket = Arg2;
    _PortTraceNotification(TraceNotification, DeviceExtension, WriteErrorLogRecord, &args);
}

//
// AllocateErrorLogEntry
//

PSTORAGE_ERRORLOG_PACKET
__inline
StorTraceErrorAllocRecord(
    _In_ PVOID                        DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT        TraceContext,
    _In_ ULONG                        Size
    )
{
    STOR_ALLOC_EL_RECORD_ARGS args = {0};

    args.TraceContext = TraceContext;
    args.Size = Size;
    _PortTraceNotification(TraceNotification, DeviceExtension, AllocErrorLog, &args);
    return args.Result;
}

//
// FreeErrorLogEntry
//

VOID
__inline
StorTraceErrorFreeRecord(
    _In_ PVOID                    DeviceExtension,
    _In_ STORAGE_TRACE_CONTEXT    TraceContext,
    _In_ PSTORAGE_ERRORLOG_PACKET ErrorLogPacket
    )
{
    STOR_FREE_EL_RECORD_ARGS args = {0};

    args.TraceContext = TraceContext;
    args.ErrorLogPacket = ErrorLogPacket;
    _PortTraceNotification(TraceNotification, DeviceExtension, FreeErrorLog, &args);
}

//
// WmiTraceMessage
//

ULONG
__inline
StorWmiTraceMessage(
    _In_ ULONG64 Arg1,
    _In_ ULONG   Arg2,
    _In_ LPCGUID Arg3,
    _In_ USHORT  Arg4,
    ... 
    )
{
    STOR_WMI_TRACE_MESSAGE_ARGS args = {0};
    va_list ap;
    va_start(ap, Arg4);

    args.TraceHandle = Arg1;
    args.MessageFlags = Arg2;
    args.MessageGuid = Arg3;
    args.MessageNumber = Arg4;
    args.Args = ap;

    _PortTraceNotification(TraceNotification, NULL, TraceMessage, &args);
    return args.result;
}

//
// RtlInitUnicodeString
//

VOID
__inline
StorRtlInitUnicodeString(
    _Out_ PVOID  Arg1,
    _In_  PCWSTR Arg2
    )
{
    STOR_INIT_UNICODE_STRING_ARGS args;

    args.DestinationString = Arg1;
    args.SourceString = Arg2;
    _PortTraceNotification(TraceNotification, NULL, InitUnicodeString, &args);
}

//
// WppInitGlobalLogger
//

VOID
__inline
StorWppInitGlobalLogger(
    _In_ LPCGUID Arg1,
    _In_ PVOID Arg2,
    _In_ PVOID Arg3,
    _In_ PVOID Arg4
    )
{
    STOR_INITGLOBALLOGGER_ARGS args = {0};

    args.ControlGuid = Arg1;
    args.Logger = Arg2;
    args.Flags = Arg3;
    args.Level = Arg4;
    _PortTraceNotification(TraceNotification, NULL, InitGlobalLogger, &args);
}

//
// IoWMIRegistrationControl
//

ULONG
__inline
StorIoWMIRegistrationControl(
    _In_ PVOID Arg1,
    _In_ ULONG Arg2
    )
{
    STOR_WMI_REGCONTROL_ARGS args = {0};

    args.DeviceObject = Arg1;
    args.Action = Arg2;
    _PortTraceNotification(TraceNotification, NULL, WMIRegistrationControl, &args);
    return args.result;
}

//
// WmiQueryTraceInformation
//

ULONG
__inline
StorWmiQueryTraceInformation(
    _In_  ULONG  Arg1,
    _Out_ PVOID  Arg2,
    _In_  ULONG  Arg3,
    _Out_ PULONG Arg4,
    _In_  PVOID  Arg5
    )
{
    STOR_WMI_QUERYTRACEINFO_ARGS args = {0};

    args.TraceInformationClass = Arg1;
    args.TraceInformation = Arg2;
    args.TraceInformationLength = Arg3;
    args.RequiredLength = Arg4;
    args.Buffer = Arg5;
    _PortTraceNotification(TraceNotification, NULL, WmiQueryTraceInfo, &args);
    return args.result;
}


/*
//
// DebugPrint
//

VOID
__inline
StorDebugPrint(
    _In_ PCHAR   Arg1,
    _In_ va_list Arg2
    )
{
    STOR_DEBUGPRINT_ARGS args = {Arg1, Arg2};
    _PortTraceNotification(TraceNotification, NULL, TraceDebugPrint, &args);
}


#ifdef DO_DBGPRINT
#define WPP_DEBUG(A) StorDebugPrint A
#endif
*/

#endif
