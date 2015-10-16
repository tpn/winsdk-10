/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    nxarm.w

Abstract:

    User mode visible ARM specific structures and constants.

    This file contains platform specific definitions that are included
    after all other files have been included from nt.h.

Author:

    Adam Glass (adamg) 4-26-2003

Revision History:

--*/

#ifndef _NXARM_
#define _NXARM_

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif


#if defined(_KERNEL_MODE)

//
// In kernel mode on ARM, it is not guaranteed safe to get the TEB via the
// CP15_TPIDRURW register, so get it via Ps instead.
//

#define NtCurrentTeb() ((PTEB) PsGetCurrentThreadTeb())

#else

//
// Define platform specific functions to access the TEB.
//

// begin_winnt

#if defined(_M_ARM) && !defined(__midl) && !defined(_M_CEE_PURE)

__forceinline
struct _TEB *
NtCurrentTeb (
    VOID
    )
{
    return (struct _TEB *)(ULONG_PTR)_MoveFromCoprocessor(CP15_TPIDRURW);
}

__forceinline
PVOID
GetCurrentFiber (
    VOID
    )
{
    return ((PNT_TIB )(ULONG_PTR)_MoveFromCoprocessor(CP15_TPIDRURW))->FiberData;
}

__forceinline
PVOID
GetFiberData (
    VOID
    )

{
    return *(PVOID *)GetCurrentFiber();
}

#endif // _M_ARM && !defined(__midl) && !defined(_M_CEE_PURE)

// end_winnt

#endif // defined(NTOS_KERNEL_RUNTIME)

#ifdef __cplusplus
}
#endif

#endif // _NXARM_
