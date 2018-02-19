/***
*stdlib.h - declarations/definitions for commonly used library functions
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This include file contains the function declarations for commonly
*       used library functions which either don't fit somewhere else, or,
*       cannot be declared in the normal place for other reasons.
*       [ANSI]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_STDLIB
#define _INC_STDLIB

#include <crtdefs.h>
#include <limits.h>

#ifdef  _MSC_VER
/*
 * Currently, all MS C compilers for Win32 platforms default to 8 byte
 * alignment.
 */
#pragma pack(push,_CRT_PACKING)
#endif  /* _MSC_VER */

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4235) /* unaligned not supported on this architecture */
#pragma warning(disable:4995) /* deprecated -- we can still declare them, just don't use them */
#endif

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

/* 
    KENSY: Review: some code includes limits.h after stdlib.h, which needs MB_LEN_MAX for an annotation
    Example: //depot/fbl_rex_pdx_lib/base/sfu/interix/subsys/psxrun/psxrun.c
 */
/* Define MB_LEN_MAX */
#ifndef MB_LEN_MAX
#define MB_LEN_MAX 5
#endif

/* Definition of the argument values for the exit() function */

#define EXIT_SUCCESS    0
#define EXIT_FAILURE    1


#ifndef _ONEXIT_T_DEFINED

#if !defined (_M_CEE_PURE) || (_MSC_VER < 1400)
typedef int (__cdecl * _onexit_t)(void);
#else
typedef int (__clrcall * _onexit_t)(void);
typedef _onexit_t _onexit_m_t;
#endif

#if defined (_M_CEE_MIXED) && (_MSC_VER >= 1400)
typedef int (__clrcall * _onexit_m_t)(void);
#endif

#if     !__STDC__
/* Non-ANSI name for compatibility */
#define onexit_t _onexit_t
#endif

#define _ONEXIT_T_DEFINED
#endif


/* Data structure definitions for div and ldiv runtimes. */

#ifndef _DIV_T_DEFINED

typedef struct _div_t {
        int quot;
        int rem;
} div_t;

typedef struct _ldiv_t {
        long quot;
        long rem;
} ldiv_t;

#define _DIV_T_DEFINED
#endif

/*
 * structs used to fool the compiler into not generating floating point
 * instructions when copying and pushing [long] double values
 */

#ifndef _CRT_DOUBLE_DEC

#ifndef _LDSUPPORT

#pragma pack(4)
typedef struct {
    unsigned char ld[10];
} _LDOUBLE;
#pragma pack()

#define _PTR_LD(x) ((unsigned char  *)(&(x)->ld))

#else

/* push and pop long, which is #defined as __int64 by a spec2k test */
#pragma push_macro("long")
#undef long
typedef long double _LDOUBLE;
#pragma pop_macro("long")

#define _PTR_LD(x) ((unsigned char  *)(x))

#endif

typedef struct {
        double x;
} _CRT_DOUBLE;

typedef struct {
    float f;
} _CRT_FLOAT;

/* push and pop long, which is #defined as __int64 by a spec2k test */
#pragma push_macro("long")
#undef long

typedef struct {
        /*
         * Assume there is a long double type
         */
        long double x;
} _LONGDOUBLE;

#pragma pop_macro("long")

#pragma pack(4)
typedef struct {
    unsigned char ld12[12];
} _LDBL12;
#pragma pack()

#define _CRT_DOUBLE_DEC
#endif

/* Maximum value that can be returned by the rand function. */

#define RAND_MAX 0x7fff

/*
 * Maximum number of bytes in multi-byte character in the current locale
 * (also defined in ctype.h).
 */
#ifndef MB_CUR_MAX
#if defined (_MT) && (defined (_M_CEE_PURE) || defined (_MSVCPDLL))
#define MB_CUR_MAX ___mb_cur_max_func()
#else
#define MB_CUR_MAX __mb_cur_max
#endif
#if !defined(_M_CEE_PURE)
_CRTIMP extern int __mb_cur_max;
#else
_CRTIMP int* __cdecl __p___mb_cur_max();
#define __mb_cur_max (*__p___mb_cur_max())
#endif /* !defined(_M_CEE_PURE) */
_CRTIMP int __cdecl ___mb_cur_max_func(void);
_CRTIMP int __cdecl ___mb_cur_max_l_func(_locale_t);
#endif  /* MB_CUR_MAX */

/* Minimum and maximum macros */

#define __max(a,b)  (((a) > (b)) ? (a) : (b))
#define __min(a,b)  (((a) < (b)) ? (a) : (b))

/*
 * Sizes for buffers used by the _makepath() and _splitpath() functions.
 * note that the sizes include space for 0-terminator
 */
#define _MAX_PATH   260 /* max. length of full pathname */
#define _MAX_DRIVE  3   /* max. length of drive component */
#define _MAX_DIR    256 /* max. length of path component */
#define _MAX_FNAME  256 /* max. length of file name component */
#define _MAX_EXT    256 /* max. length of extension component */

/*
 * Argument values for _set_error_mode().
 */
#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR  1
#define _OUT_TO_MSGBOX  2
#define _REPORT_ERRMODE 3

/*
 * Argument values for _set_abort_behavior().
 */
#define _WRITE_ABORT_MSG    0x1
#define _CALL_REPORTFAULT   0x2

/*
 * Sizes for buffers used by the getenv/putenv family of functions.
 */
#define _MAX_ENV 32767   


/* External variable declarations */
#ifndef _CRT_ERRNO_DEFINED
#define _CRT_ERRNO_DEFINED
#ifdef _NTSUBSET_
extern int gbl_errno;
#define errno   (gbl_errno)
#else /* _NTSUBSET_ */
_CRTIMP extern int * __cdecl _errno(void);
#define errno   (*_errno())

errno_t __cdecl _set_errno(_In_ int _Value);
errno_t __cdecl _get_errno(_Out_ int * _Value);

#endif /* _NTSUBSET_ */
#endif /* _CRT_ERRNO_DEFINED */


#ifndef _NTSUBSET_
_CRTIMP unsigned long * __cdecl __doserrno(void);
#define _doserrno   (*__doserrno())

errno_t __cdecl _set_doserrno(_In_ unsigned long _Value);
errno_t __cdecl _get_doserrno(_Out_ unsigned long * _Value);
#endif /* _NTSUBSET_ */

#define _CRT_SYS_ERR_DATA

#ifndef _CRT_SYS_ERR_DATA

/* you can't modify this, but it is non-const for backcompat */
_CRTIMP _CRT_INSECURE_DEPRECATE(strerror) char ** __cdecl __sys_errlist(void);
#define _sys_errlist (__sys_errlist())

_CRTIMP _CRT_INSECURE_DEPRECATE(strerror) int * __cdecl __sys_nerr(void);
#define _sys_nerr (*__sys_nerr())

#else /* _CRT_SYS_ERR_DATA */

#ifndef _M_CEE_PURE

_CRTIMP _CRT_INSECURE_DEPRECATE(strerror) extern char const * const _sys_errlist[];   /* perror error message table */
_CRTIMP _CRT_INSECURE_DEPRECATE(strerror) extern const int _sys_nerr;           /* # of entries in sys_errlist table */

#endif

#endif /* _CRT_SYS_ERR_DATA */

#if     defined(_DLL) && defined(_M_IX86)

_CRTIMP int *          __cdecl __p___argc(void);
_CRTIMP char ***       __cdecl __p___argv(void);
_CRTIMP wchar_t ***    __cdecl __p___wargv(void);
_CRTIMP char ***       __cdecl __p__environ(void);
_CRTIMP wchar_t ***    __cdecl __p__wenviron(void);
_CRTIMP char **        __cdecl __p__pgmptr(void);
_CRTIMP wchar_t **     __cdecl __p__wpgmptr(void);


#endif  /* _M_IX86 && _DLL */

#if !defined(_M_CEE_PURE)
_CRTIMP extern int __argc;          /* count of cmd line args */
_CRTIMP extern char ** __argv;      /* pointer to table of cmd line args */
_CRTIMP extern wchar_t ** __wargv;  /* pointer to table of wide cmd line args */
#else
_CRTIMP int* __cdecl __p___argc();
_CRTIMP char*** __cdecl __p___argv();
_CRTIMP wchar_t*** __cdecl __p___wargv();
#define __argv (*__p___argv())
#define __argc (*__p___argc())
#define __wargv (*__p___wargv())
#endif


_CRTIMP
errno_t
__cdecl
_get_environ(
    _Out_ char*** Value
    );

_CRTIMP
errno_t
__cdecl
_get_wenviron(
    _Out_ wchar_t*** Value
    );


#if !defined(_M_CEE_PURE)
_CRTIMP extern char ** _environ;    /* pointer to environment table */
_CRTIMP extern wchar_t ** _wenviron;    /* pointer to wide environment table */

_CRT_INSECURE_DEPRECATE_GLOBALS(_get_pgmptr) _CRTIMP extern char * _pgmptr;      /* points to the module (EXE) name */
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_wpgmptr) _CRTIMP extern wchar_t * _wpgmptr;  /* points to the module (EXE) wide name */


#else

_CRTIMP char*** __cdecl __p__environ();
_CRTIMP wchar_t*** __cdecl __p__wenviron();
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_pgmptr) _CRTIMP char** __cdecl __p__pgmptr();
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_wpgmptr) _CRTIMP wchar_t** __cdecl __p__wpgmptr();

#define _environ   (*__p__environ())
#define _wenviron  (*__p__wenviron())
#define _pgmptr    (*__p__pgmptr())
#define _wpgmptr   (*__p__wpgmptr())

#endif /* !defined(_M_CEE_PURE) */

errno_t __cdecl _get_pgmptr(_Deref_out_z_ char ** _Value);
errno_t __cdecl _get_wpgmptr(_Deref_out_z_ wchar_t ** _Value);


#if !defined(_M_CEE_PURE)
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_fmode) _CRTIMP extern int _fmode;          /* default file translation mode */
#else
_CRTIMP int* __cdecl __p__fmode();
#define _fmode (*__p__fmode())
#endif /* !defined(_M_CEE_PURE) */

_CRTIMP errno_t __cdecl _set_fmode(_In_ int _Mode);
_CRTIMP errno_t __cdecl _get_fmode(_Out_ int * _PMode);

#if !defined(_M_CEE_PURE) 
__declspec(deprecated) _CRTIMP extern int _fileinfo;       /* open file info mode (for spawn) */
#endif /* !defined(_M_CEE_PURE) */
__declspec(deprecated) errno_t __cdecl _set_fileinfo(int);
__declspec(deprecated) errno_t __cdecl _get_fileinfo(int *);

/* KENSY: These functions are deprecated in DevDiv version */

/* Windows major/minor and O.S. version numbers */

#pragma warning(push)
#pragma warning(disable:4141)

#if !defined(_M_CEE_PURE)
_CRT_INSECURE_DEPRECATE(_get_osplatform) _CRT_OBSOLETE(GetVersionEx)	_CRTIMP extern unsigned int _osplatform;
_CRT_INSECURE_DEPRECATE(_get_osver) _CRT_OBSOLETE(GetVersionEx)			_CRTIMP extern unsigned int _osver;
_CRT_INSECURE_DEPRECATE(_get_winver) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP extern unsigned int _winver;
_CRT_INSECURE_DEPRECATE(_get_winmajor) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP extern unsigned int _winmajor;
_CRT_INSECURE_DEPRECATE(_get_winminor) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP extern unsigned int _winminor;


#else
_CRT_INSECURE_DEPRECATE(_get_osplatform) _CRT_OBSOLETE(GetVersionEx)	_CRTIMP unsigned int* __cdecl __p__osplatform();
_CRT_INSECURE_DEPRECATE(_get_osver) _CRT_OBSOLETE(GetVersionEx)			_CRTIMP unsigned int* __cdecl __p__osver();
_CRT_INSECURE_DEPRECATE(_get_winver) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP unsigned int* __cdecl __p__winver();
_CRT_INSECURE_DEPRECATE(_get_winmajor) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP unsigned int* __cdecl __p__winmajor();
_CRT_INSECURE_DEPRECATE(_get_winminor) _CRT_OBSOLETE(GetVersionEx)		_CRTIMP unsigned int* __cdecl __p__winminor();

#define _osplatform  (*__p__osplatform())
#define _osver       (*__p__osver())
#define _winver      (*__p__winver())
#define _winmajor    (*__p__winmajor())
#define _winminor    (*__p__winminor())
#endif /* !defined(_M_CEE_PURE) */

#pragma warning(pop)

_CRT_OBSOLETE(GetVersionEx) errno_t __cdecl _get_osplatform(_Out_ unsigned int * _Value);
_CRT_OBSOLETE(GetVersionEx) errno_t __cdecl _get_osver(_Out_ unsigned int * _Value);
_CRT_OBSOLETE(GetVersionEx) errno_t __cdecl _get_winver(_Out_ unsigned int * _Value);
_CRT_OBSOLETE(GetVersionEx) errno_t __cdecl _get_winmajor(_Out_ unsigned int * _Value);
_CRT_OBSOLETE(GetVersionEx) errno_t __cdecl _get_winminor(_Out_ unsigned int * _Value);


/* KENSY: end of deprecated functions */

/* _countof helper */
#if !defined(_countof)
#if !defined(__cplusplus) || defined(_PREFAST_)
#define _countof(_Array) (sizeof(_Array) / sizeof(_Array[0]))
#else
extern "C++"
{
template <typename _CountofType, size_t _SizeOfArray>
char (*__countof_helper(UNALIGNED _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];
#define _countof(_Array) sizeof(*__countof_helper(_Array))
}
#endif
#endif

/* function prototypes */

#ifndef _CRT_TERMINATE_DEFINED
#define _CRT_TERMINATE_DEFINED
_CRTIMP __declspec(noreturn) void __cdecl exit(_In_ int _Code);
_CRTIMP __declspec(noreturn) void __cdecl _exit(_In_ int _Code);
_CRTIMP __declspec(noreturn) void __cdecl abort(void);
#endif

_CRTIMP unsigned int __cdecl _set_abort_behavior(_In_ unsigned int _Flags, _In_ unsigned int _Mask);

#ifndef _CRT_ABS_DEFINED
#define _CRT_ABS_DEFINED
        int     __cdecl abs(_In_ int _X);
        long    __cdecl labs(_In_ long _X);
#endif

        __int64    __cdecl _abs64(__int64);
#if _MSC_VER >= 1400 && defined(_M_CEE)
#pragma warning (suppress: 4985)
        _Check_return_ int    __clrcall _atexit_m_appdomain(_In_opt_ void (__clrcall * _Func)(void));
#if defined(_M_CEE_MIXED)
#pragma warning (suppress: 4985)
        _Check_return_ int    __clrcall _atexit_m(_In_opt_ void (__clrcall * _Func)(void));
#else
        _Check_return_ inline int __clrcall _atexit_m(_In_opt_ void (__clrcall *_Function)(void))
#pragma warning (suppress: 4985)
        {
            return _atexit_m_appdomain(_Function);
        }
#endif
#endif
#if defined(_M_CEE_PURE)
        /* In pure mode, atexit is the same as atexit_m */
extern "C++"
{
inline  int    __clrcall atexit
(
    void (__clrcall *_Function)(void)
)
{
    return _atexit_m_appdomain(_Function);
}
}
#else
        int    __cdecl atexit(void (__cdecl *)(void));
#endif
#ifndef _CRT_ATOF_DEFINED
#define _CRT_ATOF_DEFINED
_Check_return_ _CRTIMP double  __cdecl atof(_In_z_ const char *_String);
_Check_return_ _CRTIMP double  __cdecl _atof_l(_In_z_ const char *_String, _In_opt_ _locale_t _Locale);
#endif
_Check_return_ _CRTIMP _CRT_JIT_INTRINSIC int    __cdecl atoi(_In_z_ const char *_Str);
_Check_return_ _CRTIMP int    __cdecl _atoi_l(_In_z_ const char *_Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP long   __cdecl atol(_In_z_ const char *_Str);
_Check_return_ _CRTIMP long   __cdecl _atol_l(_In_z_ const char *_Str, _In_opt_ _locale_t _Locale);
#ifndef _CRT_ALGO_DEFINED
#define _CRT_ALGO_DEFINED
#if __STDC_WANT_SECURE_LIB__
_Check_return_ _CRTIMP void * __cdecl bsearch_s(_In_ const void * _Key, _In_reads_bytes_(_NumOfElements * _SizeOfElements) const void * _Base, 
        _In_ rsize_t _NumOfElements, _In_ rsize_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
#endif
_Check_return_ _CRTIMP void * __cdecl bsearch(_In_ const void * _Key, _In_reads_bytes_(_NumOfElements * _SizeOfElements) const void * _Base, 
        _In_ size_t _NumOfElements, _In_ size_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));

#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALT void __cdecl qsort_s(_Inout_updates_bytes_(_NumOfElements* _SizeOfElements) void * _Base, 
        _In_ rsize_t _NumOfElements, _In_ rsize_t _SizeOfElements,
        _In_ int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void *_Context);
#endif
_CRTIMP void __cdecl qsort(_Inout_updates_bytes_(_NumOfElements * _SizeOfElements) void * _Base, 
	_In_ size_t _NumOfElements, _In_ size_t _SizeOfElements, 
        _In_ int (__cdecl * _PtFuncCompare)(const void *, const void *));
#endif
        _Check_return_ unsigned short __cdecl _byteswap_ushort(_In_ unsigned short _Short);
        _Check_return_ unsigned long  __cdecl _byteswap_ulong (_In_ unsigned long _Long);
        _Check_return_ unsigned __int64 __cdecl _byteswap_uint64(_In_ unsigned __int64 _Int64);
_Check_return_ _CRTIMP div_t  __cdecl div(_In_ int _Numerator, _In_ int _Denominator);
_Check_return_ _CRTIMP _CRT_INSECURE_DEPRECATE(_dupenv_s) char * __cdecl getenv(_In_z_ const char * _VarName);
#if __STDC_WANT_SECURE_LIB__
_Check_return_opt_ _CRTIMP errno_t __cdecl getenv_s(_Out_ size_t * _ReturnSize, _Out_writes_z_(_DstSize) char * _DstBuf, _In_ rsize_t _DstSize, _In_z_ const char * _VarName);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, getenv_s, _Out_ size_t *, _ReturnSize, char, _Dest, _In_z_ const char *, _VarName)
#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)
#pragma push_macro("_dupenv_s")
#undef _dupenv_s
#endif

_Check_return_opt_ _CRTIMP errno_t __cdecl _dupenv_s(_Outptr_result_buffer_maybenull_(*_PBufferSizeInBytes) _Outptr_result_maybenull_z_ char **_PBuffer, _Out_opt_ size_t * _PBufferSizeInBytes, _In_z_ const char * _VarName);

#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)
#pragma pop_macro("_dupenv_s")
#endif


_Check_return_opt_ _CRTIMP_ALT errno_t __ALTDECL _itoa_s(_In_ int _Value, _Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _itoa_s, _In_ int, _Value, char, _Dest, _In_ int, _Radix)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _itoa, _In_ int, _Value, _Pre_notnull_ _Post_z_, char, _Dest, _In_ int, _Radix)
#pragma prefast(pop)
_Check_return_opt_ _CRTIMP_ALT errno_t __ALTDECL _i64toa_s(_In_ __int64 _Val, _Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ int _Radix);
_CRTIMP _CRT_INSECURE_DEPRECATE(_i64toa_s) char * __cdecl _i64toa(_In_ __int64 _Val, _Pre_notnull_ _Post_z_ char * _DstBuf, _In_ int _Radix);
_Check_return_opt_ _CRTIMP_ALT errno_t __ALTDECL _ui64toa_s(_In_ unsigned __int64 _Val, _Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ int _Radix);
_CRTIMP _CRT_INSECURE_DEPRECATE(_ui64toa_s) char * __cdecl _ui64toa(_In_ unsigned __int64 _Val, _Pre_notnull_ _Post_z_ char * _DstBuf, _In_ int _Radix);
_Check_return_ _CRTIMP __int64 __cdecl _atoi64(_In_z_ const char * _String);
_Check_return_ _CRTIMP __int64 __cdecl _atoi64_l(_In_z_ const char * _String, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP __int64 __cdecl _strtoi64(_In_z_ const char * _String, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int _Radix);
_Check_return_ _CRTIMP __int64 __cdecl _strtoi64_l(_In_z_ const char * _String, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int _Radix, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP unsigned __int64 __cdecl _strtoui64(_In_z_ const char * _String, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int _Radix);
_Check_return_ _CRTIMP unsigned __int64 __cdecl _strtoui64_l(_In_z_ const char * _String, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int  _Radix, _In_opt_ _locale_t _Locale);
/*_Check_return_*/ _CRTIMP ldiv_t __cdecl ldiv(_In_ long _Numerator, _In_ long _Denominator);
#ifdef __cplusplus
extern "C++"
{
    inline ldiv_t  div(_In_ long _A1, _In_ long _A2)
    {
        return ldiv(_A1, _A2);
    }
}
#endif
_Check_return_opt_ _CRTIMP_ALT errno_t __ALTDECL _ltoa_s(_In_ long _Val, _Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ltoa_s, _In_ long, _Value, char, _Dest, _In_ int, _Radix)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _ltoa, _In_ long, _Value, _Pre_notnull_ _Post_z_, char, _Dest, _In_ int, _Radix)
#pragma prefast(pop)
_Check_return_ _CRTIMP int    __cdecl mblen(_In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ const char * _Ch, _In_ size_t _MaxCount);
_Check_return_ _CRTIMP int    __cdecl _mblen_l(_In_reads_bytes_opt_(_MaxCount) _Pre_opt_z_ const char * _Ch, _In_ size_t _MaxCount, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP size_t __cdecl _mbstrlen(_In_z_ const char * _Str);
_Check_return_ _CRTIMP size_t __cdecl _mbstrlen_l(_In_z_ const char *_Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP size_t __cdecl _mbstrnlen(_In_z_ const char *_Str, _In_ size_t _MaxCount);
_Check_return_ _CRTIMP size_t __cdecl _mbstrnlen_l(_In_z_ const char *_Str, _In_ size_t _MaxCount, _In_opt_ _locale_t _Locale);
_CRTIMP int    __cdecl mbtowc(_Pre_notnull_ _Post_z_ wchar_t * _DstCh, _In_reads_bytes_opt_(_SrcSizeInBytes) _Pre_opt_z_ const char * _SrcCh, _In_ size_t _SrcSizeInBytes);
_CRTIMP int    __cdecl _mbtowc_l(_Pre_notnull_ _Post_z_ wchar_t * _DstCh, _In_reads_bytes_opt_(_SrcSizeInBytes) _Pre_opt_z_ const char * _SrcCh, _In_ size_t _SrcSizeInBytes, _In_opt_ _locale_t _Locale);
_Check_return_opt_ _CRTIMP errno_t __cdecl mbstowcs_s(_Out_opt_ size_t * _PtNumOfCharConverted, _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_reads_(_MaxCount) _Pre_z_ const char * _SrcBuf, _In_ size_t _MaxCount );
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, mbstowcs_s, _Out_opt_ size_t *, _PtNumOfCharConverted, _Deref_post_z_ wchar_t, _Dest, _In_z_ const char *, _Source, _In_ size_t, _MaxCount)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_CRTIMP, mbstowcs, _Out_writes_opt_z_(_MaxCount), wchar_t, _Dest, _In_z_ const char *, _Source, _In_ size_t, _MaxCount)

_Check_return_opt_ _CRTIMP errno_t __cdecl _mbstowcs_s_l(_Out_opt_ size_t * _PtNumOfCharConverted, _Out_writes_to_opt_(_SizeInWords, *_PtNumOfCharConverted) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_reads_(_MaxCount) _Pre_z_ const char * _SrcBuf, _In_ size_t _MaxCount, _In_opt_ _locale_t _Locale);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(errno_t, _mbstowcs_s_l, _Out_opt_ size_t *, _PtNumOfCharConverted, wchar_t, _Dest, _In_z_ const char *, _Source, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_CRTIMP, _mbstowcs_l, _mbstowcs_s_l, _Out_writes_opt_z_(_Size) wchar_t, _Out_writes_z_(_MaxCount), wchar_t, _Dest, _In_z_ const char *, _Source, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)

_Check_return_ _CRTIMP int    __cdecl rand(void);
#if defined(_CRT_RAND_S)
_CRTIMP errno_t __cdecl rand_s ( _Out_ unsigned int *_RandomValue);
#endif

_Check_return_opt_ _CRTIMP int    __cdecl _set_error_mode(_In_ int _Mode);

_CRTIMP void   __cdecl srand(_In_ unsigned int _Seed);
_Check_return_ _CRTIMP double __cdecl strtod(_In_z_ const char * _Str, _Out_opt_ _Deref_post_z_ char ** _EndPtr);
_Check_return_ _CRTIMP double __cdecl _strtod_l(_In_z_ const char * _Str, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP long   __cdecl strtol(_In_z_ const char * _Str, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int _Radix );
_Check_return_ _CRTIMP long   __cdecl _strtol_l(_In_z_ const char *_Str, _Out_opt_ _Deref_post_z_ char **_EndPtr, _In_ int _Radix, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP unsigned long __cdecl strtoul(_In_z_ const char * _Str, _Out_opt_ _Deref_post_z_ char ** _EndPtr, _In_ int _Radix);
_Check_return_ _CRTIMP unsigned long __cdecl _strtoul_l(const char * _Str, _Out_opt_ _Deref_post_z_ char **_EndPtr, _In_ int _Radix, _In_opt_ _locale_t _Locale);
#ifndef _CRT_SYSTEM_DEFINED
#define _CRT_SYSTEM_DEFINED
_CRTIMP int __cdecl system(_In_opt_z_ const char * _Command);
#endif
_Check_return_opt_ _CRTIMP_ALT errno_t __ALTDECL _ultoa_s(_In_ unsigned long _Val, _Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ultoa_s, _In_ unsigned long, _Value, char, _Dest, _In_ int, _Radix)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(char *, __RETURN_POLICY_DST, _CRTIMP, _ultoa, _In_ unsigned long, _Value, _Pre_notnull_ _Post_z_, char, _Dest, _In_ int, _Radix)
#pragma prefast(pop)
_CRTIMP _CRT_INSECURE_DEPRECATE(wctomb_s) int    __cdecl wctomb(_Out_writes_opt_z_(MB_LEN_MAX) char * _MbCh, _In_ wchar_t _WCh);
_CRTIMP _CRT_INSECURE_DEPRECATE(_wctomb_s_l) int    __cdecl _wctomb_l(_Pre_maybenull_ _Post_z_ char * _MbCh, _In_ wchar_t _WCh, _In_opt_ _locale_t _Locale);
#if __STDC_WANT_SECURE_LIB__
_Check_return_wat_ _CRTIMP errno_t __cdecl wctomb_s(_Out_opt_ int * _SizeConverted, _Out_writes_bytes_to_opt_(_SizeInBytes, *_SizeConverted) char * _MbCh, _In_ rsize_t _SizeInBytes, _In_ wchar_t _WCh);
#endif
_Check_return_wat_ _CRTIMP errno_t __cdecl _wctomb_s_l(_Out_opt_ int * _SizeConverted, _Out_writes_opt_z_(_SizeInBytes) char * _MbCh, _In_ size_t _SizeInBytes, _In_ wchar_t _WCh, _In_opt_ _locale_t _Locale);
_Check_return_wat_ _CRTIMP errno_t __cdecl wcstombs_s(_Out_opt_ size_t * _PtNumOfCharConverted, _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char * _Dst, _In_ size_t _DstSizeInBytes, _In_z_ const wchar_t * _Src, _In_ size_t _MaxCountInBytes);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(errno_t, wcstombs_s, _Out_opt_ size_t *, _PtNumOfCharConverted, _Out_writes_bytes_opt_(_Size) char, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _MaxCount)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_CRTIMP, wcstombs, _Out_writes_opt_z_(_MaxCount), char, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _MaxCount)
_Check_return_wat_ _CRTIMP errno_t __cdecl _wcstombs_s_l(_Out_opt_ size_t * _PtNumOfCharConverted, _Out_writes_bytes_to_opt_(_DstSizeInBytes, *_PtNumOfCharConverted) char * _Dst, _In_ size_t _DstSizeInBytes, _In_z_ const wchar_t * _Src, _In_ size_t _MaxCountInBytes, _In_opt_ _locale_t _Locale);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(errno_t, _wcstombs_s_l, _Out_opt_ size_t *,_PtNumOfCharConverted, _Out_writes_opt_(_Size) char, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)
__DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_CRTIMP, _wcstombs_l, _wcstombs_s_l, _Out_writes_opt_z_(_Size) char, _Out_writes_z_(_MaxCount), char, _Dest, _In_z_ const wchar_t *, _Source, _In_ size_t, _MaxCount, _In_opt_ _locale_t, _Locale)

#if _MSC_VER >= 1400 && defined(__cplusplus) && defined(_M_CEE)
/*
 * Managed search routines. Note __cplusplus, this is because we only support
 * managed C++.
 */
extern "C++"
{
#if __STDC_WANT_SECURE_LIB__
_Check_return_ void * __clrcall bsearch_s(_In_ const void * _Key, _In_reads_bytes_(_NumOfElements*_SizeOfElements) const void * _Base, _In_ rsize_t _NumOfElements, _In_ rsize_t _SizeOfElements, 
        _In_ int (__clrcall * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
#endif
_Check_return_ void * __clrcall bsearch  (_In_ const void * _Key, _In_reads_bytes_(_NumOfElements*_SizeOfElements) const void * _Base, _In_ size_t _NumOfElements, _In_ size_t _SizeOfElements,
        _In_ int (__clrcall * _PtFuncCompare)(const void *, const void *));

#if __STDC_WANT_SECURE_LIB__
void __clrcall qsort_s(_Inout_updates_bytes_(_NumOfElements*_SizeOfElements) _Post_readable_byte_size_(_NumOfElements*_SizeOfElements) void * _Base, 
        _In_ rsize_t _NumOfElements, _In_ rsize_t _SizeOfElment, 
        _In_ int (__clrcall * _PtFuncCompare)(void *, const void *, const void *), void * _Context);
#endif
void __clrcall qsort(_Inout_updates_bytes_(_NumOfElements*_SizeOfElements) _Post_readable_byte_size_(_NumOfElements*_SizeOfElements) void * _Base, 
        _In_ size_t _NumOfElements, _In_ size_t _SizeOfElements, 
        _In_ int (__clrcall * _PtFuncCompare)(const void *, const void *));

}
#endif

#ifndef _CRT_ALLOCATION_DEFINED
#define _CRT_ALLOCATION_DEFINED

#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)

#pragma push_macro("calloc")
#pragma push_macro("free")
#pragma push_macro("malloc")
#pragma push_macro("realloc")
#pragma push_macro("_recalloc")
#pragma push_macro("_aligned_free")
#pragma push_macro("_aligned_malloc")
#pragma push_macro("_aligned_offset_malloc")
#pragma push_macro("_aligned_realloc")
#pragma push_macro("_aligned_recalloc")
#pragma push_macro("_aligned_offset_realloc")
#pragma push_macro("_aligned_offset_recalloc")
#pragma push_macro("_aligned_msize")

#undef calloc
#undef free
#undef malloc
#undef realloc
#undef _recalloc
#undef _aligned_free
#undef _aligned_malloc
#undef _aligned_offset_malloc
#undef _aligned_realloc
#undef _aligned_recalloc
#undef _aligned_offset_realloc
#undef _aligned_offset_recalloc
#undef _aligned_msize

#endif
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NumOfElements* _SizeOfElements) _CRTIMP _CRT_JIT_INTRINSIC _CRTNOALIAS _CRTRESTRICT    void * __cdecl calloc(_In_ size_t _NumOfElements, _In_ size_t _SizeOfElements);
_CRTIMP                     _CRTNOALIAS                                                                             void   __cdecl free(_Pre_maybenull_ _Post_invalid_ void * _Memory);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRT_JIT_INTRINSIC _CRTNOALIAS _CRTRESTRICT                              void * __cdecl malloc(_In_ size_t _Size);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT                           void * __cdecl realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT                       void * __cdecl _recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size);
_CRTIMP                     _CRTNOALIAS                                                                             void   __cdecl _aligned_free(_Pre_maybenull_ _Post_invalid_ void * _Memory);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT                              void * __cdecl _aligned_malloc(_In_ size_t _Size, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT                              void * __cdecl _aligned_offset_malloc(_In_ size_t _Size, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT                              void * __cdecl _aligned_realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT                       void * __cdecl _aligned_recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size, _In_ size_t _Alignment);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_NewSize) _CRTIMP _CRTNOALIAS _CRTRESTRICT                              void * __cdecl _aligned_offset_realloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _NewSize, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _Ret_maybenull_ _Post_writable_byte_size_(_Count*_Size) _CRTIMP _CRTNOALIAS _CRTRESTRICT                       void * __cdecl _aligned_offset_recalloc(_Pre_maybenull_ _Post_invalid_ void * _Memory, _In_ size_t _Count, _In_ size_t _Size, _In_ size_t _Alignment, _In_ size_t _Offset);
_Check_return_ _CRTIMP                                                  size_t __cdecl _aligned_msize(_In_ void * _Memory, _In_ size_t _Alignment, _In_ size_t _Offset);


#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)

#pragma pop_macro("_aligned_msize")
#pragma pop_macro("_aligned_offset_recalloc")
#pragma pop_macro("_aligned_offset_realloc")
#pragma pop_macro("_aligned_recalloc")
#pragma pop_macro("_aligned_realloc")
#pragma pop_macro("_aligned_offset_malloc")
#pragma pop_macro("_aligned_malloc")
#pragma pop_macro("_aligned_free")
#pragma pop_macro("_recalloc")
#pragma pop_macro("realloc")
#pragma pop_macro("malloc")
#pragma pop_macro("free")
#pragma pop_macro("calloc")

#endif

#endif /*_CRT_ALLOCATION_DEFINED */

#ifndef _WSTDLIB_DEFINED

/* wide function prototypes, also declared in wchar.h  */

_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _itow_s (_In_ int _Val, _Out_writes_z_(_SizeInWords) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_ int _Radix);
_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _ltow_s (_In_ long _Val, _Out_writes_z_(_SizeInWords) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_ int _Radix);
_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _ultow_s (_In_ unsigned long _Val, _Out_writes_z_(_SizeInWords) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_ int _Radix);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _itow_s, _In_ int, _Value, wchar_t, _Dest, _In_ int, _Radix)
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ltow_s, _In_ long, _Value, wchar_t, _Dest, _In_ int, _Radix)
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _ultow_s, _In_ unsigned long, _Value, wchar_t, _Dest, _In_ int, _Radix)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _itow, _In_ int, _Value, _Pre_notnull_ _Post_z_, wchar_t, _Dest, _In_ int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _ltow, _In_ long, _Value, _Pre_notnull_ _Post_z_, wchar_t, _Dest, _In_ int, _Radix)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _ultow, _In_ unsigned long, _Value, _Pre_notnull_ _Post_z_, wchar_t, _Dest, _In_ int, _Radix)
#pragma prefast(pop)
_Check_return_ _CRTIMP double __cdecl wcstod(_In_z_ const wchar_t * _Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr);
_Check_return_ _CRTIMP double __cdecl _wcstod_l(_In_z_ const wchar_t *_Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP long   __cdecl wcstol(_In_z_ const wchar_t *_Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, int _Radix);
_Check_return_ _CRTIMP long   __cdecl _wcstol_l(_In_z_ const wchar_t *_Str, _Out_opt_ _Deref_post_z_ wchar_t **_EndPtr, int _Radix, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP unsigned long __cdecl wcstoul(_In_z_ const wchar_t *_Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, int _Radix);
_Check_return_ _CRTIMP unsigned long __cdecl _wcstoul_l(_In_z_ const wchar_t *_Str, _Out_opt_ _Deref_post_z_ wchar_t **_EndPtr, int _Radix, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP _CRT_INSECURE_DEPRECATE(_wdupenv_s) wchar_t * __cdecl _wgetenv(_In_z_ const wchar_t * _VarName);
_Check_return_wat_ _CRTIMP errno_t __cdecl _wgetenv_s(_Out_ size_t * _ReturnSize, _Out_writes_z_(_DstSizeInWords) wchar_t * _DstBuf, _In_ size_t _DstSizeInWords, _In_z_ const wchar_t * _VarName);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(errno_t, _wgetenv_s, _Out_ size_t *, _ReturnSize, wchar_t, _Dest, _In_z_ const wchar_t *, _VarName)

#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)
#pragma push_macro("_wdupenv_s")
#undef _wdupenv_s
#endif

_Check_return_wat_ _CRTIMP errno_t __cdecl _wdupenv_s(_Outptr_result_buffer_maybenull_(*_BufferSizeInWords) _Outptr_result_maybenull_z_ wchar_t **_Buffer, _Out_opt_ size_t *_BufferSizeInWords, _In_z_ const wchar_t *_VarName);

#if defined(_DEBUG) && defined(_CRTDBG_MAP_ALLOC)
#pragma pop_macro("_wdupenv_s")
#endif

#ifndef _CRT_WSYSTEM_DEFINED
#define _CRT_WSYSTEM_DEFINED
_CRTIMP int __cdecl _wsystem(_In_opt_z_ const wchar_t * _Command);
#endif
_Check_return_ _CRTIMP double __cdecl _wtof(_In_z_ const wchar_t *_Str);
_Check_return_ _CRTIMP double __cdecl _wtof_l(_In_z_ const wchar_t *_Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _wtoi(_In_z_ const wchar_t *_Str);
_Check_return_ _CRTIMP int __cdecl _wtoi_l(_In_z_ const wchar_t *_Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP long __cdecl _wtol(_In_z_ const wchar_t *_Str);
_Check_return_ _CRTIMP long __cdecl _wtol_l(_In_z_ const wchar_t *_Str, _In_opt_ _locale_t _Locale);

_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _i64tow_s(_In_ __int64 _Val, _Out_writes_z_(_SizeInWords) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_ int _Radix);
_CRTIMP _CRT_INSECURE_DEPRECATE(_i64tow_s) wchar_t * __cdecl _i64tow(_In_ __int64 _Val, _Pre_notnull_ _Post_z_ wchar_t * _DstBuf, _In_ int _Radix);
_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _ui64tow_s(_In_ unsigned __int64 _Val, _Out_writes_z_(_SizeInWords) wchar_t * _DstBuf, _In_ size_t _SizeInWords, _In_ int _Radix);
_CRTIMP _CRT_INSECURE_DEPRECATE(_ui64tow_s) wchar_t * __cdecl _ui64tow(_In_ unsigned __int64 _Val, _Pre_notnull_ _Post_z_ wchar_t * _DstBuf, _In_ int _Radix);
_Check_return_ _CRTIMP __int64   __cdecl _wtoi64(_In_z_ const wchar_t *_Str);
_Check_return_ _CRTIMP __int64   __cdecl _wtoi64_l(_In_z_ const wchar_t *_Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP __int64   __cdecl _wcstoi64(_In_z_ const wchar_t * _Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, _In_ int _Radix);
_Check_return_ _CRTIMP __int64   __cdecl _wcstoi64_l(_In_z_ const wchar_t * _Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, _In_ int _Radix, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP unsigned __int64  __cdecl _wcstoui64(_In_z_ const wchar_t * _Str, _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, _In_ int _Radix);
_Check_return_ _CRTIMP unsigned __int64  __cdecl _wcstoui64_l(_In_z_ const wchar_t *_Str , _Out_opt_ _Deref_post_z_ wchar_t ** _EndPtr, _In_ int _Radix, _In_opt_ _locale_t _Locale);

#define _WSTDLIB_DEFINED
#endif


/* 
Buffer size required to be passed to _gcvt, fcvt and other fp conversion routines
*/
#define _CVTBUFSIZE (309+40) /* # of digits in max. dp value + slop */

#if (defined(_DEBUG) || defined(_SYSCRT_DEBUG)) && defined(_CRTDBG_MAP_ALLOC)

#pragma push_macro("_fullpath")
#undef _fullpath

#endif

_Check_return_ _CRTIMP char * __cdecl _fullpath(_Out_writes_opt_z_(_SizeInBytes) char * _FullPath, _In_z_ const char * _Path, _In_ size_t _SizeInBytes);

#if (defined(_DEBUG) || defined(_SYSCRT_DEBUG)) && defined(_CRTDBG_MAP_ALLOC)

#pragma pop_macro("_fullpath")

#endif

_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _ecvt_s(_Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ double _Val, _In_ int _NumOfDights, _Out_ int * _PtDec, _Out_ int * _PtSign);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _ecvt_s, char, _Dest, _In_ double, _Value, _In_ int, _NumOfDigits, _Out_ int *, _PtDec, _Out_ int *, _PtSign)
_Check_return_ _CRTIMP _CRT_INSECURE_DEPRECATE(_ecvt_s) char * __cdecl _ecvt(_In_ double _Val, _In_ int _NumOfDigits, _Out_ int * _PtDec, _Out_ int * _PtSign);
_Check_return_wat_ _CRTIMP errno_t __cdecl _fcvt_s(_Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ double _Val, _In_ int _NumOfDec, _Out_ int * _PtDec, _Out_ int * _PtSign);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _fcvt_s, char, _Dest, _In_ double, _Value, _In_ int, _NumOfDigits, _Out_ int *, _PtDec, _Out_ int *, _PtSign)
_Check_return_ _CRTIMP _CRT_INSECURE_DEPRECATE(_fcvt_s) char * __cdecl _fcvt(_In_ double _Val, _In_ int _NumOfDec, _Out_ int * _PtDec, _Out_ int * _PtSign);
_CRTIMP_ALT errno_t __ALTDECL _gcvt_s(_Out_writes_z_(_Size) char * _DstBuf, _In_ size_t _Size, _In_ double _Val, _In_ int _NumOfDigits);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(errno_t, _gcvt_s, char, _Dest, _In_ double, _Value, _In_ int, _NumOfDigits)
_CRTIMP _CRT_INSECURE_DEPRECATE(_gcvt_s) char * __cdecl _gcvt(_In_ double _Val, _In_ int _NumOfDigits, _Pre_notnull_ _Post_z_ char * _DstBuf);

_Check_return_ _CRTIMP int __cdecl _atodbl(_Out_ _CRT_DOUBLE * _Result, _In_z_ char * _Str);
_Check_return_ _CRTIMP int __cdecl _atoldbl(_Out_ _LDOUBLE * _Result, _In_z_ char * _Str);
_Check_return_ _CRTIMP int __cdecl _atoflt(_Out_ _CRT_FLOAT * _Result, _In_z_ char * _Str);
_Check_return_ _CRTIMP int __cdecl _atodbl_l(_Out_ _CRT_DOUBLE * _Result, _In_z_ char * _Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _atoldbl_l(_Out_ _LDOUBLE * _Result, _In_z_ char * _Str, _In_opt_ _locale_t _Locale);
_Check_return_ _CRTIMP int __cdecl _atoflt_l(_Out_ _CRT_FLOAT * _Result, _In_z_ char * _Str, _In_opt_ _locale_t _Locale);
        unsigned long __cdecl _lrotl(_In_ unsigned long _Val, _In_ int _Shift);
        unsigned long __cdecl _lrotr(_In_ unsigned long _Val, _In_ int _Shift);
_Check_return_wat_ _CRTIMP_ALT errno_t   __ALTDECL _makepath_s(_Out_writes_z_(_SizeInWords) char * _PathResult, _In_ size_t _SizeInWords, _In_opt_z_ const char * _Drive, _In_opt_z_ const char * _Dir, _In_opt_z_ const char * _Filename,
        _In_opt_z_ const char * _Ext);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _makepath_s, char, _Path, _In_opt_z_ const char *, _Drive, _In_opt_z_ const char *, _Dir, _In_opt_z_ const char *, _Filename, _In_opt_z_ const char *, _Ext)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGE, "Banned API")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(void, __RETURN_POLICY_VOID, _CRTIMP, _makepath, _Pre_notnull_ _Post_z_, char, _Path, _In_opt_z_ const char *, _Drive, _In_opt_z_ const char *, _Dir, _In_opt_z_ const char *, _Filename, _In_opt_z_ const char *, _Ext)
#pragma prefast(pop)

#if _MSC_VER >= 1400 && defined(_M_CEE)
		_onexit_m_t    __clrcall _onexit_m_appdomain(_onexit_m_t _Function);
	#if defined(_M_CEE_MIXED)
		_onexit_m_t    __clrcall _onexit_m(_onexit_m_t _Function);
	#else
		inline _onexit_m_t    __clrcall _onexit_m(_onexit_t _Function)
		{
			return _onexit_m_appdomain(_Function);
		}
	#endif
        
#endif
#if defined(_M_CEE_PURE)
        /* In pure mode, _onexit is the same as _onexit_m_appdomain */
extern "C++"
{
inline  _onexit_t    __clrcall _onexit
(
    _onexit_t _Function
)
{
    return _onexit_m_appdomain(_Function);
}
}
#else
        _onexit_t __cdecl _onexit(_In_opt_ _onexit_t _Func);
#endif
        
#ifndef _CRT_PERROR_DEFINED
#define _CRT_PERROR_DEFINED
_CRTIMP void __cdecl perror(_In_opt_z_ const char * _ErrMsg);
#endif

#pragma prefast (push)
#pragma prefast (disable:__WARNING_OVERRIDING_OLD_MODEL,"CRTs") /* the functions below have declspecs in their declarations in the windows headers, causing PREfast to fire 6540 here */
_Check_return_ _CRTIMP int    __cdecl _putenv(_In_z_ const char * _EnvString);
_Check_return_wat_ _CRTIMP errno_t __cdecl _putenv_s(_In_z_ const char * _Name, _In_z_ const char * _Value);
        unsigned int __cdecl _rotl(_In_ unsigned int _Val, _In_ int _Shift);
        unsigned __int64 __cdecl _rotl64(_In_ unsigned __int64 _Val, _In_ int _Shift);
        unsigned int __cdecl _rotr(_In_ unsigned int _Val, _In_ int _Shift);
        unsigned __int64 __cdecl _rotr64(_In_ unsigned __int64 _Val, _In_ int _Shift);
#pragma prefast (pop)

_CRTIMP errno_t __cdecl _searchenv_s(_In_z_ const char * _Filename, _In_z_ const char * _EnvVar, _Out_writes_z_(_SizeInBytes) char * _ResultPath, _In_ size_t _SizeInBytes);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(errno_t, _searchenv_s, _In_z_ const char *, _Filename, _In_z_ const char *, _EnvVar, char, _ResultPath)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Max path typically expected, but not required")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(void, __RETURN_POLICY_VOID, _CRTIMP, _searchenv, _In_z_ const char *, _Filename, _In_z_ const char *, _EnvVar, _Pre_notnull_ _Post_z_, char, _ResultPath)
#pragma prefast(pop)

_CRT_INSECURE_DEPRECATE(_splitpath_s) _CRTIMP void   __cdecl _splitpath(_In_z_ const char * _FullPath, _Pre_maybenull_ _Post_z_ char * _Drive, _Pre_maybenull_ _Post_z_ char * _Dir, _Pre_maybenull_ _Post_z_ char * _Filename, _Pre_maybenull_ _Post_z_ char * _Ext);
_Check_return_wat_ _CRTIMP_ALT errno_t  __ALTDECL _splitpath_s(_In_z_ const char * _FullPath, 
		_Out_writes_opt_z_(_DriveSize) char * _Drive, _In_ size_t _DriveSize, 
		_Out_writes_opt_z_(_DirSize) char * _Dir, _In_ size_t _DirSize, 
		_Out_writes_opt_z_(_FilenameSize) char * _Filename, _In_ size_t _FilenameSize, 
		_Out_writes_opt_z_(_ExtSize) char * _Ext, _In_ size_t _ExtSize);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(errno_t, _splitpath_s,  char, _Dest)

_CRTIMP void   __cdecl _swab(_Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char * _Buf1, _Inout_updates_(_SizeInBytes) _Post_readable_size_(_SizeInBytes) char * _Buf2, int _SizeInBytes);

#ifndef _WSTDLIBP_DEFINED

/* wide function prototypes, also declared in wchar.h  */

#if (defined(_DEBUG) || defined(_SYSCRT_DEBUG)) && defined(_CRTDBG_MAP_ALLOC)
#pragma push_macro("_wfullpath")
#undef _wfullpath
#endif

_Check_return_ _CRTIMP wchar_t * __cdecl _wfullpath(_Out_writes_opt_z_(_SizeInWords) wchar_t * _FullPath, _In_z_ const wchar_t * _Path, _In_ size_t _SizeInWords);

#if (defined(_DEBUG) || defined(_SYSCRT_DEBUG)) && defined(_CRTDBG_MAP_ALLOC)
#pragma pop_macro("_wfullpath")
#endif

_Check_return_wat_ _CRTIMP_ALT errno_t __ALTDECL _wmakepath_s(_Out_writes_z_(_SIZE) wchar_t * _PathResult, _In_ size_t _SIZE, _In_opt_z_ const wchar_t * _Drive, _In_opt_z_ const wchar_t * _Dir, _In_opt_z_ const wchar_t * _Filename,
        _In_opt_z_ const wchar_t * _Ext);        
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(errno_t, _wmakepath_s, wchar_t, _ResultPath, _In_opt_z_ const wchar_t *, _Drive, _In_opt_z_ const wchar_t *, _Dir, _In_opt_z_ const wchar_t *, _Filename, _In_opt_z_ const wchar_t *, _Ext)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
#pragma prefast (disable: __WARNING_BANNED_API_USAGE, "Banned API")
#pragma prefast (disable: __WARNING_BANNED_API_USAGEL2, "Banned API")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(void, __RETURN_POLICY_VOID, _CRTIMP, _wmakepath, _Pre_notnull_ _Post_z_, wchar_t, _ResultPath, _In_opt_z_ const wchar_t *, _Drive, _In_opt_z_ const wchar_t *, _Dir, _In_opt_z_ const wchar_t *, _Filename, _In_opt_z_ const wchar_t *, _Ext)
#pragma prefast(pop)
#ifndef _CRT_WPERROR_DEFINED
#define _CRT_WPERROR_DEFINED
_CRTIMP void __cdecl _wperror(_In_opt_z_ const wchar_t * _ErrMsg);
#endif 
_Check_return_ _CRTIMP int    __cdecl _wputenv(_In_z_ const wchar_t * _EnvString);
_Check_return_wat_ _CRTIMP errno_t __cdecl _wputenv_s(_In_z_ const wchar_t * _Name, _In_z_ const wchar_t * _Value);
_CRTIMP errno_t __cdecl _wsearchenv_s(_In_z_ const wchar_t * _Filename, _In_z_ const wchar_t * _EnvVar, _Out_writes_z_(_SizeInWords) wchar_t * _ResultPath, _In_ size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(errno_t, _wsearchenv_s, _In_z_ const wchar_t *, _Filename, _In_z_ const wchar_t *, _EnvVar, wchar_t, _ResultPath)
#pragma prefast(push)
#pragma prefast (disable: __WARNING_UNANNOTATED_BUFFER, "Inexpressible")
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(void, __RETURN_POLICY_VOID, _CRTIMP, _wsearchenv, _In_z_ const wchar_t *, _Filename, _In_z_ const wchar_t *, _EnvVar, _Pre_notnull_ _Post_z_, wchar_t, _ResultPath)
#pragma prefast(pop)
_CRT_INSECURE_DEPRECATE(_wsplitpath_s) _CRTIMP void   __cdecl _wsplitpath(_In_z_ const wchar_t * _FullPath, _Pre_maybenull_ _Post_z_ wchar_t * _Drive, _Pre_maybenull_ _Post_z_ wchar_t * _Dir, _Pre_maybenull_ _Post_z_ wchar_t * _Filename, _Pre_maybenull_ _Post_z_ wchar_t * _Ext);
_CRTIMP_ALT errno_t __ALTDECL _wsplitpath_s(_In_z_ const wchar_t * _FullPath, 
		_Out_writes_opt_z_(_DriveSize) wchar_t * _Drive, _In_ size_t _DriveSize, 
		_Out_writes_opt_z_(_DirSize) wchar_t * _Dir, _In_ size_t _DirSize, 
		_Out_writes_opt_z_(_FilenameSize) wchar_t * _Filename, _In_ size_t _FilenameSize, 
		_Out_writes_opt_z_(_ExtSize) wchar_t * _Ext, _In_ size_t _ExtSize);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(errno_t, _wsplitpath_s, wchar_t, _Path)

#define _WSTDLIBP_DEFINED
#endif

/* The Win32 API SetErrorMode, Beep and Sleep should be used instead. */
_CRT_OBSOLETE(SetErrorMode) _CRTIMP void __cdecl _seterrormode(_In_ int _Mode);
_CRT_OBSOLETE(Beep) _CRTIMP void __cdecl _beep(_In_ unsigned _Frequency, _In_ unsigned _Duration);
_CRT_OBSOLETE(Sleep) _CRTIMP void __cdecl _sleep(_In_ unsigned long _Duration);


#if     !__STDC__

/* Non-ANSI names for compatibility */

#ifndef __cplusplus
#define max(a,b)    (((a) > (b)) ? (a) : (b))
#define min(a,b)    (((a) < (b)) ? (a) : (b))
#endif

#define sys_errlist _sys_errlist
#define sys_nerr    _sys_nerr
#define environ     _environ

#pragma warning(push)
#pragma warning(disable: 4141) /* Using deprecated twice */ 
_Check_return_ _CRT_NONSTDC_DEPRECATE(_ecvt) _CRT_INSECURE_DEPRECATE(_ecvt_s) _CRTIMP char * __cdecl ecvt(_In_ double _Val, _In_ int _NumOfDigits, _Out_ int * _PtDec, _Out_ int * _PtSign);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_fcvt) _CRT_INSECURE_DEPRECATE(_fcvt_s) _CRTIMP char * __cdecl fcvt(_In_ double _Val, _In_ int _NumOfDec, _Out_ int * _PtDec, _Out_ int * _PtSign);
_CRT_NONSTDC_DEPRECATE(_gcvt) _CRT_INSECURE_DEPRECATE(_fcvt_s)		_CRTIMP char * __cdecl gcvt(_In_ double _Val, _In_ int _NumOfDigits, _Pre_notnull_ _Post_z_ char * _DstBuf);
_CRT_NONSTDC_DEPRECATE(_itoa) _CRT_INSECURE_DEPRECATE(_itoa_s)		_CRTIMP char * __cdecl itoa(_In_ int _Val, _Pre_notnull_ _Post_z_ char * _DstBuf, _In_ int _Radix);
_CRT_NONSTDC_DEPRECATE(_ltoa) _CRT_INSECURE_DEPRECATE(_ltoa_s)		_CRTIMP char * __cdecl ltoa(_In_ long _Val, _Pre_notnull_ _Post_z_ char * _DstBuf, _In_ int _Radix);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_putenv) _CRTIMP int    __cdecl putenv(_In_z_ const char * _EnvString);
_CRT_NONSTDC_DEPRECATE(_swab)										_CRTIMP void   __cdecl swab(_Inout_updates_z_(_SizeInBytes) char * _Buf1,_Inout_updates_z_(_SizeInBytes) char * _Buf2, _In_ int _SizeInBytes);
_CRT_NONSTDC_DEPRECATE(_ultoa) _CRT_INSECURE_DEPRECATE(_ultoa_s)	_CRTIMP char * __cdecl ultoa(_In_ unsigned long _Val, _Pre_notnull_ _Post_z_ char * _Dstbuf, _In_ int _Radix);
#pragma warning(pop)
onexit_t __cdecl onexit(_In_opt_ onexit_t _Func);

#endif  /* __STDC__ */

#ifdef  __cplusplus
}
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_STDLIB */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
