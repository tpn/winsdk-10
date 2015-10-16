 
/********************************************************************************
*                                                                               *
* eventingconsumerapi.h -- ApiSet Contract for api-ms-win-eventing-consumer-l1              *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETEVENTINGCONSUMER_
#define _APISETEVENTINGCONSUMER_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-eventing-consumer-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_EVENTINGCONSUMER_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_EVENTINGCONSUMER_VER 0x0100
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
TRACEHANDLE
WMIAPI
OpenTraceW(
    _Inout_ PEVENT_TRACE_LOGFILEW Logfile
    );


WINBASEAPI
ULONG
WMIAPI
ProcessTrace(
    _In_reads_(HandleCount) PTRACEHANDLE HandleArray,
    _In_ ULONG HandleCount,
    _In_opt_ LPFILETIME StartTime,
    _In_opt_ LPFILETIME EndTime
    );


WINBASEAPI
ULONG
WMIAPI
CloseTrace(
    _In_ TRACEHANDLE TraceHandle
    );


#ifdef __cplusplus
}
#endif


#endif // _APISETEVENTINGCLASSICPROVIDER_
