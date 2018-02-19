/*++

Copyright (c) 1990-2012 Microsoft Corporation. All rights reserved.

Module Name:

    WpDrvDbgOut.h

Abstract:

    This file contains definitions related to output debug control.
    
    BUG 311008: This file is for Windows Phone 8. Moving forward to Blue this file
                is DEPRECATED and replaced by WpDrvDbgOutput.w

--*/

#pragma once

#define __DEPRECATED
#define DEPRECATED_MESSAGE "WpDrvDbgOut.h is deprecated. Use WpDrvDbgOutput.h instead."

#ifdef _INC_WINDOWS
#ifdef _KERNEL_MODE
#undef _KERNEL_MODE
#endif // _KERNEL_MODE
#else // _INC_WINDOWS
#ifndef _KERNEL_MODE
#define _KERNEL_MODE
#endif // !_KERNEL_MODE
#endif // _INC_WINDOWS

#include <strsafe.h>

#ifdef _USE_ETW_
#include <evntprov.h>
#include <Microsoft-WindowsPhone-Sensors.h>
#endif

#ifdef _KERNEL_MODE
#include <ntddk.h>
#else
#include <dbgAPI.h>
#endif


#define SIGNIFICANT_DIGITS (10000)
#define  _FLT_ "%s%d.%04d"
#define  _FLT_VAR(val)  (val) < 0 ? "-" : "", \
                        abs(((int)((val) * SIGNIFICANT_DIGITS)) / SIGNIFICANT_DIGITS),\
                        abs((int)((val) * SIGNIFICANT_DIGITS) % SIGNIFICANT_DIGITS)

#define DBGOUT _WPOutputDebugMessage

//
// Define Common Debug Flags / Zones.
//

#define DBGZ_NONE      (0)
#define DBGZ_BREAK_ON  (1 <<  0)  // Break in debugger on log if set
#define DBGZ_PROFILE   (1 <<  1)  // Profile marker - also used by ETW if enabled
#define DBGZ_FUNC      (1 <<  2)  // Function entry and exit
#define DBGZ_INIT      (1 <<  3)  // Initialization / cleanup  code
#define DBGZ_STATE     (1 <<  4)  // State (New Sample)
#define DBGZ_LOCK      (1 <<  5)  // Locks
#define DBGZ_POWER     (1 <<  6)  // Power
#define DBGZ_WMI       (1 <<  7)  // WMI
#define DBGZ_PNP       (1 <<  8)  // Plug and Play
#define DBGZ_GET_DATA  (1 <<  9)  // Get Data / Async
#define DBGZ_STREAMING (1 << 10)  // Streaming / interval
#define DBGZ_REG       (1 << 11)  // Registry
#define DBGZ_IOCTL     (1 << 12)  // IoControl
#define DBGZ_HW        (1 << 13)  // HW / Register access
#define DBGZ_MISC      (1 << 14)  // Miscellaneous / Utils
#define DBGZ_ANY       (0xFFFFFFFF)

// Use flags bit 16 to 31 for custom zones


//
// Debug levels / message criticality
//

typedef enum _DBG_LEVELS
{
    dlAlways  = 0,
    dlFatal   = 1,
    dlError   = 2,
    dlWarning = 3,
    dlInfo    = 4, // For non or rarely recuring data
    dlVerbose = 5, // For highly recuring data
    _dlSize
} DBG_LEVELS, *PDBG_LEVELS;


#ifdef _KERNEL_MODE
#define FUNC_ENTER() DBGOUT(dlVerbose, DBGZ_FUNC, "+" __FUNCTION__ "\n");
#define FUNC_EXIT(status) DBGOUT(dlVerbose, DBGZ_FUNC, "-" __FUNCTION__ ":%s:%08X\n", NT_SUCCESS(status) ? "Success" : "Fail", status);
#else // _KERNEL_MODE
#ifdef UNICODE
#define FUNC_ENTER() DBGOUT(dlVerbose, DBGZ_FUNC, L"+%S \n", __FUNCTION__);
#define FUNC_EXIT(status) DBGOUT(dlVerbose, DBGZ_FUNC, L"-%S:%S:%08X\n", __FUNCTION__, NT_SUCCESS(status) ? "Success" : "Fail", status);
#else // UNICODE
#define FUNC_ENTER() DBGOUT(dlVerbose, DBGZ_FUNC, "+" __FUNCTION__ "\n");
#define FUNC_EXIT(status) DBGOUT(dlVerbose, DBGZ_FUNC, "-" __FUNCTION__ ":%s:%08X\n", NT_SUCCESS(status) ? "Success" : "Fail", status);
#endif // UNICODE
#endif // _KERNEL_MODE

//
// -------------------------------------------------------------------- Globals
//


extern DWORD g_DebugZones [_dlSize - 1];

#define _DECL_DBGOUT_GLOBALS() \
DWORD g_DebugZones [_dlSize - 1] =  { 0xFFFFFFFF,  /* Fatal: break and log all */ \
                                      0xFFFFFFFE,  /* Error: log all */ \
                                      0xFFFFFFFE,  /* Warning: log all */ \
                                      0x00000000,  /* Information: disable all */ \
                                      0x00000000}; /* Verbose: disable all */ 

//
// ------------------------------------------------------------------ Functions
//


/*++

WPOutputDebugMessage

Routine Description:

    This routine print debug information.

Arguments:

    DebugPrintLevel - Supplies the debug print level / criticality.

    DebugPrintZone - Supplies the flag controlling the tracing by zones.

    DebugMessage - Supplies the format string for the output message.

Return Value:

    None.

 --*/
#ifdef __DEPRECATED
__declspec(deprecated(DEPRECATED_MESSAGE)) 
#endif
static __inline VOID
_WPOutputDebugMessage (
    __in DBG_LEVELS DebugLevel,
    __in DWORD DebugZone,
#ifdef _KERNEL_MODE
    __drv_formatString(printf) __in PCSTR DebugMessage,
#else
    __in_z PCWSTR DebugMessage,
#endif
    ...
    )
{    
#define MAX_STRING_LEN 256

#ifdef _USE_ETW_
    char  Buffer[MAX_STRING_LEN];
#endif

#if !defined(_KERNEL_MODE) || (defined(_KERNEL_MODE) && defined(_USE_ETW_))
    WCHAR wBuffer[MAX_STRING_LEN];
#endif

    va_list ArgList;
    va_start(ArgList, DebugMessage);

    if (DebugLevel <= (sizeof (g_DebugZones) / sizeof (DWORD)))
    {
        if ((DebugLevel == dlAlways) || (g_DebugZones [DebugLevel - 1] & DebugZone))
        {
#ifdef _KERNEL_MODE
            vDbgPrintEx (DPFLTR_DEFAULT_ID, DPFLTR_ERROR_LEVEL, DebugMessage, ArgList);
            //
            // From Windbg, use this command to turn on messages
            // >>> ed nt!Kd_DEFAULT_Mask 0xffffffff
            //
            // Alternatively add the DWORD reg key with a value of 0xFFFFFFFF to do the same
            // thing:
            // HKLM\SYSTEM\CCS\Control\Session Manager\Debug Print Filter\DEFAULT
            //
#else
            StringCchVPrintf (wBuffer, MAX_STRING_LEN, DebugMessage, ArgList);
            wBuffer[MAX_STRING_LEN-1] = L'\0';
            OutputDebugString (wBuffer);
#endif            
        }
        if ((DebugLevel != dlAlways) && (g_DebugZones [DebugLevel - 1] & DBGZ_BREAK_ON))
        {
            ASSERT(0); // Break On all debug messages for this DebugLevel is active. Check callstack to determine source of problem.
        }
#ifdef _USE_ETW_
        if ((DebugZone & DBGZ_PROFILE) || (DebugLevel == dlError))
        {
#ifdef _KERNEL_MODE
            vsprintf_s(Buffer, sizeof(Buffer), DebugMessage, ArgList);
            swprintf_s (wBuffer, sizeof(wBuffer)/sizeof(wBuffer[0]), L"%S", Buffer);
            if (DebugZone & DBGZ_PROFILE)
            {
                EventWriteSensorPerf (&WpSensorsEtwGuid, wBuffer);
            }
            if (DebugLevel == dlError)
            {
                EventWriteSensorError(&WpSensorsEtwGuid, wBuffer);
            }
            // For Error: use EventWriteSensorError(&WpSensorsEtwGuid, wBuffer);
            // For anything else: use EventWriteSensorDebug(&WpSensorsEtwGuid, wBuffer);
#endif /*_KERNEL_MODE*/           
        }
#endif /*_USE_ETW_*/
    }
    va_end(ArgList);
    return;
}




