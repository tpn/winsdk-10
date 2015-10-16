/*++ BUILD Version: 0015    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    wmikm.h

Abstract:

    This module defines the WMI types, constants, and functions that are
    exposed to internal device drivers.

Revision History:

--*/

#ifndef _WMIKM_H_
#define _WMIKM_H_

#include <evntrace.h>
#include <wmistr.h>
// The following minor code is reserved as a private WMI minor function
// For drivers who cannot include io.h, please see wmikm.h
//

#define IRP_MN_SET_TRACE_NOTIFY             0x0A
#define IRP_MN_TRACE_RUNDOWN                0x0C

//
// The following is set for a KM provider who is considered private to
// kernel tracing
//
#define WMIREG_FLAG_TRACE_PROVIDER          0x00010000

//
// The following mask is to extract the trace callout class
//
#define WMIREG_FLAG_TRACE_NOTIFY_MASK       0x00F00000

//
// We use 4 bits for the trace callout classes.
//
#define WMIREG_NOTIFY_DISK_IO               1 << 20
#define WMIREG_NOTIFY_TDI_IO                2 << 20
#define WMIREG_NOTIFY_FILE_IO               4 << 20
#define WMIREG_NOTIFY_SPLIT_IO              8 << 20


#ifndef _NTWMI_X_LOGGER_HANDLE
#define _NTWMI_X_LOGGER_HANDLE

//
// Public routines to break down the Loggerhandle
//
#define KERNEL_LOGGER_ID                      0xFFFF    // USHORT only

#ifndef POINTER_ALIGNMENT
#if defined(_WIN64)
#define POINTER_ALIGNMENT DECLSPEC_ALIGN(8)
#else
#define POINTER_ALIGNMENT
#endif
#endif

typedef struct POINTER_ALIGNMENT _TRACE_ENABLE_CONTEXT {
    USHORT  LoggerId;           // Actual Id of the logger
    UCHAR   Level;              // Enable level passed by control caller
    UCHAR   InternalFlag;       // Reserved
    ULONG   EnableFlags;        // Enable flags passed by control caller
} TRACE_ENABLE_CONTEXT, *PTRACE_ENABLE_CONTEXT;

typedef struct POINTER_ALIGNMENT _TRACE_ENABLE_CONTEXT_EX {
    USHORT  LoggerId;           // Actual Id of the logger
    UCHAR   Level;              // Enable level passed by control caller
    UCHAR   InternalFlag;       // Reserved
    ULONG   EnableFlags;        // Enable flags passed by control caller
    ULONG   EnableFlagsHigh;    // Upper 32 bits of the enable flags
    ULONG   Reserved;           // Reserved for future use
} TRACE_ENABLE_CONTEXT_EX, *PTRACE_ENABLE_CONTEXT_EX;

#define WmiGetLoggerId(LoggerContext) \
    (((PTRACE_ENABLE_CONTEXT) (&LoggerContext))->LoggerId)

#define WmiGetLoggerEnableFlags(LoggerContext) \
   ((PTRACE_ENABLE_CONTEXT) (&LoggerContext))->EnableFlags
#define WmiGetLoggerEnableLevel(LoggerContext) \
    ((PTRACE_ENABLE_CONTEXT) (&LoggerContext))->Level

#define WmiSetLoggerId(Id, Context) \
     (((PTRACE_ENABLE_CONTEXT)Context)->LoggerId = (USHORT) (Id  ? \
                           (USHORT)Id: (USHORT)KERNEL_LOGGER_ID));

#endif // _NTWMI_X_LOGGER_HANDLE


typedef struct _ETW_KERNEL_TRACE_TIMESTAMP {
    LARGE_INTEGER KernelTraceTimeStamp[2];
} ETW_KERNEL_TRACE_TIMESTAMP, *PETW_KERNEL_TRACE_TIMESTAMP;

//
// Disk IO Notification Routines.
//

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_DISKIO_COMPLETION_NOTIFY_ROUTINE)(
    _In_ ULONG Key,
    _In_ ULONG DiskNumber,
    _In_ PIRP Irp
    );

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_OPTICALIO_COMPLETION_NOTIFY_ROUTINE)(
    _In_ ULONG Key,
    _In_ ULONG DiskNumber,
    _In_ PIRP Irp,
    _In_ LARGE_INTEGER ResponseTime
    );

_IRQL_requires_same_
typedef
VOID 
(*PWMI_DISKIO_INITIATION_NOTIFY_ROUTINE)(
    _In_ PIRP Irp
    );

typedef PWMI_DISKIO_INITIATION_NOTIFY_ROUTINE PWMI_OPTICALIO_INITIATION_NOTIFY_ROUTINE;

typedef struct _WMI_DISKIO_NOTIFY_ROUTINES {
    PWMI_DISKIO_COMPLETION_NOTIFY_ROUTINE CompletionNotifyRoutine;
    PWMI_DISKIO_INITIATION_NOTIFY_ROUTINE InitiationNotifyRoutine;
    PWMI_OPTICALIO_COMPLETION_NOTIFY_ROUTINE OpticalCompletionRoutine;
    PWMI_OPTICALIO_INITIATION_NOTIFY_ROUTINE OpticalInitiationRoutine;    
} WMI_DISKIO_NOTIFY_ROUTINES, *PWMI_DISKIO_NOTIFY_ROUTINES;

//
// File IO Notification Routines.
//

_IRQL_requires_same_
typedef
VOID
(*PWMI_FILEIO_FILENAME_NOTIFY_ROUTINE)(
    _In_ PVOID FileKey,
    _In_ struct _UNICODE_STRING *FileName,
    _In_ ULONG LoggerId,
    _In_ USHORT HookId
    );

_IRQL_requires_same_
typedef
VOID
(*PWMI_FILEIO_OPERATION_NOTIFY_ROUTINE)(
    _In_reads_(DataCount) struct _EVENT_DATA_DESCRIPTOR *EventData,
    _In_ ULONG DataCount,
    _In_ ULONG GroupMask,
    _In_ USHORT HookId,
    _In_opt_ LPGUID ActivityId
    );

typedef struct _WMI_FILEIO_NOTIFY_ROUTINES {
    PWMI_FILEIO_FILENAME_NOTIFY_ROUTINE FileNameRundownRoutine;
    PWMI_FILEIO_FILENAME_NOTIFY_ROUTINE FileNameNotifyRoutine;
    PWMI_FILEIO_OPERATION_NOTIFY_ROUTINE InitiationNotifyRoutine;
    PWMI_FILEIO_OPERATION_NOTIFY_ROUTINE CompletionNotifyRoutine;
} WMI_FILEIO_NOTIFY_ROUTINES, *PWMI_FILEIO_NOTIFY_ROUTINES;

//
// TDI IO Notification Routine.
//

_IRQL_requires_same_
typedef VOID
(*PTDI_DATA_REQUEST_NOTIFY_ROUTINE) (
    _In_ ULONG EventType,
    _In_reads_bytes_(Size) PVOID DataBlock,
    _In_ ULONG Size,
    _In_ PETHREAD Thread
    );

//
// SplitIo Notification Routines.
//

/*++

Routine Description:

    Trace routine called when a request is about to
    be  forwarded down the stack on a different irp.

Arguments:

    ParentIrp - Supplies the top level irp being processed.

    ChildIrp - Supplies the newly created down level irp.

    HookId - Supplies HookId for the event.

Return Value:

    None.

--*/

_IRQL_requires_same_
typedef
VOID 
(*PWMI_SPLITIO_OPERATION_NOTIFY_ROUTINE) (
    _In_ PIRP ParentIrp,
    _In_ PIRP ChildIrp,
    _In_ USHORT HookId
    );

typedef struct _WMI_SPLITIO_NOTIFY_ROUTINES {
    PWMI_SPLITIO_OPERATION_NOTIFY_ROUTINE InitiationNotifyRoutine;
} WMI_SPLITIO_NOTIFY_ROUTINES, *PWMI_SPLITIO_NOTIFY_ROUTINES;

//
// Minifilter IRP Callback Initiation Notification Routine
//

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_FLTIO_OPERATION_NOTIFY_ROUTINE)(
    _In_ PVOID EventData,
    _In_ ULONG Size,
    _In_ ULONG GroupMask,
    _In_ USHORT HookId
    );

//
// Minifilter IRP Callback Completion Notification Routine
//

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_FLTIO_TIMED_OPERATION_NOTIFY_ROUTINE) (
    _In_ PVOID EventData,
    _In_ ULONG Size,
    _In_ ULONG GroupMask,
    _In_ USHORT HookId,
    _In_ PETW_KERNEL_TRACE_TIMESTAMP StartTime
    );

_IRQL_requires_same_
typedef
VOID
(FASTCALL *PETW_KERNEL_TRACE_TIMESTAMP_ROUTINE) (
    _Out_ PETW_KERNEL_TRACE_TIMESTAMP EtwTimeStamp,
    _In_ ULONG GroupMask
    );

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_FLTIO_IO_REDIRECTION_NOTIFY_ROUTINE) (
    _In_ PIRP Irp,
    _In_ PFILE_OBJECT FileObject
    );

typedef struct _WMI_FLTIO_NOTIFY_ROUTINES {
    PETW_KERNEL_TRACE_TIMESTAMP_ROUTINE TimeStampRoutine;    
    PWMI_FLTIO_OPERATION_NOTIFY_ROUTINE FailureNotifyRoutine;    
    PWMI_FLTIO_OPERATION_NOTIFY_ROUTINE InitiationNotifyRoutine;
    PWMI_FLTIO_TIMED_OPERATION_NOTIFY_ROUTINE CompletionNotifyRoutine;  
    PWMI_FLTIO_TIMED_OPERATION_NOTIFY_ROUTINE FastCompletionNotifyRoutine;
    PWMI_FLTIO_IO_REDIRECTION_NOTIFY_ROUTINE IoRedirectionNotifyRoutine;
} WMI_FLTIO_NOTIFY_ROUTINES, *PWMI_FLTIO_NOTIFY_ROUTINES;

//
// WDF Notification Routine
//

_IRQL_requires_same_
typedef 
VOID 
(*PWMI_WDF_NOTIFY_ROUTINE)(
    _In_reads_bytes_(Size) PVOID EventData,
    _In_ ULONG Size,
    _In_ ULONG GroupMask,
    _In_ USHORT HookId,
    _In_ UCHAR Version
    );

typedef struct _WMI_WDF_NOTIFY_ROUTINES {
    ULONG Size;
    PWMI_WDF_NOTIFY_ROUTINE DpcNotifyRoutine;    
    PWMI_WDF_NOTIFY_ROUTINE InterruptNotifyRoutine;    
    PWMI_WDF_NOTIFY_ROUTINE WorkItemNotifyRoutine;    
} WMI_WDF_NOTIFY_ROUTINES, *PWMI_WDF_NOTIFY_ROUTINES;

typedef struct _ETW_ALL_POSSIBLE_NOTIFY_ROUTINES {
    PWMI_DISKIO_COMPLETION_NOTIFY_ROUTINE DiskIoCompletionRoutine;
    PWMI_DISKIO_INITIATION_NOTIFY_ROUTINE DiskIoInitiationRoutine;
    PWMI_OPTICALIO_COMPLETION_NOTIFY_ROUTINE OpticalCompletionRoutine;
    PWMI_OPTICALIO_INITIATION_NOTIFY_ROUTINE OpticalInitiationRoutine;
    PWMI_FILEIO_FILENAME_NOTIFY_ROUTINE FileNameRoutine;
    PWMI_FILEIO_OPERATION_NOTIFY_ROUTINE FileInitiationRoutine;
    PWMI_FILEIO_OPERATION_NOTIFY_ROUTINE FileCompletionRoutine;
    PTDI_DATA_REQUEST_NOTIFY_ROUTINE TdiRoutine;
    PWMI_SPLITIO_OPERATION_NOTIFY_ROUTINE SplitIoRoutine;  
    PWMI_FLTIO_OPERATION_NOTIFY_ROUTINE FltIoInitiationRoutine;
    PWMI_FLTIO_TIMED_OPERATION_NOTIFY_ROUTINE FltIoCompletionRoutine; 
    PETW_KERNEL_TRACE_TIMESTAMP_ROUTINE KernelTraceTimeStampRoutine;
    PWMI_WDF_NOTIFY_ROUTINE WdfRoutine;
    PWMI_WDF_NOTIFY_ROUTINE WdfSystemRoutine;
    PWMI_FLTIO_IO_REDIRECTION_NOTIFY_ROUTINE FltIoRedirectionNotifyRoutine;
} ETW_ALL_POSSIBLE_NOTIFY_ROUTINES, *PETW_ALL_POSSIBLE_NOTIFY_ROUTINES;

//
// Trace rundown notification structure.
//

#define WMI_TRACE_RUNDOWN_NOTIFICATION_VERSION 1

typedef struct _WMI_TRACE_RUNDOWN_NOTIFICATION {
    ULONG Version;
    ULONG LoggerId;
    ULONG Flags;
} WMI_TRACE_RUNDOWN_NOTIFICATION, *PWMI_TRACE_RUNDOWN_NOTIFICATION;

typedef enum tagWMI_CLOCK_TYPE {
    WMICT_DEFAULT,
    WMICT_SYSTEMTIME,
    WMICT_PERFCOUNTER,
    WMICT_PROCESS,
    WMICT_THREAD,
    WMICT_CPUCYCLE
} WMI_CLOCK_TYPE;

NTKERNELAPI
LONG64
FASTCALL
WmiGetClock (
    _In_ WMI_CLOCK_TYPE ClockType,
    _In_opt_ PVOID Context
    );


#endif // _WMIKM_H_
