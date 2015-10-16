/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntarm.w

Abstract:

    User mode visible ARM specific structures and constants.

    This module may not contain any definitions that are exposed in
    public kit headers.

--*/

#ifndef _NTARM_
#define _NTARM_

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

#include <ntarm_x.h>

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#pragma warning(disable:4201) // nameless struct/union
#endif
#endif

#if defined(_ARM_)

//
// Define intrinsics to turn off shrink wrapping in a function.
//

#define DISABLE_SHRINK_WRAPPING() { NOTHING };
#define ENABLE_SHRINK_WRAPPING()  { NOTHING };

//
//
//  ?? Values put in ExceptionRecord.ExceptionInformation[12]
//  ?? First parameter is always in ExceptionInformation[0],
//  ?? Second parameter is always in ExceptionInformation[1]
//

#define BREAKPOINT_BREAK 0
#define BREAKPOINT_PRINT 1
#define BREAKPOINT_PROMPT 2
#define BREAKPOINT_LOAD_SYMBOLS 3
#define BREAKPOINT_UNLOAD_SYMBOLS 4
#define BREAKPOINT_COMMAND_STRING 5
#define BREAKPOINT_HW_SYNCH_WATCH 6
#define BREAKPOINT_HW_ASYNCH_WATCH 7
#define BREAKPOINT_HW_BREAK 8

//
// Define ARM specific control space.
//

typedef enum _DEBUG_CONTROL_SPACE_ITEM {
    DEBUG_CONTROL_SPACE_PCR,
    DEBUG_CONTROL_SPACE_PRCB,
    DEBUG_CONTROL_SPACE_KSPECIAL,
    DEBUG_CONTROL_SPACE_THREAD,
    DEBUG_CONTROL_SPACE_MAXIMUM
} DEBUG_CONTROL_SPACE_ITEM;

//
// Define Address of User Shared Data.
//

#define MM_SHARED_USER_DATA_VA 0x7FFE0000

#define USER_SHARED_DATA ((KUSER_SHARED_DATA * const)(ULONG_PTR)MM_SHARED_USER_DATA_VA)

#define DOUBLE_FAULT_STACK_SIZE KERNEL_STACK_SIZE
#define ISR_STACK_SIZE KERNEL_STACK_SIZE

#define CONTEXT_TO_PROGRAM_COUNTER(Context) ((Context)->Pc)
#define PROGRAM_COUNTER_TO_CONTEXT(Context, ProgramCounter) \
    ((Context)->Pc = (ProgramCounter))
#define CONTEXT_TO_STACK_POINTER(Context) ((Context)->Sp)

#define CONTEXT_ALIGN (8)
#define CONTEXT_LENGTH (sizeof(CONTEXT))
#define CONTEXT_ROUND (CONTEXT_ALIGN - 1)

#endif // _ARM_

//
// Define ARM exception handling structures and function prototypes.
//

NTSYSAPI
VOID
NTAPI
RtlInitializeHistoryTable (
    VOID
    );

//
// Additional information supplied in QuerySectionInformation for images.
//

#define SECTION_ADDITIONAL_INFO_USED 0

#if defined(_MSC_VER)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#endif
#endif

#ifdef __cplusplus
}
#endif

#endif // _NTARM_  
