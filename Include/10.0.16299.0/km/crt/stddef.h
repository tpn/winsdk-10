/***
*stddef.h - definitions/declarations for common constants, types, variables
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file contains definitions and declarations for some commonly
*       used constants, types, and variables.
*       [ANSI]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_STDDEF
#define _INC_STDDEF

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif

#ifndef SORTPP_PASS
#ifdef __cplusplus
namespace std { typedef decltype(__nullptr) nullptr_t; }
using ::std::nullptr_t;
#endif
#endif

/* Declare reference to errno */
#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED

#ifdef _NTSUBSET_
extern int gbl_errno;
#define errno   (gbl_errno)
#else /* _NTSUBSET_ */
_CRTIMP extern int * __cdecl _errno(void);
#define errno   (*_errno())
#endif /* _NTSUBSET_ */


_CRTIMP_ALT
errno_t
__ALTDECL
_set_errno(
    _In_ int _Value
    );

_CRTIMP_ALT
errno_t
__ALTDECL
_get_errno(
    _Out_ int * _Value
    );
#endif

/* Define offsetof macro */

#ifdef  _WIN64
#define offsetof(s,m)   (size_t)( (ptrdiff_t)&(((s *)0)->m) )
#else
#define offsetof(s,m)   (size_t)&(((s *)0)->m)
#endif


#if (!defined (_STATIC_MGDLIB) && !defined (_BUILDING_STATIC_MGDLIB_11))

#ifdef  _MT
_CRTIMP_ALT unsigned long  __cdecl __threadid(void); /* use GetCurrentThreadId instead */
#define _threadid       (__threadid())
_CRTIMP_ALT uintptr_t __cdecl __threadhandle(void); /* use GetCurrentThreadHandle instead */
#endif

#endif /* !_SYSCRT || _CRTBLD && !_STATIC_MGDLIB */

#ifdef  __cplusplus
}
#endif

#endif  /* _INC_STDDEF */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
