/***
*crtdefs.h - definitions/declarations common to all CRT
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file has mostly defines used by the entire CRT.
*
*       [Public]
*
****/

/* Lack of pragma once is deliberate */

/* Define _CRTIMP */
#ifndef _CRTIMP
#ifdef _DLL
#define _CRTIMP __declspec(dllimport)
#else  /* _DLL */
#define _CRTIMP
#endif  /* _DLL */
#endif  /* _CRTIMP */

#ifndef _INC_CRTDEFS
#define _INC_CRTDEFS

// Define __FUNCTIONW__ and __FILEW__ if not already defined
#if !defined(_STR2WSTR)
#define __STR2WSTR(str)    L##str
#define _STR2WSTR(str)     __STR2WSTR(str)
#endif

#if !defined(__FILEW__)
#define __FILEW__          _STR2WSTR(__FILE__)
#endif

#if !defined(__FUNCTIONW__)
#define __FUNCTIONW__      _STR2WSTR(__FUNCTION__)
#endif



#if defined (__midl)
/* MIDL does not want to see this stuff */
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
#undef _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
#undef _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
#endif  /* defined (__midl) */

#if !defined (_WIN32)
#error ERROR: Only Win32 target supported!
#endif  /* !defined (_WIN32) */

#if !defined(_CRT_NOFORCE_MANIFEST)
#define _CRT_NOFORCE_MANIFEST
#endif
/* Remove this once stdhpp\yvals.h integrates from VS */
#if defined(_M_CEE) && !defined(_STATIC_CPPLIB)
#define _STATIC_CPPLIB
#endif
#define _CRTEXP


#include <specstrings.h>


#ifdef  _MSC_VER
#undef _CRT_PACKING
#define _CRT_PACKING 8

#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#include <vadefs.h>

#ifdef  __cplusplus
extern "C" {
#endif  /* __cplusplus */

/* preprocessor string helpers */
#define __CRT_STRINGIZE(_Value) #_Value
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)

#define __CRT_WIDE(_String) L ## _String
#define _CRT_WIDE(_String) __CRT_WIDE(_String)

#ifndef _CRT_APPEND
#define __CRT_APPEND(_Value1, _Value2) _Value1 ## _Value2
#define _CRT_APPEND(_Value1, _Value2) __CRT_APPEND(_Value1, _Value2)
#endif

#if !defined(_W64)
#if !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300
#define _W64 __w64
#else  /* !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300 */
#define _W64
#endif  /* !defined(__midl) && (defined(_X86_) || defined(_M_IX86) || defined(_ARM_) || defined(_M_ARM)) && _MSC_VER >= 1300 */
#endif  /* !defined (_W64) */


/* Define _CRTIMP_NOIA64 */
#ifndef _CRTIMP_NOIA64
#if defined (_M_IA64)
#define _CRTIMP_NOIA64
#else  /* defined (_M_IA64) */
#define _CRTIMP_NOIA64 _CRTIMP
#endif  /* defined (_M_IA64) */
#endif  /* _CRTIMP_NOIA64 */

/* Define _CRTIMP2 */

#ifndef _CRTIMP2
#if defined(_DLL) && !defined(_STATIC_CPPLIB)
#define _CRTIMP2 __declspec(dllimport)
#else  /* defined (_DLL) && !defined (_STATIC_CPPLIB) */
#define _CRTIMP2
#endif  /* defined (_DLL) && !defined (_STATIC_CPPLIB) */
#endif  /* _CRTIMP2 */

/* Define _CRTIMP_ALT */


#define _CRT_ALTERNATIVE_INLINES

#ifndef _CRTIMP_ALT
#ifdef  _DLL
#ifdef _CRT_ALTERNATIVE_INLINES
#define _CRTIMP_ALT
#else  /* _CRT_ALTERNATIVE_INLINES */
#define _CRTIMP_ALT _CRTIMP
#define _CRT_ALTERNATIVE_IMPORTED
#endif  /* _CRT_ALTERNATIVE_INLINES */
#else  /* _DLL */
#define _CRTIMP_ALT
#endif  /* _DLL */
#endif  /* _CRTIMP_ALT */

/*
defined(__cplusplus) is due to some code that sets MANAGED_CXX but builds .c files.
  For example: testsrc\basetest\kernel\ps\modm\*\_build_clr
*/
#if defined(_STATIC_MGDLIB) && !defined(_MANAGED) && defined(__cplusplus)
    #error _STATIC_MGDLIB is only valid for managed code.
#endif

#if defined(_M_CEE_PURE) && defined(_STATIC_MGDLIB)
#define _STATIC_MGDLIB_PURE
#endif

/* Define _MRTIMP */

#ifndef _MRTIMP
        #if !defined(_STATIC_MGDLIB)
            #define _MRTIMP __declspec(dllimport)
        #else
            #define _MRTIMP
        #endif
#endif

/* Define _MRTIMP2 */
#ifndef _MRTIMP2

#if defined(_DLL) && !defined(_STATIC_CPPLIB)
#define _MRTIMP2	__declspec(dllimport)

#else   /* ndef _DLL && !STATIC_CPPLIB */
#define _MRTIMP2
#endif  /* _DLL && !STATIC_CPPLIB */

#endif  /* _MRTIMP2 */


#ifndef _MCRTIMP
#if defined(_DLL) && (!defined(_MANAGED) || !defined(_STATIC_MGDLIB))
#define _MCRTIMP __declspec(dllimport)
#else   /* ndef _DLL */
#define _MCRTIMP
#endif  /* _DLL */
#endif  /* _CRTIMP */

#if (_MSC_VER < 1400) && (!defined(__clrcall))
#define __clrcall __cdecl
#endif

#if defined (_M_CEE_PURE)
#define __CLR_OR_THIS_CALL  __clrcall
#else
#define __CLR_OR_THIS_CALL
#endif


#if defined (_M_CEE_PURE)
#define __CLRCALL_OR_CDECL __clrcall
#else
#define __CLRCALL_OR_CDECL __cdecl
#endif

#if defined(_M_CEE_PURE) || (defined(_STATIC_CPPLIB) && !defined(_DLL))
 #define _CRTIMP_PURE
 #define _CRTEXP_PURE
#else
 #define _CRTIMP_PURE _CRTIMP
 #define _CRTEXP_PURE _CRTEXP
#endif


/* Define _MRTIMP2_NPURE */

 #if (defined(_DLL) && defined(_M_CEE_PURE)) && !defined(_STATIC_MGDLIB)
  #define _MRTIMP2_NPURE	__declspec(dllimport)

 #else   /* ndef _DLL && !STATIC_CPPLIB */
  #define _MRTIMP2_NPURE
 #endif  /* _DLL && !STATIC_CPPLIB */


#if defined(_STATIC_MGDLIB) && defined(_M_CEE_PURE)
#define _CRTIMP2_CALLING_CONVENTION __clrcall
#define _CRTIMP2_PURE_CALLING_CONVENTION __clrcall
#define _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION
#define _MRTIMP_CALLING_CONVENTION __clrcall
#define _MRTIMP2_CALLING_CONVENTION __clrcall
#define _MRTIMP2_NPURE_CALLING_CONVENTION __clrcall
#else
#define _CRTIMP2_CALLING_CONVENTION __cdecl
#define _CRTIMP2_PURE_CALLING_CONVENTION __cdecl
#define _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION __thiscall
#define _MRTIMP_CALLING_CONVENTION __cdecl
#define _MRTIMP2_CALLING_CONVENTION __cdecl
#define _MRTIMP2_NPURE_CALLING_CONVENTION __cdecl
#endif

#ifndef _CRTDATA
#if defined(_M_CEE_PURE)
/*
    Always declare the data in a legal way.
    Sometimes it will be accessed via imported functions, sometimes directly as declared here.
*/
    #define _CRTDATA(x) x
#else /* _M_CEE_PURE */
    #define _CRTDATA(x) _CRTIMP x
#endif /* _M_CEE_PURE */
#endif /* _CRTDATA */

#ifndef _CRTIMP2_PURE
  #ifdef  _M_CEE_PURE
    #define _CRTIMP2_PURE
  #else
    #define _CRTIMP2_PURE _CRTIMP2
  #endif
#endif

#define _CRTIMP2_FUNCTION(type)             _CRTIMP2        type _CRTIMP2_CALLING_CONVENTION
#define _CRTIMP2_PURE_FUNCTION(type)        _CRTIMP2_PURE   type _CRTIMP2_PURE_CALLING_CONVENTION
#define _CRTIMP2_PURE_CONSTRUCTOR           _CRTIMP2_PURE        _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define _CRTIMP2_PURE_DESTRUCTOR            _CRTIMP2_PURE        _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define _CRTIMP2_MEMBER_FUNCTION(type)      _CRTIMP2        type _CRTIMP2_MEMBER_FUNCTION_CALLING_CONVENTION
#define _CRTIMP2_PURE_MEMBER_FUNCTION(type) _CRTIMP2_PURE   type _CRTIMP2_PURE_MEMBER_FUNCTION_CALLING_CONVENTION
#define _MRTIMP_FUNCTION(type)              _MRTIMP         type _MRTIMP_CALLING_CONVENTION
#define _MRTIMP2_FUNCTION(type)             _MRTIMP2        type _MRTIMP2_CALLING_CONVENTION
#define _MRTIMP2_NPURE_FUNCTION(type)       _MRTIMP2_NPURE  type _MRTIMP2_NPURE_CALLING_CONVENTION

    #if !defined(_MANAGED)
        #define _MSVCR80_FUNCTION(type) type __cdecl
        #define _MSVCR80_FUNCTION_2(sal, type) sal type __cdecl
    #elif !defined(_STATIC_MGDLIB)
        #define _MSVCR80_FUNCTION(type) _CRTIMP type __cdecl
        #define _MSVCR80_FUNCTION_2(sal, type) _CRTIMP sal type __cdecl
    #else
        #define _MSVCR80_FUNCTION(type) type __ALTDECL
        #define _MSVCR80_FUNCTION_2(sal, type) sal type __ALTDECL
    #endif

#if defined(_STATIC_MGDLIB) && defined(_M_CEE_PURE)
#define _CRTIMP_TYPEINFO
#else
#define _CRTIMP_TYPEINFO _CRTIMP
#endif

#if defined(_STATIC_MGDLIB) && defined(_M_CEE_PURE)
#define _CRTIMP_PURE_TYPEINFO
#else
#define _CRTIMP_PURE_TYPEINFO _CRTIMP_PURE
#endif

#ifdef _M_CEE
  #if defined(__cplusplus_cli)
    #define _PGLOBAL __declspec(process)
#else  /* defined (__cplusplus_cli) */
    #define _PGLOBAL
#endif  /* defined (__cplusplus_cli) */
#else  /* _M_CEE */
#define _PGLOBAL
#endif  /* _M_CEE */

#if defined(_M_CEE) && (_MSC_VER >= 1400)
#define _AGLOBAL __declspec(appdomain)
#else  /* _M_CEE */
#define _AGLOBAL
#endif  /* _M_CEE */

/* define a specific constant for mixed mode */
#ifdef _M_CEE
#ifndef _M_CEE_PURE
#define _M_CEE_MIXED
#endif  /* _M_CEE_PURE */
#endif  /* _M_CEE */

/* Define __STDC_SECURE_LIB__ */
#define __STDC_SECURE_LIB__ 200411L

/* Retain__GOT_SECURE_LIB__ for back-compat */
#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__

/* Default value for __STDC_WANT_SECURE_LIB__ is 1 */
#ifndef __STDC_WANT_SECURE_LIB__
#define __STDC_WANT_SECURE_LIB__ 1
#endif  /* __STDC_WANT_SECURE_LIB__ */

/* Turn off warnings if __STDC_WANT_SECURE_LIB__ is 0 */
#if !__STDC_WANT_SECURE_LIB__ && !defined(_CRT_SECURE_NO_WARNINGS)
#define _CRT_SECURE_NO_WARNINGS
#endif  /* !__STDC_WANT_SECURE_LIB__ && !defined (_CRT_SECURE_NO_WARNINGS) */

/* See note on use of deprecate at the top of this file */
#if _MSC_FULL_VER >= 140050320
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
#else  /* _MSC_FULL_VER >= 140050320 */
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated)
#endif  /* _MSC_FULL_VER >= 140050320 */

#ifndef _CRT_SECURE_FORCE_DEPRECATE_CORE
#define _CRT_SECURE_NO_DEPRECATE_CORE
#endif

/* Define _CRT_INSECURE_DEPRECATE */
#ifndef _CRT_INSECURE_DEPRECATE_CORE
#ifdef _CRT_SECURE_NO_DEPRECATE_CORE
#define _CRT_INSECURE_DEPRECATE_CORE(_Replacement)
#else
#define _CRT_INSECURE_DEPRECATE_CORE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable may be unsafe. Consider using " #_Replacement " instead. To disable deprecation, use _CRT_SECURE_NO_DEPRECATE. See online help for details.")
#endif
#endif

#ifndef _CRT_SECURE_FORCE_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE
#endif

/* Define _CRT_INSECURE_DEPRECATE */
/* See note on use of deprecate at the top of this file */
#if defined(_CRT_SECURE_NO_DEPRECATE) && !defined(_CRT_SECURE_NO_WARNINGS)
#define _CRT_SECURE_NO_WARNINGS
#endif

#ifndef _CRT_INSECURE_DEPRECATE
#ifdef _CRT_SECURE_NO_WARNINGS
#define _CRT_INSECURE_DEPRECATE(_Replacement)
#else  /* _CRT_SECURE_NO_DEPRECATE */
#define _CRT_INSECURE_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable may be unsafe. Consider using " #_Replacement " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")
#endif  /* _CRT_SECURE_NO_DEPRECATE */
#endif  /* _CRT_INSECURE_DEPRECATE */

/* Define _CRT_INSECURE_DEPRECATE_MEMORY */
/* See note on use of deprecate at the top of this file */
#if defined(_CRT_SECURE_DEPRECATE_MEMORY) && !defined(_CRT_SECURE_WARNINGS_MEMORY)
#define _CRT_SECURE_WARNINGS_MEMORY
#endif

#ifndef _CRT_INSECURE_DEPRECATE_MEMORY
#if !defined (_CRT_SECURE_WARNINGS_MEMORY)
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement)
#else  /* !defined (_CRT_SECURE_DEPRECATE_MEMORY) */
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#endif  /* !defined (_CRT_SECURE_DEPRECATE_MEMORY) */
#endif  /* _CRT_INSECURE_DEPRECATE_MEMORY */

/* Define _CRT_INSECURE_DEPRECATE_GLOBALS */
/* See note on use of deprecate at the top of this file */
#if !defined (RC_INVOKED)
#if defined(_CRT_SECURE_NO_DEPRECATE_GLOBALS) && !defined(_CRT_SECURE_NO_WARNINGS_GLOBALS)
#define _CRT_SECURE_NO_WARNINGS_GLOBALS
#endif
#endif

#ifndef _CRT_INSECURE_DEPRECATE_GLOBALS
#if defined (RC_INVOKED)
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#else  /* defined (RC_INVOKED) */
#if defined(_CRT_SECURE_NO_WARNINGS_GLOBALS)
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement)
#else  /* defined (_CRT_SECURE_NO_DEPRECATE_GLOBALS) */
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#endif  /* defined (_CRT_SECURE_NO_DEPRECATE_GLOBALS) */
#endif  /* defined (RC_INVOKED) */
#endif  /* _CRT_INSECURE_DEPRECATE_GLOBALS */

/* Define _CRT_MANAGED_HEAP_DEPRECATE */
/* See note on use of deprecate at the top of this file */
#if defined(_CRT_MANAGED_HEAP_NO_DEPRECATE) && !defined(_CRT_MANAGED_HEAP_NO_WARNINGS)
#define _CRT_MANAGED_HEAP_NO_WARNINGS
#endif

#ifndef _CRT_MANAGED_HEAP_DEPRECATE
#ifdef _CRT_MANAGED_HEAP_NO_WARNINGS
#define _CRT_MANAGED_HEAP_DEPRECATE
#else  /* _CRT_MANAGED_HEAP_NO_DEPRECATE */
#if defined(_M_CEE)
#define _CRT_MANAGED_HEAP_DEPRECATE 
/* Disabled to allow QA tests to get fixed 
_CRT_DEPRECATE_TEXT("Direct heap access is not safely possible from managed code.") 
*/
#else  /* defined (_M_CEE) */
#define _CRT_MANAGED_HEAP_DEPRECATE
#endif  /* defined (_M_CEE) */
#endif  /* _CRT_MANAGED_HEAP_NO_DEPRECATE */
#endif  /* _CRT_MANAGED_HEAP_DEPRECATE */

/* Change the __FILL_BUFFER_PATTERN to 0xFE to fix security function buffer overrun detection bug */
#define _SECURECRT_FILL_BUFFER_PATTERN 0xFE

/* obsolete stuff */

/* Define _CRT_OBSOLETE */
/* See note on use of deprecate at the top of this file */
#if defined(_CRT_OBSOLETE_NO_DEPRECATE) && !defined(_CRT_OBSOLETE_NO_WARNINGS)
#define _CRT_OBSOLETE_NO_WARNINGS
#endif

#ifndef _CRT_OBSOLETE
#ifdef _CRT_OBSOLETE_NO_WARNINGS
#define _CRT_OBSOLETE(_NewItem) 
#else  /* _CRT_OBSOLETE_NO_WARNINGS */
#define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT("This function or variable has been superceded by newer library or operating system functionality. Consider using " #_NewItem " instead. See online help for details.")
#endif  /* _CRT_OBSOLETE_NO_WARNINGS */
#endif  /* _CRT_OBSOLETE */


/* jit64 instrinsic stuff */
#ifndef _CRT_JIT_INTRINSIC
#if defined(_M_CEE) && (defined(_M_AMD64) || defined(_M_IA64))
/* This is only needed when managed code is calling the native APIs, targeting the 64-bit runtime */
#define _CRT_JIT_INTRINSIC __declspec(jitintrinsic)
#else  /* defined (_M_CEE) && (defined (_M_AMD64) || defined (_M_IA64)) */
#define _CRT_JIT_INTRINSIC 
#endif  /* defined (_M_CEE) && (defined (_M_AMD64) || defined (_M_IA64)) */
#endif  /* _CRT_JIT_INTRINSIC */

/* Define overload switches */
#if !defined (RC_INVOKED) 
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES)
  #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
 #else  /* !defined (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES) */
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif  /* !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES */
 #endif  /* !defined (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES) */
#endif  /* !defined (RC_INVOKED) */

#if !defined (RC_INVOKED) 
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT)
  /* _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT is ignored if _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES is set to 0 */
  #define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
 #else  /* !defined (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT) */
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif  /* !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT */
 #endif  /* !defined (_CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT) */
#endif  /* !defined (RC_INVOKED) */

#if !defined (RC_INVOKED) 
 #if !defined(_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES)
  #if __STDC_WANT_SECURE_LIB__
   #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
  #else  /* __STDC_WANT_SECURE_LIB__ */
   #define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 0
  #endif  /* __STDC_WANT_SECURE_LIB__ */
 #else  /* !defined (_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES) */
  #if !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES
   #error Cannot use Secure CRT C++ overloads when __STDC_WANT_SECURE_LIB__ is 0
  #endif  /* !__STDC_WANT_SECURE_LIB__ && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES */
 #endif  /* !defined (_CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES) */
#endif  /* !defined (RC_INVOKED) */

#ifndef _CRT_NONSTDC_FORCE_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE
#endif

/* Define _CRT_NONSTDC_DEPRECATE */
/* See note on use of deprecate at the top of this file */
#if defined(_CRT_NONSTDC_NO_DEPRECATE) && !defined(_CRT_NONSTDC_NO_WARNINGS)
#define _CRT_NONSTDC_NO_WARNINGS
#endif

#if !defined(_CRT_NONSTDC_DEPRECATE)
#if defined(_CRT_NONSTDC_NO_WARNINGS) || defined(_POSIX_)
#define _CRT_NONSTDC_DEPRECATE(_NewName)
#else  /* defined (_CRT_NONSTDC_NO_DEPRECATE) */
#define _CRT_NONSTDC_DEPRECATE(_NewName) _CRT_DEPRECATE_TEXT("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " #_NewName ". See online help for details.")
#endif  /* defined (_CRT_NONSTDC_NO_DEPRECATE) */
#endif  /* !defined (_CRT_NONSTDC_DEPRECATE) */

#ifndef _SIZE_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    size_t;
#else
typedef _W64 unsigned int   size_t;
#endif
#define _SIZE_T_DEFINED
#endif

#if __STDC_WANT_SECURE_LIB__
#ifndef _RSIZE_T_DEFINED
typedef size_t rsize_t;
#define _RSIZE_T_DEFINED
#endif
#endif

#ifndef _INTPTR_T_DEFINED
#ifdef  _WIN64
typedef __int64             intptr_t;
#else
typedef _W64 int            intptr_t;
#endif
#define _INTPTR_T_DEFINED
#endif

#ifndef _UINTPTR_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    uintptr_t;
#else
typedef _W64 unsigned int   uintptr_t;
#endif
#define _UINTPTR_T_DEFINED
#endif

#ifndef _PTRDIFF_T_DEFINED
#ifdef  _WIN64
typedef __int64             ptrdiff_t;
#else
typedef _W64 int            ptrdiff_t;
#endif
#define _PTRDIFF_T_DEFINED
#endif

#ifndef _WCHAR_T_DEFINED
typedef unsigned short wchar_t;
#define _WCHAR_T_DEFINED
#endif  /* _WCHAR_T_DEFINED */

typedef unsigned short wint_t;
typedef unsigned short wctype_t;
#define _WCTYPE_T_DEFINED

#ifndef _VA_LIST_DEFINED
#ifdef _M_CEE_PURE
typedef System::ArgIterator va_list;
#else
typedef _Writable_bytes_(_Inexpressible_("length varies")) char *  va_list;
#endif  /* _M_CEE_PURE */
#define _VA_LIST_DEFINED
#endif


#ifndef _ERRCODE_DEFINED
#define _ERRCODE_DEFINED
typedef int errcode;
typedef int errno_t;
#endif

typedef _W64 long __time32_t;   /* 32-bit time value */
#define _TIME32_T_DEFINED

typedef __int64 __time64_t;     /* 64-bit time value */
#define _TIME64_T_DEFINED

#ifndef _WIN64
#define _USE_32BIT_TIME_T
#endif 

#ifdef _USE_32BIT_TIME_T
typedef __time32_t time_t;      /* time value */
#else
typedef __time64_t time_t;      /* time value */
#endif
#define _TIME_T_DEFINED         /* avoid multiple def's of time_t */

#define _NO_CPP_INLINES

#define _CONST_RETURN

/* For backwards compatibility */
#define _WConst_return _CONST_RETURN

#if !defined(UNALIGNED)
#if defined(_M_IA64) || defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)
#define UNALIGNED __unaligned
#else  /* defined (_M_IA64) || defined (_M_AMD64) || defined (_M_ARM) || defined (_M_ARM64) */
#define UNALIGNED
#endif  /* defined (_M_IA64) || defined (_M_AMD64) || defined (_M_ARM) || defined (_M_ARM64) */
#endif  /* !defined (UNALIGNED) */

#if !defined (_CRT_ALIGN)
#if defined (__midl)
#define _CRT_ALIGN(x)
#else  /* defined (__midl) */
#define _CRT_ALIGN(x) __declspec(align(x))
#endif  /* defined (__midl) */
#endif  /* !defined (_CRT_ALIGN) */

/* Define _CRTNOALIAS, _CRTRESTRICT */

#if     _MSC_FULL_VER >= 13102050
#if !defined(_MSC_VER_GREATER_THEN_13102050)
#define _MSC_VER_GREATER_THEN_13102050 
#endif  /* !defined (_MSC_VER_GREATER_THEN_13102050) */
#endif  /* _MSC_FULL_VER >= 13102050 */

#if     ( defined(_M_IA64) && defined(_MSC_VER_GREATER_THEN_13102050) ) || _MSC_VER >= 1400
#define _CRTNOALIAS __declspec(noalias)

#define _CRTRESTRICT __declspec(restrict)

#else  /* ( defined(_M_IA64) && defined(_MSC_VER_GREATER_THEN_13102050) ) || _MSC_VER >= 1400 */

#define _CRTNOALIAS

#define _CRTRESTRICT

#endif  /* ( defined(_M_IA64) && defined(_MSC_VER_GREATER_THEN_13102050) ) || _MSC_VER >= 1400 */

/* Define __cdecl for non-Microsoft compilers */
#if     ( !defined(_MSC_VER) && !defined(__cdecl) )
#define __cdecl
#endif  /* (!defined (_MSC_VER) && !defined (__cdecl)) */

#if defined(_M_CEE_PURE)
#define __CRTDECL   __clrcall
#define __CRTDECL_STDCALL __clrcall
#else
#define __CRTDECL   __cdecl
#define __CRTDECL_STDCALL __stdcall
#endif

#if defined(_M_CEE_PURE)
#define __ALTDECL __clrcall
#else
#define __ALTDECL __cdecl
#endif


#define _ARGMAX 100

/* _TRUNCATE */
#define _TRUNCATE ((size_t)-1)

/* helper macros for cpp overloads */
#if !defined (RC_INVOKED)
#if defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES && !defined(__midl)

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType, _FuncName, _DstType, _Dst) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        return _FuncName(_Dst, _Size); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        return _FuncName(_Dst, _Size, _TArg1); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2, _TArg3); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst) \
    extern "C++" \
    { \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[_Size]) \
    { \
        return _FuncName(_HArg1, _HArg2, _Dst, _Size); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return _VFuncName(_Dst, _Size, _TArg1, _ArgList); \
    } \
        __pragma(warning(pop)); \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return _VFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList); \
    } \
        __pragma(warning(pop)); \
    }

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType, _FuncName, _DstType, _Src) \
    extern "C++" \
    { \
    template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> \
    inline \
    _ReturnType __CRTDECL _FuncName(_In_z_ const _DstType *_Src, _Post_z_ _DstType (&_Drive)[_DriveSize], _Post_z_ _DstType (&_Dir)[_DirSize], _Post_z_ _DstType (&_Name)[_NameSize], _Post_z_ _DstType (&_Ext)[_ExtSize]) \
    { \
        return _FuncName(_Src, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); \
    } \
    }

#else  /* defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES */

#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType, _FuncName, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType, _FuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType, _FuncName, _HType1, _HArg1, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _DstType, _Dst)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType, _FuncName, _VFuncName, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType, _FuncName, _DstType, _Src)

#endif  /* defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES */
#endif  /* !defined (RC_INVOKED) */

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst) \

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#if !defined (RC_INVOKED)
#if defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES && !defined(__midl)

#define __RETURN_POLICY_SAME(_FunctionCall, _Dst) return (_FunctionCall)
#define __RETURN_POLICY_DST(_FunctionCall, _Dst) return ((_FunctionCall) == 0 ? _Dst : 0)
#define __RETURN_POLICY_VOID(_FunctionCall, _Dst) (_FunctionCall); return
#define __EMPTY_DECLSPEC

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst); \
        return _FuncName(_Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst); \
        return _FuncName(_Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) \
    { \
        size_t _SizeRead = 0; \
        errno_t _Err = _FuncName##_s(_Dst + 2, (_Size - 2) < ((size_t)_Dst[0]) ? (_Size - 2) : ((size_t)_Dst[0]), &_SizeRead); \
        _Dst[1] = (_DstType)(_SizeRead); \
        return (_Err == 0 ? _Dst + 2 : 0); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1]) \
    { \
        return __insecure_##_FuncName((_DstType *)_Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<2>(_DstType (&_Dst)[2]) \
    { \
        return __insecure_##_FuncName((_DstType *)_Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1); \
        return _FuncName(_Dst, _TArg1); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2); \
        return _FuncName(_Dst, _TArg1, _TArg2); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3, _TArg4); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3, _TArg4), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2, _TArg3, _TArg4), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _DstType *_Dst, _TType1 _TArg1); \
        return _FuncName(_HArg1, _Dst, _TArg1); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, const _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType * &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_HArg1, _Dst, _TArg1); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _Dst, _Size, _TArg1), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_HType1 _HArg1, _DstType (&_Dst)[1], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _Dst, 1, _TArg1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst) \
    { \
        _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType *_Dst); \
        return _FuncName(_HArg1, _HArg2, _Dst); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _T &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, const _T &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_HArg1, _HArg2, _Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[_Size]) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _HArg2, _Dst, _Size), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[1]) \
    { \
        _ReturnPolicy(_SecureFuncName(_HArg1, _HArg2, _Dst, 1), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, va_list _ArgList); \
        return _VFuncName(_Dst, _TArg1, _ArgList); \
    } \
    extern "C++" \
    { \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
        template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        return __insecure_##_VFuncName(_Dst, _TArg1, _ArgList); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
        template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _ArgList), _Dst); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg1); \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _ArgList), _Dst); \
    } \
        __pragma(warning(pop)); \
        \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_T &_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(const _T &_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _ArgList); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_DstType *&_Dst, _TType1 _TArg1, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(_Dst, _TArg1, _ArgList); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _VFuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _ArgList), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _ArgList), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureVFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _DeclSpec _ReturnType __cdecl _VFuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList); \
        return _VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
    extern "C++" \
    { \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <typename _T> \
    inline \
        _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <typename _T> \
    inline \
        _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <> \
    inline \
        _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        return __insecure_##_VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
        __pragma(warning(pop)); \
        \
        __pragma(warning(push)); \
        __pragma(warning(disable: 4793)); \
    template <> \
    inline \
        _CRT_INSECURE_DEPRECATE(_FuncName##_s) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, ...) \
    { \
        va_list _ArgList; \
        _crt_va_start(_ArgList, _TArg2); \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
        __pragma(warning(pop)); \
        \
    template <typename _T> \
    inline \
        _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <typename _T> \
    inline \
        _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _ArgList); \
    } \
    template <> \
    inline \
        _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName(_DstType *&_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        return __insecure_##_VFuncName(_Dst, _TArg1, _TArg2, _ArgList); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _VFuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    template <> \
    inline \
        _CRT_INSECURE_DEPRECATE(_SecureVFuncName) \
    _ReturnType __CRTDECL _VFuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, va_list _ArgList) \
    { \
        _ReturnPolicy(_SecureVFuncName(_Dst, 1, _TArg1, _TArg2, _ArgList), _Dst); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    size_t __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2); \
        return _FuncName(_Dst, _TArg1, _TArg2); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2); \
    } \
    template <size_t _Size> \
    inline \
    size_t __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, _Size, _TArg1, _TArg2); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, 1, _TArg1, _TArg2); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    }

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __inline \
    size_t __CRTDECL __insecure_##_FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _DeclSpec size_t __cdecl _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3); \
        return _FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    template <size_t _Size> \
    inline \
    size_t __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, _Size, _TArg1, _TArg2, _TArg3); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    size_t __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        size_t _Ret = 0; \
        _SecureFuncName(&_Ret, _Dst, 1, _TArg1, _TArg2, _TArg3); \
        return (_Ret > 0 ? (_Ret - 1) : _Ret); \
    } \
    }

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst)); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst) \
    { \
        return __insecure_##_FuncName(_Dst); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1]) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1), _Dst); \
    } \
    }

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1), _Dst); \
    } \
    }

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2), _Dst); \
    } \
    }

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __inline \
    _ReturnType __CRTDECL __insecure_##_FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    extern "C++" \
    { \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <typename _T> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(const _T &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(static_cast<_DstType *>(_Dst), _TArg1, _TArg2, _TArg3); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName(_DstType * &_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        return __insecure_##_FuncName(_Dst, _TArg1, _TArg2, _TArg3); \
    } \
    template <size_t _Size> \
    inline \
    _ReturnType __CRTDECL _FuncName(_SecureDstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    template <> \
    inline \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    _ReturnType __CRTDECL _FuncName<1>(_DstType (&_Dst)[1], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) \
    { \
        _ReturnPolicy(_SecureFuncName(_Dst, 1, _TArg1, _TArg2, _TArg3), _Dst); \
    } \
    }

#if !defined (RC_INVOKED) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName##_s, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType _DstType, _Dst)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType _DstType, _Dst, _TType1, _TArg1)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#else  /* !defined (RC_INVOKED) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT */

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
        _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
        _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName,_VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#endif  /* !defined (RC_INVOKED) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT */

#else  /* defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES */

#define __RETURN_POLICY_SAME(_FunctionCall)
#define __RETURN_POLICY_DST(_FunctionCall)
#define __RETURN_POLICY_VOID(_FunctionCall)
#define __EMPTY_DECLSPEC

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType, _DeclSpec, _FuncName, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureVFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _SecureFuncName, _VFuncName, _SecureVFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); \
    _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); \
    _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);

#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3) \
    _CRT_INSECURE_DEPRECATE(_SecureFuncName) \
    __inline \
    _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)

#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _FuncName, _SecureFuncName, _SecureDstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)

#endif  /* defined (__cplusplus) && _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES */
#endif  /* !defined (RC_INVOKED) */

struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct * pthreadlocinfo;
typedef struct threadmbcinfostruct * pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct
{
    pthreadlocinfo locinfo;
    pthreadmbcinfo mbcinfo;
} _locale_tstruct, *_locale_t;

#ifndef _TAGLC_ID_DEFINED
typedef struct tagLC_ID {
        unsigned short wLanguage;
        unsigned short wCountry;
        unsigned short wCodePage;
} LC_ID, *LPLC_ID;
#define _TAGLC_ID_DEFINED
#endif  /* _TAGLC_ID_DEFINED */

#ifndef _THREADLOCALEINFO
typedef struct threadlocaleinfostruct {
        int refcount;
        unsigned int lc_codepage;
        unsigned int lc_collate_cp;
        unsigned long lc_handle[6]; /* LCID */
        LC_ID lc_id[6];
        struct {
            char *locale;
            wchar_t *wlocale;
            int *refcount;
            int *wrefcount;
        } lc_category[6];
        int lc_clike;
        int mb_cur_max;
        int * lconv_intl_refcount;
        int * lconv_num_refcount;
        int * lconv_mon_refcount;
        struct lconv * lconv;
        int * ctype1_refcount;
        unsigned short * ctype1;
        const unsigned short * pctype;
        const unsigned char * pclmap;
        const unsigned char * pcumap;
        struct __lc_time_data * lc_time_curr;
} threadlocinfo;
#define _THREADLOCALEINFO
#endif  /* _THREADLOCALEINFO */

#if !defined(__midl) && !defined(MIDL_PASS) 

//
// Define Control Flow Guard instrumentation and support functions.
//

#if defined(_ARM64_)
#define _guard_check_icall __guard_check_icall_thunk
#endif

void
#if !defined(_M_CEE)
__fastcall
#endif
_guard_check_icall (
    _In_ uintptr_t Target
    );

int
__cdecl
_guard_icall_checks_enforced (
    void
    );

#endif

#ifdef  __cplusplus
}
#endif  /* __cplusplus */

#if defined(_PREFAST_) && defined(_PFT_SHOULD_CHECK_RETURN)
#define _Check_return_opt_ _Check_return_
#else
#define _Check_return_opt_
#endif

#if defined(_PREFAST_) && defined(_PFT_SHOULD_CHECK_RETURN_WAT)
#define _Check_return_wat_ _Check_return_
#else
#define _Check_return_wat_
#endif

#if !defined(__midl) && !defined(MIDL_PASS) && defined(_PREFAST_) 
#define __crt_typefix(ctype)              __declspec("SAL_typefix(" __CRT_STRINGIZE(ctype) ")")
#else
#define __crt_typefix(ctype)
#endif

#if (defined(__midl))
/* suppress tchar inlines */
#ifndef _NO_INLINING
#define _NO_INLINING
#endif  /* _NO_INLINING */
#endif  /* (defined (__midl)) */

#ifndef _CRT_UNUSED
#define _CRT_UNUSED(x) (void)x
#endif  /* _CRT_UNUSED */

    #if (_MSC_VER > 1400) && defined(CRTDLL2)
        /* VC9 (15) does not like extern __declspec(dllexport); change it to just __declspec(dllexport). */
        #define __FORCE_INSTANCE_CRTIMP2 _CRTIMP2
        #define __FORCE_INSTANCE_EXTERN /* nothing */
    #else
        #define __FORCE_INSTANCE_CRTIMP2 _CRTIMP2
        #define __FORCE_INSTANCE_EXTERN extern
    #endif

#if ((!defined(_PREFAST_) || (_MSC_FULL_VER >= 160021202)) ) /* BUG ESP:849 - disabling under prefast */
#else /* BUG ESP:849 - disabling under prefast */
 // PLACEHOLDER CODE:
#define __nullptr  0
#endif /* BUG ESP:849 - disabling under prefast */

#ifndef _CRT_STDIO_IMP
#define _CRT_STDIO_IMP _CRTIMP
#endif

#ifndef _CRT_STDIO_IMP_ALT
#define _CRT_STDIO_IMP_ALT _CRTIMP_ALT
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_CRTDEFS */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
