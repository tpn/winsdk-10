
/************************************************************************
*                                                                       *
*   minwbasek.h -- This header is included by minwin/sdk/inc/wbasek.h   *
*                                                                       *
*   Copyright (c) Microsoft Corp.  All rights reserved.                 *
*                                                                       *
************************************************************************/
#ifndef _MINWBASEK_
#define _MINWBASEK_
typedef struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
} SECURITY_ATTRIBUTES, *PSECURITY_ATTRIBUTES, *LPSECURITY_ATTRIBUTES;

#ifndef _FILETIME_
#define _FILETIME_
typedef struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
} FILETIME, *PFILETIME, *LPFILETIME;
#endif

//
// System time is represented with the following structure:
//

typedef struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
} SYSTEMTIME, *PSYSTEMTIME, *LPSYSTEMTIME;

#endif _MINWBASEK_