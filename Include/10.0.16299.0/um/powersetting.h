 
/********************************************************************************
*                                                                               *
* powersetting.h -- ApiSet Contract for api-ms-win-power-setting-l1-1-0         *  
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifdef _MSC_VER

#if (_MSC_VER > 1000)
#pragma once
#endif // _MSC_VER > 1000
#endif // _MSC_VER

#ifndef _POWERSETTING_H_
#define _POWERSETTING_H_

#include <apiset.h>
#include <apisetcconv.h>

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <minwindef.h>
#endif

/* APISET_NAME: api-ms-win-power-setting-l1 */
/* APISET_TAG: public */

#if !defined(RC_INVOKED)

#ifndef _APISET_POWERSETTING_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_POWERSETTING_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifndef _HPOWERNOTIFY_DEF_
#define _HPOWERNOTIFY_DEF_

typedef PVOID HPOWERNOTIFY, *PHPOWERNOTIFY;

#endif // _HPOWERNOTIFY_DEF_


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerReadACValue(
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID * SchemeGuid,
    _In_opt_ CONST GUID * SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID * PowerSettingGuid,
    _Out_opt_ PULONG Type,
    _Out_writes_bytes_opt_(*BufferSize) LPBYTE Buffer,
    _Inout_opt_ LPDWORD BufferSize
    );

#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerReadDCValue(
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID * SchemeGuid,
    _In_opt_ CONST GUID * SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID * PowerSettingGuid,
    _Out_opt_ PULONG Type,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );

#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerWriteACValueIndex(
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID * SchemeGuid,
    _In_opt_ CONST GUID * SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID * PowerSettingGuid,
    _In_ DWORD AcValueIndex
    );

#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerWriteDCValueIndex(
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID * SchemeGuid,
    _In_opt_ CONST GUID * SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID * PowerSettingGuid,
    _In_ DWORD DcValueIndex
    );

#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerGetActiveScheme(
    _In_opt_ HKEY UserRootPowerKey,
    _Outptr_ GUID ** ActivePolicyGuid
    );

#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
DWORD
WINAPI
PowerSetActiveScheme(
    _In_opt_ HKEY UserRootPowerKey,
    _In_opt_ CONST GUID * SchemeGuid
    );

#endif


#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD
WINAPI
PowerSettingRegisterNotification(
    _In_ LPCGUID SettingGuid,
    _In_ DWORD Flags,
    _In_ HANDLE Recipient,
    _Out_ PHPOWERNOTIFY RegistrationHandle
    );

#endif


#if (NTDDI_VERSION >= NTDDI_WIN7)
DWORD
WINAPI
PowerSettingUnregisterNotification(
    _Inout_ HPOWERNOTIFY RegistrationHandle
    );

#endif

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _POWERSETTING_H_
