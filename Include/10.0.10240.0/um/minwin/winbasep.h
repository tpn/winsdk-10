
/*++ BUILD Version: 0001    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    winbasep.h

Abstract:

    Private
    Procedure declarations, constant definitions and macros for the Base
    component.

--*/

#ifndef _WINBASEP_
#define _WINBASEP_

#include <minwinbasep.h>
#ifdef __cplusplus
extern "C" {
#endif
#define FILE_FLAG_MM_CACHED_FILE_HANDLE 0x00400000

//
// Define the valid flags for CreateFileW aka CreateFile (frozen as of W7)
//

#define FILE_FLAG_VALID_FLAGS_FOR_CREATE_FILE 0xFFF00000


//
// Define the valid flags for Security QoS (frozen as of W7)
//

#define SECURITY_VALID_SQOS_FLAGS_FOR_CREATE_FILE  0x001F0000

//
// Define the valid attribute flags for CreateFileW (frozen as of W7)
//

#define FILE_ATTRIBUTE_VALID_FLAGS_FOR_CREATE_FILE 0x00007fb7


#define PROCESS_MODE_BACKGROUND_CMDS      0x00300000
#define THREAD_MODE_BACKGROUND_CMDS     0x00030000
#define SEM_SUPPRESSHARDERRORBOX    0x4000
#define HFINDFILE HANDLE                        //
#define INVALID_HFINDFILE       ((HFINDFILE)-1) //
#define WINEXEC_ELEVATION_REQUIRED_HANDLED  0x80000000
typedef DWORD (*PFNWAITFORINPUTIDLE)(HANDLE hProcess, DWORD dwMilliseconds);
WINBASEAPI VOID RegisterWaitForInputIdle(PFNWAITFORINPUTIDLE);


WINBASEAPI
int
WINAPI
LoadStringBaseW(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPWSTR lpBuffer,
    _In_ int cchBufferMax);

WINBASEAPI
int
WINAPI
LoadStringBaseExW(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPWSTR lpBuffer,
    _In_ int cchBufferMax,
    _In_ WORD wLangID);

//
// Flags used by NotifyRedirectedStringChange
//

#define MUI_RESET_ALL_USERS  0x0001
#define MUI_RESET_CURRENT_USER  0x0002
#define MUI_RESET_IMMUTABLE_CACHE  0x0004


//
// Declaration for string redirection API
//

BOOL
NotifyRedirectedStringChange(
    _In_ DWORD Flags
);

#define STARTF_HASSHELLDATA        0x00000400
#define STARTF_TITLEISLOCALALLOCED 0x00004000

#define EXTENDED_PROCESS_CREATION_FLAG_ELEVATION_HANDLED    0x00000001
#define EXTENDED_PROCESS_CREATION_FLAG_FORCELUA             0x00000002
#define EXTENDED_PROCESS_CREATION_FLAG_FORCE_BREAKAWAY      0x00000004

//
// Supported process protection levels.
//

#define PROTECTION_LEVEL_WINTCB_LIGHT       0x00000000
#define PROTECTION_LEVEL_WINDOWS            0x00000001
#define PROTECTION_LEVEL_WINDOWS_LIGHT      0x00000002
#define PROTECTION_LEVEL_ANTIMALWARE_LIGHT  0x00000003
#define PROTECTION_LEVEL_LSA_LIGHT          0x00000004

//
// The following protection levels are supplied for testing only (no win32
// callers need these).
//

#define PROTECTION_LEVEL_WINTCB             0x00000005
#define PROTECTION_LEVEL_CODEGEN_LIGHT      0x00000006
#define PROTECTION_LEVEL_AUTHENTICODE       0x00000007

#ifdef _USE_FULL_PROC_THREAD_ATTRIBUTE
typedef enum _PROC_THREAD_ATTRIBUTE_NUM {
    ProcThreadAttributeParentProcess        = 0,
    ProcThreadAttributeExtendedFlags        = 1,
    ProcThreadAttributeHandleList           = 2,
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
    ProcThreadAttributeGroupAffinity        = 3,
    ProcThreadAttributePreferredNode        = 4,
    ProcThreadAttributeIdealProcessor       = 5,
    ProcThreadAttributeUmsThread            = 6,
    ProcThreadAttributeMitigationPolicy     = 7,
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
    ProcThreadAttributePackageFullName      = 8,
    ProcThreadAttributeSecurityCapabilities = 9,
    ProcThreadAttributeConsoleReference     = 10,
#endif
    ProcThreadAttributeProtectionLevel      = 11,
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
    ProcThreadAttributeOsMaxVersionTested   = 12,
#endif
#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
    ProcThreadAttributeJobList              = 13,
#endif
    ProcThreadAttributeMax                  = 14
} PROC_THREAD_ATTRIBUTE_NUM;
#endif
#define PROC_THREAD_ATTRIBUTE_CONSOLE_REFERENCE \
    ProcThreadAttributeValue (ProcThreadAttributeConsoleReference, FALSE, TRUE, FALSE)
#define PROC_THREAD_ATTRIBUTE_PACKAGE_FULL_NAME \
    ProcThreadAttributeValue (ProcThreadAttributePackageFullName, FALSE, TRUE, FALSE)
#define PROC_THREAD_ATTRIBUTE_OSMAXVERSIONTESTED \
    ProcThreadAttributeValue (ProcThreadAttributeOsMaxVersionTested, FALSE, TRUE, FALSE)

//
// Define Control Flow Guard (CFG) mitigation policy options.  Control Flow
// Guard allows indirect control transfers to be checked at runtime.
//

#define PROCESS_CREATION_MITIGATION_POLICY_CONTROL_FLOW_GUARD_MASK                        (0x00000003ui64 << 40)
#define PROCESS_CREATION_MITIGATION_POLICY_CONTROL_FLOW_GUARD_DEFER                       (0x00000000ui64 << 40)
#define PROCESS_CREATION_MITIGATION_POLICY_CONTROL_FLOW_GUARD_ALWAYS_ON                   (0x00000001ui64 << 40)
#define PROCESS_CREATION_MITIGATION_POLICY_CONTROL_FLOW_GUARD_ALWAYS_OFF                  (0x00000002ui64 << 40)
#define PROCESS_CREATION_MITIGATION_POLICY_CONTROL_FLOW_GUARD_ALWAYS_RESERVED             (0x00000003ui64 << 40)


#if (_WIN32_WINNT >= 0x0600)

#define PROC_THREAD_ATTRIBUTE_EXTENDED_FLAGS \
    ProcThreadAttributeValue (ProcThreadAttributeExtendedFlags, FALSE, TRUE, TRUE)

typedef struct _PROC_THREAD_ATTRIBUTE {
    ULONG_PTR Attribute;
    SIZE_T Size;
    ULONG_PTR Value;
} PROC_THREAD_ATTRIBUTE, *PPROC_THREAD_ATTRIBUTE;

typedef struct _PROC_THREAD_ATTRIBUTE_LIST {
    ULONG PresentFlags;
    ULONG AttributeCount;
    ULONG LastAttribute;
    ULONG SpareUlong0;
    PPROC_THREAD_ATTRIBUTE ExtendedFlagsAttribute;
    PROC_THREAD_ATTRIBUTE Attributes[1];
} PROC_THREAD_ATTRIBUTE_LIST;

#ifdef NT_ASSERT

FORCEINLINE
BOOL
ConvertToExtendedStartupInfo(
    _In_    LPSTARTUPINFO lpStartupInfo,
    _Inout_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _Inout_ PSIZE_T lpSize,
    _Out_   LPSTARTUPINFOEX lpExtendedStartupInfo
    )

/*++

Routine Description:

    This private internal routine converts an existing startup info structure
    to an extended startup info structure containing the indicated single
    element attribute list. This may be used with both ANSI and UNICODE versions
    of the input structures.

Arguments:

    lpStartupInfo - Startup information structure to convert.

    lpAttributeList - The attribute list to append to the extended startup
        info.

    lpSize - Input/output argument indicating the size of the attribute
        list.

    lpExtendedStartupInfo - Upon successful completion, an initialized extended
        startup info structure.

Return Value:

    TRUE - The operation was successful.

    FALSE - The operation failed. Extended error status is available
        using GetLastError.

--*/

{
    BOOL Result;

    Result = InitializeProcThreadAttributeList (lpAttributeList, 1, 0, lpSize);
    if (Result == FALSE) {
        return FALSE;
    }

    NT_ASSERT (sizeof (lpExtendedStartupInfo->StartupInfo) == sizeof (*lpStartupInfo));
    RtlCopyMemory (&lpExtendedStartupInfo->StartupInfo, lpStartupInfo, sizeof (*lpStartupInfo));
    lpExtendedStartupInfo->StartupInfo.cb = sizeof (*lpExtendedStartupInfo);
    lpExtendedStartupInfo->lpAttributeList = lpAttributeList;
    return TRUE;
}

#define WINBASEP_EXTENDED_ATTRIBUTE_FLAG(AttributeNumber) \
    (1 << ((AttributeNumber) & PROC_THREAD_ATTRIBUTE_NUMBER))

#ifdef _USE_FULL_PROC_THREAD_ATTRIBUTE
FORCEINLINE
BOOL
AddExtendedFlagAttribute(
    _Inout_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _Inout_ PPROC_THREAD_ATTRIBUTE lpFlagsAttribute,
    _In_    DWORD dwExtendedFlags,
    _Out_   PDWORD lpdwPreviousFlags
    )

/*++

Routine Description:

    This private internal routine appends a flags attribute to an already
    initialized attribute list, regardless of the current capacity of
    the list. Since dynamic addition of attributes is not currently supported,
    this routine performs the addition through careful manipulation of
    the internal fields. Note that this routine cannot fail.

    N.B. This routine must be paired with a matching call to
        RemoveExtendedFlagAttribute.

Arguments:

    lpAttributeList - The attribute list to augment with the additional
        attribute.

    lpFlagsAttribute - A single attribute structure used to record information
        describing the extended flags attribute, in the event insufficient
        buffer space exists within the attribute list. This structure must
        persist until a subsequent call to RemoveExtendedFlagAttribute.

    dwExtendedFlags - Extended flags to add to the attribute list.

    lpdwPreviousFlags - Receives the previously set flags.

Return Value:

    Boolean value indicating whether or not a flags attribute previously
    existed in the list. This must be passed to a subsequent call to
    RemoveExtendedFlagAttribute.

--*/

{
    BOOL NewAttributeAdded;
    DWORD OldFlags;
    PPROC_THREAD_ATTRIBUTE TargetAttribute;

    if (lpAttributeList->ExtendedFlagsAttribute != NULL) {
        TargetAttribute = lpAttributeList->ExtendedFlagsAttribute;
        NewAttributeAdded = FALSE;
        OldFlags = (DWORD) TargetAttribute->Value;
    } else {
        TargetAttribute = lpFlagsAttribute;
        lpFlagsAttribute->Attribute = PROC_THREAD_ATTRIBUTE_EXTENDED_FLAGS;
        lpFlagsAttribute->Size = sizeof (DWORD);
        lpFlagsAttribute->Value = 0;
        NewAttributeAdded = TRUE;
        OldFlags = 0;
    }

    TargetAttribute->Value |= dwExtendedFlags;
    *lpdwPreviousFlags = OldFlags;
    if (NewAttributeAdded != FALSE) {
        lpAttributeList->ExtendedFlagsAttribute = TargetAttribute;
        lpAttributeList->PresentFlags |= WINBASEP_EXTENDED_ATTRIBUTE_FLAG (PROC_THREAD_ATTRIBUTE_EXTENDED_FLAGS);
        return TRUE;
    }

    return FALSE;
}

FORCEINLINE
VOID
RemoveExtendedFlagAttribute(
    _Inout_ LPPROC_THREAD_ATTRIBUTE_LIST lpAttributeList,
    _In_    BOOL  bNewAttributeAdded,
    _In_    DWORD dwPreviousFlags
    )

/*++

Routine Description:

    This private internal routine restores the set of extended flags to
    their value prior to a call to AddExtendedFlagAttribute. If a new
    attribute structure was added to the list, it is removed by this
    routine.

Arguments:

    lpAttributeList - The attribute list in which the flags should be
        restored.

    bNewAttributeAdded - Boolean flag indicating whether a new attribute
        was added to the list by a previous call to AddExtendedFlagAttribute.

    dwPreviousFlags - Set of extended flags to resotre, returned by a
        priorc allto AddExtendedFlagAttribute.

Return Value:

    None.

--*/

{
    if (bNewAttributeAdded != FALSE) {
        lpAttributeList->ExtendedFlagsAttribute = NULL;
        lpAttributeList->PresentFlags &= ~WINBASEP_EXTENDED_ATTRIBUTE_FLAG (PROC_THREAD_ATTRIBUTE_EXTENDED_FLAGS);
    } else {
        NT_ASSERT (lpAttributeList->ExtendedFlagsAttribute != NULL);
        lpAttributeList->ExtendedFlagsAttribute->Value = dwPreviousFlags;
    }

    return;
}
#endif  // (_USE_FULL_PROC_THREAD_ATTRIBUTE)

#endif

#endif // (_WIN32_WINNT >= 0x0600)


WINBASEAPI
BOOL
WINAPI
CreateProcessInternalA(
    _In_opt_        HANDLE hUserToken,
    _In_opt_        LPCSTR lpApplicationName,
    _Inout_opt_     LPSTR lpCommandLine,
    _In_opt_        LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_        LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_            BOOL bInheritHandles,
    _In_            DWORD dwCreationFlags,
    _In_opt_        LPVOID lpEnvironment,
    _In_opt_        LPCSTR lpCurrentDirectory,
    _In_            LPSTARTUPINFOA lpStartupInfo,
    _Out_           LPPROCESS_INFORMATION lpProcessInformation,
    _Outptr_opt_ PHANDLE hRestrictedUserToken
    );
WINBASEAPI
BOOL
WINAPI
CreateProcessInternalW(
    _In_opt_        HANDLE hUserToken,
    _In_opt_        LPCWSTR lpApplicationName,
    _Inout_opt_     LPWSTR lpCommandLine,
    _In_opt_        LPSECURITY_ATTRIBUTES lpProcessAttributes,
    _In_opt_        LPSECURITY_ATTRIBUTES lpThreadAttributes,
    _In_            BOOL bInheritHandles,
    _In_            DWORD dwCreationFlags,
    _In_opt_        LPVOID lpEnvironment,
    _In_opt_        LPCWSTR lpCurrentDirectory,
    _In_            LPSTARTUPINFOW lpStartupInfo,
    _Out_           LPPROCESS_INFORMATION lpProcessInformation,
    _Outptr_opt_ PHANDLE hRestrictedUserToken
    );
#ifdef UNICODE
#define CreateProcessInternal  CreateProcessInternalW
#else
#define CreateProcessInternal  CreateProcessInternalA
#endif // !UNICODE

#if (_WIN32_WINNT >= 0x0500)

#define PRIVCOPY_FILE_METADATA           0x010  // Copy compression, DACL, (encryption)
#define PRIVCOPY_FILE_SACL               0x020  // Copy SACL
#define PRIVCOPY_FILE_OWNER_GROUP        0x040  // Copy owner & group
#define PRIVCOPY_FILE_DIRECTORY          0x080  // Copy directory file like a file
#define PRIVCOPY_FILE_BACKUP_SEMANTICS   0x100  // Use FILE_FLAG_BACKUP_SEMANTICS on open/creates.
#define PRIVCOPY_FILE_SUPERSEDE          0x200  // Replace original dest with source
#define PRIVCOPY_FILE_SKIP_DACL          0x400  // Workaround for csc/roamprofs

#if (_WIN32_WINNT >= 0x0602)

#define PRIVCOPY_FILE_SKIP_ALTERNATE_STREAMS            0x00008000
#define PRIVCOPY_FILE_NO_DESTINATION_BUFFERING          0x00010000
#define PRIVCOPY_FILE_TRANSPARENT_COPY                  0x00020000
#define PRIVCOPY_FILE_COPY_WOF_COMPRESSED               0x00080000

#define PRIVPROGRESS_PAUSE                              5

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN10)

#define PRIVCOPY_FILE_SKIP_PRIMARY_STREAM               0x00100000
#define PRIVCOPY_FILE_OPEN_AND_COPY_REPARSE_POINT       0x00200000

#define PRIVCOPY_FILE_VALID_FLAGS   (PRIVCOPY_FILE_METADATA|                \
                                    PRIVCOPY_FILE_SACL|                     \
                                    PRIVCOPY_FILE_OWNER_GROUP|              \
                                    PRIVCOPY_FILE_DIRECTORY|                \
                                    PRIVCOPY_FILE_SUPERSEDE|                \
                                    PRIVCOPY_FILE_BACKUP_SEMANTICS|         \
                                    PRIVCOPY_FILE_SKIP_DACL|                \
                                    PRIVCOPY_FILE_SKIP_ALTERNATE_STREAMS|   \
                                    PRIVCOPY_FILE_NO_DESTINATION_BUFFERING| \
                                    PRIVCOPY_FILE_TRANSPARENT_COPY|         \
                                    PRIVCOPY_FILE_COPY_WOF_COMPRESSED|      \
                                    PRIVCOPY_FILE_SKIP_PRIMARY_STREAM|      \
                                    PRIVCOPY_FILE_OPEN_AND_COPY_REPARSE_POINT)

#else

#define PRIVCOPY_FILE_VALID_FLAGS   (PRIVCOPY_FILE_METADATA|PRIVCOPY_FILE_SACL|PRIVCOPY_FILE_OWNER_GROUP|PRIVCOPY_FILE_DIRECTORY|PRIVCOPY_FILE_SUPERSEDE|PRIVCOPY_FILE_BACKUP_SEMANTICS|PRIVCOPY_FILE_SKIP_DACL|PRIVCOPY_FILE_SKIP_ALTERNATE_STREAMS|PRIVCOPY_FILE_NO_DESTINATION_BUFFERING|PRIVCOPY_FILE_TRANSPARENT_COPY|PRIVCOPY_FILE_COPY_WOF_COMPRESSED)

#endif

#else

#define PRIVCOPY_FILE_VALID_FLAGS   (PRIVCOPY_FILE_METADATA|PRIVCOPY_FILE_SACL|PRIVCOPY_FILE_OWNER_GROUP|PRIVCOPY_FILE_DIRECTORY|PRIVCOPY_FILE_SUPERSEDE|PRIVCOPY_FILE_BACKUP_SEMANTICS|PRIVCOPY_FILE_SKIP_DACL)

#endif

#define PRIVPROGRESS_REASON_NOT_HANDLED                 4

#define PRIVCALLBACK_STREAMS_NOT_SUPPORTED              2
#define PRIVCALLBACK_COMPRESSION_NOT_SUPPORTED          5
#define PRIVCALLBACK_COMPRESSION_FAILED                 6
#define PRIVCALLBACK_ENCRYPTION_NOT_SUPPORTED           8
#define PRIVCALLBACK_ENCRYPTION_FAILED                  9
#define PRIVCALLBACK_EAS_NOT_SUPPORTED                  10
#define PRIVCALLBACK_SPARSE_NOT_SUPPORTED               11
#define PRIVCALLBACK_SPARSE_FAILED                      12
#define PRIVCALLBACK_DACL_ACCESS_DENIED                 13
#define PRIVCALLBACK_OWNER_GROUP_ACCESS_DENIED          14
#define PRIVCALLBACK_OWNER_GROUP_FAILED                 19
#define PRIVCALLBACK_SACL_ACCESS_DENIED                 15
#define PRIVCALLBACK_SECURITY_INFORMATION_NOT_SUPPORTED 16
#define PRIVCALLBACK_CANT_ENCRYPT_SYSTEM_FILE           17

#define PRIVMOVE_FILEID_DELETE_OLD_FILE     0x01
#define PRIVMOVE_FILEID_IGNORE_ID_ERRORS    0x02

WINBASEAPI
BOOL
APIENTRY
PrivMoveFileIdentityW(
    _In_ LPCWSTR lpOldFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_ DWORD dwFlags
    );

WINBASEAPI
BOOL
APIENTRY
PrivCopyFileExW(
    _In_     LPCWSTR lpExistingFileName,
    _In_     LPCWSTR lpNewFileName,
    _In_opt_ LPPROGRESS_ROUTINE lpProgressRoutine,
    _In_opt_ LPVOID lpData,
    _In_opt_ LPBOOL pbCancel,
    _In_     DWORD dwCopyFlags
    );
#endif // (_WIN32_WINNT >= 0x0500)


typedef enum {
    PipeAttribute,
    PipeConnectionAttribute,
    PipeHandleAttribute
} PIPE_ATTRIBUTE_TYPE;

WINBASEAPI
BOOL
WINAPI
GetNamedPipeAttribute(
    _In_ HANDLE Pipe,
    _In_ PIPE_ATTRIBUTE_TYPE AttributeType,
    _In_ PSTR AttributeName,
    _Out_writes_bytes_(*AttributeValueLength) PVOID AttributeValue,
    _Inout_ PSIZE_T AttributeValueLength
    );

WINBASEAPI
BOOL
WINAPI
SetNamedPipeAttribute(
    _In_ HANDLE Pipe,
    _In_ PIPE_ATTRIBUTE_TYPE AttributeType,
    _In_ PSTR AttributeName,
    _In_ PVOID AttributeValue,
    _In_ SIZE_T AttributeValueLength
    );

#define NAMED_PIPE_READ_READY       0x1
#define NAMED_PIPE_WRITE_READY      0x2
#define NAMED_PIPE_DISCONNECTED     0x4

_Success_(return == TRUE)
WINBASEAPI
BOOL
WINAPI
NamedPipeEventSelect(
    _In_ HANDLE Pipe,
    _In_ DWORD EventMask,
    _In_opt_ HANDLE EventHandle
    );

_Success_(return == TRUE)
WINBASEAPI
BOOL
WINAPI
NamedPipeEventEnum(
    _In_ HANDLE Pipe,
    _Out_ PDWORD EventMask,
    _In_opt_ HANDLE EventHandle
    );

#define OPERATION_START_VALID_FLAGS             0x1
#define OPERATION_END_VALID_FLAGS               0x1

WINBASEAPI
DWORD
WINAPI
AddLocalAlternateComputerNameA (
    _In_ LPCSTR lpDnsFQHostname,
    _In_ ULONG    ulFlags
    );
WINBASEAPI
DWORD
WINAPI
AddLocalAlternateComputerNameW (
    _In_ LPCWSTR lpDnsFQHostname,
    _In_ ULONG    ulFlags
    );
#ifdef UNICODE
#define AddLocalAlternateComputerName  AddLocalAlternateComputerNameW
#else
#define AddLocalAlternateComputerName  AddLocalAlternateComputerNameA
#endif // !UNICODE

WINBASEAPI
DWORD
WINAPI
RemoveLocalAlternateComputerNameA (
    _In_ LPCSTR lpAltDnsFQHostname,
    _In_ ULONG    ulFlags
    );
WINBASEAPI
DWORD
WINAPI
RemoveLocalAlternateComputerNameW (
    _In_ LPCWSTR lpAltDnsFQHostname,
    _In_ ULONG    ulFlags
    );
#ifdef UNICODE
#define RemoveLocalAlternateComputerName  RemoveLocalAlternateComputerNameW
#else
#define RemoveLocalAlternateComputerName  RemoveLocalAlternateComputerNameA
#endif // !UNICODE

WINBASEAPI
DWORD
WINAPI
SetLocalPrimaryComputerNameA (
    _In_ LPCSTR  lpAltDnsFQHostname,
    _In_ ULONG     ulFlags
    );
WINBASEAPI
DWORD
WINAPI
SetLocalPrimaryComputerNameW (
    _In_ LPCWSTR  lpAltDnsFQHostname,
    _In_ ULONG     ulFlags
    );
#ifdef UNICODE
#define SetLocalPrimaryComputerName  SetLocalPrimaryComputerNameW
#else
#define SetLocalPrimaryComputerName  SetLocalPrimaryComputerNameA
#endif // !UNICODE

typedef enum _COMPUTER_NAME_TYPE {
    PrimaryComputerName,
    AlternateComputerNames,
    AllComputerNames,
    ComputerNameTypeMax
} COMPUTER_NAME_TYPE ;

WINBASEAPI
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
EnumerateLocalComputerNamesA (
    _In_    COMPUTER_NAME_TYPE NameType,
    _In_    ULONG ulFlags,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPSTR lpDnsFQHostname,
    _Inout_ LPDWORD nSize
    );
WINBASEAPI
_Success_(return == ERROR_SUCCESS)
DWORD
WINAPI
EnumerateLocalComputerNamesW (
    _In_    COMPUTER_NAME_TYPE NameType,
    _In_    ULONG ulFlags,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPWSTR lpDnsFQHostname,
    _Inout_ LPDWORD nSize
    );
#ifdef UNICODE
#define EnumerateLocalComputerNames  EnumerateLocalComputerNamesW
#else
#define EnumerateLocalComputerNames  EnumerateLocalComputerNamesA
#endif // !UNICODE


WINADVAPI
BOOL
WINAPI
LogonUserExExW (
    _In_            PCWSTR lpszUsername,
    _In_opt_        PCWSTR lpszDomain,
    _In_opt_        PCWSTR lpszPassword,
    _In_            DWORD dwLogonType,
    _In_            DWORD dwLogonProvider,
    _In_opt_        PTOKEN_GROUPS pTokenGroups,
    _Outptr_opt_ PHANDLE phToken,
    _Outptr_opt_ PSID  *ppLogonSid,
    _Outptr_opt_result_bytebuffer_all_(*pdwProfileLength) PVOID *ppProfileBuffer,
    _Out_opt_       LPDWORD pdwProfileLength,
    _Out_opt_       PQUOTA_LIMITS pQuotaLimits
    );

BOOL
APIENTRY
CheckAppInitBlockedServiceIdentity(
    _Out_           PBOOL IsBlocked
    );


WINBASEAPI
BOOL
WINAPI
CloseProfileUserMapping( VOID );

WINBASEAPI
BOOL
WINAPI
OpenProfileUserMapping( VOID );

//
// filefind stucture shared with ntvdm, jonle
// see mvdm\dos\dem\demsrch.c
//
typedef struct _FINDFILE_HANDLE {
    HANDLE DirectoryHandle;
    PVOID FindBufferBase;
    PVOID FindBufferNext;
    ULONG FindBufferLength;
    ULONG FindBufferValidLength;
    FINDEX_INFO_LEVELS FindInfoLevelId;
    ULONG FindFlags;
    RTL_CRITICAL_SECTION FindBufferLock;
} FINDFILE_HANDLE, *PFINDFILE_HANDLE;

#define BASE_FIND_FIRST_DEVICE_HANDLE (HANDLE)1

WINBASEAPI
BOOL
WINAPI
GetDaylightFlag(VOID);

WINBASEAPI
BOOL
WINAPI
SetDaylightFlag(
    _In_ BOOL fDaylight
    );

WINBASEAPI
BOOL
WINAPI
FreeLibrary16(
    _In_ HINSTANCE hLibModule
    );

WINBASEAPI
FARPROC
WINAPI
GetProcAddress16(
    _In_ HINSTANCE hModule,
    _In_ LPCSTR lpProcName
    );

WINBASEAPI
HINSTANCE
WINAPI
LoadLibrary16(
    _In_ LPCSTR lpLibFileName
    );

WINBASEAPI
BOOL
APIENTRY
NukeProcess(
    _In_ DWORD ppdb,
    _In_ UINT uExitCode,
    _In_ DWORD ulFlags
    );

WINBASEAPI
HGLOBAL
WINAPI
GlobalAlloc16(
    _In_ UINT uFlags,
    _In_ DWORD dwBytes
    );

WINBASEAPI
_Ret_maybenull_
LPVOID
WINAPI
GlobalLock16(
    _In_ HGLOBAL hMem
    );

WINBASEAPI
BOOL
WINAPI
GlobalUnlock16(
    _In_ HGLOBAL hMem
    );

WINBASEAPI
HGLOBAL
WINAPI
GlobalFree16(
    _Pre_notnull_ HGLOBAL hMem
    );

WINBASEAPI
DWORD
WINAPI
GlobalSize16(
    _In_ HGLOBAL hMem
    );


WINBASEAPI
DWORD
WINAPI
RegisterServiceProcess(
    _In_ DWORD dwProcessId,
    _In_ DWORD dwServiceType
    );

#define RSP_UNREGISTER_SERVICE  0x00000000
#define RSP_SIMPLE_SERVICE      0x00000001



WINBASEAPI
VOID
WINAPI
ReinitializeCriticalSection(
    _Inout_ LPCRITICAL_SECTION lpCriticalSection
    );


//
// New Multi-User specific routines to support per session
// network driver mappings. Related to Wksvc changes
//

WINBASEAPI
BOOL
WINAPI
DosPathToSessionPathA(
    _In_        DWORD SessionId,
    _In_        LPCSTR pInPath,
    _Outptr_ LPSTR *ppOutPath
    );

WINBASEAPI
BOOL
WINAPI
DosPathToSessionPathW(
    _In_        DWORD SessionId,
    _In_        LPCWSTR pInPath,
    _Outptr_ LPWSTR *ppOutPath
    );

//terminal server time zone support
WINBASEAPI
BOOL
WINAPI
SetClientTimeZoneInformation(
    _In_ CONST TIME_ZONE_INFORMATION *ptzi
    );

WINBASEAPI
BOOL
WINAPI
SetClientDynamicTimeZoneInformation(
    _In_ CONST DYNAMIC_TIME_ZONE_INFORMATION *pdtzi
    );

//
// LUA elevation support
//

#define ELEVATION_FLAG_TOKEN_CHECKS       0x00000001
#define ELEVATION_FLAG_VIRTUALIZATION     0x00000002
#define ELEVATION_FLAG_SHORTCUT_REDIR     0x00000004
#define ELEVATION_FLAG_NO_SIGNATURE_CHECK 0x00000008

WINBASEAPI
DWORD
WINAPI
CheckElevationEnabled(
    _Out_ PBOOL pfElevationEnabled
    );

WINBASEAPI
DWORD
WINAPI
CheckElevation(
    _In_     LPCWSTR lpApplicationName,
    _Inout_  PDWORD  pdwFlags,
    _In_opt_ HANDLE  hChildToken,
    _Out_    PDWORD  pdwRunLevel,
    _Out_    PDWORD  pdwReason
    );

#ifdef UNICODE
#define DosPathToSessionPath DosPathToSessionPathW
#else
#define DosPathToSessionPath DosPathToSessionPathA
#endif // !UNICODE

WINBASEAPI
ULONG
WINAPI
GetComPlusPackageInstallStatus(
    VOID
    );

WINBASEAPI
BOOL
WINAPI
SetComPlusPackageInstallStatus(
    _In_ ULONG ComPlusPackage
    );


#define CHECK_RESOURCE_FLAGS_DATA_MAP_ALLOWED   0x00000001UL

WINBASEAPI
LONG
WINAPI
CheckForReadOnlyResource(
    _In_ struct _EXCEPTION_POINTERS *ExceptionInfo,
    _In_ ULONG Flags
    );
#ifdef __cplusplus
}
#endif
#endif // _WINBASEP_
