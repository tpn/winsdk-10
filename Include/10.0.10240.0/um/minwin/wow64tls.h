/*++

Copyright (c) 2003 Microsoft Corporation

Module Name:

    wow64tls.h

Abstract:

    TLS slot definitions.

Author:

    11-Jun-2003  Samer Arafeh  (SamerA)

Revision History:    

--*/

#ifndef _WOW64TLS_INCLUDE
#define _WOW64TLS_INCLUDE


//
// Thread Local Storage (TLS) support.  TLS slots are statically allocated.
//

#define WOW64_TLS_STACKPTR64                0   // Used by IA64 to store the native stack ptr when simulating code.
#define WOW64_TLS_CPURESERVED               1   // per-thread data for the CPU simulator.
#define WOW64_TLS_INCPUSIMULATION           2   // Set when inside the CPU.
#define WOW64_TLS_LOCALTHREADHEAP           3   // List of memory allocated in thunk call.
#define WOW64_TLS_EXCEPTIONADDR             4   // Deprecated.
#define WOW64_TLS_USERCALLBACKDATA          5   // Used by win32k callbacks.
#define WOW64_TLS_EXTENDED_FLOAT            6   // Used by IA64 to pass in floating point.
#define WOW64_TLS_APCLIST                   7   // List of outstanding usermode APCs.
#define WOW64_TLS_FILESYSREDIR              8   // Used to enable/disable the filesystem redirector.
#define WOW64_TLS_LASTWOWCALL               9   // Deprecated.
#define WOW64_TLS_WOW64INFO                 10  // Wow64Info address (structure shared between host and guest).
#define WOW64_TLS_INITIAL_TEB32             11  // Deprecated.
#define WOW64_TLS_SERVICE_FRAME             12  // A pointer to the current WOW64_SERVICE_FRAME
#define WOW64_TLS_DEBUGGER_COMM             13  // Used by IA64 to communicate with guest-code debugger for event notification.
#define WOW64_TLS_INVALID_STARTUP_CONTEXT   14  // Deprecated.
#define WOW64_TLS_UNWIND_NATIVE_STACK       15  // Forces an unwind of the native 64-bit stack after an APC.
#define WOW64_TLS_SUSPEND_THREAD_LOCK       16  // When simulating in software, this is used by NtSuspendThread to syncronize concurrent suspend requests. It is an SRWLock.
#define WOW64_TLS_SUSPEND_THREAD_DATA       17  // When simulating in software, this is used by NtSuspendThread to pass data to the target thread.
#define WOW64_TLS_CONTEXT_UPDATE            18  // Deprecated.
#define WOW64_TLS_MAX_NUMBER                19  // Maximum number of TLS slot entries to allocate
//
// VOID Wow64TlsSetValue(DWORD dwIndex, LPVOID lpTlsValue);
//

#define Wow64TlsSetValue(dwIndex, lpTlsValue)   \
    NtCurrentTeb()->TlsSlots[dwIndex] = lpTlsValue;

//
// LPVOID Wow64TlsGetValue(DWORD dwIndex);
//

#define Wow64TlsGetValue(dwIndex)               \
    (NtCurrentTeb()->TlsSlots[dwIndex])

#endif  // _WOW64TLS_INCLUDE
