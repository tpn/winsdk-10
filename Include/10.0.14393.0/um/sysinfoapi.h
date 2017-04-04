 
 
// begin_1_0
// begin_2_0
// begin_2_1
// begin_2_2
// begin_2_3
/********************************************************************************
*                                                                               *
* sysinfoapi.h -- ApiSet Contract for api-ms-win-core-sysinfo-l1                *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _SYSINFOAPI_H_
#define _SYSINFOAPI_H_

#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>


#if (_MSC_VER >= 800)
#pragma warning(disable:4514)
#ifndef __WINDOWS_DONT_DISABLE_PRAGMA_PACK_WARNING__
#pragma warning(disable:4103)
#endif

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4001)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#endif

/* APISET_NAME: api-ms-win-core-sysinfo-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_SYSINFO_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WINTHRESHOLD
#define _APISET_SYSINFO_VER 0x0203
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WINPHONEBLUE
#define _APISET_SYSINFO_VER 0x0202
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WINBLUE
#define _APISET_SYSINFO_VER 0x0201
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN8
#define _APISET_SYSINFO_VER 0x0200
#elif _APISET_TARGET_VERSION == _APISET_TARGET_VERSION_WIN7
#define _APISET_SYSINFO_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)



#if defined(FKG_FORCED_USAGE) || defined(WINPHONE) || defined(BUILD_WINDOWS)
# define NOT_BUILD_WINDOWS_DEPRECATE
#else
# define NOT_BUILD_WINDOWS_DEPRECATE __declspec(deprecated)
#endif

#ifdef __cplusplus
extern "C" {
#endif

// end_1_0
// end_2_0
// end_2_1
// end_2_2
// end_2_3
// begin_1_0
// begin_2_0

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct _SYSTEM_INFO {
    union {
        DWORD dwOemId;          // Obsolete field...do not use
        struct {
            WORD wProcessorArchitecture;
            WORD wReserved;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

// end_1_0
// end_2_0
// begin_1_0

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;

WINBASEAPI
BOOL
WINAPI
GlobalMemoryStatusEx(
    _Out_ LPMEMORYSTATUSEX lpBuffer
    );


WINBASEAPI
VOID
WINAPI
GetSystemInfo(
    _Out_ LPSYSTEM_INFO lpSystemInfo
    );


WINBASEAPI
VOID
WINAPI
GetSystemTime(
    _Out_ LPSYSTEMTIME lpSystemTime
    );


WINBASEAPI
VOID
WINAPI
GetSystemTimeAsFileTime(
    _Out_ LPFILETIME lpSystemTimeAsFileTime
    );


WINBASEAPI
VOID
WINAPI
GetLocalTime(
    _Out_ LPSYSTEMTIME lpSystemTime
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
DWORD
WINAPI
GetVersion(
    VOID
    );


WINBASEAPI
BOOL
WINAPI
SetLocalTime(
    _In_ CONST SYSTEMTIME * lpSystemTime
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// begin_1_0

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

__drv_preferredFunction("GetTickCount64", "GetTickCount overflows roughly every 49 days.  Code that does not take that into account can loop indefinitely.  GetTickCount64 operates on 64 bit values and does not have that problem")
WINBASEAPI
DWORD
WINAPI
GetTickCount(
    VOID
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= 0x0600)

WINBASEAPI
ULONGLONG
WINAPI
GetTickCount64(
    VOID
    );


#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetSystemTimeAdjustment(
    _Out_ PDWORD lpTimeAdjustment,
    _Out_ PDWORD lpTimeIncrement,
    _Out_ PBOOL lpTimeAdjustmentDisabled
    );


WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemDirectoryA(
    _Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );

WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemDirectoryW(
    _Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );

#ifdef UNICODE
#define GetSystemDirectory  GetSystemDirectoryW
#else
#define GetSystemDirectory  GetSystemDirectoryA
#endif // !UNICODE

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetWindowsDirectoryA(
    _Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );

WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetWindowsDirectoryW(
    _Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );

#ifdef UNICODE
#define GetWindowsDirectory  GetWindowsDirectoryW
#else
#define GetWindowsDirectory  GetWindowsDirectoryA
#endif // !UNICODE

WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWindowsDirectoryA(
    _Out_writes_to_opt_(uSize, return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );

WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWindowsDirectoryW(
    _Out_writes_to_opt_(uSize, return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );

#ifdef UNICODE
#define GetSystemWindowsDirectory  GetSystemWindowsDirectoryW
#else
#define GetSystemWindowsDirectory  GetSystemWindowsDirectoryA
#endif // !UNICODE

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// begin_1_0
// begin_2_0
// begin_2_1
// begin_2_3

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef enum _COMPUTER_NAME_FORMAT {
    ComputerNameNetBIOS,
    ComputerNameDnsHostname,
    ComputerNameDnsDomain,
    ComputerNameDnsFullyQualified,
    ComputerNamePhysicalNetBIOS,
    ComputerNamePhysicalDnsHostname,
    ComputerNamePhysicalDnsDomain,
    ComputerNamePhysicalDnsFullyQualified,
    ComputerNameMax
} COMPUTER_NAME_FORMAT ;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// end_2_0
// end_2_1
// end_2_3
// begin_1_0

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetComputerNameExA(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetComputerNameExW(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPWSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );

#ifdef UNICODE
#define GetComputerNameEx  GetComputerNameExW
#else
#define GetComputerNameEx  GetComputerNameExA
#endif // !UNICODE

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

// end_1_0
// begin_2_0


#if !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0101)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetComputerNameExW(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ LPCWSTR lpBuffer
    );


#ifdef UNICODE
#define SetComputerNameEx SetComputerNameExW
#endif

WINBASEAPI
BOOL
WINAPI
SetSystemTime(
    _In_ CONST SYSTEMTIME * lpSystemTime
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER > 0x0100)

// end_2_0
// begin_1_0

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
BOOL
WINAPI
GetVersionExA(
    _Inout_ LPOSVERSIONINFOA lpVersionInformation
    );

NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
BOOL
WINAPI
GetVersionExW(
    _Inout_ LPOSVERSIONINFOW lpVersionInformation
    );

#ifdef UNICODE
#define GetVersionEx  GetVersionExW
#else
#define GetVersionEx  GetVersionExA
#endif // !UNICODE

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
GetLogicalProcessorInformation(
    _Out_writes_bytes_to_opt_(*ReturnedLength, *ReturnedLength) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,
    _Inout_ PDWORD ReturnedLength
    );



#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

WINBASEAPI
BOOL
WINAPI
GetLogicalProcessorInformationEx(
    _In_ LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
    _Out_writes_bytes_to_opt_(*ReturnedLength, *ReturnedLength) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer,
    _Inout_ PDWORD ReturnedLength
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

// end_1_0
// begin_2_0


#if !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0101)

#pragma region Application Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINXP)

WINBASEAPI
VOID
WINAPI
GetNativeSystemInfo(
    _Out_ LPSYSTEM_INFO lpSystemInfo
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINXP)


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINBASEAPI
VOID
WINAPI
GetSystemTimePreciseAsFileTime(
    _Out_ LPFILETIME lpSystemTimeAsFileTime
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= _WIN32_WINNT_VISTA)

WINBASEAPI
BOOL
WINAPI
GetProductInfo(
    _In_ DWORD dwOSMajorVersion,
    _In_ DWORD dwOSMinorVersion,
    _In_ DWORD dwSpMajorVersion,
    _In_ DWORD dwSpMinorVersion,
    _Out_ PDWORD pdwReturnedProductType
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_VISTA)


#if (NTDDI_VERSION >= NTDDI_WIN2K)

NTSYSAPI
ULONGLONG
NTAPI
VerSetConditionMask(
    _In_ ULONGLONG ConditionMask,
    _In_ ULONG TypeMask,
    _In_ UCHAR Condition
    );


#endif // (NTDDI_VERSION >= NTDDI_WIN2K)


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINBASEAPI
BOOL
WINAPI
GetOsSafeBootMode(
    _Out_ PDWORD Flags
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

WINBASEAPI
UINT
WINAPI
EnumSystemFirmwareTables(
    _In_ DWORD FirmwareTableProviderSignature,
    _Out_writes_bytes_to_opt_(BufferSize, return) PVOID pFirmwareTableEnumBuffer,
    _In_ DWORD BufferSize
    );


WINBASEAPI
UINT
WINAPI
GetSystemFirmwareTable(
    _In_ DWORD FirmwareTableProviderSignature,
    _In_ DWORD FirmwareTableID,
    _Out_writes_bytes_to_opt_(BufferSize, return) PVOID pFirmwareTableBuffer,
    _In_ DWORD BufferSize
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER > 0x0100)

// end_2_0
// begin_2_1


#if !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0201)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DnsHostnameToComputerNameExW(
    _In_ LPCWSTR Hostname,
    _Out_writes_to_opt_(*nSize, *nSize + 1) LPWSTR ComputerName,
    _Inout_ LPDWORD nSize
    );


WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetPhysicallyInstalledSystemMemory(
    _Out_ PULONGLONG TotalMemoryInKilobytes
    );


#define SCEX2_ALT_NETBIOS_NAME 0x00000001

WINBASEAPI
BOOL
WINAPI
SetComputerNameEx2W(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ DWORD Flags,
    _In_ LPCWSTR lpBuffer
    );


#ifdef UNICODE
#define SetComputerNameEx2 SetComputerNameEx2W
#endif

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SetSystemTimeAdjustment(
    _In_ DWORD dwTimeAdjustment,
    _In_ BOOL bTimeAdjustmentDisabled
    );


WINBASEAPI
BOOL
WINAPI
InstallELAMCertificateInfo(
    _In_ HANDLE ELAMFile
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0201)

// end_2_1
// begin_2_2


#if !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0202)


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

WINBASEAPI
BOOL
WINAPI
GetProcessorSystemCycleTime(
    _In_ USHORT Group,
    _Out_writes_bytes_to_opt_(*ReturnedLength, *ReturnedLength) PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION Buffer,
    _Inout_ PDWORD ReturnedLength
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#endif // !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0202)

// end_2_2
// begin_2_3


#if !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0203)

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

WINBASEAPI
BOOL
WINAPI
GetOsManufacturingMode(
    _Out_ PBOOL pbEnabled
    );

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion


#pragma region App Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)


#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

WINBASEAPI
HRESULT
WINAPI
GetIntegratedDisplaySize(
    _Out_ double * sizeInInches
    );


#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetComputerNameA(
    _In_ LPCSTR lpComputerName
    );

WINBASEAPI
BOOL
WINAPI
SetComputerNameW(
    _In_ LPCWSTR lpComputerName
    );

#ifdef UNICODE
#define SetComputerName  SetComputerNameW
#else
#define SetComputerName  SetComputerNameA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetComputerNameExA(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ LPCSTR lpBuffer
    );


#ifndef UNICODE
#define SetComputerNameEx SetComputerNameExA
#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif // !defined(_CONTRACT_GEN) || (_APISET_SYSINFO_VER >= 0x0203)

// end_2_3
// begin_1_0
// begin_2_0
// begin_2_1
// begin_2_2
// begin_2_3

#ifdef __cplusplus
}
#endif


#if (_MSC_VER >= 800)

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4001)
#pragma warning(default:4201)
#pragma warning(default:4214)
/* Leave 4514 disabled.  It's an unneeded warning anyway. */
#endif
#endif

#endif // _SYSINFOAPI_H_

// end_1_0
// end_2_0
// end_2_1
// end_2_2
// end_2_3
