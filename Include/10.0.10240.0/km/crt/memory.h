/***
*memory.h - declarations for buffer (memory) manipulation routines
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This include file contains the function declarations for the
*       buffer (memory) manipulation routines.
*       [System V]
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_MEMORY
#define _INC_MEMORY

#include <crtdefs.h>

#ifdef  __cplusplus
extern "C" {
#endif

/* Function prototypes */
#ifndef _CRT_MEMORY_DEFINED
#define _CRT_MEMORY_DEFINED
_CRTIMP void *  __cdecl _memccpy( _Out_writes_bytes_opt_(_MaxCount) void * _Dst, _In_ const void * _Src, _In_ int _Val, _In_ size_t _MaxCount);
_Check_return_ _CRTIMP _CONST_RETURN void *  __cdecl memchr( _In_reads_bytes_opt_(_MaxCount) const void * _Buf , _In_ int _Val, _In_ size_t _MaxCount);
_Check_return_ _CRTIMP int     __cdecl _memicmp(_In_reads_bytes_opt_(_Size) const void * _Buf1, _In_reads_bytes_opt_(_Size) const void * _Buf2, _In_ size_t _Size);
_Check_return_ _CRTIMP int     __cdecl _memicmp_l(_In_reads_bytes_opt_(_Size) const void * _Buf1, _In_reads_bytes_opt_(_Size) const void * _Buf2, _In_ size_t _Size, _In_opt_ _locale_t _Locale);
        _Check_return_ int     __cdecl memcmp(_In_reads_bytes_opt_(_Size) const void * _Buf1, _In_reads_bytes_opt_(_Size) const void * _Buf2, _In_ size_t _Size);
_CRT_INSECURE_DEPRECATE_MEMORY(memcpy_s)
_Post_equal_to_(_Dst)
_At_buffer_((unsigned char*)_Dst, _Iter_, _Size, _Post_satisfies_(((unsigned char*)_Dst)[_Iter_] == ((unsigned char*)_Src)[_Iter_]))
void *  __cdecl memcpy(_Out_writes_bytes_all_(_Size) void * _Dst, _In_reads_bytes_(_Size) const void * _Src, _In_ size_t _Size);
#if __STDC_WANT_SECURE_LIB__
_CRTIMP_ALT errno_t  __cdecl memcpy_s(_Out_writes_bytes_to_opt_(_DstSize, _MaxCount) void * _Dst, _In_ rsize_t _DstSize, _In_reads_bytes_opt_(_MaxCount) const void * _Src, _In_ rsize_t _MaxCount);
#endif
        void *  __cdecl memset(_Out_writes_bytes_all_opt_(_Size) void * _Dst, _In_ int _Val, _In_ size_t _Size);

#if     !__STDC__
/* Non-ANSI names for compatibility */
_CRT_NONSTDC_DEPRECATE(_memccpy) _CRTIMP void * __cdecl memccpy(_Out_writes_bytes_opt_(_Size) void * _Dst, _In_reads_bytes_opt_(_Size) const void * _Src, _In_ int _Val, _In_ size_t _Size);
_Check_return_ _CRT_NONSTDC_DEPRECATE(_memicmp) _CRTIMP int __cdecl memicmp(_In_reads_bytes_opt_(_Size) const void * _Buf1, _In_reads_bytes_opt_(_Size) const void * _Buf2, _In_ size_t _Size);
#endif  /* __STDC__ */

#endif

#ifdef  __cplusplus
#ifndef _CPP_MEMCHR_DEFINED
#define _CPP_MEMCHR_DEFINED
extern "C++" _Check_return_ inline void * __CRTDECL memchr( _In_reads_bytes_opt_(_N) void * _Pv , _In_ int _C, _In_ size_t _N)
	{ return (void*)memchr((const void*)_Pv, _C, _N); }
#endif
#endif

#ifdef  __cplusplus
}
#endif

#endif  /* _INC_MEMORY */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
