 
/********************************************************************************
*                                                                               *
* eventingproviderapi.h -- ApiSet Contract for api-ms-win-eventing-provider-l1              *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETEVENTINGPROVIDER_
#define _APISETEVENTINGPROVIDER_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-eventing-provider-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_EVENTINGPROVIDER_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_EVENTINGPROVIDER_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

//
// Note: Header refactoring will be done later. At least now, we just include
//       old header to satisfy type requirement.
//

#define _APISET_EVENTING
#include <evntprov.h>


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventRegister(
    _In_ LPCGUID ProviderId,
    _In_opt_ PENABLECALLBACK EnableCallback,
    _In_opt_ PVOID CallbackContext,
    _Out_ PREGHANDLE RegHandle
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventUnregister(
    _In_ REGHANDLE RegHandle
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
BOOLEAN
WINAPI
EventEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
BOOLEAN
WINAPI
EventProviderEnabled(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventWrite(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventWriteTransfer(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventWriteString(
    _In_ REGHANDLE RegHandle,
    _In_ UCHAR Level,
    _In_ ULONGLONG Keyword,
    _In_ PCWSTR String
    );

#endif


#if (WINVER >= _WIN32_WINNT_WIN7)
WINBASEAPI
ULONG
WINAPI
EventWriteEx(
    _In_ REGHANDLE RegHandle,
    _In_ PCEVENT_DESCRIPTOR EventDescriptor,
    _In_ ULONG64 Filter,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId,
    _In_opt_ LPCGUID RelatedActivityId,
    _In_ ULONG UserDataCount,
    _In_reads_opt_(UserDataCount) PEVENT_DATA_DESCRIPTOR UserData
    );

#endif


#if (WINVER >= _WIN32_WINNT_VISTA)
WINBASEAPI
ULONG
WINAPI
EventActivityIdControl(
    _In_ ULONG ControlCode,
    _Inout_ LPGUID ActivityId
    );

#endif



#if (WINVER >= _WIN32_WINNT_WIN8)
WINBASEAPI
ULONG
WINAPI
EventSetInformation(
    _In_ REGHANDLE RegHandle,
    _In_ EVENT_INFO_CLASS InformationClass,
    _In_reads_bytes_(InformationLength) PVOID EventInformation,
    _In_ ULONG InformationLength
    );

#endif

#ifdef __cplusplus
}
#endif


#endif // _APISETEVENTINGPROVIDER_
