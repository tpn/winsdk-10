 
/********************************************************************************
*                                                                               *
* securitybaseapi.h -- ApiSet Contract for api-ms-win-security-base-l1          *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISECUREBASEPRIVATE_
#define _APISECUREBASEPRIVATE_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-security-base-private-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_SECURITYBASEPRIVATE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINBLUE
#define _APISET_SECURITYBASEPRIVATE_VER 0x0101
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN8
#define _APISET_SECURITYBASEPRIVATE_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

//
//
// Security APIs
//


#if (_WIN32_WINNT >= 0x0600)

WINADVAPI
BOOL
WINAPI
IsValidRelativeSecurityDescriptor(
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ ULONG SecurityDescriptorLength,
    _In_ SECURITY_INFORMATION RequiredInformation
    );


#endif // (_WIN32_WINNT >= 0x0600)

WINADVAPI
_Success_(return != FALSE)
BOOL
WINAPI
MakeAbsoluteSD2(
    _Inout_updates_bytes_to_(*lpdwBufferSize, *lpdwBufferSize) PSECURITY_DESCRIPTOR pSelfRelativeSecurityDescriptor,
    _Inout_ LPDWORD lpdwBufferSize
    );



#if !defined(_CONTRACT_GEN) || (_APISET_SECURITYBASEPRIVATE_VER >= 0x0101)

WINADVAPI
BOOL
WINAPI
CreateAppContainerToken(
    _In_opt_ HANDLE UserToken,
    _In_ LPSECURITY_CAPABILITIES SecurityCapabilities,
    _Outptr_ PHANDLE NewToken
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_SECURITYBASEPRIVATE_VER >= 0x0101)

#ifdef __cplusplus
}
#endif

#endif // _APISECUREBASEPRIVATE_
