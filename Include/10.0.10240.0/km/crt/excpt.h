/***
*excpt.h - defines exception values, types and routines
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file contains the definitions and prototypes for the compiler-
*       dependent intrinsics, support functions and keywords which implement
*       the structured exception handling extensions.
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#ifndef _INC_EXCPT
#define _INC_EXCPT

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

/*
 * Exception disposition return values.
 */
typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;


/*
 * Prototype for SEH support function.
 */

#ifdef  _M_IX86

/*
 * Declarations to keep MS C 8 (386/486) compiler happy
 */
struct _EXCEPTION_RECORD;
struct _CONTEXT;

EXCEPTION_DISPOSITION __cdecl _except_handler (
    _In_ struct _EXCEPTION_RECORD *_ExceptionRecord,
    _In_ void * _EstablisherFrame,
    _Inout_ struct _CONTEXT *_ContextRecord,
    _Inout_ void * _DispatcherContext
    );

#elif   defined(_M_IA64)

/*
 * Declarations to keep IA64 compiler happy
 */
typedef struct _EXCEPTION_POINTERS *Exception_info_ptr;
struct _EXCEPTION_RECORD;
struct _CONTEXT;
struct _DISPATCHER_CONTEXT;

#ifndef _M_CEE_PURE

_CRTIMP EXCEPTION_DISPOSITION __cdecl __C_specific_handler (
    _In_ struct _EXCEPTION_RECORD *_ExceptionRecord,
    _In_ unsigned __int64 _MemoryStackFp,
    _In_ unsigned __int64 _BackingStoreFp,
    _Inout_ struct _CONTEXT *_ContextRecord,
    _Inout_ struct _DISPATCHER_CONTEXT *_DispatcherContext,
    _In_ unsigned __int64 _GlobalPointer
    );

#endif

#elif   defined(_M_AMD64) || defined(_M_ARM) || defined(_M_ARM64)

/*
 * Declarations to keep AMD64 compiler happy
 */
struct _EXCEPTION_RECORD;
struct _CONTEXT;
struct _DISPATCHER_CONTEXT;

#ifndef _M_CEE_PURE

_CRTIMP EXCEPTION_DISPOSITION __C_specific_handler (
    _In_ struct _EXCEPTION_RECORD * ExceptionRecord,
    _In_ void * EstablisherFrame,
    _Inout_ struct _CONTEXT * ContextRecord,
    _Inout_ struct _DISPATCHER_CONTEXT * DispatcherContext
);

#endif


#endif


/*
 * Keywords and intrinsics for SEH
 */

#ifdef  _MSC_VER

#define GetExceptionCode            _exception_code
#define exception_code              _exception_code
#define GetExceptionInformation     (struct _EXCEPTION_POINTERS *)_exception_info
#define exception_info              (struct _EXCEPTION_POINTERS *)_exception_info
#define AbnormalTermination         _abnormal_termination
#define abnormal_termination        _abnormal_termination

unsigned long __cdecl _exception_code(void);
void *        __cdecl _exception_info(void);
int           __cdecl _abnormal_termination(void);

#endif


/*
 * Legal values for expression in except().
 */

#define EXCEPTION_EXECUTE_HANDLER       1
#define EXCEPTION_CONTINUE_SEARCH       0
#define EXCEPTION_CONTINUE_EXECUTION    -1



#ifdef  __cplusplus
}
#endif

#ifdef  _MSC_VER
#pragma pack(pop)
#endif  /* _MSC_VER */

#endif  /* _INC_EXCPT */
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
