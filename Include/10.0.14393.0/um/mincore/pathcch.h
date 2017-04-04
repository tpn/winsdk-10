 
/********************************************************************************
*                                                                               *
* Pathcch.h -- ApiSet Contract for api-ms-win-core-Path-l1                      *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#pragma once

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

/* APISET_NAME: api-ms-win-core-path-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_PATH_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_PATH_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

// Flags for controling the Ex functions
#define PATHCCH_ALLOW_LONG_PATHS    0x00000001  // Allow building of \\?\ paths if longer than MAX_PATH


#define VOLUME_PREFIX           L"\\\\?\\Volume"
#define VOLUME_PREFIX_LEN       (ARRAYSIZE(VOLUME_PREFIX) - 1)

// max # of characters we support using the "\\?\" syntax
// (0x7FFF + 1 for NULL terminator)
#define PATHCCH_MAX_CCH             0x8000


WINPATHCCHAPI
BOOL
APIENTRY
PathIsUNCEx(
    _In_ PCWSTR pszPath,
    _Outptr_opt_ PCWSTR * ppszServer
    );


WINPATHCCHAPI
BOOL
APIENTRY
PathCchIsRoot(
    _In_opt_ PCWSTR pszPath
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddBackslashEx(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_opt_result_buffer_(*pcchRemaining) PWSTR * ppszEnd,
    _Out_opt_ size_t * pcchRemaining
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddBackslash(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveBackslashEx(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_opt_result_buffer_(*pcchRemaining) PWSTR * ppszEnd,
    _Out_opt_ size_t * pcchRemaining
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveBackslash(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchSkipRoot(
    _In_ PCWSTR pszPath,
    _Outptr_ PCWSTR * ppszRootEnd
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchStripToRoot(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveFileSpec(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchFindExtension(
    _In_reads_(_Inexpressible_(cchPath)) PCWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_ PCWSTR * ppszExt
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAddExtension(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_ PCWSTR pszExt
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRenameExtension(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_ PCWSTR pszExt
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchRemoveExtension(
    _Inout_updates_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCanonicalizeEx(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_ PCWSTR pszPathIn,
    _In_ unsigned long dwFlags
    );




WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCanonicalize(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_ PCWSTR pszPathIn
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCombineEx(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore,
    _In_ unsigned long dwFlags
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchCombine(
    _Out_writes_(cchPathOut) PWSTR pszPathOut,
    _In_ size_t cchPathOut,
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore
    );


WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAppendEx(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_opt_ PCWSTR pszMore,
    _In_ unsigned long dwFlags
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchAppend(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath,
    _In_opt_ PCWSTR pszMore
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathCchStripPrefix(
    _Inout_updates_(cchPath) PWSTR pszPath,
    _In_ size_t cchPath
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathAllocCombine(
    _In_opt_ PCWSTR pszPathIn,
    _In_opt_ PCWSTR pszMore,
    _In_ unsigned long dwFlags,
    _Outptr_ PWSTR * ppszPathOut
    );



WINPATHCCHAPI
HRESULT
APIENTRY
PathAllocCanonicalize(
    _In_ PCWSTR pszPathIn,
    _In_ unsigned long dwFlags,
    _Outptr_ PWSTR * ppszPathOut
    );



#ifndef PATHCCH_NO_DEPRECATE
// Deprecate all of the unsafe functions to generate compiletime errors. If you do not want
// this then you can #define PATHCCH_NO_DEPRECATE before including this file.

#undef PathAddBackslash
#undef PathAddBackslashA
#undef PathAddBackslashW

#undef PathAddExtension
#undef PathAddExtensionA
#undef PathAddExtensionW

#undef PathAppend
#undef PathAppendA
#undef PathAppendW

#undef PathCanonicalize
#undef PathCanonicalizeA
#undef PathCanonicalizeW

#undef PathCombine
#undef PathCombineA
#undef PathCombineW

#undef PathRenameExtension
#undef PathRenameExtensionA
#undef PathRenameExtensionW

#ifdef DEPRECATE_SUPPORTED

#pragma deprecated(PathIsRelativeWorker)
#pragma deprecated(StrIsEqualWorker)
#pragma deprecated(FindPreviousBackslashWorker)
#pragma deprecated(IsHexDigitWorker)
#pragma deprecated(StringIsGUIDWorker)
#pragma deprecated(PathIsVolumeGUIDWorker)
#pragma deprecated(IsValidExtensionWorker)

#pragma deprecated(PathAddBackslash)
#pragma deprecated(PathAddBackslashA)
#pragma deprecated(PathAddBackslashW)

#pragma deprecated(PathAddExtension)
#pragma deprecated(PathAddExtensionA)
#pragma deprecated(PathAddExtensionW)

#pragma deprecated(PathAppend)
#pragma deprecated(PathAppendA)
#pragma deprecated(PathAppendW)

#pragma deprecated(PathCanonicalize)
#pragma deprecated(PathCanonicalizeA)
#pragma deprecated(PathCanonicalizeW)

#pragma deprecated(PathCombine)
#pragma deprecated(PathCombineA)
#pragma deprecated(PathCombineW)

#pragma deprecated(PathRenameExtension)
#pragma deprecated(PathRenameExtensionA)
#pragma deprecated(PathRenameExtensionW)

#else // DEPRECATE_SUPPORTED

#define PathIsRelativeWorker    PathIsRelativeWorker_is_internal_to_pathcch;
#define StrIsEqualWorker        StrIsEqualWorker_is_internal_to_pathcch;
#define FindPreviousBackslashWorker FindPreviousBackslashWorker_is_internal_to_pathcch;
#define IsHexDigitWorker        IsHexDigitWorker_is_internal_to_pathcch;
#define StringIsGUIDWorker      StringIsGUIDWorker_is_internal_to_pathcch;
#define PathIsVolumeGUIDWorker  PathIsVolumeGUIDWorker_is_internal_to_pathcch;
#define IsValidExtensionWorker  IsValidExtensionWorker_is_internal_to_pathcch;

#define PathAddBackslash        PathAddBackslash_instead_use_PathCchAddBackslash;
#define PathAddBackslashA       PathAddBackslash_instead_use_PathCchAddBackslash;
#define PathAddBackslashW       PathAddBackslash_instead_use_PathCchAddBackslash;

#define PathAddExtension        PathAddExtension_instead_use_PathCchAddExtension;
#define PathAddExtensionA       PathAddExtension_instead_use_PathCchAddExtension;
#define PathAddExtensionW       PathAddExtension_instead_use_PathCchAddExtension;

#define PathAppend              PathAppend_instead_use_PathCchAppend;
#define PathAppendA             PathAppend_instead_use_PathCchAppend;
#define PathAppendW             PathAppend_instead_use_PathCchAppend;

#define PathCanonicalize        PathCanonicalize_instead_use_PathCchCanonicalize;
#define PathCanonicalizeA       PathCanonicalize_instead_use_PathCchCanonicalize;
#define PathCanonicalizeW       PathCanonicalize_instead_use_PathCchCanonicalize;

#define PathCombine             PathCombine_instead_use_PathCchCombine;
#define PathCombineA            PathCombine_instead_use_PathCchCombine;
#define PathCombineW            PathCombine_instead_use_PathCchCombine;

#define PathRenameExtension     PathRenameExtension_instead_use_PathCchRenameExtension;
#define PathRenameExtensionA    PathRenameExtension_instead_use_PathCchRenameExtension;
#define PathRenameExtensionW    PathRenameExtension_instead_use_PathCchRenameExtension;

#endif  // !DEPRECATE_SUPPORTED
#endif  // !PATHCCH_NO_DEPRECATE

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

// non-const overload (C++ only)

_Success_(return != 0)
__inline BOOL PathIsUNCEx(_In_ PWSTR pszPath, _Outptr_opt_ PWSTR *ppszServer)
{
    return PathIsUNCEx(const_cast<PCWSTR>(pszPath), const_cast<PCWSTR*>(ppszServer));
}

__inline HRESULT
PathCchSkipRoot(
    _In_ PWSTR pszPath,
    _Outptr_ PWSTR *ppszRootEnd)
{
    return PathCchSkipRoot(const_cast<PCWSTR>(pszPath), const_cast<PCWSTR*>(ppszRootEnd));
}

__inline HRESULT
PathCchFindExtension(
    _In_reads_(_Inexpressible_(cchPath)) PWSTR pszPath,
    _In_ size_t cchPath,
    _Outptr_ PWSTR *ppszExt)
{
    return PathCchFindExtension(const_cast<PCWSTR>(pszPath), cchPath, const_cast<PCWSTR*>(ppszExt));
}

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#endif


