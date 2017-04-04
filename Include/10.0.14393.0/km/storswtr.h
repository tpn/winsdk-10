/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

Module Name:

    storswtr.h

Abstract:

    Software Tracing for Storage Drivers

Environment:

    Kernel mode


--*/

#ifndef _stortrce_h_
#define _stortrce_h_

#include <stdarg.h>

//
// Ensure error level constants are defined correctly
//
#ifdef TRACE_LEVEL_FATAL
#undef TRACE_LEVEL_FATAL
#endif

#ifdef TRACE_LEVEL_ERROR
#undef TRACE_LEVEL_ERROR
#endif

#ifdef TRACE_LEVEL_WARNING
#undef TRACE_LEVEL_WARNING
#endif

#ifdef TRACE_LEVEL_INFORMATION
#undef TRACE_LEVEL_INFORMATION
#endif

#ifdef TRACE_LEVEL_VERBOSE
#undef TRACE_LEVEL_VERBOSE
#endif

//
// Error level codes
//
#define TRACE_LEVEL_FATAL           1
#define TRACE_LEVEL_ERROR           2
#define TRACE_LEVEL_WARNING         3
#define TRACE_LEVEL_INFORMATION     4
#define TRACE_LEVEL_VERBOSE         5

//
// DEBUG_USE_KDPRINT: if defined, uses KdPrint instead of WMI tracing
//
#ifndef DEBUG_USE_KDPRINT

//
// Defines standard flag bits for all storage drivers
//
#define WPP_NORMAL_FLAGS    WPP_DEFINE_BIT(TRACE_FLAG_GENERAL)  \
                            WPP_DEFINE_BIT(TRACE_FLAG_PNP)      \
                            WPP_DEFINE_BIT(TRACE_FLAG_POWER)    \
                            WPP_DEFINE_BIT(TRACE_FLAG_RW)       \
                            WPP_DEFINE_BIT(TRACE_FLAG_IOCTL)    \
                            WPP_DEFINE_BIT(TRACE_FLAG_QUEUE)    \
                            WPP_DEFINE_BIT(TRACE_FLAG_WMI)      \
                            WPP_DEFINE_BIT(TRACE_FLAG_TIMER)    \
                            WPP_DEFINE_BIT(TRACE_FLAG_INIT)     \
                            WPP_DEFINE_BIT(TRACE_FLAG_LOCK)     \
                            WPP_DEFINE_BIT(TRACE_FLAG_DEBUG1)   \
                            WPP_DEFINE_BIT(TRACE_FLAG_DEBUG2)   \
                            WPP_DEFINE_BIT(TRACE_FLAG_MCN)      \
                            WPP_DEFINE_BIT(TRACE_FLAG_ISR)      \
                            WPP_DEFINE_BIT(TRACE_FLAG_ENUM)     \
                            WPP_DEFINE_BIT(TRACE_FLAG_LOGOTEST) \
                            WPP_DEFINE_BIT(TRACE_FLAG_DUMP)     \
                            WPP_DEFINE_BIT(TRACE_FLAG_SCSI)
                        
//
// Allows source file to specify only the GUID to enable WMI tracing
//
#define WPP_CONTROL_GUIDS_NORMAL_FLAGS(_GUID)   \
    WPP_DEFINE_CONTROL_GUID(wppCtlGuid, _GUID, WPP_NORMAL_FLAGS)

//
// Overrides of default functions to allow us to specify both flags and error levels with error messages
//
#define WPP_LEVEL_FLAGS_ENABLED(lvl, flags) (WPP_LEVEL_ENABLED(flags) && WPP_CONTROL(WPP_BIT_ ## flags).Level >= lvl)
#define WPP_LEVEL_FLAGS_LOGGER(lvl,flags)   WPP_LEVEL_LOGGER(flags)

//
// Used in the source to selectively include the '.tmh' file as well as define the GUID
//
#define DEBUG_USE_WPP

//
// Use KdPrint instead of WMI tracing
//
#else

//
// Used in the source file to ensure the '.tmh' file is not included
//
#ifdef DEBUG_USE_WPP
#undef DEBUG_USE_WPP
#endif

//
// Ensure both WPP_INIT_TRACING and WPP_CLEANUP are not defined, and replace with NOOPS
// These macros are only used when performing WMI tracing, which we are not
//
#ifdef WPP_INIT_TRACING
#undef WPP_INIT_TRACING
#endif

#ifdef WPP_CLEANUP
#undef WPP_CLEANUP
#endif

#define WPP_INIT_TRACING(_DRIVER, _REGISTRY)
#define WPP_CLEANUP(_DRIVER)

//
// Initialize debug flags enumeration as it is not declared
//
typedef enum _DEBUG_FLAGS {
    TRACE_FLAG_GENERAL = 0,
    TRACE_FLAG_PNP,
    TRACE_FLAG_POWER,
    TRACE_FLAG_RW,
    TRACE_FLAG_IOCTL,
    TRACE_FLAG_QUEUE,
    TRACE_FLAG_WMI,
    TRACE_FLAG_TIMER,
    TRACE_FLAG_INIT,
    TRACE_FLAG_LOCK,
    TRACE_FLAG_DEBUG1,
    TRACE_FLAG_DEBUG2,
    TRACE_FLAG_MCN,
    TRACE_FLAG_ISR,
    TRACE_FLAG_ENUM,
    TRACE_FLAG_LOGOTEST,
    TRACE_FLAG_DUMP,
    TRACE_FLAG_SCSI
} DEBUG_FLAGS, *PDEBUG_FLAGS;

//
// Redirect WMI tracing calls to the DbgPrint function.  We are forced to drop the flags argument as
// DbgPrintEx does not use it.  We only want one function definition when linked togethor, so
// we must define
//
// If we're on pre-XP, vDbgPrintEx doesn't exist, and there is no good replacement. In that situation,
// well ensure that TracePrint is a no-op when set to redirect traces to DbgPrint.
//


#if DBG && (NTDDI_VERSION >= NTDDI_WINXP)

#define TracePrint(x)   StorDebugPrint x

#if DEBUG_MAIN_SOURCE

void StorDebugPrint(int DebugPrintLevel, DEBUG_FLAGS DebugPrintFlags, PCCHAR DebugMessage, ...) {
    va_list ap;

    UNREFERENCED_PARAMETER(DebugPrintFlags);

    va_start(ap, DebugMessage);

    vDbgPrintEx(DEBUG_COMP_ID, DebugPrintLevel, DebugMessage, ap);

    va_end(ap);
}

#else

void StorDebugPrint(int DebugPrintLevel, DEBUG_FLAGS DebugPrintFlags, PCCHAR DebugMessage, ...);

#endif  // DEBUG_MAIN_SOURCE

#else

#define TracePrint(x)

#endif  // DBG && (NTDDI_VERSION >= NTDDI_WINXP)

#endif  // DEBUG_USE_KDPRINT

#endif  // _stortrce_h_



