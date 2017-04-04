 
/********************************************************************************
*                                                                               *
* consoleapi.h -- ApiSet Contract for api-ms-win-core-console-l1                *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifndef _APISETCONSOLE_
#define _APISETCONSOLE_

#include <apiset.h>
#include <apisetcconv.h>


#include <windows.h>

/* APISET_NAME: api-ms-win-core-console-l1 */

#if !defined(RC_INVOKED)

#ifndef _APISET_CONSOLE_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN7
#define _APISET_CONSOLE_VER 0x0100
#endif
#endif
#endif

#endif // !defined(RC_INVOKED)


#ifdef __cplusplus
extern "C" {
#endif

#pragma region Desktop Family or OneCore Family

#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
AllocConsole(
    VOID
    );


WINBASEAPI
UINT
WINAPI
GetConsoleCP(
    VOID
    );


WINBASEAPI
BOOL
WINAPI
GetConsoleMode(
    _In_ HANDLE hConsoleHandle,
    _Out_ LPDWORD lpMode
    );


WINBASEAPI
UINT
WINAPI
GetConsoleOutputCP(
    VOID
    );


WINBASEAPI
BOOL
WINAPI
GetNumberOfConsoleInputEvents(
    _In_ HANDLE hConsoleInput,
    _Out_ LPDWORD lpNumberOfEvents
    );


WINBASEAPI
BOOL
WINAPI
PeekConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_(nLength) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsRead
    );


#ifndef UNICODE
#define PeekConsoleInput  PeekConsoleInputA
#endif

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_bytes_to_(nNumberOfCharsToRead * sizeof(CHAR), *lpNumberOfCharsRead * sizeof(CHAR)) LPVOID lpBuffer,
    _In_ DWORD nNumberOfCharsToRead,
    _Out_ _Deref_out_range_(<=, nNumberOfCharsToRead) LPDWORD lpNumberOfCharsRead,
    _In_opt_ PCONSOLE_READCONSOLE_CONTROL pInputControl
    );

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_bytes_to_(nNumberOfCharsToRead * sizeof(WCHAR), *lpNumberOfCharsRead * sizeof(WCHAR)) LPVOID lpBuffer,
    _In_ DWORD nNumberOfCharsToRead,
    _Out_ _Deref_out_range_(<=, nNumberOfCharsToRead) LPDWORD lpNumberOfCharsRead,
    _In_opt_ PCONSOLE_READCONSOLE_CONTROL pInputControl
    );

#ifdef UNICODE
#define ReadConsole  ReadConsoleW
#else
#define ReadConsole  ReadConsoleA
#endif // !UNICODE

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_to_(nLength, *lpNumberOfEventsRead) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ _Deref_out_range_(<=, nLength) LPDWORD lpNumberOfEventsRead
    );

WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_to_(nLength, *lpNumberOfEventsRead) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ _Deref_out_range_(<=, nLength) LPDWORD lpNumberOfEventsRead
    );

#ifdef UNICODE
#define ReadConsoleInput  ReadConsoleInputW
#else
#define ReadConsoleInput  ReadConsoleInputA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetConsoleCtrlHandler(
    _In_opt_ PHANDLER_ROUTINE HandlerRoutine,
    _In_ BOOL Add
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleMode(
    _In_ HANDLE hConsoleHandle,
    _In_ DWORD dwMode
    );


WINBASEAPI
BOOL
WINAPI
WriteConsoleA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nNumberOfCharsToWrite) CONST VOID * lpBuffer,
    _In_ DWORD nNumberOfCharsToWrite,
    _Out_opt_ LPDWORD lpNumberOfCharsWritten,
    _Reserved_ LPVOID lpReserved
    );

WINBASEAPI
BOOL
WINAPI
WriteConsoleW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nNumberOfCharsToWrite) CONST VOID * lpBuffer,
    _In_ DWORD nNumberOfCharsToWrite,
    _Out_opt_ LPDWORD lpNumberOfCharsWritten,
    _Reserved_ LPVOID lpReserved
    );

#ifdef UNICODE
#define WriteConsole  WriteConsoleW
#else
#define WriteConsole  WriteConsoleA
#endif // !UNICODE

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif

#endif // _APISETCONSOLE_
