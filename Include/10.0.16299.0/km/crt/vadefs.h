/***
*vadefs.h - defines helper macros for stdarg.h
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This is a helper file for stdarg.h
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_VADEFS
#define _INC_VADEFS

#if     !defined(_WIN32)
#error ERROR: Only Win32 target supported!
#endif


#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#undef _CRT_PACKING
#define _CRT_PACKING 8
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

/*
 * Enable mismatch checks if not being included in MIDL/RC (and not explicitly disabled)
 */
#if !defined NO_MIXED_CRT_CHECKS && !defined(__midl) && !defined(RC_INVOKED)

#define _PRAGMA_DETECT_MISMATCH_STRING1(s) #s
#define _PRAGMA_DETECT_MISMATCH_STRING0(s) _PRAGMA_DETECT_MISMATCH_STRING1(s)

#define _PRAGMA_DETECT_MISMATCH(name, value)       \
    __pragma(comment(linker, "/FAILIFMISMATCH:\""  \
        _PRAGMA_DETECT_MISMATCH_STRING0(name)  "=" \
        _PRAGMA_DETECT_MISMATCH_STRING0(value) "\""))
#else

#define _PRAGMA_DETECT_MISMATCH(name, value)

#endif /* NO_MIXED_CRT_CHECKS ... */

#ifdef  __cplusplus
extern "C" {
#endif


#include <specstrings.h>

#if !defined(_W64)
#if !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300
#define _W64 __w64
#else  /* !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300 */
#define _W64
#endif  /* !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300 */
#endif  /* !defined (_W64) */

#ifndef _UINTPTR_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    uintptr_t;
#else
typedef _W64 unsigned int   uintptr_t;
#endif
#define _UINTPTR_T_DEFINED
#endif

#ifndef _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef _Writable_bytes_(_Inexpressible_("length varies")) char *  va_list;
#endif /* _M_CEE_PURE */
#define _VA_LIST_DEFINED
#endif

#ifdef  __cplusplus
#define _ADDRESSOF(v)   ( &reinterpret_cast<const char &>(v) )
#else
#define _ADDRESSOF(v)   ( &(v) )
#endif

#if     (defined(_M_ARM_NT) || defined(_M_HYBRID_X86_ARM64)) && !defined(_M_CEE_PURE)
#define _VA_ALIGN       4
#define _SLOTSIZEOF(t)   ( (sizeof(t) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1) )

#define _APALIGN(t,ap)  ( ((va_list)0 - (ap)) & (__alignof(t) - 1) )

#elif   defined(_M_ARM64) && !defined(_M_CEE_PURE)
#define _VA_ALIGN       8
#define _SLOTSIZEOF(t)  ( (sizeof(t) + _VA_ALIGN - 1) & ~(_VA_ALIGN - 1) )

#define _APALIGN(t,ap)  ( ((va_list)0 - (ap)) & (__alignof(t) - 1) )

#else
#define _SLOTSIZEOF(t)   (sizeof(t))
#define _APALIGN(t,ap)  (__alignof(t))
#endif

#if defined(_M_CEE_PURE) || (defined(_M_CEE) && !defined(_M_ARM_NT) && !defined(_M_ARM64))

extern void __cdecl __va_start(_Out_ va_list*, ...);
extern void * __cdecl __va_arg(va_list*, ...);
extern void __cdecl __va_end(va_list*);

#define _crt_va_start(ap,v)  ( __va_start(&ap, _ADDRESSOF(v), _SLOTSIZEOF(v), \
                                __alignof(v), _ADDRESSOF(v)) )
#define _crt_va_arg(ap,t)    ( *(t *)__va_arg(&ap, _SLOTSIZEOF(t), \
                                _APALIGN(t,ap), (t *)0) )
#define _crt_va_end(ap)      ( __va_end(&ap) )

#elif   defined(_M_IX86) && !defined(_M_HYBRID_X86_ARM64)

#define _INTSIZEOF(n)   ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#define _crt_va_start(ap,v)  ( ap = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )
#define _crt_va_arg(ap,t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#elif defined(_M_ARM_NT)

#ifdef  __cplusplus
extern void __cdecl __va_start(_Out_ va_list*, ...);
#define _crt_va_start(ap,v)  ( __va_start(&ap, _ADDRESSOF(v), _SLOTSIZEOF(v), \
                          _ADDRESSOF(v)) )
#else
#define _crt_va_start(ap,v)  ( ap = (va_list)_ADDRESSOF(v) + _SLOTSIZEOF(v) )
#endif

#define _crt_va_arg(ap,t)    (*(t *)((ap += _SLOTSIZEOF(t)+ _APALIGN(t,ap)) \
                                                     -_SLOTSIZEOF(t)))

#define _crt_va_end(ap)      ( ap = (va_list)0 )

#elif defined _M_HYBRID_X86_ARM64
    void __cdecl __va_start(va_list*, ...);
    #define _crt_va_start(ap,v) ((void)(__va_start(&ap, _ADDRESSOF(v), _SLOTSIZEOF(v), __alignof(v), _ADDRESSOF(v))))
    #define _crt_va_arg(ap, t)    (*(t*)((ap += _SLOTSIZEOF(t)) - _SLOTSIZEOF(t)))
    #define _crt_va_end(ap)       ((void)(ap = (va_list)0))

#elif defined(_M_ARM64)

extern void __cdecl __va_start(_Out_ va_list *, ...);

#define _crt_va_start(ap,v)  ( __va_start(&ap, _ADDRESSOF(v), _SLOTSIZEOF(v), \
                                __alignof(v), _ADDRESSOF(v)) )
#define _crt_va_arg(ap, t)   \
  ( ( sizeof(t) > ( 2*sizeof(__int64) ) ) \
  ? **(t **)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) \
  : *(t *)((ap += _SLOTSIZEOF(t) + _APALIGN(t,ap)) \
	   - _SLOTSIZEOF(t) ) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#elif defined(_M_AMD64)


extern void __cdecl __va_start(_Out_ va_list *, ...);

#define _crt_va_start(ap, x) ( __va_start(&ap, x) )
#define _crt_va_arg(ap, t)   \
    ( ( sizeof(t) > sizeof(__int64) || ( sizeof(t) & (sizeof(t) - 1) ) != 0 ) \
        ? **(t **)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) \
        :  *(t  *)( ( ap += sizeof(__int64) ) - sizeof(__int64) ) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#else

/* A guess at the proper definitions for other platforms */

#define _INTSIZEOF(n)   ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#define _crt_va_start(ap,v)  ( ap = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )
#define _crt_va_arg(ap,t)    ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _crt_va_end(ap)      ( ap = (va_list)0 )

#endif

#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_VADEFS */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
