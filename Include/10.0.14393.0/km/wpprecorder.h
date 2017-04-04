
/***************************************************************************

Copyright (c) Microsoft Corporation.  All Rights Reserved

Module Name:

        WppRecorder.h

Abstract:

        Public header for WppRecorder API
        This header must be included before the .tmh file.

Environment:

        Kernel Mode

****************************************************************************/

#ifndef __WPPRECORDER_H__
#define __WPPRECORDER_H__

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#if (NTDDI_VERSION >= NTDDI_WIN8) || defined (__WPP_RECORDER_DOWNLEVEL__)

#include <ntstrsafe.h>

#ifdef __cplusplus
extern "C" {
#endif

//
// WppRecorder API
//

DECLARE_HANDLE(RECORDER_LOG);
DECLARE_HANDLE(WPP_RECORDER_COUNTER);

#define RECORDER_LOG_IDENTIFIER_MAX_CHARS       16

#define RECORDER_LOG_DEFAULT_BUFFER_SIZE        1024
#define RECORDER_LOG_DEFAULT_ERR_PARTITION_SIZE 200

//
// WPP triage info structure used for finding location of WPP log
// for WER reporting
//
typedef struct _WPP_TRIAGE_INFO {
    //
    // Size of WPP_AUTOLOG_HEADER
    //

    ULONG WppAutoLogHeaderSize;

    //
    // Offset of DriverContext into WPP_AUTOLOG_HEADER
    //

    ULONG WppDriverContextOffset;

    //
    // Offset of Size field into WPP_AUTOLOG_HEADER
    //

    ULONG WppAutoLogHeaderSizeOffset;

    //
    // Size of Header size field
    //
    
    ULONG WppSizeOfAutoLogHeaderSizeField;

    //
    // Size of WPP_AUTOLOG_CONTEXT
    //

    ULONG WppDriverContextSize;

} WPP_TRIAGE_INFO, *PWPP_TRIAGE_INFO;


//
// Parameters for WppRecorderConfigure
//
typedef struct _RECORDER_CONFIGURE_PARAMS {

    //
    // Size of this struct
    //
    ULONG Size;

    //
    // Whether a default log should be allocated/kept
    // Default: True
    //
    BOOLEAN CreateDefaultLog;

} RECORDER_CONFIGURE_PARAMS, *PRECORDER_CONFIGURE_PARAMS;

FORCEINLINE
VOID
RECORDER_CONFIGURE_PARAMS_INIT(
    __out
        PRECORDER_CONFIGURE_PARAMS  Params
    )
{
    Params->Size = sizeof(*Params);
    Params->CreateDefaultLog = TRUE;
}

//
// Note: the WPP_CB used by the macros below is a pointer to the 
// WPP's global trace control block. This control block is defined and
// declared by the WPP's *.tmh header files.
//

__drv_maxIRQL(PASSIVE_LEVEL)
VOID
imp_WppRecorderConfigure(
    __in
        PVOID                       WppCb,
    __in 
        PRECORDER_CONFIGURE_PARAMS  ConfigureParams
    );

#define WppRecorderConfigure(ConfigureParams) \
    imp_WppRecorderConfigure(WPP_CB, ConfigureParams) 


//
// Parameters for WppRecorderLogCreate
//
typedef struct _RECORDER_LOG_CREATE_PARAMS {

    //
    // Size of this structure
    //
    ULONG       Size;

    //
    // Optional tag to associate with the allocated memory of the log.
    //
    ULONG       LogTag;

    //
    // Size in bytes for the log area
    //
    ULONG       TotalBufferSize;

    //
    // Amount of TotalBufferSize to dedicate to error messages
    // Zero indicates no error partition
    //
    ULONG       ErrorPartitionSize;

    //
    // Number/pointer to append to log identifier
    //
    ULONG_PTR   LogIdentifierAppendValue;

    //
    // Whether LogIdentifierAppendValue has been set
    //
    BOOLEAN     LogIdentifierAppendValueSet;

    //
    // Size of LogIdentifier field, in bytes (according to client's definition)
    //
    ULONG       LogIdentifierSize;

    //
    // Identifier to print when debug messages are merged
    // Lives at end of struct so that, if at some point clients have different definitions of the
    // array size, it remains simple to read the rest of the struct.
    //
    __field_bcount(LogIdentifierSize)
    CHAR        LogIdentifier[RECORDER_LOG_IDENTIFIER_MAX_CHARS];

} RECORDER_LOG_CREATE_PARAMS, *PRECORDER_LOG_CREATE_PARAMS;

FORCEINLINE
VOID
RECORDER_LOG_CREATE_PARAMS_INIT(
    __out
        PRECORDER_LOG_CREATE_PARAMS Params,
    __in_opt
        PSTR                        LogIdentifier
    )
{
    Params->Size = sizeof(*Params);
    Params->TotalBufferSize = RECORDER_LOG_DEFAULT_BUFFER_SIZE;
    Params->ErrorPartitionSize = RECORDER_LOG_DEFAULT_ERR_PARTITION_SIZE;
    Params->LogIdentifier[0] = '\0';
    Params->LogIdentifierSize = sizeof(Params->LogIdentifier);
    Params->LogIdentifierAppendValue = 0;
    Params->LogIdentifierAppendValueSet = FALSE;
    Params->LogTag = 0;

    if (LogIdentifier != NULL) {

        RtlStringCchCopyA(Params->LogIdentifier,
                          ARRAYSIZE(Params->LogIdentifier),
                          LogIdentifier);
    }
}

FORCEINLINE
VOID
RECORDER_LOG_CREATE_PARAMS_INIT_APPEND_POINTER(
    __out
        PRECORDER_LOG_CREATE_PARAMS Params,
    __in_opt
        PSTR                        LogIdentifier,
    __in
        PVOID                       LogIdentifierAppendPointer
    )
{
    RECORDER_LOG_CREATE_PARAMS_INIT(Params, LogIdentifier);

    Params->LogIdentifierAppendValue = (ULONG_PTR) LogIdentifierAppendPointer;
    Params->LogIdentifierAppendValueSet = TRUE;
}

__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderLogCreate(
    __in
        PVOID                       WppCb,
    __in
        PRECORDER_LOG_CREATE_PARAMS CreateParams,
    __out
        RECORDER_LOG *              RecorderLog
    );

#define WppRecorderLogCreate(CreateParams, RecorderLog) \
    imp_WppRecorderLogCreate(WPP_CB, CreateParams, RecorderLog)

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
imp_WppRecorderLogDelete(
    __in
       PVOID                        WppCb,
    __in
        RECORDER_LOG                RecorderLog
    );

#define WppRecorderLogDelete(RecorderLog) \
    imp_WppRecorderLogDelete(WPP_CB, RecorderLog)

__drv_maxIRQL(DISPATCH_LEVEL)
VOID
imp_WppRecorderLogSetIdentifier(
    __in
       PVOID                        WppCb,
    __in
        RECORDER_LOG                RecorderLog,
    __in
        PSTR                        LogIdentifier
    );

#define WppRecorderLogSetIdentifier(RecorderLog, LogIdentifier) \
    imp_WppRecorderLogSetIdentifier(WPP_CB, RecorderLog, LogIdentifier)

__drv_maxIRQL(DISPATCH_LEVEL)
RECORDER_LOG
imp_WppRecorderLogGetDefault(
    __in
        PVOID                       WppCb
    );

#define WppRecorderLogGetDefault() \
    imp_WppRecorderLogGetDefault(WPP_CB) 

__drv_maxIRQL(DISPATCH_LEVEL)
BOOLEAN
imp_WppRecorderIsDefaultLogAvailable(
    __in
        PVOID                       WppCb
    );

#define WppRecorderIsDefaultLogAvailable() \
    imp_WppRecorderIsDefaultLogAvailable(WPP_CB)

__drv_maxIRQL(DISPATCH_LEVEL)
WPP_RECORDER_COUNTER
imp_WppRecorderGetCounterHandle(
    __in
        PVOID                       WppCb
    );

#define WppRecorderGetCounterHandle() \
    imp_WppRecorderGetCounterHandle(WPP_CB) 

__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderLinkCounters(
    __in
        PVOID                       WppCb,
    __in
        WPP_RECORDER_COUNTER        CounterOwner
    );

#define WppRecorderLinkCounters(CounterOwner) \
    imp_WppRecorderLinkCounters(WPP_CB, CounterOwner)

__drv_maxIRQL(DISPATCH_LEVEL)
NTSTATUS
imp_WppRecorderGetTriageInfo(
    __in
        PVOID                       WppCb,
    __out
        PWPP_TRIAGE_INFO            WppTriageInfo
    );

#define WppRecorderGetTriageInfo(WppTriageInfo) \
    imp_WppRecorderGetTriageInfo(WPP_CB, WppTriageInfo)

__drv_maxIRQL(HIGH_LEVEL)
NTSTATUS
imp_WppRecorderDumpLiveDriverData(
    __in
        PVOID                WppCb,
    __out __deref_ecount(*OutBufferLength)
        PVOID              * OutBuffer,
    __out
        PULONG               OutBufferLength,
    __out
        LPGUID               Guid
    );

#define WppRecorderDumpLiveDriverData(OutBuffer, OutBufferLength, Guid) \
    imp_WppRecorderDumpLiveDriverData(WPP_CB, OutBuffer, OutBufferLength, Guid)

__drv_maxIRQL(HIGH_LEVEL)
NTSTATUS
imp_WppRecorderLogDumpLiveData(
    __in
        PVOID                WppCb,
    __in
        RECORDER_LOG         RecorderLog,
    __out __deref_ecount(*OutBufferLength)
        PVOID              * OutBuffer,
    __out
        PULONG               OutBufferLength,
    __out
        LPGUID               Guid
    );

#define WppRecorderLogDumpLiveData(RecorderLog, OutBuffer, OutBufferLength, Guid) \
    imp_WppRecorderLogDumpLiveData(WPP_CB, RecorderLog, OutBuffer, OutBufferLength, Guid)

/***

The following non-functional code is an annotated, mocked-up view of prototypes for tracing calls.
The tracing functions are actually defined in WPP via the driver's RUN_WPP definition. The RUN_WPP
definition allows the driver to name these functions; the names TraceTo and TraceDefault are used
as examples below.

__drv_maxIRQL(HIGH_LEVEL)
VOID
TraceTo(
    __in
        RECORDER_LOG   RecorderLog,
    __in
        UCHAR          Level,
    __in
        ULONG          Flags,
    __in
        LPCSTR         Format,
    ...
    );

__drv_maxIRQL(HIGH_LEVEL)
VOID
TraceDefault(
    __in
        UCHAR          Level,
    __in
        ULONG          Flags,
    __in
        LPCSTR         Format,
    ...
    );

***/

// -- End of interface. Mechanisms follow -------------------------

#ifdef __cplusplus
} // extern "C"
#endif

//
// WPP magic
//

//
// Pass-through of caller-supplied log handle
//
#define WPP_RECORDER_IFRLOG_LEVEL_FLAGS_ARGS(ifr, lvl, flags) ifr, lvl, WPP_BIT_ ## flags
#define WPP_RECORDER_IFRLOG_LEVEL_FLAGS_FILTER(ifr, lvl, flags) \
    (lvl < TRACE_LEVEL_VERBOSE || WPP_CONTROL(WPP_BIT_ ## flags).AutoLogVerboseEnabled)
//
// Alternate ordering of pass-through
// Puts IFRLOG last so the client can create wpp_config statements that build-in constant level and
// flags values, but let the logging statement specify the IFRLOG.
//
#define WPP_RECORDER_LEVEL_FLAGS_IFRLOG_ARGS(lvl, flags, ifr) \
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_ARGS    (ifr, lvl,   flags)
#define WPP_RECORDER_LEVEL_FLAGS_IFRLOG_FILTER(lvl, flags, ifr) \
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_FILTER    (ifr, lvl,   flags)
//
// Second alternate: Allows client to specify IFRLOG and then flags (constant level)
//
#define WPP_RECORDER_LEVEL_IFRLOG_FLAGS_ARGS(lvl, ifr, flags) \
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_ARGS    (ifr, lvl, flags)
#define WPP_RECORDER_LEVEL_IFRLOG_FLAGS_FILTER(lvl, ifr, flags) \
    WPP_RECORDER_IFRLOG_LEVEL_FLAGS_FILTER    (ifr, lvl, flags)

#endif // (NTDDI_VERSION >= NTDDI_WIN8) || defined (__WPP_RECORDER_DOWNLEVEL__)
#endif // #ifndef __WPPRECORDER_H__

