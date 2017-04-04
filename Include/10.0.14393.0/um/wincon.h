#include <winapifamily.h>

/*++ BUILD Version: 0002    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    wincon.h

Abstract:

    This module contains the public data structures, data types,
    and procedures exported by the NT console subsystem.

Created:

    26-Oct-1990

Revision History:

--*/

#ifndef _WINCON_
#define _WINCON_

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4820) // padding added after data member
#endif

#ifndef NOGDI
#include <wingdi.h>
#endif

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct _COORD {
    SHORT X;
    SHORT Y;
} COORD, *PCOORD;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct _SMALL_RECT {
    SHORT Left;
    SHORT Top;
    SHORT Right;
    SHORT Bottom;
} SMALL_RECT, *PSMALL_RECT;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct _KEY_EVENT_RECORD {
    BOOL bKeyDown;
    WORD wRepeatCount;
    WORD wVirtualKeyCode;
    WORD wVirtualScanCode;
    union {
        WCHAR UnicodeChar;
        CHAR   AsciiChar;
    } uChar;
    DWORD dwControlKeyState;
} KEY_EVENT_RECORD, *PKEY_EVENT_RECORD;

//
// ControlKeyState flags
//

#define RIGHT_ALT_PRESSED     0x0001 // the right alt key is pressed.
#define LEFT_ALT_PRESSED      0x0002 // the left alt key is pressed.
#define RIGHT_CTRL_PRESSED    0x0004 // the right ctrl key is pressed.
#define LEFT_CTRL_PRESSED     0x0008 // the left ctrl key is pressed.
#define SHIFT_PRESSED         0x0010 // the shift key is pressed.
#define NUMLOCK_ON            0x0020 // the numlock light is on.
#define SCROLLLOCK_ON         0x0040 // the scrolllock light is on.
#define CAPSLOCK_ON           0x0080 // the capslock light is on.
#define ENHANCED_KEY          0x0100 // the key is enhanced.
#define NLS_DBCSCHAR          0x00010000 // DBCS for JPN: SBCS/DBCS mode.
#define NLS_ALPHANUMERIC      0x00000000 // DBCS for JPN: Alphanumeric mode.
#define NLS_KATAKANA          0x00020000 // DBCS for JPN: Katakana mode.
#define NLS_HIRAGANA          0x00040000 // DBCS for JPN: Hiragana mode.
#define NLS_ROMAN             0x00400000 // DBCS for JPN: Roman/Noroman mode.
#define NLS_IME_CONVERSION    0x00800000 // DBCS for JPN: IME conversion.
#define NLS_IME_DISABLE       0x20000000 // DBCS for JPN: IME enable/disable.

typedef struct _MOUSE_EVENT_RECORD {
    COORD dwMousePosition;
    DWORD dwButtonState;
    DWORD dwControlKeyState;
    DWORD dwEventFlags;
} MOUSE_EVENT_RECORD, *PMOUSE_EVENT_RECORD;

//
// ButtonState flags
//

#define FROM_LEFT_1ST_BUTTON_PRESSED    0x0001
#define RIGHTMOST_BUTTON_PRESSED        0x0002
#define FROM_LEFT_2ND_BUTTON_PRESSED    0x0004
#define FROM_LEFT_3RD_BUTTON_PRESSED    0x0008
#define FROM_LEFT_4TH_BUTTON_PRESSED    0x0010

//
// EventFlags
//

#define MOUSE_MOVED   0x0001
#define DOUBLE_CLICK  0x0002
#define MOUSE_WHEELED 0x0004
#if(_WIN32_WINNT >= 0x0600)
#define MOUSE_HWHEELED 0x0008
#endif /* _WIN32_WINNT >= 0x0600 */

typedef struct _WINDOW_BUFFER_SIZE_RECORD {
    COORD dwSize;
} WINDOW_BUFFER_SIZE_RECORD, *PWINDOW_BUFFER_SIZE_RECORD;

typedef struct _MENU_EVENT_RECORD {
    UINT dwCommandId;
} MENU_EVENT_RECORD, *PMENU_EVENT_RECORD;

typedef struct _FOCUS_EVENT_RECORD {
    BOOL bSetFocus;
} FOCUS_EVENT_RECORD, *PFOCUS_EVENT_RECORD;

typedef struct _INPUT_RECORD {
    WORD EventType;
    union {
        KEY_EVENT_RECORD KeyEvent;
        MOUSE_EVENT_RECORD MouseEvent;
        WINDOW_BUFFER_SIZE_RECORD WindowBufferSizeEvent;
        MENU_EVENT_RECORD MenuEvent;
        FOCUS_EVENT_RECORD FocusEvent;
    } Event;
} INPUT_RECORD, *PINPUT_RECORD;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

//
//  EventType flags:
//

#define KEY_EVENT         0x0001 // Event contains key event record
#define MOUSE_EVENT       0x0002 // Event contains mouse event record
#define WINDOW_BUFFER_SIZE_EVENT 0x0004 // Event contains window change event record
#define MENU_EVENT 0x0008 // Event contains menu event record
#define FOCUS_EVENT 0x0010 // event contains focus change

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct _CHAR_INFO {
    union {
        WCHAR UnicodeChar;
        CHAR   AsciiChar;
    } Char;
    WORD Attributes;
} CHAR_INFO, *PCHAR_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

//
// Attributes flags:
//

#define FOREGROUND_BLUE      0x0001 // text color contains blue.
#define FOREGROUND_GREEN     0x0002 // text color contains green.
#define FOREGROUND_RED       0x0004 // text color contains red.
#define FOREGROUND_INTENSITY 0x0008 // text color is intensified.
#define BACKGROUND_BLUE      0x0010 // background color contains blue.
#define BACKGROUND_GREEN     0x0020 // background color contains green.
#define BACKGROUND_RED       0x0040 // background color contains red.
#define BACKGROUND_INTENSITY 0x0080 // background color is intensified.
#define COMMON_LVB_LEADING_BYTE    0x0100 // Leading Byte of DBCS
#define COMMON_LVB_TRAILING_BYTE   0x0200 // Trailing Byte of DBCS
#define COMMON_LVB_GRID_HORIZONTAL 0x0400 // DBCS: Grid attribute: top horizontal.
#define COMMON_LVB_GRID_LVERTICAL  0x0800 // DBCS: Grid attribute: left vertical.
#define COMMON_LVB_GRID_RVERTICAL  0x1000 // DBCS: Grid attribute: right vertical.
#define COMMON_LVB_REVERSE_VIDEO   0x4000 // DBCS: Reverse fore/back ground attribute.
#define COMMON_LVB_UNDERSCORE      0x8000 // DBCS: Underscore.

#define COMMON_LVB_SBCSDBCS        0x0300 // SBCS or DBCS flag.

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
    COORD dwSize;
    COORD dwCursorPosition;
    WORD  wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO, *PCONSOLE_SCREEN_BUFFER_INFO;

typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
    ULONG cbSize;
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
    WORD wPopupAttributes;
    BOOL bFullscreenSupported;
    COLORREF ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;

typedef struct _CONSOLE_CURSOR_INFO {
    DWORD  dwSize;
    BOOL   bVisible;
} CONSOLE_CURSOR_INFO, *PCONSOLE_CURSOR_INFO;

typedef struct _CONSOLE_FONT_INFO {
    DWORD  nFont;
    COORD  dwFontSize;
} CONSOLE_FONT_INFO, *PCONSOLE_FONT_INFO;

#ifndef NOGDI
typedef struct _CONSOLE_FONT_INFOEX {
    ULONG cbSize;
    DWORD nFont;
    COORD dwFontSize;
    UINT FontFamily;
    UINT FontWeight;
    WCHAR FaceName[LF_FACESIZE];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;
#endif

#define HISTORY_NO_DUP_FLAG 0x1

typedef struct _CONSOLE_HISTORY_INFO {
    UINT cbSize;
    UINT HistoryBufferSize;
    UINT NumberOfHistoryBuffers;
    DWORD dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#if(_WIN32_WINNT >= 0x0500)

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

typedef struct _CONSOLE_SELECTION_INFO {
    DWORD dwFlags;
    COORD dwSelectionAnchor;
    SMALL_RECT srSelection;
} CONSOLE_SELECTION_INFO, *PCONSOLE_SELECTION_INFO;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

//
// Selection flags
//

#define CONSOLE_NO_SELECTION            0x0000
#define CONSOLE_SELECTION_IN_PROGRESS   0x0001   // selection has begun
#define CONSOLE_SELECTION_NOT_EMPTY     0x0002   // non-null select rectangle
#define CONSOLE_MOUSE_SELECTION         0x0004   // selecting with mouse
#define CONSOLE_MOUSE_DOWN              0x0008   // mouse is down
#endif /* _WIN32_WINNT >= 0x0500 */

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

//
// typedef for ctrl-c handler routines
//

typedef
BOOL
(WINAPI *PHANDLER_ROUTINE)(
    _In_ DWORD CtrlType
    );

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#define CTRL_C_EVENT        0
#define CTRL_BREAK_EVENT    1
#define CTRL_CLOSE_EVENT    2
// 3 is reserved!
// 4 is reserved!
#define CTRL_LOGOFF_EVENT   5
#define CTRL_SHUTDOWN_EVENT 6

//
//  Input Mode flags:
//

#define ENABLE_PROCESSED_INPUT              0x0001
#define ENABLE_LINE_INPUT                   0x0002
#define ENABLE_ECHO_INPUT                   0x0004
#define ENABLE_WINDOW_INPUT                 0x0008
#define ENABLE_MOUSE_INPUT                  0x0010
#define ENABLE_INSERT_MODE                  0x0020
#define ENABLE_QUICK_EDIT_MODE              0x0040
#define ENABLE_EXTENDED_FLAGS               0x0080
#define ENABLE_AUTO_POSITION                0x0100
#define ENABLE_VIRTUAL_TERMINAL_INPUT       0x0200

//
// Output Mode flags:
//

#define ENABLE_PROCESSED_OUTPUT             0x0001
#define ENABLE_WRAP_AT_EOL_OUTPUT           0x0002
#define ENABLE_VIRTUAL_TERMINAL_PROCESSING  0x0004
#define DISABLE_NEWLINE_AUTO_RETURN         0x0008
#define ENABLE_LVB_GRID_WORLDWIDE           0x0010

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

//
// direct API definitions.
//

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
#define PeekConsoleInput  PeekConsoleInputW
#endif

WINBASEAPI
BOOL
WINAPI
WriteConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD *lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsWritten
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD *lpBuffer,
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
WriteConsoleOutputA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO *lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpWriteRegion
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO *lpBuffer,
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
    _In_reads_(nLength) CONST WORD *lpAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );

WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _In_ CHAR  cCharacter,
    _In_ DWORD  nLength,
    _In_ COORD  dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );
WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _In_ WCHAR  cCharacter,
    _In_ DWORD  nLength,
    _In_ COORD  dwWriteCoord,
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
    _In_ WORD   wAttribute,
    _In_ DWORD  nLength,
    _In_ COORD  dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );

#define CONSOLE_REAL_OUTPUT_HANDLE (LongToHandle(-2))
#define CONSOLE_REAL_INPUT_HANDLE (LongToHandle(-3))

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
    _Inout_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx);

WINBASEAPI
BOOL
WINAPI
SetConsoleScreenBufferInfoEx(
    _In_ HANDLE hConsoleOutput,
    _In_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx);

WINBASEAPI
COORD
WINAPI
GetLargestConsoleWindowSize(
    _In_ HANDLE hConsoleOutput
    );

WINBASEAPI
BOOL
WINAPI
GetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _Out_ PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
    );

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if(_WIN32_WINNT >= 0x0500)

WINBASEAPI
BOOL
WINAPI
GetCurrentConsoleFont(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _Out_ PCONSOLE_FONT_INFO lpConsoleCurrentFont
    );

#ifndef NOGDI
WINBASEAPI
BOOL
WINAPI
GetCurrentConsoleFontEx(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _Out_ PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx);

WINBASEAPI
BOOL
WINAPI
SetCurrentConsoleFontEx(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _In_ PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx);
#endif

WINBASEAPI
BOOL
WINAPI
GetConsoleHistoryInfo(
    _Out_ PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo);

WINBASEAPI
BOOL
WINAPI
SetConsoleHistoryInfo(
    _In_ PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo);

WINBASEAPI
COORD
WINAPI
GetConsoleFontSize(
    _In_ HANDLE hConsoleOutput,
    _In_ DWORD nFont
    );

WINBASEAPI
BOOL
WINAPI
GetConsoleSelectionInfo(
    _Out_ PCONSOLE_SELECTION_INFO lpConsoleSelectionInfo
    );

#endif /* _WIN32_WINNT >= 0x0500 */

WINBASEAPI
BOOL
WINAPI
GetNumberOfConsoleMouseButtons(
    _Out_ LPDWORD lpNumberOfMouseButtons
    );

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetConsoleActiveScreenBuffer(
    _In_ HANDLE hConsoleOutput
    );

WINBASEAPI
BOOL
WINAPI
FlushConsoleInputBuffer(
    _In_ HANDLE hConsoleInput
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
SetConsoleCursorPosition(
    _In_ HANDLE hConsoleOutput,
    _In_ COORD dwCursorPosition
    );

WINBASEAPI
BOOL
WINAPI
SetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST CONSOLE_CURSOR_INFO *lpConsoleCursorInfo
    );

WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferA(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT *lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT *lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO *lpFill
    );
WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferW(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT *lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT *lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO *lpFill
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
    _In_ CONST SMALL_RECT *lpConsoleWindow
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
GenerateConsoleCtrlEvent(
    _In_ DWORD dwCtrlEvent,
    _In_ DWORD dwProcessGroupId);

WINBASEAPI
BOOL
WINAPI
FreeConsole(
    VOID);

#if(_WIN32_WINNT >= 0x0500)
WINBASEAPI
BOOL
WINAPI
AttachConsole(
    _In_ DWORD dwProcessId);

#define ATTACH_PARENT_PROCESS ((DWORD)-1)

#endif /* _WIN32_WINNT >= 0x0500 */

WINBASEAPI
DWORD
WINAPI
GetConsoleTitleA(
    _Out_writes_(nSize) LPSTR lpConsoleTitle,
    _In_ DWORD nSize
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
#else
#define GetConsoleTitle  GetConsoleTitleA
#endif // !UNICODE

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if(_WIN32_WINNT >= 0x0600)
WINBASEAPI
DWORD
WINAPI
GetConsoleOriginalTitleA(
    _Out_writes_(nSize) LPSTR lpConsoleTitle,
    _In_ DWORD nSize);
WINBASEAPI
DWORD
WINAPI
GetConsoleOriginalTitleW(
    _Out_writes_(nSize) LPWSTR lpConsoleTitle,
    _In_ DWORD nSize);
#ifdef UNICODE
#define GetConsoleOriginalTitle  GetConsoleOriginalTitleW
#else
#define GetConsoleOriginalTitle  GetConsoleOriginalTitleA
#endif // !UNICODE
#endif /* _WIN32_WINNT >= 0x0600 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
BOOL
WINAPI
SetConsoleTitleA(
    _In_ LPCSTR lpConsoleTitle
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleTitleW(
    _In_ LPCWSTR lpConsoleTitle
    );
#ifdef UNICODE
#define SetConsoleTitle  SetConsoleTitleW
#else
#define SetConsoleTitle  SetConsoleTitleA
#endif // !UNICODE

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

typedef struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL;

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#define CONSOLE_TEXTMODE_BUFFER  1

#ifndef NOAPISET
#include <consoleapi.h>
#endif

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

WINBASEAPI
HANDLE
WINAPI
CreateConsoleScreenBuffer(
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ CONST SECURITY_ATTRIBUTES *lpSecurityAttributes,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpScreenBufferData
    );

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

#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if(_WIN32_WINNT >= 0x0500)

#define CONSOLE_FULLSCREEN 1            // fullscreen console
#define CONSOLE_FULLSCREEN_HARDWARE 2   // console owns the hardware

WINBASEAPI
BOOL
APIENTRY
GetConsoleDisplayMode(
    _Out_ LPDWORD lpModeFlags);

#define CONSOLE_FULLSCREEN_MODE 1
#define CONSOLE_WINDOWED_MODE 2

BOOL
APIENTRY
SetConsoleDisplayMode(
    _In_ HANDLE hConsoleOutput,
    _In_ DWORD dwFlags,
    _Out_opt_ PCOORD lpNewScreenBufferDimensions);

WINBASEAPI
HWND
APIENTRY
GetConsoleWindow(
    VOID
    );

#endif /* _WIN32_WINNT >= 0x0500 */

#if(_WIN32_WINNT >= 0x0501)

WINBASEAPI
DWORD
APIENTRY
GetConsoleProcessList(
    _Out_writes_(dwProcessCount) LPDWORD lpdwProcessList,
    _In_ DWORD dwProcessCount);

//
// Aliasing apis.
//

WINBASEAPI
BOOL
APIENTRY
AddConsoleAliasA(
    _In_ LPSTR Source,
    _In_ LPSTR Target,
    _In_ LPSTR ExeName);
WINBASEAPI
BOOL
APIENTRY
AddConsoleAliasW(
    _In_ LPWSTR Source,
    _In_ LPWSTR Target,
    _In_ LPWSTR ExeName);
#ifdef UNICODE
#define AddConsoleAlias  AddConsoleAliasW
#else
#define AddConsoleAlias  AddConsoleAliasA
#endif // !UNICODE

WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasA(
    _In_ LPSTR Source,
    _Out_writes_(TargetBufferLength) LPSTR TargetBuffer,
    _In_ DWORD TargetBufferLength,
    _In_ LPSTR ExeName);
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasW(
    _In_ LPWSTR Source,
    _Out_writes_(TargetBufferLength) LPWSTR TargetBuffer,
    _In_ DWORD TargetBufferLength,
    _In_ LPWSTR ExeName);
#ifdef UNICODE
#define GetConsoleAlias  GetConsoleAliasW
#else
#define GetConsoleAlias  GetConsoleAliasA
#endif // !UNICODE

WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesLengthA(
    _In_ LPSTR ExeName);
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesLengthW(
    _In_ LPWSTR ExeName);
#ifdef UNICODE
#define GetConsoleAliasesLength  GetConsoleAliasesLengthW
#else
#define GetConsoleAliasesLength  GetConsoleAliasesLengthA
#endif // !UNICODE

WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesLengthA(
    VOID);
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesLengthW(
    VOID);
#ifdef UNICODE
#define GetConsoleAliasExesLength  GetConsoleAliasExesLengthW
#else
#define GetConsoleAliasExesLength  GetConsoleAliasExesLengthA
#endif // !UNICODE

WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesA(
    _Out_writes_(AliasBufferLength) LPSTR AliasBuffer,
    _In_ DWORD AliasBufferLength,
    _In_ LPSTR ExeName);
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesW(
    _Out_writes_(AliasBufferLength) LPWSTR AliasBuffer,
    _In_ DWORD AliasBufferLength,
    _In_ LPWSTR ExeName);
#ifdef UNICODE
#define GetConsoleAliases  GetConsoleAliasesW
#else
#define GetConsoleAliases  GetConsoleAliasesA
#endif // !UNICODE

WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesA(
    _Out_writes_(ExeNameBufferLength) LPSTR ExeNameBuffer,
    _In_ DWORD ExeNameBufferLength);
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesW(
    _Out_writes_(ExeNameBufferLength) LPWSTR ExeNameBuffer,
    _In_ DWORD ExeNameBufferLength);
#ifdef UNICODE
#define GetConsoleAliasExes  GetConsoleAliasExesW
#else
#define GetConsoleAliasExes  GetConsoleAliasExesA
#endif // !UNICODE

#endif /* _WIN32_WINNT >= 0x0501 */

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#ifdef __cplusplus
}
#endif

#endif // _WINCON_

