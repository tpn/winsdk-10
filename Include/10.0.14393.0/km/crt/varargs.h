/***
*varargs.h - XENIX style macros for variable argument functions
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file defines XENIX style macros for accessing arguments of a
*       function which takes a variable number of arguments.
*       [System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_VARARGS
#define _INC_VARARGS

#if     !defined(_WIN32)
#error ERROR: Only Win32 target supported!
#endif


#include <crtdefs.h>

#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#ifdef  __cplusplus
extern "C" {
#endif

#if     __STDC__
#error varargs.h incompatible with ANSI (use stdarg.h)
#endif

#if !defined(_W64)
#if !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300
#define _W64 __w64
#else
#define _W64
#endif
#endif

#ifdef  _WIN64
typedef unsigned __int64    uintptr_t;
#else
typedef _W64 unsigned int   uintptr_t;
#endif
#define _UINTPTR_T_DEFINED

#ifndef _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef _Writable_bytes_(_Inexpressible_("length varies")) char *  va_list;
#endif
#define _VA_LIST_DEFINED
#endif

#ifndef va_arg

#if     defined(_M_CEE)

#error varargs.h not supported when targetting _M_CEE (use stdarg.h)

#elif   defined(_M_IX86)

/*
 * define a macro to compute the size of a type, variable or expression,
 * rounded up to the nearest multiple of sizeof(int). This number is its
 * size as function argument (Intel architecture). Note that the macro
 * depends on sizeof(int) being a power of 2!
 */
#define _INTSIZEOF(n)    ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#define va_dcl va_list va_alist;
#define va_start(ap) ap = (va_list)&va_alist
#define va_arg(ap,t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define va_end(ap) ap = (va_list)0

#elif defined(_M_IA64) || defined(_M_ARM)

#if defined(_M_IA64)

#ifndef _VA_LIST
#define _VA_LIST char*
#endif
typedef _VA_LIST va_list;

#define _VA_STRUCT_ALIGN  16 

#define _VA_ALIGN       8

#define _ALIGNOF(ap) ((((ap)+_VA_STRUCT_ALIGN - 1) & ~(_VA_STRUCT_ALIGN -1)) \
                            - (ap))
#define _APALIGN(t,ap)  (__alignof(t) > 8 ? _ALIGNOF((uintptr_t) ap) : 0)

#define va_dcl          __int64  va_alist;

#else

#define _VA_ALIGN       4
#define _APALIGN(t,ap)  ( ((va_list)0 - (ap)) & (__alignof(t) - 1) )
#define va_dcl          va_list va_alist;

#endif

#define _SLOTSIZEOF(t)  ( (sizeof(t) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1) )
#define va_start(ap)    ( ap = (va_list)&va_alist )

#define va_arg(ap,t)    (*(t *)((ap += _SLOTSIZEOF(t)+ _APALIGN(t,ap)) \
                                                     -_SLOTSIZEOF(t)))

#define va_end(ap)      ( ap = (va_list)0 )

#elif defined(_M_AMD64)

extern void __cdecl __va_start(_Out_ va_list *, ...);

#define va_dcl          va_list va_alist;

#define va_start(ap)   ( __va_start(&ap, 0) )

#define va_arg(ap, t)   \
    ( ( sizeof(t) > sizeof(__int64) || ( sizeof(t) & (sizeof(t) - 1) ) != 0 ) \
        ? **(t **)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) \
        :  *(t  *)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) )
#define va_end(ap)      ( ap = (va_list)0 )

#elif defined(_M_ARM64)

extern void __cdecl __va_start(_Out_ va_list *, ...);
#define _VA_ALIGN       8
#define _SLOTSIZEOF(t)  ( (sizeof(t) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1) )

#define _APALIGN(t,ap)  ( ((va_list)0 - (ap)) & (__alignof(t) - 1) )
#define va_dcl          va_list va_alist;

#define va_start(ap)  ( __va_start(&ap, 0, 0, 0, 0) )
#define va_arg(ap, t)   \
  ( ( sizeof(t) > ( 2*sizeof(__int64) ) ) \
  ? **(t **)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) \
  : *(t *)((ap += _SLOTSIZEOF(t) + _APALIGN(t,ap)) \
	   - _SLOTSIZEOF(t) ) )
#define va_end(ap)      ( ap = (va_list)0 )


#else

/* A guess at the proper definitions for other platforms */

#define _INTSIZEOF(n)    ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#define va_dcl va_list va_alist;
#define va_start(ap) ap = (va_list)&va_alist
#define va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define va_end(ap) ap = (va_list)0


#endif

#endif


#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_VARARGS */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
