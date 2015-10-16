 
/********************************************************************************
*                                                                               *
* StringApi2.h -- ApiSet Contract for api-ms-win-core-String-l2                 *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _STRINGAPI2_H_
#define _STRINGAPI2_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-string-l2 */

#if !defined(RC_INVOKED)

#ifndef _APISET_STRING_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_STRING_VER 0x0101
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_STRING_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif


WINBASEAPI
LPWSTR
WINAPI
CharLowerW(
    _Inout_ LPWSTR pwsz
    );



WINBASEAPI
LPWSTR
WINAPI
CharUpperW(
    _Inout_ LPWSTR pwsz
    );



WINBASEAPI
LPWSTR
WINAPI
CharNextW(
    _In_ LPCWSTR lpwCurrentChar
    );



WINBASEAPI
LPWSTR
WINAPI
CharPrevW(
    _In_ LPCWSTR lpwStart,
    _In_ LPCWSTR lpwCurrentChar
    );



WINBASEAPI
DWORD
WINAPI
CharLowerBuffW(
    _Inout_updates_(cchLength) LPWSTR lpsz,
    _In_ DWORD cchLength
    );



WINBASEAPI
DWORD
WINAPI
CharUpperBuffW(
    _Inout_updates_(cchLength) LPWSTR lpsz,
    _In_ DWORD cchLength
    );



WINBASEAPI
BOOL
WINAPI
IsCharLowerW(
    _In_ WCHAR wChar
    );



WINBASEAPI
BOOL
WINAPI
IsCharUpperW(
    _In_ WCHAR wChar
    );



WINBASEAPI
BOOL
WINAPI
IsCharAlphaNumericW(
    _In_ WCHAR wChar
    );



WINBASEAPI
BOOL
WINAPI
IsCharAlphaW(
    _In_ WCHAR wChar
    );



#if !defined(_CONTRACT_GEN) || (_APISET_STRING_VER >= 0x0101)

HRESULT
SHLoadIndirectString(
    _In_ LPCWSTR pszSource,
    _Out_writes_(cchOutBuf) LPWSTR pszOutBuf,
    _In_ UINT cchOutBuf,
    _Reserved_ void ** ppvReserved
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_STRING_VER >= 0x0101)

#ifdef __cplusplus
}
#endif


#endif // _STRINGAPI2_H_
