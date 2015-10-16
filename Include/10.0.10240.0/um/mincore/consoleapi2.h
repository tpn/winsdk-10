 
/********************************************************************************
*                                                                               *
* consoleapi.h -- ApiSet Contract for api-ms-win-core-console-l2                *
*                                                                               *
* Copyright (c) Microsoft Corporation. All rights reserved.                     *
*                                                                               *
********************************************************************************/
#ifndef _APISETCONSOLEL2_
#define _APISETCONSOLEL2_

#ifdef _CONTRACT_GEN
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#endif
#include <windows.h>

/* APISET_NAME: api-ms-win-core-console-l2 */

#if !defined(RC_INVOKED)

#ifndef _APISET_CONSOLEL2_VER
#ifdef _APISET_TARGET_VERSION
#if _APISET_TARGET_VERSION >= _APISET_TARGET_VERSION_WIN8
#define _APISET_CONSOLEL2_VER 0x0100
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
FreeConsole(
    VOID
    );



#if (_WIN32_WINNT >= 0x0500)
WINBASEAPI
BOOL
WINAPI
AttachConsole(
    _In_ DWORD dwProcessId
    );


#define ATTACH_PARENT_PROCESS ((DWORD)-1)
#endif /* _WIN32_WINNT >= 0x0500 */

WINBASEAPI
BOOL
WINAPI
SetConsoleCP(
    _In_ UINT wCodePageID
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleOutputCP(
    _In_ UINT wCodePageID
    );


WINBASEAPI
BOOL
WINAPI
PeekConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_(nLength) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsRead
    );

#ifdef UNICODE
#define PeekConsoleInput PeekConsoleInputW
#endif

WINBASEAPI
BOOL
WINAPI
FlushConsoleInputBuffer(
    _In_ HANDLE hConsoleInput
    );



WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO * lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpWriteRegion
    );

WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO * lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpWriteRegion
    );

#ifdef UNICODE
#define WriteConsoleOutput  WriteConsoleOutputW
#else
#define WriteConsoleOutput  WriteConsoleOutputA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) LPCSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );

WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) LPCWSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );

#ifdef UNICODE
#define WriteConsoleOutputCharacter  WriteConsoleOutputCharacterW
#else
#define WriteConsoleOutputCharacter  WriteConsoleOutputCharacterA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) CONST WORD * lpAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );


WINBASEAPI
HANDLE
WINAPI
CreateConsoleScreenBuffer(
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ CONST SECURITY_ATTRIBUTES * lpSecurityAttributes,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpScreenBufferData
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleActiveScreenBuffer(
    _In_ HANDLE hConsoleOutput
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleScreenBufferSize(
    _In_ HANDLE hConsoleOutput,
    _In_ COORD dwSize
    );


WINBASEAPI
BOOL
WINAPI
GetConsoleScreenBufferInfo(
    _In_ HANDLE hConsoleOutput,
    _Out_ PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo
    );


WINBASEAPI
BOOL
WINAPI
GetConsoleScreenBufferInfoEx(
    _In_ HANDLE hConsoleOutput,
    _Inout_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleScreenBufferInfoEx(
    _In_ HANDLE hConsoleOutput,
    _In_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
    );


WINBASEAPI
BOOL
WINAPI
GetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _Out_ PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST CONSOLE_CURSOR_INFO * lpConsoleCursorInfo
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleCursorPosition(
    _In_ HANDLE hConsoleOutput,
    _In_ COORD dwCursorPosition
    );


WINBASEAPI
BOOL
WINAPI
SetConsoleTextAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_ WORD wAttributes
    );


WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _In_ CHAR cCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );

WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _In_ WCHAR cCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );

#ifdef UNICODE
#define FillConsoleOutputCharacter  FillConsoleOutputCharacterW
#else
#define FillConsoleOutputCharacter  FillConsoleOutputCharacterA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
FillConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_ WORD wAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );


WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferA(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT * lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT * lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO * lpFill
    );

WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferW(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT * lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT * lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO * lpFill
    );

#ifdef UNICODE
#define ScrollConsoleScreenBuffer  ScrollConsoleScreenBufferW
#else
#define ScrollConsoleScreenBuffer  ScrollConsoleScreenBufferA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
SetConsoleWindowInfo(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bAbsolute,
    _In_ CONST SMALL_RECT * lpConsoleWindow
    );


WINBASEAPI
COORD
WINAPI
GetLargestConsoleWindowSize(
    _In_ HANDLE hConsoleOutput
    );


WINBASEAPI
BOOL
WINAPI
WriteConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD * lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsWritten
    );

WINBASEAPI
BOOL
WINAPI
WriteConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD * lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsWritten
    );

#ifdef UNICODE
#define WriteConsoleInput  WriteConsoleInputW
#else
#define WriteConsoleInput  WriteConsoleInputA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputA(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(dwBufferSize.X * dwBufferSize.Y) PCHAR_INFO lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpReadRegion
    );

WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputW(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(dwBufferSize.X * dwBufferSize.Y) PCHAR_INFO lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpReadRegion
    );

#ifdef UNICODE
#define ReadConsoleOutput  ReadConsoleOutputW
#else
#define ReadConsoleOutput  ReadConsoleOutputA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfCharsRead
    );

WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPWSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfCharsRead
    );

#ifdef UNICODE
#define ReadConsoleOutputCharacter  ReadConsoleOutputCharacterW
#else
#define ReadConsoleOutputCharacter  ReadConsoleOutputCharacterA
#endif // !UNICODE

WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPWORD lpAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfAttrsRead
    );


WINBASEAPI
DWORD
WINAPI
GetConsoleTitleW(
    _Out_writes_(nSize) LPWSTR lpConsoleTitle,
    _In_ DWORD nSize
    );


#ifdef UNICODE
#define GetConsoleTitle  GetConsoleTitleW
#endif

WINBASEAPI
BOOL
WINAPI
SetConsoleTitleW(
    _In_ LPCWSTR lpConsoleTitle
    );


#ifdef UNICODE
#define SetConsoleTitle  SetConsoleTitleW
#endif

WINBASEAPI
BOOL
WINAPI
GenerateConsoleCtrlEvent(
    _In_ DWORD dwCtrlEvent,
    _In_ DWORD dwProcessGroupId
    );


#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#ifdef __cplusplus
}
#endif


#endif // _APISETCONSOLEL2_
