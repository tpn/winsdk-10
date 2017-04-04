/***
*time.h - definitions/declarations for time routines
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file has declarations of time routines and defines
*       the structure returned by the localtime and gmtime routines and
*       used by asctime.
*       [ANSI/System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_TIME
#define _INC_TIME

#include <crtdefs.h>

#if     !defined(_WIN32)
#error ERROR: Only Win32 target supported!
#endif


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


#include <crtdefs.h>

#ifndef _TIME32_T_DEFINED
typedef _W64 long __time32_t;   /* 32-bit time value */
#define _TIME32_T_DEFINED
#endif

#ifndef _TIME64_T_DEFINED
typedef __int64 __time64_t;     /* 64-bit time value */
#define _TIME64_T_DEFINED
#endif

#ifndef _TIME_T_DEFINED
#ifdef  _WIN64
typedef __int64   time_t;       /* time value */
#else
typedef _W64 long time_t;       /* time value */
#endif
#endif

#ifndef _CLOCK_T_DEFINED
typedef long clock_t;
#define _CLOCK_T_DEFINED
#endif

#ifndef _SIZE_T_DEFINED
#ifdef  _WIN64
typedef unsigned __int64    size_t;
#else
typedef _W64 unsigned int   size_t;
#endif
#define _SIZE_T_DEFINED
#endif

/* Define NULL pointer value */
#ifndef NULL
#ifdef __cplusplus
#define NULL    0
#else
#define NULL    ((void *)0)
#endif
#endif


#ifndef _TM_DEFINED
struct tm {
        int tm_sec;     /* seconds after the minute - [0,59] */
        int tm_min;     /* minutes after the hour - [0,59] */
        int tm_hour;    /* hours since midnight - [0,23] */
        int tm_mday;    /* day of the month - [1,31] */
        int tm_mon;     /* months since January - [0,11] */
        int tm_year;    /* years since 1900 */
        int tm_wday;    /* days since Sunday - [0,6] */
        int tm_yday;    /* days since January 1 - [0,365] */
        int tm_isdst;   /* daylight savings time flag */
        };
#define _TM_DEFINED
#endif


/* Clock ticks macro - ANSI version */

#define CLOCKS_PER_SEC  1000


/* Extern declarations for the global variables used by the ctime family of
 * routines.
 */
_CRTDATA(extern int _daylight;)
_CRTIMP errno_t __cdecl _get_daylight(_Out_ int * _Daylight);

_CRTDATA(extern long _dstbias;)
_CRTIMP errno_t __cdecl _get_dstbias(_Out_ long * _Daylight_savings_bias);

_CRTDATA(extern long _timezone;)
_CRTIMP errno_t __cdecl _get_timezone(_Out_ long * _Timezone);

_CRTDATA(extern char * _tzname[2];)
_CRTIMP errno_t __cdecl _get_tzname(_Out_ size_t *_ReturnValue, _Out_writes_z_(_SizeInBytes) char *_Buffer, _In_ size_t _SizeInBytes, _In_ int _Index);


/* Function prototypes */
_Check_return_ _CRT_INSECURE_DEPRECATE(asctime_s) _CRTIMP char * __cdecl asctime(_In_ const struct tm * _Tm);
#if __STDC_WANT_SECURE_LIB__
_Check_return_wat_ _CRTIMP errno_t __cdecl asctime_s(_Out_writes_(_SizeInBytes) _Post_readable_size_(26) char *_Buf, _In_range_(>=,26) size_t _SizeInBytes, _In_ const struct tm * _Tm);
#endif
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, asctime_s, _Post_readable_size_(26) char, _Buffer, _In_ const struct tm *, _Time)

_CRT_INSECURE_DEPRECATE(_ctime32_s) _CRTIMP char * __cdecl _ctime32(_In_ const __time32_t * _Time);
_Success_(return == 0) _CRTIMP errno_t __cdecl _ctime32_s(_Out_writes_(_SizeInBytes) _Post_readable_size_(26) char *_Buf, _In_ size_t _SizeInBytes, _In_ const __time32_t *_Time);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, _ctime32_s, _Post_readable_size_(26) char, _Buffer, _In_ const __time32_t *, _Time)

_Check_return_ _CRTIMP clock_t __cdecl clock(void);
_CRTIMP double __cdecl _difftime32(_In_ __time32_t _Time1, _In_ __time32_t _Time2);

_Check_return_ _CRT_INSECURE_DEPRECATE(_gmtime32_s) _CRTIMP struct tm * __cdecl _gmtime32(_In_ const __time32_t * _Time);
_Check_return_wat_ _CRTIMP errno_t __cdecl _gmtime32_s(_In_ struct tm *_Tm, _In_ const __time32_t * _Time);

_CRT_INSECURE_DEPRECATE(_localtime32_s) _CRTIMP struct tm * __cdecl _localtime32(_In_ const __time32_t * _Time);
_CRTIMP errno_t __cdecl _localtime32_s(_Out_ struct tm *_Tm, _In_ const __time32_t * _Time);

_CRTIMP _Success_(return > 0) size_t __cdecl strftime(_Out_writes_z_(_SizeInBytes) char * _Buf, _In_ size_t _SizeInBytes, _In_z_ _Printf_format_string_ const char * _Format, _In_ const struct tm * _Tm);
_CRTIMP _Success_(return > 0) size_t __cdecl _strftime_l(_Out_writes_z_(_Max_size) char *_Buf, _In_ size_t _Max_size, _In_z_ _Printf_format_string_ const char * _Format, _In_ const struct tm *_Tm, _In_opt_ _locale_t _Locale);

_Check_return_wat_ _CRTIMP errno_t __cdecl _strdate_s(_Out_writes_(_SizeInBytes) _Post_readable_size_(9) char *_Buf, _In_range_(>=, 9) size_t _SizeInBytes);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strdate_s, _Post_readable_size_(9) char, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _strdate, _Out_writes_z_(9), char, _Buffer)

_Check_return_wat_ _CRTIMP errno_t __cdecl _strtime_s(_Out_writes_(_SizeInBytes) _Post_readable_size_(9) char *_Buf , _In_range_(>=, 9) size_t _SizeInBytes);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _strtime_s, _Post_readable_size_(9) char, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(char *, __RETURN_POLICY_DST, _CRTIMP, _strtime, _Out_writes_z_(9), char, _Buffer)

_CRTIMP __time32_t __cdecl _time32(_Out_opt_ __time32_t * _Time);
_CRTIMP __time32_t __cdecl _mktime32(_Inout_ struct tm * _Tm);
_CRTIMP __time32_t __cdecl _mkgmtime32(_Inout_ struct tm * _Tm);

_CRTIMP void __cdecl _tzset(void);

_Check_return_ _CRTIMP double __cdecl _difftime64(_In_ __time64_t _Time1, _In_ __time64_t _Time2);
_CRT_INSECURE_DEPRECATE(_ctime64_s) _CRTIMP char * __cdecl _ctime64(_In_ const __time64_t * _Time);
_CRTIMP errno_t __cdecl _ctime64_s(_Out_writes_z_(_SizeInBytes) char *_Buf, _In_ size_t _SizeInBytes, _In_ const __time64_t * _Time);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, _ctime64_s, char, _Buffer, _In_ const __time64_t *, _Time)

_CRT_INSECURE_DEPRECATE(_gmtime64_s) _CRTIMP struct tm * __cdecl _gmtime64(_In_ const __time64_t * _Time);
_CRTIMP errno_t __cdecl _gmtime64_s(_Out_ struct tm *_Tm, _In_ const __time64_t *_Time);

_CRT_INSECURE_DEPRECATE(_localtime64_s) _CRTIMP struct tm * __cdecl _localtime64(_In_ const __time64_t * _Time);
_CRTIMP errno_t __cdecl _localtime64_s(_Out_ struct tm *_Tm, _In_ const __time64_t *_Time);

_CRTIMP __time64_t __cdecl _mktime64(_Inout_ struct tm * _Tm);
_CRTIMP __time64_t __cdecl _mkgmtime64(_Inout_ struct tm * _Tm);
_CRTIMP __time64_t __cdecl _time64(_Out_opt_ __time64_t * _Time);

_CRTIMP char * __cdecl ctime(const time_t *);
_CRTIMP double __cdecl difftime(time_t, time_t);
_CRTIMP struct tm * __cdecl gmtime(const time_t *);
_CRTIMP struct tm * __cdecl localtime(const time_t *);
_CRTIMP time_t __cdecl mktime(struct tm *);
_CRTIMP time_t __cdecl _mkgmtime(struct tm *);
_CRTIMP time_t __cdecl time(time_t *);

/* The Win32 API GetLocalTime and SetLocalTime should be used instead. */
_CRT_OBSOLETE(GetLocalTime) unsigned __cdecl _getsystime(_Out_ struct tm * _Tm);
_CRT_OBSOLETE(SetLocalTime) unsigned __cdecl _setsystime(_In_ struct tm * _Tm, unsigned _MilliSec);


#ifndef _SIZE_T_DEFINED
typedef unsigned int size_t;
#define _SIZE_T_DEFINED
#endif

#ifndef _WTIME_DEFINED

/* wide function prototypes, also declared in wchar.h */
 
_CRT_INSECURE_DEPRECATE(_wasctime_s) _CRTIMP wchar_t * __cdecl _wasctime(_In_ const struct tm * _Tm);
_CRTIMP errno_t __cdecl _wasctime_s(_Out_writes_(_SizeInWords) _Post_readable_size_(26) wchar_t *_Buf, _In_range_(>=, 26) size_t _SizeInWords, _In_ const struct tm * _Tm);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, _wasctime_s, _Post_readable_size_(26) wchar_t, _Buffer, _In_ const struct tm *, _Time)

_CRT_INSECURE_DEPRECATE(_wctime32_s) _CRTIMP wchar_t * __cdecl _wctime32(_In_ const __time32_t *_Time);
_Success_(return == 0) _CRTIMP errno_t __cdecl _wctime32_s(_Out_writes_(_SizeInWords) _Post_readable_size_(26) wchar_t* _Buf, _In_ size_t _SizeInWords, _In_ const __time32_t * _Time);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, _wctime32_s, _Post_readable_size_(26) wchar_t, _Buffer, _In_ const __time32_t *, _Time)

_CRTIMP _Success_(return > 0) size_t __cdecl wcsftime(_Out_writes_z_(_SizeInWords) wchar_t * _Buf, _In_ size_t _SizeInWords, _In_z_ _Printf_format_string_ const wchar_t * _Format,  _In_ const struct tm * _Tm);
_CRTIMP _Success_(return > 0) size_t __cdecl _wcsftime_l(_Out_writes_z_(_SizeInWords) wchar_t * _Buf, _In_ size_t _SizeInWords, _In_z_ _Printf_format_string_ const wchar_t *_Format, _In_ const struct tm *_Tm, _In_opt_ _locale_t _Locale);

_CRTIMP errno_t __cdecl _wstrdate_s(_Out_writes_(_SizeInWords) _Post_readable_size_(9) wchar_t * _Buf, _In_ size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wstrdate_s, _Post_readable_size_(9) wchar_t, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wstrdate, _Out_writes_z_(9), wchar_t, _Buffer)

_CRTIMP errno_t __cdecl _wstrtime_s(_Out_writes_(_SizeInWords) _Post_readable_size_(9) wchar_t * _Buf, _In_range_(>=, 9) size_t _SizeInWords);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(errno_t, _wstrtime_s, _Post_readable_size_(9) wchar_t, _Buffer)
__DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(wchar_t *, __RETURN_POLICY_DST, _CRTIMP, _wstrtime, _Out_writes_z_(9), wchar_t, _Buffer)

_CRT_INSECURE_DEPRECATE(_wctime64_s) _CRTIMP wchar_t * __cdecl _wctime64(_In_ const __time64_t * _Time);
_Success_(return == 0) _CRTIMP errno_t __cdecl _wctime64_s(_Out_writes_(_SizeInWords) _Post_readable_size_(26) wchar_t* _Buf, _In_ size_t _SizeInWords, _In_ const __time64_t *_Time);
__DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(errno_t, _wctime64_s, _Post_readable_size_(26) wchar_t, _Buffer, _In_ const __time64_t *, _Time)

_CRTIMP wchar_t * __cdecl _wctime(const time_t *);

#if !defined(RC_INVOKED) && !defined(__midl)
#include <wtime.inl>
#endif

#define _WTIME_DEFINED
#endif

#if !defined(RC_INVOKED) && !defined(__midl)
#include <time.inl>
#endif

#if     !__STDC__

/* Non-ANSI names for compatibility */

#define CLK_TCK  CLOCKS_PER_SEC

/*
daylight, timezone, and tzname are not available under /clr:pure.
Please use _daylight, _timezone, and _tzname or 
_get_daylight, _get_timezone, and _get_tzname instead.
*/
#if !defined(_M_CEE_PURE)
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_daylight) _CRTIMP extern int daylight;
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_timezone) _CRTIMP extern long timezone;
_CRT_INSECURE_DEPRECATE_GLOBALS(_get_tzname) _CRTIMP extern char * tzname[2];
#endif /* !defined(_M_CEE_PURE) */

_CRT_NONSTDC_DEPRECATE(_tzset) _CRTIMP void __cdecl tzset(void);

#endif  /* __STDC__ */


#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_TIME */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
