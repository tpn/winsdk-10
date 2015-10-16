 
/********************************************************************************
*                                                                               *
* eventingcontrollerapi.h -- ApiSet Contract for api-ms-win-eventing-controller-l1              *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETEVENTINGCONTROLLER_
#define _APISETEVENTINGCONTROLLER_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-eventing-controller-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_EVENTINGCONTROLLER_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_EVENTINGCONTROLLER_VER 0x0100
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
WMIAPI
StartTraceW(
    _Out_ PTRACEHANDLE TraceHandle,
    _In_ LPCWSTR InstanceName,
    _Inout_ PEVENT_TRACE_PROPERTIES Properties
    );


WINBASEAPI
ULONG
WMIAPI
StopTraceW(
    _In_ TRACEHANDLE TraceHandle,
    _In_opt_ LPCWSTR InstanceName,
    _Inout_ PEVENT_TRACE_PROPERTIES Properties
    );


WINBASEAPI
ULONG
WMIAPI
ControlTraceW(
    _In_ TRACEHANDLE TraceHandle,
    _In_opt_ LPCWSTR InstanceName,
    _Inout_ PEVENT_TRACE_PROPERTIES Properties,
    _In_ ULONG ControlCode
    );


WINBASEAPI
ULONG
WMIAPI
QueryAllTracesW(
    _Out_writes_(PropertyArrayCount) PEVENT_TRACE_PROPERTIES * PropertyArray,
    _In_ ULONG PropertyArrayCount,
    _Out_ PULONG LoggerCount
    );



#if (WINVER >= _WIN32_WINNT_WIN7)
WINBASEAPI
ULONG
WMIAPI
EnableTraceEx2(
    _In_ TRACEHANDLE TraceHandle,
    _In_ LPCGUID ProviderId,
    _In_ ULONG ControlCode,
    _In_ UCHAR Level,
    _In_ ULONGLONG MatchAnyKeyword,
    _In_ ULONGLONG MatchAllKeyword,
    _In_ ULONG Timeout,
    _In_opt_ PENABLE_TRACE_PARAMETERS EnableParameters
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WMIAPI
EnumerateTraceGuidsEx(
    _In_ TRACE_QUERY_INFO_CLASS TraceQueryInfoClass,
    _In_reads_bytes_opt_(InBufferSize) PVOID InBuffer,
    _In_ ULONG InBufferSize,
    _Out_writes_bytes_opt_(OutBufferSize) PVOID OutBuffer,
    _In_ ULONG OutBufferSize,
    _Out_ PULONG ReturnLength
    );

#endif


#if (WINVER >= _WIN32_WINNT_WIN7)
WINBASEAPI
ULONG
WMIAPI
TraceSetInformation(
    _In_ TRACEHANDLE SessionHandle,
    _In_ TRACE_INFO_CLASS InformationClass,
    _In_reads_bytes_(InformationLength) PVOID TraceInformation,
    _In_ ULONG InformationLength
    );

#endif


#if (WINVER >= _WIN32_WINNT_WIN8)
WINBASEAPI
ULONG
WMIAPI
TraceQueryInformation(
    _In_ TRACEHANDLE SessionHandle,
    _In_ TRACE_INFO_CLASS InformationClass,
    _Out_writes_bytes_to_opt_(InformationLength, *ReturnLength) PVOID TraceInformation,
    _In_ ULONG InformationLength,
    _Out_opt_ PULONG ReturnLength
    );

#endif

//
// For Event Security APIs from evntcons.h
//

typedef enum {
    EventSecuritySetDACL,
    EventSecuritySetSACL,
    EventSecurityAddDACL,
    EventSecurityAddSACL,
    EventSecurityMax
} EVENTSECURITYOPERATION;



#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WMIAPI
EventAccessControl(
    IN LPGUID Guid,
    IN ULONG Operation,
    IN PSID Sid,
    IN ULONG Rights,
    IN BOOLEAN AllowOrDeny
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WMIAPI
EventAccessQuery(
    _In_ LPGUID Guid,
    _Out_writes_bytes_opt_(*BufferSize) PSECURITY_DESCRIPTOR Buffer,
    _Inout_ PULONG BufferSize
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WMIAPI
EventAccessRemove(
    IN LPGUID Guid
    );

#endif


#ifdef __cplusplus
}
#endif


#endif // _APISETEVENTINGCONTROLLER_
