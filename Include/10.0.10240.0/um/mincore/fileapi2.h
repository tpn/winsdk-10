 
// begin_1_0
// begin_1_1
/********************************************************************************
*                                                                               *
* FileApi2.h -- ApiSet Contract for api-ms-win-core-file-l2                     *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifndef _FILEAPI2_H_
#define _FILEAPI2_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>

#pragma warning(disable:4201) /* nonstandard extension used : nameless struct/union */

/* APISET_NAME: api-ms-win-core-file-l2 */

#if !defined(RC_INVOKED)

#ifndef _APISET_FILEAPI2_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_FILEAPI2_VER 0x0102
#elif _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINBLUE
#define _APISET_FILEAPI2_VER 0x0101
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN8
#define _APISET_FILEAPI2_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

// end_1_0
// end_1_1
// begin_1_0

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef
DWORD
(WINAPI *LPPROGRESS_ROUTINE)(
    _In_     LARGE_INTEGER TotalFileSize,
    _In_     LARGE_INTEGER TotalBytesTransferred,
    _In_     LARGE_INTEGER StreamSize,
    _In_     LARGE_INTEGER StreamBytesTransferred,
    _In_     DWORD dwStreamNumber,
    _In_     DWORD dwCallbackReason,
    _In_     HANDLE hSourceFile,
    _In_     HANDLE hDestinationFile,
    _In_opt_ LPVOID lpData
    );

WINBASEAPI
BOOL
WINAPI
CopyFileExW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_opt_ LPBOOL pbCancel,
    _In_ DWORD dwCopyFlags
    );



#if (_WIN32_WINNT >= 0x0500)

WINBASEAPI
BOOL
WINAPI
ReplaceFileW(
    _In_ LPCWSTR lpReplacedFileName,
    _In_ LPCWSTR lpReplacementFileName,
    _In_opt_ LPCWSTR lpBackupFileName,
    _In_ DWORD dwReplaceFlags,
    _Reserved_ LPVOID lpExclude,
    _Reserved_ LPVOID lpReserved
    );


#endif // (_WIN32_WINNT >= 0x0500)

WINBASEAPI
BOOL
APIENTRY
MoveFileExW(
    _In_ LPCWSTR lpExistingFileName,
    _In_opt_ LPCWSTR lpNewFileName,
    _In_ DWORD dwFlags
    );


WINBASEAPI
BOOL
APIENTRY
MoveFileWithProgressW(
    _In_ LPCWSTR lpExistingFileName,
    _In_opt_ LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_ DWORD dwFlags
    );


WINBASEAPI
BOOL
APIENTRY
CreateDirectoryExW(
    _In_ LPCWSTR lpTemplateDirectory,
    _In_ LPCWSTR lpNewDirectory,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );


WINBASEAPI
BOOL
WINAPI
GetFileInformationByHandleEx(
    _In_ HANDLE hFile,
    _In_ FILE_INFO_BY_HANDLE_CLASS FileInformationClass,
    _Out_writes_bytes_(dwBufferSize) LPVOID lpFileInformation,
    _In_ DWORD dwBufferSize
    );


WINBASEAPI
BOOL
WINAPI
CreateHardLinkW(
    _In_ LPCWSTR lpLinkName,
    _In_ LPCWSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );


WINBASEAPI
BOOLEAN
WINAPI
CreateSymbolicLinkW(
    _In_ LPCWSTR lpSymlinkFileName,
    _In_ LPCWSTR lpTargetFileName,
    _In_ DWORD dwFlags
    );


WINBASEAPI
HANDLE
WINAPI
ReOpenFile(
    _In_ HANDLE hOriginalFile,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwFlags
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

WINBASEAPI
BOOL
WINAPI
ReadDirectoryChangesW(
    _In_ HANDLE hDirectory,
    _Out_writes_bytes_to_(nBufferLength, *lpBytesReturned) LPVOID lpBuffer,
    _In_ DWORD nBufferLength,
    _In_ BOOL bWatchSubtree,
    _In_ DWORD dwNotifyFilter,
    _Out_opt_ LPDWORD lpBytesReturned,
    _Inout_opt_ LPOVERLAPPED lpOverlapped,
    _In_opt_ LPOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
    );


#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if _WIN32_WINNT >= 0x0601

WINBASEAPI
HRESULT
WINAPI
CopyFile2(
    _In_ PCWSTR pwszExistingFileName,
    _In_ PCWSTR pwszNewFileName,
    _In_opt_ VOID * pExtendedParameters
    );


#endif // _WIN32_WINNT >= 0x0601

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// begin_1_1

typedef enum _FILE_ID_TYPE {
      FileIdType,
      ObjectIdType,
      ExtendedFileIdType,
      MaximumFileIdType
} FILE_ID_TYPE, *PFILE_ID_TYPE;

typedef struct FILE_ID_DESCRIPTOR {
    DWORD dwSize;  // Size of the struct
    FILE_ID_TYPE Type; // Describes the type of identifier passed in.
    union {
        LARGE_INTEGER FileId;
        GUID ObjectId;

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
        FILE_ID_128 ExtendedFileId;
#endif
    } DUMMYUNIONNAME;
} FILE_ID_DESCRIPTOR, *LPFILE_ID_DESCRIPTOR;


#if !defined(_CONTRACT_GEN) || (_APISET_FILEAPI2_VER >= 0x0101)

WINBASEAPI
HANDLE
WINAPI
OpenFileById(
    __in HANDLE hVolumeHint,
    __in LPFILE_ID_DESCRIPTOR lpFileId,
    __in DWORD dwDesiredAccess,
    __in DWORD dwShareMode,
    __in_opt LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    __in DWORD dwFlags
    );


#endif // !defined(_CONTRACT_GEN) || (_APISET_FILEAPI2_VER >= 0x0101)

// end_1_1


#if !defined(_CONTRACT_GEN) || (_APISET_FILEAPI2_VER >= 0x0102)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
CopyFileW(
    __in LPCWSTR lpExistingFileName,
    __in LPCWSTR lpNewFileName,
    __in BOOL bFailIfExists
    );


WINBASEAPI
BOOL
WINAPI
CreateHardLinkA(
    _In_ LPCSTR lpFileName,
    _In_ LPCSTR lpExistingFileName,
    _Reserved_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_FILEAPI2_VER >= 0x0102)

// begin_1_0
// begin_1_1

#ifdef __cplusplus
}
#endif

#endif // _FILEAPI2_H_
// end_1_0
// end_1_1
