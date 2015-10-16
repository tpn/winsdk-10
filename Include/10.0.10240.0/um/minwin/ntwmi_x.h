/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntwmi_x.h

Abstract:

    definitions for WMI Flags and Event Id's

    This module may contain definitions that are exposed in kit headers
    for use by external developers.

Author:

    Stephen Hsiao

Environment:

    Kernel and User modes

Revision History:

    James E. Moe (jamoe) 23-Jan-2003 
        Public/Private header split

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

// begin_wmikm

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

// end_wmikm

#ifdef __cplusplus
}
#endif

