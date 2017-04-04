/***
*sys/timeb.h - definition/declarations for _ftime()
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file define the _ftime() function and the types it uses.
*       [System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_TIMEB
#define _INC_TIMEB

#include <crtdefs.h>

#if     !defined(_WIN32)
#error ERROR: Only Win32 target supported!
#endif


#ifdef  _MSC_VER
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif



#include <crtdefs.h>

/* Structure returned by _ftime system call */

#ifndef _TIMEB_DEFINED

struct _timeb {
        time_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };

struct __timeb32 {
        __time32_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };

#if     !__STDC__

/* Non-ANSI name for compatibility */
struct timeb {
        time_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };


#endif

struct __timeb64 {
        __time64_t time;
        unsigned short millitm;
        short timezone;
        short dstflag;
        };

#define _TIMEB_DEFINED
#endif

#include <crtdefs.h>

/* Function prototypes */

_CRTIMP void __cdecl _ftime(_Out_ struct _timeb *_Time);

_CRT_INSECURE_DEPRECATE(_ftime32_s) _CRTIMP void __cdecl _ftime32(_Out_ struct __timeb32 * _Time);
_CRTIMP errno_t __cdecl _ftime32_s(_Out_ struct __timeb32 * _Time);
_CRT_INSECURE_DEPRECATE(_ftime64_s) _CRTIMP void __cdecl _ftime64(_Out_ struct __timeb64 * _Time);
_CRTIMP errno_t __cdecl _ftime64_s(_Out_ struct __timeb64 * _Time);

#if !defined(RC_INVOKED) && !defined(__midl)
#include <sys/timeb.inl>
#endif

#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_TIMEB */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
