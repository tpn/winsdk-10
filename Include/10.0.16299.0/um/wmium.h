
/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    Wmium.h

Abstract:

    Public headers for WMI data consumers and providers

Author:

    16-Jan-1997 AlanWar

Revision History:

--*/

#ifndef _WMIUM_
#define _WMIUM_

#pragma once

#ifndef MIDL_PASS
#ifdef _WMI_SOURCE_
#define WMIAPI __stdcall
#else
#define WMIAPI DECLSPEC_IMPORT __stdcall
#endif
#endif

#include <guiddef.h>

#include <basetsd.h>
#include <wmistr.h>
#include <evntrace.h>

typedef PVOID WMIHANDLE, *PWMIHANDLE, MOFHANDLE, *PMOFHANDLE;


//
// When set the guid can be opened and accessed
#define MOFCI_RESERVED0  0x00000001

#define MOFCI_RESERVED1  0x00000002
#define MOFCI_RESERVED2  0x00000004

typedef struct
{
#ifdef MIDL_PASS
    [string] PDFTCHAR
#else
    LPWSTR
#endif
             ImagePath;        // Path to image containing MOF resource
#ifdef MIDL_PASS
    [string] PDFTCHAR
#else
    LPWSTR
#endif
             ResourceName;     // Name of resource in image
    ULONG    ResourceSize;     // Number of bytes in resource
#ifdef MIDL_PASS
    [size_is(0)] PDFBYTE
#else
    PUCHAR
#endif
             ResourceBuffer;    // Reserved
} MOFRESOURCEINFOW, *PMOFRESOURCEINFOW;


typedef struct
{
    LPSTR
             ImagePath;        // Path to image containing MOF resource
    LPSTR
             ResourceName;     // Name of resource in image
    ULONG    ResourceSize;     // Number of bytes in resource
    UCHAR
             *ResourceBuffer;   // Reserved
} MOFRESOURCEINFOA, *PMOFRESOURCEINFOA;

#ifdef UNICODE
typedef MOFRESOURCEINFOW MOFRESOURCEINFO;
typedef PMOFRESOURCEINFOW PMOFRESOURCEINFO;
#else
typedef MOFRESOURCEINFOA MOFRESOURCEINFO;
typedef PMOFRESOURCEINFOA PMOFRESOURCEINFO;
#endif

#ifdef __cplusplus
extern "C" {
#endif

//
// Data consumer apis
ULONG
WMIAPI
WmiOpenBlock(
    _In_ GUID *Guid,
    _In_ ULONG DesiredAccess,
    _Out_ WMIHANDLE *DataBlockHandle
);

ULONG
WMIAPI
WmiCloseBlock(
    _In_ WMIHANDLE DataBlockHandle
);

ULONG
WMIAPI
WmiQueryAllDataA(
    _In_ WMIHANDLE DataBlockHandle,
    _Inout_ ULONG *BufferSize,
    _Out_writes_bytes_opt_(*BufferSize) LPVOID Buffer
    );


ULONG
WMIAPI
WmiQueryAllDataW(
    _In_ WMIHANDLE DataBlockHandle,
    _Inout_ ULONG *BufferSize,
    _Out_writes_bytes_opt_(*BufferSize) LPVOID Buffer
    );

#ifdef UNICODE
#define WmiQueryAllData WmiQueryAllDataW
#else
#define WmiQueryAllData WmiQueryAllDataA
#endif

ULONG
WMIAPI
WmiQueryAllDataMultipleA(
    _In_reads_(HandleCount) WMIHANDLE *HandleList,
    _In_ ULONG HandleCount,
    _Inout_ ULONG *InOutBufferSize,
    _Out_writes_bytes_(*InOutBufferSize) LPVOID OutBuffer
);

ULONG
WMIAPI
WmiQueryAllDataMultipleW(
    _In_reads_(HandleCount) WMIHANDLE *HandleList,
    _In_ ULONG HandleCount,
    _Inout_ ULONG *InOutBufferSize,
    _Out_writes_bytes_(*InOutBufferSize) LPVOID OutBuffer
);

#ifdef UNICODE
#define WmiQueryAllDataMultiple WmiQueryAllDataMultipleW
#else
#define WmiQueryAllDataMultiple WmiQueryAllDataMultipleA
#endif

_Success_(return == ERROR_SUCCESS)
ULONG
WMIAPI
WmiQuerySingleInstanceA(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCSTR InstanceName,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_to_opt_(*BufferSize, *BufferSize) LPVOID Buffer
    );

_Success_(return == ERROR_SUCCESS)
ULONG
WMIAPI
WmiQuerySingleInstanceW(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCWSTR InstanceName,
    _Inout_ PULONG BufferSize,
    _Out_writes_bytes_to_opt_(*BufferSize, *BufferSize) LPVOID Buffer
    );

#ifdef UNICODE
#define WmiQuerySingleInstance WmiQuerySingleInstanceW
#else
#define WmiQuerySingleInstance WmiQuerySingleInstanceA
#endif

_Success_(return == ERROR_SUCCESS)
ULONG
WMIAPI
WmiQuerySingleInstanceMultipleW(
    _In_reads_(HandleCount) PWMIHANDLE HandleList,
    _In_reads_(HandleCount) LPCWSTR * InstanceNames,
    _In_ ULONG HandleCount,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_to_opt_(*InOutBufferSize, *InOutBufferSize) LPVOID OutBuffer
    );

_Success_(return == ERROR_SUCCESS)
ULONG
WMIAPI
WmiQuerySingleInstanceMultipleA(
    _In_reads_(HandleCount) PWMIHANDLE HandleList,
    _In_reads_(HandleCount) LPCSTR * InstanceNames,
    _In_ ULONG HandleCount,
    _Inout_ PULONG InOutBufferSize,
    _Out_writes_bytes_to_opt_(*InOutBufferSize, *InOutBufferSize) LPVOID OutBuffer
    );

#ifdef UNICODE
#define WmiQuerySingleInstanceMultiple WmiQuerySingleInstanceMultipleW
#else
#define WmiQuerySingleInstanceMultiple WmiQuerySingleInstanceMultipleA
#endif

ULONG
WMIAPI
WmiSetSingleInstanceA(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCSTR InstanceName,
    _In_ ULONG Reserved,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );

ULONG
WMIAPI
WmiSetSingleInstanceW(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCWSTR InstanceName,
    _In_ ULONG Reserved,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );

#ifdef UNICODE
#define WmiSetSingleInstance WmiSetSingleInstanceW
#else
#define WmiSetSingleInstance WmiSetSingleInstanceA
#endif

ULONG
WMIAPI
WmiSetSingleItemA(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCSTR InstanceName,
    _In_ ULONG DataItemId,
    _In_ ULONG Reserved,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );

ULONG
WMIAPI
WmiSetSingleItemW(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ LPCWSTR InstanceName,
    _In_ ULONG DataItemId,
    _In_ ULONG Reserved,
    _In_ ULONG ValueBufferSize,
    _In_reads_bytes_(ValueBufferSize) PVOID ValueBuffer
    );

#ifdef UNICODE
#define WmiSetSingleItem WmiSetSingleItemW
#else
#define WmiSetSingleItem WmiSetSingleItemA
#endif

ULONG
WMIAPI
WmiExecuteMethodA(
    _In_ WMIHANDLE MethodDataBlockHandle,
    _In_ LPCSTR MethodInstanceName,
    _In_ ULONG MethodId,
    _In_ ULONG InputValueBufferSize,
    _In_reads_bytes_opt_(InputValueBufferSize) PVOID InputValueBuffer,
    _Inout_opt_ ULONG *OutputBufferSize,
    _Out_writes_bytes_opt_(*OutputBufferSize) PVOID OutputBuffer
    );

ULONG
WMIAPI
WmiExecuteMethodW(
    _In_ WMIHANDLE MethodDataBlockHandle,
    _In_ LPCWSTR MethodInstanceName,
    _In_ ULONG MethodId,
    _In_ ULONG InputValueBufferSize,
    _In_reads_bytes_opt_(InputValueBufferSize) PVOID InputValueBuffer,
    _Inout_opt_ ULONG *OutputBufferSize,
    _Out_writes_bytes_opt_(*OutputBufferSize) PVOID OutputBuffer
    );

#ifdef UNICODE
#define WmiExecuteMethod WmiExecuteMethodW
#else
#define WmiExecuteMethod WmiExecuteMethodA
#endif

// Set this Flag when calling NotficationRegistration to enable or
// disable a trace logging guid
#define NOTIFICATION_TRACE_FLAG       0x00010000

// Set this flag when enabling a notification that should be delivered via
// a direct callback. Any notifications received will be given their own
// thread and the callback function called immediately.
#define NOTIFICATION_CALLBACK_DIRECT  0x00000004

//
// Set this flag (and only this flag) when you want to only check if the 
// caller has permission to receive events for the guid
//
#define NOTIFICATION_CHECK_ACCESS 0x00000008

//
// Set this flag when enabling a lightweight notification.
#define NOTIFICATION_LIGHTWEIGHT_FLAG 0x00000020

//
// Event notification callback function prototype
typedef void (
#ifndef MIDL_PASS
WINAPI
#endif
*NOTIFICATIONCALLBACK)(
    PWNODE_HEADER Wnode,
    UINT_PTR NotificationContext
    );

#ifndef MIDL_PASS
//
// This guid is for notifications of changes to registration
// {B48D49A1-E777-11d0-A50C-00A0C9062910}
DEFINE_GUID(GUID_REGISTRATION_CHANGE_NOTIFICATION,
0xb48d49a1, 0xe777, 0x11d0, 0xa5, 0xc, 0x0, 0xa0, 0xc9, 0x6, 0x29, 0x10);

//
// This guid id for notifications of new mof resources being added
// {B48D49A2-E777-11d0-A50C-00A0C9062910}
DEFINE_GUID(GUID_MOF_RESOURCE_ADDED_NOTIFICATION,
0xb48d49a2, 0xe777, 0x11d0, 0xa5, 0xc, 0x0, 0xa0, 0xc9, 0x6, 0x29, 0x10);

//
// This guid id for notifications of new mof resources being added
// {B48D49A3-E777-11d0-A50C-00A0C9062910}
DEFINE_GUID(GUID_MOF_RESOURCE_REMOVED_NOTIFICATION,
0xb48d49a3, 0xe777, 0x11d0, 0xa5, 0xc, 0x0, 0xa0, 0xc9, 0x6, 0x29, 0x10);
#endif

ULONG
WMIAPI
WmiNotificationRegistrationA(
    _In_ LPGUID Guid,
    _In_ BOOLEAN Enable,
    _In_ PVOID DeliveryInfo,
    _In_ ULONG_PTR DeliveryContext,
    _In_ ULONG Flags
    );

ULONG
WMIAPI
WmiNotificationRegistrationW(
    _In_ LPGUID Guid,
    _In_ BOOLEAN Enable,
    _In_ PVOID DeliveryInfo,
    _In_ ULONG_PTR DeliveryContext,
    _In_ ULONG Flags
    );

#ifdef UNICODE
#define WmiNotificationRegistration WmiNotificationRegistrationW
#else
#define WmiNotificationRegistration WmiNotificationRegistrationA
#endif

void
WMIAPI
WmiFreeBuffer(
    _In_ PVOID Buffer
    );

ULONG
WMIAPI
WmiEnumerateGuids(
    _Out_writes_opt_(*GuidCount) LPGUID GuidList,
    _Inout_ ULONG *GuidCount
    );

ULONG
WMIAPI
WmiMofEnumerateResourcesW(
    _In_ MOFHANDLE MofResourceHandle,
    _Out_ ULONG *MofResourceCount,
    _Outptr_result_buffer_(*MofResourceCount) PMOFRESOURCEINFOW *MofResourceInfo
    );

ULONG
WMIAPI
WmiMofEnumerateResourcesA(
    _In_ MOFHANDLE MofResourceHandle,
    _Out_ ULONG *MofResourceCount,
    _Outptr_result_buffer_(*MofResourceCount) PMOFRESOURCEINFOA *MofResourceInfo
    );

#ifdef UNICODE
#define WmiMofEnumerateResources WmiMofEnumerateResourcesW
#else
#define WmiMofEnumerateResources WmiMofEnumerateResourcesA
#endif

ULONG
WMIAPI
WmiFileHandleToInstanceNameA(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ HANDLE FileHandle,
    _Inout_ ULONG *NumberCharacters,
    _Out_writes_(*NumberCharacters) CHAR *InstanceNames
    );

ULONG
WMIAPI
WmiFileHandleToInstanceNameW(
    _In_ WMIHANDLE DataBlockHandle,
    _In_ HANDLE FileHandle,
    _Inout_ ULONG *NumberCharacters,
    _Out_writes_(*NumberCharacters) WCHAR *InstanceNames
    );

#ifdef UNICODE
#define WmiFileHandleToInstanceName WmiFileHandleToInstanceNameW
#else
#define WmiFileHandleToInstanceName WmiFileHandleToInstanceNameA
#endif

#define WmiInsertTimestamp(WnodeHeader) \
    GetSystemTimeAsFileTime((FILETIME *)&((PWNODE_HEADER)WnodeHeader)->TimeStamp)

ULONG
WMIAPI
WmiDevInstToInstanceNameA(
    _Out_writes_opt_(InstanceNameLength) PSTR InstanceName,
    _In_ ULONG InstanceNameLength,
    _In_ PSTR DevInst,
    _In_ ULONG InstanceIndex
    );

ULONG
WMIAPI
WmiDevInstToInstanceNameW(
    _Out_writes_opt_(InstanceNameLength) PWSTR InstanceName,
    _In_ ULONG InstanceNameLength,
    _In_ PWSTR DevInst,
    _In_ ULONG InstanceIndex
    );

#ifdef UNICODE
#define WmiDevInstToInstanceName WmiDevInstToInstanceNameW
#else
#define WmiDevInstToInstanceName WmiDevInstToInstanceNameA
#endif

typedef struct _WMIGUIDINFORMATION
{
    ULONG Size;
    BOOLEAN IsExpensive;
    BOOLEAN IsEventOnly;
} WMIGUIDINFORMATION, *PWMIGUIDINFORMATION;

ULONG
WMIAPI
WmiQueryGuidInformation(
    _In_ WMIHANDLE GuidHandle,
    _Out_ PWMIGUIDINFORMATION GuidInfo
    );

ULONG
WMIAPI
WmiReceiveNotificationsW(
    _In_ ULONG HandleCount,
    _In_reads_(HandleCount) HANDLE *HandleList,
    _In_ NOTIFICATIONCALLBACK Callback,
    _In_ ULONG_PTR DeliveryContext
);

ULONG
WMIAPI
WmiReceiveNotificationsA(
    _In_ ULONG HandleCount,
    _In_reads_(HandleCount) HANDLE *HandleList,
    _In_ NOTIFICATIONCALLBACK Callback,
    _In_ ULONG_PTR DeliveryContext
);

#ifdef UNICODE
#define WmiReceiveNotifications WmiReceiveNotificationsW
#else
#define WmiReceiveNotifications WmiReceiveNotificationsA
#endif

#ifdef __cplusplus
}
#endif

#endif  // _WMIUM_
