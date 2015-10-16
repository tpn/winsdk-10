/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    ntarm_x.w

Abstract:

    User mode visible ARM specific structures and constants.

    This module may contain definitions that are exposed in kit headers
    for use by external developers.

--*/

#pragma once

#include "ntimage.h"

#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4820) // padding added after data member
#endif

// begin_winnt
//
// Scope table structure definition.
//

typedef struct _SCOPE_TABLE_ARM {
    ULONG Count;
    struct
    {
        ULONG BeginAddress;
        ULONG EndAddress;
        ULONG HandlerAddress;
        ULONG JumpTarget;
    } ScopeRecord[1];
} SCOPE_TABLE_ARM, *PSCOPE_TABLE_ARM;

// end_winnt

// begin_ntddk begin_wdm begin_nthal begin_winnt begin_ntminiport begin_wx86

#ifdef _ARM_

// end_ntddk end_wdm end_nthal end_winnt end_ntminiport end_wx86
// begin_winnt begin_wdm begin_ntndis begin_ntosp begin_ntminiport

#if defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS)

#include <intrin.h>

#if !defined(_M_CEE_PURE)

#ifdef __cplusplus
extern "C" {
#endif

//
// Memory barriers and prefetch intrinsics.
//

#pragma intrinsic(__yield)
#pragma intrinsic(__prefetch)

#if (_MSC_FULL_VER >= 170040825)
#pragma intrinsic(__dmb)
#pragma intrinsic(__dsb)
#pragma intrinsic(__isb)
#else
#define __dmb(x) { __emit(0xF3BF); __emit(0x8F5F); }
#define __dsb(x) { __emit(0xF3BF); __emit(0x8F4F); }
#define __isb(x) { __emit(0xF3BF); __emit(0x8F6F); }
#endif

#pragma intrinsic(_ReadWriteBarrier)
#pragma intrinsic(_WriteBarrier)

FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
    __dmb(_ARM_BARRIER_ISHST);
    __yield();
}

#define MemoryBarrier()             __dmb(_ARM_BARRIER_SY)
#define PreFetchCacheLine(l,a)      __prefetch((const void *) (a))
#define PrefetchForWrite(p)         __prefetch((const void *) (p))
#define ReadForWriteAccess(p)       (*(p))

#define _DataSynchronizationBarrier()        __dsb(_ARM_BARRIER_SY)
#define _InstructionSynchronizationBarrier() __isb(_ARM_BARRIER_SY)

//
// Define bit test intrinsics.
//

#define BitTest _bittest
#define BitTestAndComplement _bittestandcomplement
#define BitTestAndSet _bittestandset
#define BitTestAndReset _bittestandreset
#define InterlockedBitTestAndSet _interlockedbittestandset
#define InterlockedBitTestAndSetAcquire _interlockedbittestandset_acq
#define InterlockedBitTestAndSetRelease _interlockedbittestandset_rel
#define InterlockedBitTestAndSetNoFence _interlockedbittestandset_nf
#define InterlockedBitTestAndReset _interlockedbittestandreset
#define InterlockedBitTestAndResetAcquire _interlockedbittestandreset_acq
#define InterlockedBitTestAndResetRelease _interlockedbittestandreset_rel
#define InterlockedBitTestAndResetNoFence _interlockedbittestandreset_nf

#pragma intrinsic(_bittest)
#pragma intrinsic(_bittestandcomplement)
#pragma intrinsic(_bittestandset)
#pragma intrinsic(_bittestandreset)
#pragma intrinsic(_interlockedbittestandset)
#pragma intrinsic(_interlockedbittestandset_acq)
#pragma intrinsic(_interlockedbittestandset_rel)
#pragma intrinsic(_interlockedbittestandset_nf)
#pragma intrinsic(_interlockedbittestandreset)
#pragma intrinsic(_interlockedbittestandreset_acq)
#pragma intrinsic(_interlockedbittestandreset_rel)
#pragma intrinsic(_interlockedbittestandreset_nf)

//
// Define bit scan functions
//

#define BitScanForward _BitScanForward
#define BitScanReverse _BitScanReverse

#pragma intrinsic(_BitScanForward)
#pragma intrinsic(_BitScanReverse)

//
// Interlocked intrinsic functions.
//

#pragma intrinsic(_InterlockedAnd8)
#pragma intrinsic(_InterlockedOr8)
#pragma intrinsic(_InterlockedXor8)
#pragma intrinsic(_InterlockedExchangeAdd8)

#pragma intrinsic(_InterlockedAnd16)
#pragma intrinsic(_InterlockedOr16)
#pragma intrinsic(_InterlockedXor16)
#pragma intrinsic(_InterlockedIncrement16)
#pragma intrinsic(_InterlockedDecrement16)
#pragma intrinsic(_InterlockedCompareExchange16)

#pragma intrinsic(_InterlockedAnd)
#pragma intrinsic(_InterlockedOr)
#pragma intrinsic(_InterlockedXor)
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedExchange)
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedCompareExchange)

#pragma intrinsic(_InterlockedAnd64)
#pragma intrinsic(_InterlockedOr64)
#pragma intrinsic(_InterlockedXor64)
#pragma intrinsic(_InterlockedIncrement64)
#pragma intrinsic(_InterlockedDecrement64)
#pragma intrinsic(_InterlockedExchange64)
#pragma intrinsic(_InterlockedCompareExchange64)

#pragma intrinsic(_InterlockedExchangePointer)
#pragma intrinsic(_InterlockedCompareExchangePointer)

#define InterlockedAnd8 _InterlockedAnd8
#define InterlockedOr8 _InterlockedOr8
#define InterlockedXor8 _InterlockedXor8
#define InterlockedExchangeAdd8 _InterlockedExchangeAdd8

#define InterlockedAnd16 _InterlockedAnd16
#define InterlockedOr16 _InterlockedOr16
#define InterlockedXor16 _InterlockedXor16
#define InterlockedIncrement16 _InterlockedIncrement16
#define InterlockedDecrement16 _InterlockedDecrement16
#define InterlockedCompareExchange16 _InterlockedCompareExchange16

#define InterlockedAnd _InterlockedAnd
#define InterlockedOr _InterlockedOr
#define InterlockedXor _InterlockedXor
#define InterlockedIncrement _InterlockedIncrement
#define InterlockedDecrement _InterlockedDecrement
#define InterlockedAdd _InterlockedAdd
#define InterlockedExchange _InterlockedExchange
#define InterlockedExchangeAdd _InterlockedExchangeAdd
#define InterlockedCompareExchange _InterlockedCompareExchange

#define InterlockedAnd64 _InterlockedAnd64
#define InterlockedAndAffinity InterlockedAnd64
#define InterlockedOr64 _InterlockedOr64
#define InterlockedOrAffinity InterlockedOr64
#define InterlockedXor64 _InterlockedXor64
#define InterlockedIncrement64 _InterlockedIncrement64
#define InterlockedDecrement64 _InterlockedDecrement64
#define InterlockedAdd64 _InterlockedAdd64
#define InterlockedExchange64 _InterlockedExchange64
#define InterlockedExchangeAdd64 _InterlockedExchangeAdd64
#define InterlockedCompareExchange64 _InterlockedCompareExchange64

#define InterlockedExchangePointer _InterlockedExchangePointer
#define InterlockedCompareExchangePointer _InterlockedCompareExchangePointer

#pragma intrinsic(_InterlockedExchange16)
#define InterlockedExchange16 _InterlockedExchange16

#pragma intrinsic(_InterlockedAnd8_acq)
#pragma intrinsic(_InterlockedAnd8_rel)
#pragma intrinsic(_InterlockedAnd8_nf)
#pragma intrinsic(_InterlockedOr8_acq)
#pragma intrinsic(_InterlockedOr8_rel)
#pragma intrinsic(_InterlockedOr8_nf)
#pragma intrinsic(_InterlockedXor8_acq)
#pragma intrinsic(_InterlockedXor8_rel)
#pragma intrinsic(_InterlockedXor8_nf)

#pragma intrinsic(_InterlockedAnd16_acq)
#pragma intrinsic(_InterlockedAnd16_rel)
#pragma intrinsic(_InterlockedAnd16_nf)
#pragma intrinsic(_InterlockedOr16_acq)
#pragma intrinsic(_InterlockedOr16_rel)
#pragma intrinsic(_InterlockedOr16_nf)
#pragma intrinsic(_InterlockedXor16_acq)
#pragma intrinsic(_InterlockedXor16_rel)
#pragma intrinsic(_InterlockedXor16_nf)
#pragma intrinsic(_InterlockedIncrement16_acq)
#pragma intrinsic(_InterlockedIncrement16_rel)
#pragma intrinsic(_InterlockedIncrement16_nf)
#pragma intrinsic(_InterlockedDecrement16_acq)
#pragma intrinsic(_InterlockedDecrement16_rel)
#pragma intrinsic(_InterlockedDecrement16_nf)
#pragma intrinsic(_InterlockedExchange16_acq)
#pragma intrinsic(_InterlockedExchange16_nf)
#pragma intrinsic(_InterlockedCompareExchange16_acq)
#pragma intrinsic(_InterlockedCompareExchange16_rel)
#pragma intrinsic(_InterlockedCompareExchange16_nf)

#pragma intrinsic(_InterlockedAnd_acq)
#pragma intrinsic(_InterlockedAnd_rel)
#pragma intrinsic(_InterlockedAnd_nf)
#pragma intrinsic(_InterlockedOr_acq)
#pragma intrinsic(_InterlockedOr_rel)
#pragma intrinsic(_InterlockedOr_nf)
#pragma intrinsic(_InterlockedXor_acq)
#pragma intrinsic(_InterlockedXor_rel)
#pragma intrinsic(_InterlockedXor_nf)
#pragma intrinsic(_InterlockedIncrement_acq)
#pragma intrinsic(_InterlockedIncrement_rel)
#pragma intrinsic(_InterlockedIncrement_nf)
#pragma intrinsic(_InterlockedDecrement_acq)
#pragma intrinsic(_InterlockedDecrement_rel)
#pragma intrinsic(_InterlockedDecrement_nf)
#pragma intrinsic(_InterlockedExchange_acq)
#pragma intrinsic(_InterlockedExchange_nf)
#pragma intrinsic(_InterlockedExchangeAdd_acq)
#pragma intrinsic(_InterlockedExchangeAdd_rel)
#pragma intrinsic(_InterlockedExchangeAdd_nf)
#pragma intrinsic(_InterlockedCompareExchange_acq)
#pragma intrinsic(_InterlockedCompareExchange_rel)
#pragma intrinsic(_InterlockedCompareExchange_nf)

#pragma intrinsic(_InterlockedAnd64_acq)
#pragma intrinsic(_InterlockedAnd64_rel)
#pragma intrinsic(_InterlockedAnd64_nf)
#pragma intrinsic(_InterlockedOr64_acq)
#pragma intrinsic(_InterlockedOr64_rel)
#pragma intrinsic(_InterlockedOr64_nf)
#pragma intrinsic(_InterlockedXor64_acq)
#pragma intrinsic(_InterlockedXor64_rel)
#pragma intrinsic(_InterlockedXor64_nf)
#pragma intrinsic(_InterlockedIncrement64_acq)
#pragma intrinsic(_InterlockedIncrement64_rel)
#pragma intrinsic(_InterlockedIncrement64_nf)
#pragma intrinsic(_InterlockedDecrement64_acq)
#pragma intrinsic(_InterlockedDecrement64_rel)
#pragma intrinsic(_InterlockedDecrement64_nf)
#pragma intrinsic(_InterlockedExchange64_acq)
#pragma intrinsic(_InterlockedExchange64_nf)
#pragma intrinsic(_InterlockedCompareExchange64_acq)
#pragma intrinsic(_InterlockedCompareExchange64_rel)
#pragma intrinsic(_InterlockedCompareExchange64_nf)

#pragma intrinsic(_InterlockedExchangePointer_acq)
#pragma intrinsic(_InterlockedExchangePointer_nf)
#pragma intrinsic(_InterlockedCompareExchangePointer_acq)
#pragma intrinsic(_InterlockedCompareExchangePointer_rel)
#pragma intrinsic(_InterlockedCompareExchangePointer_nf)

#define InterlockedAndAcquire8 _InterlockedAnd8_acq
#define InterlockedAndRelease8 _InterlockedAnd8_rel
#define InterlockedAndNoFence8 _InterlockedAnd8_nf
#define InterlockedOrAcquire8 _InterlockedOr8_acq
#define InterlockedOrRelease8 _InterlockedOr8_rel
#define InterlockedOrNoFence8 _InterlockedOr8_nf
#define InterlockedXorAcquire8 _InterlockedXor8_acq
#define InterlockedXorRelease8 _InterlockedXor8_rel
#define InterlockedXorNoFence8 _InterlockedXor8_nf

#define InterlockedAndAcquire16 _InterlockedAnd16_acq
#define InterlockedAndRelease16 _InterlockedAnd16_rel
#define InterlockedAndNoFence16 _InterlockedAnd16_nf
#define InterlockedOrAcquire16 _InterlockedOr16_acq
#define InterlockedOrRelease16 _InterlockedOr16_rel
#define InterlockedOrNoFence16 _InterlockedOr16_nf
#define InterlockedXorAcquire16 _InterlockedXor16_acq
#define InterlockedXorRelease16 _InterlockedXor16_rel
#define InterlockedXorNoFence16 _InterlockedXor16_nf
#define InterlockedIncrementAcquire16 _InterlockedIncrement16_acq
#define InterlockedIncrementRelease16 _InterlockedIncrement16_rel
#define InterlockedIncrementNoFence16 _InterlockedIncrement16_nf
#define InterlockedDecrementAcquire16 _InterlockedDecrement16_acq
#define InterlockedDecrementRelease16 _InterlockedDecrement16_rel
#define InterlockedDecrementNoFence16 _InterlockedDecrement16_nf
#define InterlockedExchangeAcquire16 _InterlockedExchange16_acq
#define InterlockedExchangeNoFence16 _InterlockedExchange16_nf
#define InterlockedCompareExchangeAcquire16 _InterlockedCompareExchange16_acq
#define InterlockedCompareExchangeRelease16 _InterlockedCompareExchange16_rel
#define InterlockedCompareExchangeNoFence16 _InterlockedCompareExchange16_nf

#define InterlockedAndAcquire _InterlockedAnd_acq
#define InterlockedAndRelease _InterlockedAnd_rel
#define InterlockedAndNoFence _InterlockedAnd_nf
#define InterlockedOrAcquire _InterlockedOr_acq
#define InterlockedOrRelease _InterlockedOr_rel
#define InterlockedOrNoFence _InterlockedOr_nf
#define InterlockedXorAcquire _InterlockedXor_acq
#define InterlockedXorRelease _InterlockedXor_rel
#define InterlockedXorNoFence _InterlockedXor_nf
#define InterlockedIncrementAcquire _InterlockedIncrement_acq
#define InterlockedIncrementRelease _InterlockedIncrement_rel
#define InterlockedIncrementNoFence _InterlockedIncrement_nf
#define InterlockedDecrementAcquire _InterlockedDecrement_acq
#define InterlockedDecrementRelease _InterlockedDecrement_rel
#define InterlockedDecrementNoFence _InterlockedDecrement_nf
#define InterlockedAddAcquire _InterlockedAdd_acq
#define InterlockedAddRelease _InterlockedAdd_rel
#define InterlockedAddNoFence _InterlockedAdd_nf
#define InterlockedExchangeAcquire _InterlockedExchange_acq
#define InterlockedExchangeNoFence _InterlockedExchange_nf
#define InterlockedExchangeAddAcquire _InterlockedExchangeAdd_acq
#define InterlockedExchangeAddRelease _InterlockedExchangeAdd_rel
#define InterlockedExchangeAddNoFence _InterlockedExchangeAdd_nf
#define InterlockedCompareExchangeAcquire _InterlockedCompareExchange_acq
#define InterlockedCompareExchangeRelease _InterlockedCompareExchange_rel
#define InterlockedCompareExchangeNoFence _InterlockedCompareExchange_nf

#define InterlockedAndAcquire64 _InterlockedAnd64_acq
#define InterlockedAndRelease64 _InterlockedAnd64_rel
#define InterlockedAndNoFence64 _InterlockedAnd64_nf
#define InterlockedOrAcquire64 _InterlockedOr64_acq
#define InterlockedOrRelease64 _InterlockedOr64_rel
#define InterlockedOrNoFence64 _InterlockedOr64_nf
#define InterlockedXorAcquire64 _InterlockedXor64_acq
#define InterlockedXorRelease64 _InterlockedXor64_rel
#define InterlockedXorNoFence64 _InterlockedXor64_nf
#define InterlockedIncrementAcquire64 _InterlockedIncrement64_acq
#define InterlockedIncrementRelease64 _InterlockedIncrement64_rel
#define InterlockedIncrementNoFence64 _InterlockedIncrement64_nf
#define InterlockedDecrementAcquire64 _InterlockedDecrement64_acq
#define InterlockedDecrementRelease64 _InterlockedDecrement64_rel
#define InterlockedDecrementNoFence64 _InterlockedDecrement64_nf
#define InterlockedAddAcquire64 _InterlockedAdd64_acq
#define InterlockedAddRelease64 _InterlockedAdd64_rel
#define InterlockedAddNoFence64 _InterlockedAdd64_nf
#define InterlockedExchangeAcquire64 _InterlockedExchange64_acq
#define InterlockedExchangeNoFence64 _InterlockedExchange64_nf
#define InterlockedExchangeAddAcquire64 _InterlockedExchangeAdd64_acq
#define InterlockedExchangeAddRelease64 _InterlockedExchangeAdd64_rel
#define InterlockedExchangeAddNoFence64 _InterlockedExchangeAdd64_nf
#define InterlockedCompareExchangeAcquire64 _InterlockedCompareExchange64_acq
#define InterlockedCompareExchangeRelease64 _InterlockedCompareExchange64_rel
#define InterlockedCompareExchangeNoFence64 _InterlockedCompareExchange64_nf

#define InterlockedExchangePointerAcquire _InterlockedExchangePointer_acq
#define InterlockedExchangePointerNoFence _InterlockedExchangePointer_nf
#define InterlockedCompareExchangePointerAcquire _InterlockedCompareExchangePointer_acq
#define InterlockedCompareExchangePointerRelease _InterlockedCompareExchangePointer_rel
#define InterlockedCompareExchangePointerNoFence _InterlockedCompareExchangePointer_nf

#define InterlockedExchangeAddSizeT(a, b) InterlockedExchangeAdd((LONG *)a, b)
#define InterlockedExchangeAddSizeTAcquire(a, b) InterlockedExchangeAddAcquire((LONG *)a, b)
#define InterlockedExchangeAddSizeTNoFence(a, b) InterlockedExchangeAddNoFence((LONG *)a, b)
#define InterlockedIncrementSizeT(a) InterlockedIncrement((LONG *)a)
#define InterlockedIncrementSizeTNoFence(a) InterlockedIncrementNoFence((LONG *)a)
#define InterlockedDecrementSizeT(a) InterlockedDecrement((LONG *)a)
#define InterlockedDecrementSizeTNoFence(a) InterlockedDecrementNoFence((LONG *)a)

//
// Define accessors for volatile loads and stores.
//

#pragma intrinsic(__iso_volatile_load8)
#pragma intrinsic(__iso_volatile_load16)
#pragma intrinsic(__iso_volatile_load32)
#pragma intrinsic(__iso_volatile_load64)
#pragma intrinsic(__iso_volatile_store8)
#pragma intrinsic(__iso_volatile_store16)
#pragma intrinsic(__iso_volatile_store32)
#pragma intrinsic(__iso_volatile_store64)

// end_wdm end_ntndis end_ntosp end_ntminiport
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
// begin_wdm begin_ntndis begin_ntosp begin_ntminiport

FORCEINLINE
CHAR
ReadAcquire8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
CHAR
ReadNoFence8 (
    _In_ _Interlocked_operand_ CHAR const volatile *Source
    )

{

    CHAR Value;

    Value = __iso_volatile_load8(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence8 (
    _Out_ _Interlocked_operand_ CHAR volatile *Destination,
    _In_ CHAR Value
    )

{

    __iso_volatile_store8(Destination, Value);
    return;
}

FORCEINLINE
SHORT
ReadAcquire16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
SHORT
ReadNoFence16 (
    _In_ _Interlocked_operand_ SHORT const volatile *Source
    )

{

    SHORT Value;

    Value = __iso_volatile_load16(Source);
    return Value;
}

FORCEINLINE
VOID
WriteRelease16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence16 (
    _Out_ _Interlocked_operand_ SHORT volatile *Destination,
    _In_ SHORT Value
    )

{

    __iso_volatile_store16(Destination, Value);
    return;
}

FORCEINLINE
LONG
ReadAcquire (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG
ReadNoFence (
    _In_ _Interlocked_operand_ LONG const volatile *Source
    )

{

    LONG Value;

    Value = __iso_volatile_load32((int *)Source);
    return Value;
}

CFORCEINLINE
VOID
WriteRelease (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence (
    _Out_ _Interlocked_operand_ LONG volatile *Destination,
    _In_ LONG Value
    )

{

    __iso_volatile_store32((int *)Destination, Value);
    return;
}

FORCEINLINE
LONG64
ReadAcquire64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    __dmb(_ARM_BARRIER_ISH);
    return Value;
}

FORCEINLINE
LONG64
ReadNoFence64 (
    _In_ _Interlocked_operand_ LONG64 const volatile *Source
    )

{

    LONG64 Value;

    Value = __iso_volatile_load64(Source);
    return Value;
}

CFORCEINLINE
VOID
WriteRelease64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __dmb(_ARM_BARRIER_ISH);
    __iso_volatile_store64(Destination, Value);
    return;
}

FORCEINLINE
VOID
WriteNoFence64 (
    _Out_ _Interlocked_operand_ LONG64 volatile *Destination,
    _In_ LONG64 Value
    )

{

    __iso_volatile_store64(Destination, Value);
    return;
}

// end_wdm end_ntndis end_ntosp end_ntminiport
#endif // WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
// begin_wdm begin_ntndis begin_ntosp begin_ntminiport

//
// Define coprocessor access intrinsics.  Coprocessor 15 contains
// registers for the MMU, cache, TLB, feature bits, core
// identification and performance counters.
//

#define CP15_PMSELR            15, 0,  9, 12, 5         // Event Counter Selection Register
#define CP15_PMXEVCNTR         15, 0,  9, 13, 2         // Event Count Register
#define CP15_TPIDRURW          15, 0, 13,  0, 2         // Software Thread ID Register, User Read/Write
#define CP15_TPIDRURO          15, 0, 13,  0, 3         // Software Thread ID Register, User Read Only
#define CP15_TPIDRPRW          15, 0, 13,  0, 4         // Software Thread ID Register, Privileged Only

#pragma intrinsic(_MoveToCoprocessor)
#pragma intrinsic(_MoveFromCoprocessor)

//
// Coprocessor registers for synchronization
//

#define _InvalidateBTAC() _MoveToCoprocessor(0, CP15_BPIALL)

//
// PreFetchCacheLine level defines.
//

#define PF_TEMPORAL_LEVEL_1         0
#define PF_TEMPORAL_LEVEL_2         1
#define PF_TEMPORAL_LEVEL_3         2
#define PF_NON_TEMPORAL_LEVEL_ALL   3

//
// Define function to read the value of the time stamp counter which
// ARM doesn't have.
//

ULONG64
ReadTimeStampCounter(
    VOID
    );

FORCEINLINE
ULONG64
ReadPMC (
    _In_ ULONG Counter
    )
{

    _MoveToCoprocessor(Counter, CP15_PMSELR);
    return (ULONG64)_MoveFromCoprocessor(CP15_PMXEVCNTR);
}

#ifdef __cplusplus
}
#endif

#endif // !defined(_M_CEE_PURE)

#endif // defined(_M_ARM) && !defined(RC_INVOKED) && !defined(MIDL_PASS) && !defined(_M_CEE_PURE)

#if defined(_M_CEE_PURE)
FORCEINLINE
VOID
YieldProcessor (
    VOID
    )
{
}
#endif

// end_winnt end_wdm end_ntndis end_ntosp end_ntminiport
// begin_ntddk
//
// Size of kernel mode stack.
//

#define KERNEL_STACK_SIZE         0x3000

//
// Define size of large kernel mode stack for callbacks.
//

#define KERNEL_LARGE_STACK_SIZE   0xF000

//
// Define number of pages to initialize in a large kernel stack.
//

#define KERNEL_LARGE_STACK_COMMIT KERNEL_STACK_SIZE

//
// Define the size of the stack used for processing an MCA exception.
//

#define KERNEL_MCA_EXCEPTION_STACK_SIZE 0x2000

// end_ntddk
// begin_nthal
//
// Define stack alignment and rounding values.
//

#define STACK_ALIGN_SHIFT   (3UL)
#define STACK_ALIGN         (1U << STACK_ALIGN_SHIFT)
#define STACK_ROUND         (STACK_ALIGN - 1)

// end_nthal
// begin_winnt begin_ntddk
//
// The following values specify the type of access in the first parameter
// of the exception record whan the exception code specifies an access
// violation.
//

#define EXCEPTION_READ_FAULT 0          // exception caused by a read
#define EXCEPTION_WRITE_FAULT 1         // exception caused by a write
#define EXCEPTION_EXECUTE_FAULT 8       // exception caused by an instruction fetch

// begin_wx86
//
// The following flags control the contents of the CONTEXT structure.
//

#if !defined(RC_INVOKED)

#define CONTEXT_ARM   0x00200000L

// end_wx86

#define CONTEXT_CONTROL (CONTEXT_ARM | 0x1L)
#define CONTEXT_INTEGER (CONTEXT_ARM | 0x2L)
#define CONTEXT_FLOATING_POINT  (CONTEXT_ARM | 0x4L)
#define CONTEXT_DEBUG_REGISTERS (CONTEXT_ARM | 0x8L)

#define CONTEXT_FULL (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_FLOATING_POINT)

#define CONTEXT_ALL (CONTEXT_CONTROL | CONTEXT_INTEGER | CONTEXT_FLOATING_POINT | CONTEXT_DEBUG_REGISTERS)

#define CONTEXT_EXCEPTION_ACTIVE 0x8000000L
#define CONTEXT_SERVICE_ACTIVE 0x10000000L
#define CONTEXT_EXCEPTION_REQUEST 0x40000000L
#define CONTEXT_EXCEPTION_REPORTING 0x80000000L

//
// This flag is set by the unwinder if it has unwound to a call
// site, and cleared whenever it unwinds through a trap frame.
// It is used by language-specific exception handlers to help
// differentiate exception scopes during dispatching.
//

#define CONTEXT_UNWOUND_TO_CALL 0x20000000

// begin_wx86

#endif // !defined(RC_INVOKED)

//
// Define initial Cpsr/Fpscr value
//

#define INITIAL_CPSR 0x10
#define INITIAL_FPSCR 0

//
// Specify the number of breakpoints and watchpoints that the OS
// will track. Architecturally, ARM supports up to 16. In practice,
// however, almost no one implements more than 4 of each.
//

#define ARM_MAX_BREAKPOINTS     8
#define ARM_MAX_WATCHPOINTS     1

//
// Context Frame
//
//  This frame has a several purposes: 1) it is used as an argument to
//  NtContinue, 2) it is used to constuct a call frame for APC delivery,
//  and 3) it is used in the user level thread creation routines.
//
//
// The flags field within this record controls the contents of a CONTEXT
// record.
//
// If the context record is used as an input parameter, then for each
// portion of the context record controlled by a flag whose value is
// set, it is assumed that that portion of the context record contains
// valid context. If the context record is being used to modify a threads
// context, then only that portion of the threads context is modified.
//
// If the context record is used as an output parameter to capture the
// context of a thread, then only those portions of the thread's context
// corresponding to set flags will be returned.
//
// CONTEXT_CONTROL specifies Sp, Lr, Pc, and Cpsr
//
// CONTEXT_INTEGER specifies R0-R12
//
// CONTEXT_FLOATING_POINT specifies Q0-Q15 / D0-D31 / S0-S31
//
// CONTEXT_DEBUG_REGISTERS specifies up to 16 of DBGBVR, DBGBCR, DBGWVR,
//      DBGWCR.
//

typedef struct _NEON128 {
    ULONGLONG Low;
    LONGLONG High;
} NEON128, *PNEON128;

typedef struct DECLSPEC_ALIGN(8) _CONTEXT {

    //
    // Control flags.
    //

    ULONG ContextFlags;

    //
    // Integer registers
    //

    ULONG R0;
    ULONG R1;
    ULONG R2;
    ULONG R3;
    ULONG R4;
    ULONG R5;
    ULONG R6;
    ULONG R7;
    ULONG R8;
    ULONG R9;
    ULONG R10;
    ULONG R11;
    ULONG R12;

    //
    // Control Registers
    //

    ULONG Sp;
    ULONG Lr;
    ULONG Pc;
    ULONG Cpsr;

    //
    // Floating Point/NEON Registers
    //

    ULONG Fpscr;
    ULONG Padding;
    union {
        NEON128 Q[16];
        ULONGLONG D[32];
        ULONG S[32];
    } DUMMYUNIONNAME;

    //
    // Debug registers
    //

    ULONG Bvr[ARM_MAX_BREAKPOINTS];
    ULONG Bcr[ARM_MAX_BREAKPOINTS];
    ULONG Wvr[ARM_MAX_WATCHPOINTS];
    ULONG Wcr[ARM_MAX_WATCHPOINTS];

    ULONG Padding2[2];

} CONTEXT, *PCONTEXT;

// end_ntddk end_winnt end_wx86

// begin_wdm begin_ntosp

#if defined(_KERNEL_MODE) || defined(_BOOT_ENVIRONMENT)

#define KI_USER_SHARED_DATA 0xFFFF9000

#define SharedUserData ((KUSER_SHARED_DATA * const)KI_USER_SHARED_DATA)

#endif

// end_wdm end_ntosp

// begin_wx86 begin_nthal
//
// end_wx86 end_nthal
// begin_ntddk begin_wdm begin_nthal begin_ntminiport

#endif // _ARM_

// end_ntddk end_wdm end_nthal end_ntminiport
// begin_winnt
//
// Select platform-specific definitions
//

typedef struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY RUNTIME_FUNCTION, *PRUNTIME_FUNCTION;
typedef SCOPE_TABLE_ARM SCOPE_TABLE, *PSCOPE_TABLE;

//
// Define unwind information flags.
//

#define UNW_FLAG_NHANDLER               0x0             /* any handler */
#define UNW_FLAG_EHANDLER               0x1             /* filter handler */
#define UNW_FLAG_UHANDLER               0x2             /* unwind handler */

//
// Define unwind history table structure.
//

#define UNWIND_HISTORY_TABLE_SIZE 12

typedef struct _UNWIND_HISTORY_TABLE_ENTRY {
    ULONG ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
} UNWIND_HISTORY_TABLE_ENTRY, *PUNWIND_HISTORY_TABLE_ENTRY;

typedef struct _UNWIND_HISTORY_TABLE {
    ULONG Count;
    UCHAR LocalHint;
    UCHAR GlobalHint;
    UCHAR Search;
    UCHAR Once;
    ULONG LowAddress;
    ULONG HighAddress;
    UNWIND_HISTORY_TABLE_ENTRY Entry[UNWIND_HISTORY_TABLE_SIZE];
} UNWIND_HISTORY_TABLE, *PUNWIND_HISTORY_TABLE;

//
// Define exception dispatch context structure.
//

typedef struct _DISPATCHER_CONTEXT {
    ULONG ControlPc;
    ULONG ImageBase;
    PRUNTIME_FUNCTION FunctionEntry;
    ULONG EstablisherFrame;
    ULONG TargetPc;
    PCONTEXT ContextRecord;
    PEXCEPTION_ROUTINE LanguageHandler;
    PVOID HandlerData;
    PUNWIND_HISTORY_TABLE HistoryTable;
    ULONG ScopeIndex;
    BOOLEAN ControlPcIsUnwound;
    PUCHAR NonVolatileRegisters;
    ULONG Reserved;
} DISPATCHER_CONTEXT, *PDISPATCHER_CONTEXT;

//
// Define exception filter and termination handler function types.
// N.B. These functions use a custom calling convention.
//

struct _EXCEPTION_POINTERS;
typedef
LONG
(*PEXCEPTION_FILTER) (
    struct _EXCEPTION_POINTERS *ExceptionPointers,
    ULONG EstablisherFrame
    );

typedef
VOID
(*PTERMINATION_HANDLER) (
    BOOLEAN AbnormalTermination,
    ULONG EstablisherFrame
    );

// end_winnt
// begin_winnt
//
// Define dynamic function table entry.
//

typedef
_Function_class_(GET_RUNTIME_FUNCTION_CALLBACK)
PRUNTIME_FUNCTION
GET_RUNTIME_FUNCTION_CALLBACK (
    _In_ ULONG ControlPc,
    _In_opt_ PVOID Context
    );
typedef GET_RUNTIME_FUNCTION_CALLBACK *PGET_RUNTIME_FUNCTION_CALLBACK;

typedef
_Function_class_(OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK)
NTSTATUS
OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK (
    _In_ HANDLE Process,
    _In_ PVOID TableAddress,
    _Out_ PULONG Entries,
    _Out_ PRUNTIME_FUNCTION* Functions
    );
typedef OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK *POUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK;

#define OUT_OF_PROCESS_FUNCTION_TABLE_CALLBACK_EXPORT_NAME \
    "OutOfProcessFunctionTableCallback"

// end_winnt
#ifdef _ARM_
// begin_winnt

//
// Nonvolatile context pointer record.
//

typedef struct _KNONVOLATILE_CONTEXT_POINTERS {

    PULONG R4;
    PULONG R5;
    PULONG R6;
    PULONG R7;
    PULONG R8;
    PULONG R9;
    PULONG R10;
    PULONG R11;
    PULONG Lr;

    PULONGLONG D8;
    PULONGLONG D9;
    PULONGLONG D10;
    PULONGLONG D11;
    PULONGLONG D12;
    PULONGLONG D13;
    PULONGLONG D14;
    PULONGLONG D15;

} KNONVOLATILE_CONTEXT_POINTERS, *PKNONVOLATILE_CONTEXT_POINTERS;

#endif // _ARM_

// end_winnt

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif
