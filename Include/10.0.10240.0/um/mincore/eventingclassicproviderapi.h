 
/********************************************************************************
*                                                                               *
* eventingclassicproviderapi.h -- ApiSet Contract for api-ms-win-eventing-classicprovider-l1              *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETEVENTINGCLASSICPROVIDER_
#define _APISETEVENTINGCLASSICPROVIDER_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-eventing-classicprovider-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_EVENTINGCLASSICPROVIDER_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_EVENTINGCLASSICPROVIDER_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

//
// For TIME_ZONE_INFORMATION
//

#include <timezoneapi.h>

//
// Note: Header refactoring will be done later.
//

#include <wmistr.h>

#define _APISET_EVENTING
#define _WMI_SOURCE_
#include <evntrace.h>

WINBASEAPI
ULONG
__cdecl
TraceMessage(
    _In_ TRACEHANDLE LoggerHandle,
    _In_ ULONG MessageFlags,
    _In_ LPCGUID MessageGuid,
    _In_ USHORT MessageNumber,
    ...
    );


WINBASEAPI
ULONG
WMIAPI
TraceMessageVa(
    _In_ TRACEHANDLE LoggerHandle,
    _In_ ULONG MessageFlags,
    _In_ LPCGUID MessageGuid,
    _In_ USHORT MessageNumber,
    _In_ va_list MessageArgList
    );


WINBASEAPI
TRACEHANDLE
WMIAPI
GetTraceLoggerHandle(
    _In_ PVOID Buffer
    );


WINBASEAPI
UCHAR
WMIAPI
GetTraceEnableLevel(
    _In_ TRACEHANDLE TraceHandle
    );


WINBASEAPI
ULONG
WMIAPI
GetTraceEnableFlags(
    _In_ TRACEHANDLE TraceHandle
    );


WINBASEAPI
ULONG
WMIAPI
RegisterTraceGuidsW(
    _In_ WMIDPREQUEST RequestAddress,
    _In_opt_ PVOID RequestContext,
    _In_ LPCGUID ControlGuid,
    _In_ ULONG GuidCount,
    _In_reads_opt_(GuidCount) PTRACE_GUID_REGISTRATION TraceGuidReg,
    _In_opt_ LPCWSTR MofImagePath,
    _In_opt_ LPCWSTR MofResourceName,
    _Out_ PTRACEHANDLE RegistrationHandle
    );


WINBASEAPI
ULONG
WMIAPI
UnregisterTraceGuids(
    _In_ TRACEHANDLE RegistrationHandle
    );


WINBASEAPI
ULONG
WMIAPI
TraceEvent(
    _In_ TRACEHANDLE TraceHandle,
    _In_ PEVENT_TRACE_HEADER EventTrace
    );


#ifdef __cplusplus
}
#endif


#endif // _APISETEVENTINGCLASSICPROVIDER_
