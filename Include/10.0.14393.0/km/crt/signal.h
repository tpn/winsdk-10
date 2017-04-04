/***
*signal.h - defines signal values and routines
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file defines the signal values and declares the signal functions.
*       [ANSI/System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_SIGNAL
#define _INC_SIGNAL

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef _SIG_ATOMIC_T_DEFINED
typedef int sig_atomic_t;
#define _SIG_ATOMIC_T_DEFINED
#endif

#define NSIG 23     /* maximum signal number + 1 */


/* Signal types */

#define SIGINT          2       /* interrupt */
#define SIGILL          4       /* illegal instruction - invalid function image */
#define SIGFPE          8       /* floating point exception */
#define SIGSEGV         11      /* segment violation */
#define SIGTERM         15      /* Software termination signal from kill */
#define SIGBREAK        21      /* Ctrl-Break sequence */
#define SIGABRT         22      /* abnormal termination triggered by abort call */

#define SIGABRT_COMPAT  6       /* SIGABRT compatible with other platforms, same as SIGABRT */

#if !defined(_M_CEE_PURE) || (_MSC_VER < 1400)
/* signal action codes */

#define SIG_DFL ((void (__cdecl *)(int))0)           /* default signal action */
#define SIG_IGN ((void (__cdecl *)(int))1)           /* ignore signal */
#define SIG_GET ((void (__cdecl *)(int))2)           /* return current value */
#define SIG_SGE ((void (__cdecl *)(int))3)           /* signal gets error */
#define SIG_ACK ((void (__cdecl *)(int))4)           /* acknowledge */


/* signal error value (returned by signal call on error) */

#define SIG_ERR ((void (__cdecl *)(int))-1)          /* signal error value */
#else
/* signal action codes */

#define SIG_DFL ((void (__clrcall *)(int))0)           /* default signal action */
#define SIG_IGN ((void (__clrcall *)(int))1)           /* ignore signal */
#define SIG_GET ((void (__clrcall *)(int))2)           /* return current value */
#define SIG_SGE ((void (__clrcall *)(int))3)           /* signal gets error */
#define SIG_ACK ((void (__clrcall *)(int))4)           /* acknowledge */


/* signal error value (returned by signal call on error) */

#define SIG_ERR ((void (__clrcall *)(int))-1)          /* signal error value */
#endif


/* pointer to exception information pointers structure */

#if     defined(_MT) || defined(_DLL)
extern void * * __cdecl __pxcptinfoptrs(void);
#define _pxcptinfoptrs  (*__pxcptinfoptrs())
#else   /* ndef _MT && ndef _DLL */
extern void * _pxcptinfoptrs;
#endif  /* _MT || _DLL */


/* Function prototypes */

#ifndef _M_CEE_PURE
_CRTIMP void (__cdecl * __cdecl signal(_In_ int _SigNum, _In_opt_ void (__cdecl * _Func)(int)))(int);
#endif

_CRTIMP int __cdecl raise(_In_ int _SigNum);

#if defined(__cplusplus) && defined(_M_CEE) && (_MSC_VER >= 1400)
extern "C++"
{
_MRTIMP void (__clrcall * __cdecl signal(_In_ int _SigNum, _In_opt_ void (__clrcall * _Func)(int)))(int);
#ifndef _M_CEE_PURE
_MRTIMP void (__clrcall * __cdecl signal(_In_ int _SigNum, _In_ int))(int);
#endif
}
#endif

#ifdef  __cplusplus
}
#endif

#endif  /* _INC_SIGNAL */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
