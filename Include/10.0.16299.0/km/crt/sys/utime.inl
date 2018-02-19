/***
*utime.inl - inline definitions for time handling functions
*
*       Copyright (c) Microsoft Corporation. All rights reserved.
*
*Purpose:
*       This file contains the definition of the _utime() function.
*
*       [Public]
*
****/

#if     _MSC_VER > 1000
#pragma once
#endif

#include <crtdefs.h>

#ifndef _INC_UTIME_INL
#define _INC_UTIME_INL

/* _STATIC_ASSERT is for enforcing boolean/integral conditions at compile time.
   Since it is purely a compile-time mechanism that generates no code, the check
   is left in even if _DEBUG is not defined. */

#ifndef _STATIC_ASSERT
#define _STATIC_ASSERT(expr) typedef char __static_assert_t[ (expr) ]
#endif


#endif
/* 88bf0570-3001-4e78-a5f2-be5765546192 */ 
