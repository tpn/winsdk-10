/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ccfreg.h

Abstract:

    This module defines the Cluster Client Failover registration API that will
    allow applications to be uniquely identified by the file server.

Author:

    Diaa Fathalla (diaaf) 19-May-2011

Revision History:

--*/

#ifndef __CCFREG_H_
#define __CCFREG_H_

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#include <winapifamily.h>

#pragma region Desktop Family or RemoteFS Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_REMOTEFS)

#if (NTDDI_VERSION >= NTDDI_WIN8)

#ifdef __cplusplus
extern "C" {
#endif

DWORD
WINAPI
RegisterAppInstance(
    _In_ HANDLE ProcessHandle,
    _In_ GUID*  AppInstanceId,
    _In_ BOOL   ChildrenInheritAppInstance
    );

typedef DWORD
(WINAPI * PREGISTER_APPINSTANCE)(
    _In_ HANDLE ProcessHandle,
    _In_ GUID*  AppInstanceId,
    _In_ BOOL   ChildrenInheritAppInstance
    );


#if (NTDDI_VERSION > NTDDI_WIN8)

DWORD
WINAPI
RegisterAppInstanceVersion(
    _In_ GUID*  AppInstanceId,    
    _In_ UINT64 InstanceVersionHigh,
    _In_ UINT64 InstanceVersionLow
    );

typedef DWORD
(WINAPI * PREGISTER_APPINSTANCE_VERSION)(
    _In_ GUID*  AppInstanceId,    
    _In_ UINT64 InstanceVersionHigh,
    _In_ UINT64 InstanceVersionLow
    );

DWORD
WINAPI
QueryAppInstanceVersion(
    _In_ GUID*  AppInstanceId,    
    _Out_ UINT64* InstanceVersionHigh,
    _Out_ UINT64* InstanceVersionLow,
    _Out_ NTSTATUS* VersionStatus
    );

typedef DWORD
(WINAPI * PQUERY_APPINSTANCE_VERSION)(
    _In_ GUID*  AppInstanceId,    
    _Out_ UINT64* InstanceVersionHigh,
    _Out_ UINT64* InstanceVersionLow,
    _Out_ NTSTATUS* VersionStatus
    );

DWORD
WINAPI
ResetAllAppInstanceVersions();

typedef DWORD
(WINAPI * PRESET_ALL_APPINSTANCE_VERSIONS)();

#endif // (NTTDI_VERSION > NTTDI_WIN8)


#ifdef __cplusplus
}
#endif

#endif // NTDDI_VERSION >= NTDDI_WIN8

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_REMOTEFS) */
#pragma endregion

#endif // __CCFREG_H_
