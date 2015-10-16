/*++ BUILD Version: 0118    // Increment this if a change has global effects

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ntosifs.h

Abstract:

    This files defines internal NT structures and routines that are exported
    outside the kernel but which we don't want to add to ntifs.h

Revision History:

--*/
#ifndef _NTOSIFS_
#define _NTOSIFS_

#ifndef _NTIFS_INCLUDED_
#error "Must include NTIFS.H first"
#endif

#ifdef __cplusplus
extern "C" {   // extern "C"
#endif


#if (NTDDI_VERSION >= NTDDI_VISTA)
_Must_inspect_result_
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
KeAllocateCalloutStack (
    _In_ BOOLEAN LargeStack
    );

_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeFreeCalloutStack (
    _In_ PVOID Context
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef enum _KSTACK_TYPE {
    ReserveStackNormal = 0,
    ReserveStackLarge,
    MaximumReserveStacks
} KSTACK_TYPE;

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
KeAllocateCalloutStackEx (
    _In_ _Strict_type_match_ KSTACK_TYPE StackType,
    _In_ UCHAR RecursionDepth,
    _Reserved_ SIZE_T Reserved,
    _Outptr_ PVOID *StackContext
    );

#endif


//
// Push lock definitions
//


#undef EX_PUSH_LOCK
#undef PEX_PUSH_LOCK


#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4201)   // nameless struct/union
#pragma warning(disable:4214)   // bit field types other than int
#endif

//
// AutoBoost flags for Push Locks.
//

//
// EX_PUSH_LOCK_FLAG_ENABLE_AUTOBOOST is now deprecated and has no effect,
// Autoboost will be enabled unless the EX_PUSH_LOCK_FLAG_DISABLE_AUTOBOOST
// flag is specified.
//

#define EX_PUSH_LOCK_FLAG_ENABLE_AUTOBOOST      0x1 // Deprecated.
#define EX_PUSH_LOCK_FLAG_DISABLE_AUTOBOOST     0x2
#define EX_PUSH_LOCK_FLAGS_VALID                0x3

typedef struct _EX_PUSH_LOCK {

//
// LOCK bit is set for both exclusive and shared acquires
//

#define EX_PUSH_LOCK_LOCK_V          ((ULONG_PTR)0x0)
#define EX_PUSH_LOCK_LOCK            ((ULONG_PTR)0x1)

//
// Waiting bit designates that the pointer has chained waiters
//

#define EX_PUSH_LOCK_WAITING         ((ULONG_PTR)0x2)

//
// Waking bit designates that we are either traversing the list
// to wake threads or optimizing the list
//

#define EX_PUSH_LOCK_WAKING          ((ULONG_PTR)0x4)

//
// Set if the lock is held shared by multiple owners and there are waiters
//

#define EX_PUSH_LOCK_MULTIPLE_SHARED ((ULONG_PTR)0x8)

//
// Total shared Acquires are incremented using this
//

#define EX_PUSH_LOCK_SHARE_INC       ((ULONG_PTR)0x10)
#define EX_PUSH_LOCK_PTR_BITS        ((ULONG_PTR)0xf)

    union {
        struct {
            ULONG_PTR Locked         : 1;
            ULONG_PTR Waiting        : 1;
            ULONG_PTR Waking         : 1;
            ULONG_PTR MultipleShared : 1;
            ULONG_PTR Shared         : sizeof(ULONG_PTR) * 8 - 4;
        };

        __volatile ULONG_PTR Value;
        __volatile PVOID Ptr;
    };

} EX_PUSH_LOCK, *PEX_PUSH_LOCK;

#define EX_CACHE_LINE_SIZE 128
#define EX_PUSH_LOCK_FANNED_COUNT (PAGE_SIZE/EX_CACHE_LINE_SIZE)

//
// Define a fan out structure for n push locks each in its own cache line
//

typedef struct _EX_PUSH_LOCK_CACHE_AWARE_LEGACY {
    PEX_PUSH_LOCK Locks[EX_PUSH_LOCK_FANNED_COUNT];
} EX_PUSH_LOCK_CACHE_AWARE_LEGACY, *PEX_PUSH_LOCK_CACHE_AWARE_LEGACY;

//
// Define structure thats a push lock padded to the size of a cache line
//

typedef struct _EX_PUSH_LOCK_CACHE_AWARE_PADDED {
    EX_PUSH_LOCK Lock;
    union {
        UCHAR Pad[EX_CACHE_LINE_SIZE - sizeof (EX_PUSH_LOCK)];
        struct {
            BOOLEAN Single;
            PVOID ParentLock;
        };
    };
} EX_PUSH_LOCK_CACHE_AWARE_PADDED, *PEX_PUSH_LOCK_CACHE_AWARE_PADDED;

//
// Define structure for auto-expanding push lock
//

#define EX_AEPL_EXPANDED       ((ULONG)0x00000001)
#define EX_AEPL_TRANSITIONING  ((ULONG)0x00000002)
#define EX_AEPL_PAGEABLE       ((ULONG)0x00000004)

#define EX_AEPL_STATE_BIT_MASK ((ULONG)(EX_AEPL_EXPANDED |      \
                                        EX_AEPL_TRANSITIONING | \
                                        EX_AEPL_PAGEABLE))

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND_STATE {
    union {
        struct {
            ULONG Expanded      : 1;
            ULONG Transitioning : 1;
            ULONG Pageable      : 1;
        };
        __volatile ULONG Value;
    };
} EX_PUSH_LOCK_AUTO_EXPAND_STATE, *PEX_PUSH_LOCK_AUTO_EXPAND_STATE;

typedef struct _EX_PUSH_LOCK_AUTO_EXPAND {
    EX_PUSH_LOCK LocalLock;
    EX_PUSH_LOCK_AUTO_EXPAND_STATE State;
    ULONG Stats;
} EX_PUSH_LOCK_AUTO_EXPAND, *PEX_PUSH_LOCK_AUTO_EXPAND;


//
// We will use the legacy force-inlined push lock functions if we are compiling
// for before Blue.
//

#if (NTDDI_VERSION < NTDDI_WINBLUE)
#ifndef EX_LEGACY_PUSH_LOCKS
#define EX_LEGACY_PUSH_LOCKS
#endif
#endif // (NTDDI_VERSION < NTDDI_WINBLUE)

//
// Before Blue + 1 we will use the legacy cache-aware push lock.
// From Blue + 1 onward we will use the auto-expand push lock.
//
// TODO: t-chrisk - Need to update < NTDDI_WINBLUE to == NTDDI_WINBLUE once
//                  the Blue + 1 constant is available.
//

#ifndef EX_LEGACY_CACHE_AWARE_LOCKS
#define EX_LEGACY_CACHE_AWARE_LOCKS
#endif

#if defined(EX_LEGACY_PUSH_LOCKS) || (NTDDI_VERSION < NTDDI_WINBLUE) || defined(EX_LEGACY_CACHE_AWARE_LOCKS)

typedef EX_PUSH_LOCK_CACHE_AWARE_LEGACY EX_PUSH_LOCK_CACHE_AWARE,
                                        *PEX_PUSH_LOCK_CACHE_AWARE;
#else

typedef EX_PUSH_LOCK_AUTO_EXPAND EX_PUSH_LOCK_CACHE_AWARE,
                                 *PEX_PUSH_LOCK_CACHE_AWARE;

#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#if !defined(NONTOSPINTERLOCK)

#pragma warning (push)
#pragma warning (disable:4028) // parameter mismatch: intentional type change

FORCEINLINE
VOID
ExInitializePushLock (
    _Out_ PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Initialize a push lock structure

Arguments:

    PushLock - Push lock to be initialized

Return Value:

    None

--*/

{

    PushLock->Value = 0;
}

#pragma warning (pop)

#if defined(_WIN64)

#define EX_TRY_ACQUIRE_PUSH_LOCK_EXCLUSIVE_OP(PUSHLOCK) \
    InterlockedBitTestAndSet64Acquire((LONG64 *)&(PUSHLOCK)->Value, EX_PUSH_LOCK_LOCK_V)

#else

#define EX_TRY_ACQUIRE_PUSH_LOCK_EXCLUSIVE_OP(PUSHLOCK) \
    InterlockedBitTestAndSetAcquire((LONG *)&(PUSHLOCK)->Value, EX_PUSH_LOCK_LOCK_V)

#endif

#endif  // // !defined(NONTOSPINTERLOCK)

#if !defined(NONTOSPINTERLOCK)

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExfAcquirePushLockExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
VOID
FASTCALL
ExfAcquirePushLockShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExfReleasePushLock (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExfReleasePushLockShared (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExfReleasePushLockExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExfTryAcquirePushLockShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_)
    _When_(return==1, _Acquires_lock_(*_Curr_))
    PEX_PUSH_LOCK PushLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExfTryToWakePushLock (
    _Inout_ PEX_PUSH_LOCK PushLock
    );


#define ExAcquirePushLockSharedAssumeNoOwner ExAcquirePushLockShared
#define ExReleasePushLockSharedAssumeSingleOwner ExReleasePushLockShared

#if !defined(EX_LEGACY_PUSH_LOCKS)

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExAcquirePushLockExclusiveEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExAcquirePushLockSharedEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryAcquirePushLockExclusiveEx (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryAcquirePushLockSharedEx (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleasePushLockEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleasePushLockExclusiveEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleasePushLockSharedEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryConvertPushLockSharedToExclusiveEx (
    _Inout_ _Requires_lock_held_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

#undef EX_DEFAULT_PUSH_LOCK_FLAGS

#if !defined(AB_TRACKING_DISABLED)
#define EX_DEFAULT_PUSH_LOCK_FLAGS      0
#else
#define EX_DEFAULT_PUSH_LOCK_FLAGS      EX_PUSH_LOCK_FLAG_DISABLE_AUTOBOOST
#endif // !defined(AB_TRACKING_DISABLED)

#define ExAcquirePushLockExclusive(Lock)   \
        ExAcquirePushLockExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExAcquirePushLockShared(Lock)   \
        ExAcquirePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExTryAcquirePushLockExclusive(Lock) \
        ExTryAcquirePushLockExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExTryAcquirePushLockShared(Lock) \
        ExTryAcquirePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleasePushLock(Lock) \
        ExReleasePushLockEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleasePushLockExclusive(Lock) \
        ExReleasePushLockExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleasePushLockShared(Lock) \
        ExReleasePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExTryConvertPushLockSharedToExclusive(Lock) \
        ExTryConvertPushLockSharedToExclusiveEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#else // EX_LEGACY_PUSH_LOCKS

#pragma warning (push)
#pragma prefast(disable: __WARNING_FAILING_TO_ACQUIRE_MEDIUM_CONFIDENCE, "Prefast doesn't know that the success return from InterlockedCompareExchange in the ExAcquire* functions here actually acquires the pushlock.");

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExAcquirePushLockExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Acquire a push lock exclusively

Arguments:

    PushLock - Push lock to be acquired

Return Value:

    None

--*/

{

    if (EX_TRY_ACQUIRE_PUSH_LOCK_EXCLUSIVE_OP(PushLock)) {

        ExfAcquirePushLockExclusive(PushLock);
    }

    NT_ASSERT(PushLock->Locked);

    return;
}

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
CFORCEINLINE
BOOLEAN
ExTryAcquirePushLockExclusive (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Try and acquire a push lock exclusively

Arguments:

    PushLock - Push lock to be acquired

Return Value:

    BOOLEAN - TRUE: Acquire was successful, FALSE: Lock was already acquired

--*/

{

    if (!EX_TRY_ACQUIRE_PUSH_LOCK_EXCLUSIVE_OP(PushLock)) {

        NT_ASSERT(PushLock->Locked);

        return TRUE;

    } else {

        return FALSE;

    }
}

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
FORCEINLINE
BOOLEAN
ExTryAcquirePushLockShared (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Try to Acquire a push lock shared.

Arguments:

    PushLock - Push lock to be acquired

Return Value:

    BOOLEAN - TRUE: Acquire was successful, FALSE: Lock was already acquired exclusively.

--*/

{
    EX_PUSH_LOCK OldValue, NewValue;

    OldValue.Value = 0;
    NewValue.Value = EX_PUSH_LOCK_SHARE_INC | EX_PUSH_LOCK_LOCK;

    if (InterlockedCompareExchangePointerAcquire(&PushLock->Ptr,
                                                 NewValue.Ptr,
                                                 OldValue.Ptr) != OldValue.Ptr) {

        if (!ExfTryAcquirePushLockShared(PushLock)) {
            return FALSE;
        }
    }

#if DBG

    OldValue.Ptr = ReadPointerNoFence(&PushLock->Ptr);

    NT_ASSERT(OldValue.Locked);

    NT_ASSERT(OldValue.Waiting || OldValue.Shared > 0);

#endif

    return TRUE;
}

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExAcquirePushLockShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Acquire a push lock shared with AutoBoost tracking enabled.

Arguments:

    PushLock - Push lock to be acquired

Return Value:

    None

--*/

{
    EX_PUSH_LOCK OldValue, NewValue;

    OldValue.Value = 0;
    NewValue.Value = EX_PUSH_LOCK_SHARE_INC | EX_PUSH_LOCK_LOCK;
    if (InterlockedCompareExchangePointerAcquire(&PushLock->Ptr,
                                                 NewValue.Ptr,
                                                 OldValue.Ptr) != OldValue.Ptr) {

        ExfAcquirePushLockShared(PushLock);
    }

#if DBG

    OldValue.Ptr = ReadPointerNoFence(&PushLock->Ptr);

    NT_ASSERT(OldValue.Locked);

    NT_ASSERT(OldValue.Waiting || OldValue.Shared > 0);

#endif

    return;
}

#pragma warning (pop)

#pragma warning (push)
#pragma prefast(disable: __WARNING_FAILING_TO_RELEASE_MEDIUM_CONFIDENCE, "Prefast doesn't know that the success return from InterlockedCompareExchange in the ExRelease* functions here actually releases the pushlock.");

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExReleasePushLock (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Release a push lock that was acquired exclusively or shared

Arguments:

    PushLock - Push lock to be released

Return Value:

    None

--*/

{

    EX_PUSH_LOCK OldValue, NewValue;

    PrefetchForWrite(PushLock);
    OldValue.Ptr = ReadPointerNoFence(&PushLock->Ptr);

    NT_ASSERT(OldValue.Locked);

    if (OldValue.Shared > 1) {
        NewValue.Value = OldValue.Value - EX_PUSH_LOCK_SHARE_INC;

    } else {
        NewValue.Value = 0;
    }

    if (OldValue.Waiting ||
        InterlockedCompareExchangePointerRelease(&PushLock->Ptr,
                                                 NewValue.Ptr,
                                                 OldValue.Ptr) != OldValue.Ptr) {

        ExfReleasePushLock(PushLock);
    }

    return;
}

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExReleasePushLockExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Release a push lock that was acquired exclusively

Arguments:

    PushLock - Push lock to be released

Return Value:

    None

--*/

{

    EX_PUSH_LOCK OldValue;

#if DBG

    PrefetchForWrite(PushLock);
    OldValue.Ptr = ReadPointerNoFence(&PushLock->Ptr);

    NT_ASSERT(OldValue.Locked);

    NT_ASSERT(OldValue.Waiting || OldValue.Shared == 0);

#endif

#if defined(_WIN64)

    OldValue.Value = InterlockedExchangeAddRelease64((PLONG64)&PushLock->Value, -(LONG64)EX_PUSH_LOCK_LOCK);

#else

    OldValue.Value = InterlockedExchangeAddRelease((PLONG)&PushLock->Value, -(LONG)EX_PUSH_LOCK_LOCK);

#endif

    _Analysis_assume_lock_held_ (PushLock);
    _Analysis_assume_lock_released_ (PushLock);

    NT_ASSERT(OldValue.Locked);

    NT_ASSERT(OldValue.Waiting || OldValue.Shared == 0);

    if (!OldValue.Waiting || OldValue.Waking) {
        return;
    }

    ExfTryToWakePushLock(PushLock);
    return;
}

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExReleasePushLockShared (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Release a push lock that was acquired shared

Arguments:

    PushLock - Push lock to be released

Return Value:

    None

--*/

{

    EX_PUSH_LOCK OldValue, NewValue;

#if DBG

    PrefetchForWrite(PushLock);
    OldValue.Ptr = ReadPointerNoFence(&PushLock->Ptr);

    NT_ASSERT(OldValue.Locked);

    NT_ASSERT(OldValue.Waiting || OldValue.Shared > 0);

#endif

    OldValue.Value = EX_PUSH_LOCK_SHARE_INC | EX_PUSH_LOCK_LOCK;
    NewValue.Value = 0;
    if (InterlockedCompareExchangePointerRelease(&PushLock->Ptr,
                                                 NewValue.Ptr,
                                                 OldValue.Ptr) != OldValue.Ptr) {

        ExfReleasePushLockShared(PushLock);

    } else {
        _Analysis_assume_lock_held_ (PushLock);
        _Analysis_assume_lock_released_ (PushLock);
    }

    return;
}

#pragma warning (pop)

_Must_inspect_result_
_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
_Post_satisfies_(return == 0 || return == 1)
FORCEINLINE
BOOLEAN
ExTryConvertPushLockSharedToExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Attempts to convert a shared acquire to exclusive. If other sharers or waiters are present
    the function fails.

Arguments:

    PushLock - Push lock to be converted

Return Value:

    BOOLEAN - TRUE: Conversion worked ok, FALSE: The conversion could not be achieved

--*/

{

    if (InterlockedCompareExchangePointer(&PushLock->Ptr,
                                          (PVOID) EX_PUSH_LOCK_LOCK,
                                          (PVOID) (EX_PUSH_LOCK_SHARE_INC | EX_PUSH_LOCK_LOCK)) ==
                                            (PVOID)(EX_PUSH_LOCK_SHARE_INC | EX_PUSH_LOCK_LOCK)) {

        NT_ASSERT(PushLock->Locked);

        return TRUE;

    } else {
        return FALSE;
    }
}

#endif // !EX_LEGACY_PUSH_LOCKS

//
// ISSUE-for-govm-:  Define to Blue+1 once constant is available.
//

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

//
// As of Blue + 1 the Auto-Expand push lock is available.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PEX_PUSH_LOCK_AUTO_EXPAND
ExAllocateAutoExpandPushLock (
     _In_ ULONG Flags
     );

#define EX_AEPL_ALLOCATE_PAGED_POOL       0x00000000
#define EX_AEPL_ALLOCATE_NONPAGED_POOL    0x00000001

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExFreeAutoExpandPushLock (
     _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND PushLock
     );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExAcquireAutoExpandPushLockExclusive (
    _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExReleaseAutoExpandPushLockExclusive (
    _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
PVOID
FASTCALL
ExAcquireAutoExpandPushLockShared (
    _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleaseAutoExpandPushLockShared (
    _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    _Inout_ PVOID PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExInitializeAutoExpandPushLock (
    _Out_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
SIZE_T
ExSizeOfAutoExpandPushLock (
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExCleanupAutoExpandPushLock (
    _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryAcquireAutoExpandPushLockExclusive (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
     _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
     _In_ ULONG Flags
     );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PVOID
FASTCALL
ExTryAcquireAutoExpandPushLockShared (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK_AUTO_EXPAND AutoExpandPushLock,
    _In_ ULONG Flags
    );

#endif

#if defined(EX_LEGACY_PUSH_LOCKS)

//
// If we are using legacy push locks then shared acquire/release functions for
// cache-aware push locks are force-inlined.
//

#pragma warning (push)
#pragma prefast(disable: __WARNING_NEED_LOCKING_SIDE_EFFECT, "Prefast doesn't know that acquiring any processor's pushlock shared provides the equivalent semantic for obtaining the argument pushlock shared.");

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
PEX_PUSH_LOCK
ExAcquireCacheAwarePushLockShared (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock
    )

/*++

Routine Description:

    Acquire a cache aware push lock shared.

Arguments:

    PushLock - Cache aware push lock to be acquired

Return Value:

    None

--*/

{

    PEX_PUSH_LOCK PushLock;
    ULONG ProcIndex;

    //
    // Take a single one of the slots in shared mode.
    // Exclusive acquires must obtain all the slots exclusive.
    //

#if (NTDDI_VERSION >= NTDDI_WIN7)

    ProcIndex = KeGetCurrentProcessorNumberEx(NULL);

#else

    ProcIndex = KeGetCurrentProcessorNumber();

#endif

    PushLock = CacheAwarePushLock->Locks[ProcIndex % EX_PUSH_LOCK_FANNED_COUNT];
    ExAcquirePushLockSharedAssumeNoOwner(PushLock);
    return PushLock;
}

#pragma warning (pop)

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
FORCEINLINE
VOID
ExReleaseCacheAwarePushLockShared (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock
    )

/*++

Routine Description:

    Release a cache aware push lock that was acquired shared.

Arguments:

    PushLock - Part of cache aware push lock returned by ExAcquireCacheAwarePushLockShared

Return Value:

    None

--*/

{

    ExReleasePushLockSharedAssumeSingleOwner(PushLock);
    return;
}

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PEX_PUSH_LOCK_CACHE_AWARE
ExAllocateCacheAwarePushLock (
     _In_ ULONG Flags
     );

#define EX_CAPLFL_ALLOCATE_PAGED_POOL       0x00000000
#define EX_CAPLFL_ALLOCATE_NONPAGED_POOL    0x00000001

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExFreeCacheAwarePushLock (
     _Inout_ PEX_PUSH_LOCK_CACHE_AWARE_LEGACY PushLock
     );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExAcquireCacheAwarePushLockExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExReleaseCacheAwarePushLockExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock
    );

//
// TODO: t-chrisk - This check should be == NTDDI_WINBLUE once the Blue + 1
//                  constants have been defined.
//

#elif ((NTDDI_VERSION < NTDDI_WINBLUE) || defined(EX_LEGACY_CACHE_AWARE_LOCKS)) // EX_LEGACY_PUSH_LOCKS

//
// If we are compiling for WINBLUE or earlier then the cache-aware push lock
// functions should be used.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PEX_PUSH_LOCK_CACHE_AWARE_LEGACY
ExAllocateCacheAwarePushLock (
     _In_ ULONG Flags
     );

#define EX_CAPLFL_ALLOCATE_PAGED_POOL       0x00000000
#define EX_CAPLFL_ALLOCATE_NONPAGED_POOL    0x00000001

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExFreeCacheAwarePushLock (
     _Inout_ PEX_PUSH_LOCK_CACHE_AWARE_LEGACY PushLock
     );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExAcquireCacheAwarePushLockExclusive (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE CacheAwarePushLock
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
ExReleaseCacheAwarePushLockExclusive (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE CacheAwarePushLock
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExAcquireCacheAwarePushLockExclusiveEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FASTCALL
ExReleaseCacheAwarePushLockExclusiveEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(APC_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
PEX_PUSH_LOCK
FASTCALL
ExAcquireCacheAwarePushLockSharedEx (
    _Inout_ _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_)
    PEX_PUSH_LOCK_CACHE_AWARE_LEGACY CacheAwarePushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
_Requires_lock_held_(_Global_critical_region_)
NTKERNELAPI
VOID
FASTCALL
ExReleaseCacheAwarePushLockSharedEx (
    _Inout_ _Requires_lock_held_(*_Curr_) _Releases_lock_(*_Curr_)
    PEX_PUSH_LOCK PushLock,
    _In_ ULONG Flags
    );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
FASTCALL
ExTryAcquireCacheAwarePushLockExclusiveEx (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
     _Inout_ PEX_PUSH_LOCK_CACHE_AWARE_LEGACY AutoExpandPushLock,
     _In_ ULONG Flags
     );

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PVOID
FASTCALL
ExTryAcquireCacheAwarePushLockSharedEx (
    _When_(return!=0, _Requires_lock_not_held_(*_Curr_) _Acquires_lock_(*_Curr_))
    _Inout_ PEX_PUSH_LOCK_CACHE_AWARE_LEGACY AutoExpandPushLock,
    _In_ ULONG Flags
    );

#define ExAcquireCacheAwarePushLockShared(Lock) \
        ExAcquireCacheAwarePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleaseCacheAwarePushLockShared(Lock) \
        ExReleaseCacheAwarePushLockSharedEx(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#else // !EX_LEGACY_PUSHLOCKS && (NTDDI_VERSION <= NTDDI_WINBLUE)

//
// If we are compiling for Blue + 1 or later, the cache-aware push lock should
// be replaced by the auto-expand push lock, so we will not define its functions
// and instead redirect the function calls to the corresponding auto-expand
// push lock apis.
//


#define EX_CAPLFL_ALLOCATE_PAGED_POOL       0x00000000
#define EX_CAPLFL_ALLOCATE_NONPAGED_POOL    0x00000001

#define ExAllocateCacheAwarePushLock(Flags) \
        ExAllocateAutoExpandPushLock(Flags)

#define ExFreeCacheAwarePushLock(Lock) \
        ExFreeAutoExpandPushLock(Lock)

#define ExAcquireCacheAwarePushLockShared(Lock) \
        ExAcquireAutoExpandPushLockShared(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleaseCacheAwarePushLockShared(Lock) \
        ExReleaseAutoExpandPushLockShared(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExAcquireCacheAwarePushLockSharedEx(Lock, Flags) \
        ExAcquireAutoExpandPushLockShared(Lock, Flags)

#define ExReleaseCacheAwarePushLockSharedEx(Lock, Flags) \
        ExReleaseAutoExpandPushLockShared(Lock, Flags)

#define ExAcquireCacheAwarePushLockExclusive(Lock) \
        ExAcquireAutoExpandPushLockExclusive(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExReleaseCacheAwarePushLockExclusive(Lock) \
        ExReleaseAutoExpandPushLockExclusive(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExAcquireCacheAwarePushLockExclusiveEx(Lock, Flags) \
        ExAcquireAutoExpandPushLockExclusive(Lock, Flags)

#define ExReleaseCacheAwarePushLockExclusiveEx(Lock, Flags) \
        ExReleaseAutoExpandPushlockExclusive(Lock, Flags)

#define ExTryAcquireCacheAwarePushLockExclusive(Lock) \
        ExTryAcquireAutoExpandPushLockExclusive(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExTryAcquireCacheAwarePushLockShared(Lock) \
        ExTryAcquireAutoExpandPushLockShared(Lock, EX_DEFAULT_PUSH_LOCK_FLAGS)

#define ExTryAcquireCacheAwarePushLockExclusiveEx(Lock, Flags) \
        ExTryAcquireAutoExpandPushLockExclusive(Lock, Flags)

#define ExTryAcquireCacheAwarePushLockSharedEx(Lock, Flags) \
        ExTryAcquireAutoExpandPushLockShared(Lock, Flags)

#endif // !EX_LEGACY_PUSHLOCKS && (NTDDI_VERSION > NTDDI_WINBLUE)


#define EX_AEPL_ALLOCATE_PAGED_POOL        0x00000000
#define EX_AEPL_ALLOCATE_NONPAGED_POOL     0x00000001

#endif // !defined(NONTOSPINTERLOCK)


#define EX_PCW_EXTENSION_ID              1
#define EX_AUTH_EXTENSION_ID             2
#define EX_BCRYPT_EXTENSION_ID           3
#define EX_NET_RATE_CONTROL_EXTENSION_ID 4
#define EX_IO_QOS_EXTENSION_ID           5

#define EX_PCW_EXTENSION_VERSION              1
#define EX_AUTH_EXTENSION_VERSION             1
#define EX_BCRYPT_EXTENSION_VERSION           1
#define EX_NET_RATE_CONTROL_EXTENSION_VERSION 1
#define EX_IO_QOS_EXTENSION_VERSION           1

typedef struct _EX_EXTENSION *PEX_EXTENSION;

typedef struct _EX_EXTENSION_REGISTRATION_1 {

    //
    // Identifier and version of this extension.
    //

    USHORT ExtensionId;
    USHORT ExtensionVersion;

    //
    // Number of functions present in the function table.
    //

    USHORT FunctionCount;

    //
    // Pointer to table of functions supplied by this extension.
    //

    const VOID *FunctionTable;

    //
    // Optional pointer that will receive the function table supplied by the
    // host.
    //

    PVOID *HostTable;

    //
    // Pointer to the driver object that is registering extension.
    //

    PVOID DriverObject;
} EX_EXTENSION_REGISTRATION_1, *PEX_EXTENSION_REGISTRATION_1;

#define EX_EXTENSION_REGISTRATION_VERSION_1 0x10000

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
NTSTATUS
ExRegisterExtension (
    _Outptr_ PEX_EXTENSION *Extension,
    _In_ ULONG RegistrationVersion,
    _In_ PVOID RegistrationInfo
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)
NTKERNELAPI
VOID
ExUnregisterExtension (
    _Inout_ PEX_EXTENSION Extension
    );
#endif

// end_ntosp

typedef struct _OBJECT_DUMP_CONTROL {
    PVOID Stream;
    ULONG Detail;
} OB_DUMP_CONTROL, *POB_DUMP_CONTROL;

typedef VOID (*OB_DUMP_METHOD)(
    _In_ PVOID Object,
    _In_opt_ POB_DUMP_CONTROL Control
    );

typedef enum _OB_OPEN_REASON {
    ObCreateHandle,
    ObOpenHandle,
    ObDuplicateHandle,
    ObInheritHandle,
    ObMaxOpenReason
} OB_OPEN_REASON;

typedef NTSTATUS (*OB_OPEN_METHOD)(
    _In_ OB_OPEN_REASON OpenReason,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_opt_ PEPROCESS Process,
    _In_ PVOID Object,
    _Inout_ PACCESS_MASK GrantedAccess,
    _In_ ULONG HandleCount
    );

typedef BOOLEAN (*OB_OKAYTOCLOSE_METHOD)(
    _In_opt_ PEPROCESS Process,
    _In_ PVOID Object,
    _In_ HANDLE Handle,
    _In_ KPROCESSOR_MODE PreviousMode
    );

typedef VOID (*OB_CLOSE_METHOD)(
    _In_opt_ PEPROCESS Process,
    _In_ PVOID Object,
    _In_ ULONG_PTR ProcessHandleCount,
    _In_ ULONG_PTR SystemHandleCount
    );

typedef VOID (*OB_DELETE_METHOD)(
    _In_  PVOID   Object
    );

typedef NTSTATUS (*OB_PARSE_METHOD)(
    _In_ PVOID ParseObject,
    _In_ PVOID ObjectType,
    _Inout_ PACCESS_STATE AccessState,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ ULONG Attributes,
    _Inout_ PUNICODE_STRING CompleteName,
    _Inout_ PUNICODE_STRING RemainingName,
    _Inout_opt_ PVOID Context,
    _In_opt_ PSECURITY_QUALITY_OF_SERVICE SecurityQos,
    _Out_ PVOID *Object
    );

typedef NTSTATUS (*OB_SECURITY_METHOD)(
    _In_ PVOID Object,
    _In_ SECURITY_OPERATION_CODE OperationCode,
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PULONG CapturedLength,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    _In_ POOL_TYPE PoolType,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE Mode
    );

typedef NTSTATUS (*OB_QUERYNAME_METHOD)(
    _In_ PVOID Object,
    _In_ BOOLEAN HasObjectName,
    _Out_writes_bytes_opt_(Length) POBJECT_NAME_INFORMATION ObjectNameInfo,
    _In_ ULONG Length,
    _Out_ PULONG ReturnLength,
    _In_ KPROCESSOR_MODE Mode
    );


#if _MSC_VER >= 1200
#pragma warning(push)
#pragma warning(disable:4201)   // nameless struct/union
#pragma warning(disable:4214)   // bit field types other than int
#endif

typedef struct _OBJECT_TYPE_INITIALIZER {
    USHORT Length;
    union {
        UCHAR ObjectTypeFlags;
        struct {
            UCHAR CaseInsensitive : 1;
            UCHAR UnnamedObjectsOnly : 1;
            UCHAR UseDefaultObject : 1;
            UCHAR SecurityRequired : 1;
            UCHAR MaintainHandleCount : 1;
            UCHAR MaintainTypeList : 1;
            UCHAR SupportsObjectCallbacks : 1;
            UCHAR CacheAligned : 1;
        };
    };

    ULONG ObjectTypeCode;
    ULONG InvalidAttributes;
    GENERIC_MAPPING GenericMapping;
    ULONG ValidAccessMask;
    ULONG RetainAccess;
    POOL_TYPE PoolType;
    ULONG DefaultPagedPoolCharge;
    ULONG DefaultNonPagedPoolCharge;
    OB_DUMP_METHOD DumpProcedure;
    OB_OPEN_METHOD OpenProcedure;
    OB_CLOSE_METHOD CloseProcedure;
    OB_DELETE_METHOD DeleteProcedure;
    OB_PARSE_METHOD ParseProcedure;
    OB_SECURITY_METHOD SecurityProcedure;
    OB_QUERYNAME_METHOD QueryNameProcedure;
    OB_OKAYTOCLOSE_METHOD OkayToCloseProcedure;
    ULONG WaitObjectFlagMask;
    USHORT WaitObjectFlagOffset;
    USHORT WaitObjectPointerOffset;
} OBJECT_TYPE_INITIALIZER, *POBJECT_TYPE_INITIALIZER;

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


NTKERNELAPI
NTSTATUS
ObCreateObjectType(
    _In_ PUNICODE_STRING TypeName,
    _In_ POBJECT_TYPE_INITIALIZER ObjectTypeInitializer,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Outptr_ POBJECT_TYPE *ObjectType
    );

NTKERNELAPI
NTSTATUS
ObCreateObjectTypeEx(
    _In_ PUNICODE_STRING TypeName,
    _In_ POBJECT_TYPE_INITIALIZER ObjectTypeInitializer,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ LONG_PTR WaitObjectInfo,
    _Outptr_ POBJECT_TYPE *ObjectType
    );

#define OBJ_PROTECT_CLOSE       0x00000001L


NTKERNELAPI
NTSTATUS
ObReferenceObjectByName(
    _In_ PUNICODE_STRING ObjectName,
    _In_ ULONG Attributes,
    _In_opt_ PACCESS_STATE AccessState,
    _In_opt_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _Inout_opt_ PVOID ParseContext,
    _Out_ PVOID *Object
    );


NTKERNELAPI
NTSTATUS
ObSetSecurityObjectByPointer (
    _In_ PVOID Object,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );


NTKERNELAPI
NTSTATUS
ObCreateObject(
    _In_ KPROCESSOR_MODE ProbeMode,
    _In_ POBJECT_TYPE ObjectType,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ KPROCESSOR_MODE OwnershipMode,
    _Inout_opt_ PVOID ParseContext,
    _In_ ULONG ObjectBodySize,
    _In_ ULONG PagedPoolCharge,
    _In_ ULONG NonPagedPoolCharge,
    _Outptr_ PVOID *Object
    );


#if (NTDDI_VERSION >= NTDDI_VISTA)

///////////////////////////////////////////////////////////////////////////////
//
//  This defines the ECP information which needs to be exported to modules
//  outside the kernel but not publicly in ntifs.h
//
///////////////////////////////////////////////////////////////////////////////

//
//  ECP_HEADER flags
//

typedef ULONG ECP_HEADER_FLAGS;

    //
    //  This flag indicates that the extra create parameter was provided by
    //  the original caller of the create API.
    //

    #define ECP_FLAG_PROVIDED_BY_CREATE_CALLER      0x00000001

    //
    //  This flag indicates that the memory for the extra create parameter
    //  structure was allocated by FsRtl
    //

    #define ECP_FLAG_ALLOCATED_BY_FSRTL             0x00000002

    //
    //  This flag indicates that the extra create parameter was looked at
    //  by some component in the create path (find)
    //

    #define ECP_FLAG_ACCESSED                       0x00000004

    //
    //  This flag indicates that the extra create parameter was used (consumed)
    //  explicitly by some component in the create path
    //

    #define ECP_FLAG_ACKNOWLEDGED                   0x00000008

    //
    //  This flag indicates that the extra create parameter was passed by a caller
    //  from user mode
    //

    #define ECP_FLAG_PASSED_FROM_USER_MODE          0x0000010

    //
    //  If set this ECP was created by FLTMGR, we call a different cleanup
    //  routine when setup
    //

    #define ECP_FLAG_FLTMGR                         0x00000020

    //
    //  If set this ECP was allocated from NONPAGED pool
    //  ELSE allocated from PAGED pool
    //

    #define ECP_FLAG_NONPAGED                       0x00000040


    //
    //  All flags currently use
    //  NOTE: This purposefully does NOT have ECP_FLAG_PASSED_FROM_USER_MODE
    //        defined in it.
    //

    #define ECP_FLAG_ALL                            (ECP_FLAG_PROVIDED_BY_CREATE_CALLER \
                                                     | ECP_FLAG_ALLOCATED_BY_FSRTL \
                                                     | ECP_FLAG_ACCESSED \
                                                     | ECP_FLAG_ACKNOWLEDGED \
                                                   /*| ECP_FLAG_PASSED_FROM_USER_MODE*/ \
                                                     | ECP_FLAG_FLTMGR \
                                                     | ECP_FLAG_NONPAGED)

typedef struct _ECP_LIST {

    //
    //  Signature to verify that this is our structure
    //

    ULONG Signature;

    //
    //  Flags for the overall ECP list structure.
    //  See below for definition of flags that can be set.
    //

    ULONG Flags;

    //
    //  A doubly linked list containing all the extra create parameters.
    //

    LIST_ENTRY EcpList;

} ECP_LIST, *PECP_LIST;

//
//  The common header for all extra create parameters that can be passed in.
//

typedef struct _ECP_HEADER {

    //
    //  Signature to verify that this is our structure
    //

    ULONG Signature;

    //
    //  Extra field for 8-byte alignment of structure
    //

    ULONG Spare;

    //
    //  The list entry for chaining different extra create parameters together.
    //

    LIST_ENTRY ListEntry;

    //
    //  The type of this extra create parameter. This is a GUID.
    //

    GUID EcpType;

    //
    //  If not NULL, cleanup callback routine called by the IOManager when the
    //  ECP is being torn down.  This allows creater to cleanup allocated
    //  memory inside the ECP.
    //

    PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback;

    //
    //  Flags for the extra create parameter structures.
    //  See below for definition of flags that can be set.
    //

    ECP_HEADER_FLAGS Flags;

    //
    //  Size of the whole extra create parameter structure.
    //  This includes the size of this header and the size of the
    //  context specific structure, e.g. ECP_CLIENT_SIDE_ENCRYPTION.
    //
    //  The header and context specific structure are guaranteed to be
    //  aligned to a pointer boundary. If the component has more specific
    //  alignment needs, then it needs to take care of it itself.
    //

    ULONG Size;

    //
    //  Lookaside list to free to if this ECP was allocated from a lookaside list
    //  Can be PAGED or NONPAGED lookaside list
    //

    PVOID ListAllocatedFrom;

    //
    //  If ECP_FLAG_FLTMGR is set then this defines the filter associated with
    //  this ECP.  At cleanup time we have to call a filter manager cleanup
    //  routine to process this ECP.
    //

    PVOID Filter;

} ECP_HEADER, *PECP_HEADER;

//
//  Signature
//

#define FSRTL_ECP_HEADER_SIGNATURE  ((ULONG)('HpcE'))

#define ASSERT_ECP_HEADER(_ecpHdr) \
    NT_ASSERTMSG("Invalid ECP_HEADER structure: ", (_ecpHdr)->Signature == FSRTL_ECP_HEADER_SIGNATURE);

//
//  Macros for convert between the ECP header and the public portion of the ECP
//

#define ECP_HEADER_SIZE  (sizeof(ECP_HEADER))

#define ECP_HEADER_TO_CONTEXT( hdr ) ((PVOID)((PCHAR)hdr + ECP_HEADER_SIZE))
#define ECP_CONTEXT_TO_HEADER( ctx ) ((PECP_HEADER)((PCHAR)ctx - ECP_HEADER_SIZE))

#endif //(NTDDI_VERSION >= NTDDI_VISTA)


#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// EOF lock data structure
//

typedef struct _FSRTL_EOF_LOCK {

    //
    // Owner of the lock (NULL - Lock is currently free).
    //

    PETHREAD LockOwner;

    //
    // List of waiters
    //

    LIST_ENTRY EofListHead;

    //
    // Pointer to advanced fcb header to access FastMutex
    //

    PFSRTL_ADVANCED_FCB_HEADER Header;

    //
    // Owner priority
    //

    KPRIORITY OwnerPriority;

    //
    // Has priority boosted for this thread
    //

    BOOLEAN IsIoPriorityBoosted;

    BOOLEAN Unused;

    //
    // Count of number of times the owner has acquired the lock
    //

    USHORT OwnerCount;

} FSRTL_EOF_LOCK, *PFSRTL_EOF_LOCK;

VOID
FsRtlInitializeEofLock (
    _Out_ PFSRTL_EOF_LOCK EofLock,
    _In_ PFSRTL_ADVANCED_FCB_HEADER Header
    );

NTSTATUS
FsRtlGetIoAtEof (
    _Inout_ PFSRTL_EOF_LOCK EofLock,
    _In_ LONGLONG StartingVbo,
    _In_ LONGLONG ByteCount,
    _In_ BOOLEAN Wait,
    _Out_ PBOOLEAN DoingIoAtEof
    );

VOID
FsRtlAcquireEofLock (
    _Inout_ PFSRTL_EOF_LOCK EofLock
    );

VOID
FsRtlReleaseEofLock (
    _Inout_ PFSRTL_EOF_LOCK EofLock
    );

VOID
FsRtlAcquireHeaderMutex (
    _Inout_ PFSRTL_EOF_LOCK EofLock
    );

VOID
FsRtlReleaseHeaderMutex (
    _Inout_ PFSRTL_EOF_LOCK EofLock
    );

BOOLEAN
FsRtlTryToAcquireHeaderMutex (
    _Inout_ PFSRTL_EOF_LOCK EofLock
    );

#endif  //(NTDDI_VERSION >= NTDDI_WIN8)


#if (NTDDI_VERSION >= NTDDI_WINBLUE)

//
//  Tiering heat measurement library support structures and routines.
//

typedef struct _TIERING_HEAT_DATA {

    //
    //  Volume identifier in lieu of GUID (which is too big).
    //

    ULONG VolumeIdHash;

    //
    //  What I/O should be measured.
    //

    ULONG Flags;

} TIERING_HEAT_DATA, *PTIERING_HEAT_DATA;

#define TIERING_HEAT_FLAG_MEASURE_READ      0x00000001
#define TIERING_HEAT_FLAG_MEASURE_WRITE     0x00000002
#define TIERING_HEAT_FLAG_MEASURE_DELETE    0x00000004

#define TIERING_HEAT_FLAG_MEASURE_MASK      0x00000007

NTSTATUS
FsRtlHeatInit (
    _Inout_ PTIERING_HEAT_DATA TieringData,
    _In_ LPCGUID VolumeGuid,
    _In_opt_ LPCGUID ActivityId
    );

VOID
FsRtlHeatUninit (
    _In_ PTIERING_HEAT_DATA TieringData,
    _In_ LPCGUID VolumeGuid
    );

__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlHeatLogIo (
    _In_ PTIERING_HEAT_DATA TieringData,
    _In_ PIRP Irp,
    _In_ PFILE_ID_128 FileId,
    _In_ ULONG Flags,
    _In_opt_ LPCGUID ActivityId
    );

__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlHeatLogTierMove (
    _In_ PTIERING_HEAT_DATA TieringData,
    _In_ PFILE_ID_128 FileId,
    _In_ ULONGLONG Vbo,
    _In_ ULONG Length,
    _In_ ULONG Source,
    _In_ ULONG Destination,
    _In_opt_ LPCGUID ActivityId
    );

//
//  Per-file and per-stream context set routines used by fltmgr to
//  set its own legacy context permantently on the containing object.
//  By contract these reserved contexts are never deleted explicitly
//  except during containing object teardown. This enables lockless
//  context lookup.
//
//  A pointer to the reserved per-stream contexts is stored directly
//  in the ReservedContext field of the AdvFcbHeader. Similarly a
//  pointer to the reserved per-file context is stored directly in
//  the FSRTL_FILE_CONTEXT_SUPPORT structure.
//

_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertReservedPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_ PFSRTL_PER_FILE_CONTEXT Ptr
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlLookupReservedPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlRemoveReservedPerFileContext (
    __in PVOID* PerFileContextPointer,
    __in_opt PVOID OwnerId,
    __in_opt PVOID InstanceId
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertReservedPerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER AdvFcbHeader,
    _In_ PFSRTL_PER_STREAM_CONTEXT Ptr
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlLookupReservedPerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER AdvFcbHeader,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );

_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlRemoveReservedPerStreamContext (
    __in PFSRTL_ADVANCED_FCB_HEADER AdvFcbHeader,
    __in_opt PVOID OwnerId,
    __in_opt PVOID InstanceId
  );

//
//  Structures and routines to allow file system drivers (e.g. Filter Manager) to
//  send requests to the Process Lifetime Manager to terminate modern applications.
//

//
//  Callers of FsRtlSendModernAppTermination need to specify a reason.  This is
//  used primarily for SQM to identify why modern apps are being terminated.
//

typedef enum _FSRTL_APP_TERMINATE_REASON {

    FltRundownWait,
    FsrlOplockBreak,

    ReasonCount

} FSRTL_APP_TERMINATE_REASON, *PFSRTL_APP_TERMINATE_REASON;

//
//  This is the size of the data associated with the WNF well-known state names
//  that FsRtlSendModernAppTermination() can send.
//
//  Note: This must be the same value as the data sizes specified in the manifest:
//
//  MINKERNEL\manifests\wnf\WNF-Names-Flt.man
//      WNF_FLT_RUNDOWN_WAIT
//
//  MINKERNEL\manifests\wnf\WNF-Names-Fsrtl.man
//      WNF_FSRL_OPLOCK_BREAK
//
//  This value defines the size of the PidList argument of FsRtlSendModernAppTermination().
//  I.e. it must contain no more than FSRTL_APP_TERMINATE_DATA_SIZE / sizeof(ULONG)
//  items.
//

#define FSRTL_APP_TERMINATE_DATA_SIZE  4096

_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlSendModernAppTermination (
    _In_reads_bytes_opt_(PidListSize) PULONG PidList,
    _In_ ULONG PidListSize,
    _In_ FSRTL_APP_TERMINATE_REASON Reason
    );

#endif


#if (NTDDI_VERSION >= NTDDI_THRESHOLD)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterChangeDirectoryLite (
    _In_ PNOTIFY_SYNC *NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_opt_ PVOID FsContext,
    _In_ ULONG NotifyFlags,
    _In_ ULONG CompletionFilter,
    _In_opt_ PIRP NotifyIrp,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_opt_ PFILTER_REPORT_CHANGE FilterCallback
    );

#define FSRTL_NOTIFY_FLAG_WATCH_TREE    (0x00000001)
#define FSRTL_NOTIFY_FLAG_IGNORE_BUFFER (0x00000002)

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterReportChangeLite (
    _In_ PNOTIFY_SYNC *NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PUNICODE_STRING RelativeName,
    _In_opt_ PUNICODE_STRING StreamName,
    _In_ ULONG FilterMatch,
    _In_ ULONG Action,
    _In_opt_ PVOID TargetContext,
    _In_opt_ PVOID FilterContext,
    _In_ ULONG NotifyReportFlags
    );

#define FSRTL_NOTIFY_REPORT_FLAG_IS_PARENT   (0x00000001)

#endif

#define DO_HIGH_PRIORITY_FILESYSTEM         0x00000200      
#define FO_KEEPALIVE_COUNTS_ACTIVE      FO_SECTION_MINSTORE_TREATMENT
#define IRP_BACKPOCKET_POSSIBLE         0x20
#define IRP_BACKPOCKET_IRP              (IRP_BACKPOCKET_POSSIBLE | IRP_QUOTA_CHARGED)
#define IRP_EXTENSION_ALLOCATED         0x40
#define IRP_EXTENSION_GENERIC_ONLY      0x80

#if (NTDDI_VERSION >= NTDDI_WIN8)

_IRQL_requires_max_(DISPATCH_LEVEL)
BOOLEAN
IoQueueWorkItemToNode(
    _Inout_ __drv_when(return != 0, __drv_aliasesMem) PIO_WORKITEM IoWorkItem,
    __in PIO_WORKITEM_ROUTINE_EX WorkerRoutine,
    __in WORK_QUEUE_TYPE QueueType,
    __in_opt __drv_aliasesMem PVOID Context,
    __in ULONG NodeNumber
    );

#endif


//
//  File System Filters can use these routines to assist in proper propagation
//  of priority hints for filter generated I/O.
//  For now these are only available internally.
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSTATUS
IoSetIoPriorityHintIntoFileObject(
    _In_ PFILE_OBJECT FileObject,
    _In_ IO_PRIORITY_HINT PriorityHint
    );
#endif

#if (NTDDI_VERSION >= NTDDI_VISTA)
NTSTATUS
IoSetIoPriorityHintIntoThread(
    _In_ PETHREAD Thread,
    _In_ IO_PRIORITY_HINT PriorityHint
    );
#endif

//
// This routine allows filter manager to enable filters to adjust stack
// size on a stack where I/O redirection will occur so that IRPs will
// be allocated with the correct size.
//
#if (NTDDI_VERSION >= NTDDI_WIN7)
NTSTATUS
IoAdjustStackSizeForRedirection(
    _In_ PDEVICE_OBJECT SourceDevice,
    _In_ PDEVICE_OBJECT TargetDevice,
    _Out_opt_ PCCHAR ExtraStackLocations
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTSTATUS
IoCopyDeviceObjectHint(
    _In_ PFILE_OBJECT SourceFile,
    _Inout_ PFILE_OBJECT TargetFile
    );
#endif

//
// IoGetSymlinkSupportInformation indicates the current state of symbolic link evaluation.
//

typedef struct _FILE_SYMLINK_SUPPORT_INFORMATION {
    BOOLEAN LocalToLocal;
    BOOLEAN LocalToRemote;
    BOOLEAN RemoteToLocal;
    BOOLEAN RemoteToRemote;
} FILE_SYMLINK_SUPPORT_INFORMATION, *PFILE_SYMLINK_SUPPORT_INFORMATION;

NTSTATUS
IoGetSymlinkSupportInformation(
    _Out_writes_bytes_(SupportInfoSize) PFILE_SYMLINK_SUPPORT_INFORMATION SupportInfo,
    _In_ ULONG SupportInfoSize
    );

#if (NTDDI_VERSION >= NTDDI_WIN8)
#define IoIsMustSucceedIrp(Irp) (Irp->AllocationFlags & IRP_BACKPOCKET_POSSIBLE)
#endif



//============================================================================
// IRP extension support
//============================================================================

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

//
//  Irp Extension function prototypes
//

USHORT
IoSizeofGenericIrpExtension(
    VOID
    );

NTSTATUS
IoGetGenericIrpExtension(
    _In_ PIRP Irp,
    _Out_writes_(GenericExtensionDataSize) PUCHAR GenericExtensionData,
    _In_ USHORT GenericExtensionDataSize
    );

NTSTATUS
IoSetGenericIrpExtension(
    _In_ PIRP Irp,
    _In_reads_(GenericExtensionDataSize) PUCHAR GenericExtensionData,
    _In_ USHORT GenericExtensionDataSize,
    _In_ BOOLEAN OverwriteIfPresent
    );

NTSTATUS
IoPropagateIrpExtensionEx(
    _In_ PIRP SourceIrp,
    _In_ PIRP TargetIrp,
    _In_ LONGLONG TrackedOffset,
    _In_ ULONG Flags
    );

NTSTATUS
IoPropagateIrpExtension(
    _In_ PIRP SourceIrp,
    _In_ PIRP TargetIrp,
    _In_ ULONG Flags
    );

#define IO_IRPEXT_PROPAGATE_GENERIC         0x00000001
#define IO_IRPEXT_PROPAGATE_ACTIVITY_ID     0x00000002
#define IO_IRPEXT_PROPAGATE_TRACKED_OFFSET  0x00000004

#define IO_IRPEXT_PROPAGATE_ALL             0xffffffff      //Drivers should use this unless there is a specific reason to not propagate everything
#endif


typedef
NTSTATUS
(*PIO_QOS_CREATE_FLOW_ROUTINE) (
    _In_ LPGUID FlowId
    );

typedef
NTSTATUS
(*PIO_QOS_SET_FLOW_POLICY_ROUTINE) (
    _In_ LPGUID FlowId,
    _In_opt_ PUNICODE_STRING VolumeName,
    _In_ LONG64 MaximumIops,
    _In_ LONG64 MaximumBandwidth,
    _In_ LONG64 ReservationIops
    );

typedef
NTSTATUS
(*PIO_QOS_SET_HANDLE_FLOW_ROUTINE) (
    _In_ PFILE_OBJECT FileObject,
    _In_ LPGUID FlowId,
    _In_ BOOLEAN ChargeOnly,
    _In_ KWAIT_REASON WaitReason
    );

typedef
NTSTATUS
(*PIO_QOS_DELETE_FLOW_ROUTINE) (
    _In_ LPGUID FlowId
    );

typedef
NTSTATUS
(*PIO_QOS_QUERY_FLOW_HISTORY_ROUTINE) (
    _In_ LPGUID FlowId,
    _Out_ PULONG64 OverQuotaHistory,
    _Out_ PULONG GenerationLength,
    _Out_ PULONG GenerationsPassed
    );

typedef
NTSTATUS
(*PIO_QOS_QUERY_FLOW_INFORMATION_ROUTINE) (
    _In_ LPGUID FlowId,
    _Inout_ PVOID Buffer,
    _In_ ULONG BufferLength,
    _Out_ PULONG CallerActualLength,
    _In_ PRKPROCESS Process,
    _In_ KPROCESSOR_MODE PreviousMode
    );

typedef struct _IO_QOS_ROUTINE_TABLE {
    PIO_QOS_CREATE_FLOW_ROUTINE CreateFlow;
    PIO_QOS_SET_FLOW_POLICY_ROUTINE SetFlowPolicy;
    PIO_QOS_SET_HANDLE_FLOW_ROUTINE SetHandleFlow;
    PIO_QOS_DELETE_FLOW_ROUTINE DeleteFlow;
    PIO_QOS_QUERY_FLOW_HISTORY_ROUTINE QueryFlowHistory;
    PIO_QOS_QUERY_FLOW_INFORMATION_ROUTINE QueryFlowInformation;
} IO_QOS_ROUTINE_TABLE, *PIO_QOS_ROUTINE_TABLE;


__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationProcess (
    _In_ HANDLE ProcessHandle,
    _In_ PROCESSINFOCLASS ProcessInformationClass,
    _Out_writes_bytes_opt_(ProcessInformationLength) PVOID ProcessInformation,
    _In_ ULONG ProcessInformationLength,
    _Out_opt_ PULONG ReturnLength
    );


typedef enum JOB_OBJECT_IO_RATE_CONTROL_FLAGS {
    JOB_OBJECT_IO_RATE_CONTROL_ENABLE = 0x1,
    JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS = JOB_OBJECT_IO_RATE_CONTROL_ENABLE
} JOB_OBJECT_IO_RATE_CONTROL_FLAGS;

#if !defined(SORTPP_PASS) && !defined(MIDL_PASS) && !defined(RC_INVOKED)

DEFINE_ENUM_FLAG_OPERATORS(JOB_OBJECT_IO_RATE_CONTROL_FLAGS)
C_ASSERT(JOB_OBJECT_IO_RATE_CONTROL_VALID_FLAGS ==
             JOB_OBJECT_IO_RATE_CONTROL_ENABLE);

#endif

typedef struct JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE {
    LONG64 MaxIops;
    LONG64 MaxBandwidth;
    LONG64 ReservationIops;
    PWSTR VolumeName;
    ULONG BaseIoSize;
    JOB_OBJECT_IO_RATE_CONTROL_FLAGS ControlFlags;
    USHORT VolumeNameLength;
} JOBOBJECT_IO_RATE_CONTROL_INFORMATION_NATIVE;


_IRQL_requires_max_(APC_LEVEL)
_Success_(return != 0)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlCutoverTimeToSystemTime(
    _In_ PTIME_FIELDS CutoverTime,
    _Out_ PLARGE_INTEGER SystemTime,
    _In_ PLARGE_INTEGER CurrentSystemTime,
    _In_ BOOLEAN ThisYear
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSystemTimeToLocalTime (
    _In_ PLARGE_INTEGER SystemTime,
    _Out_ PLARGE_INTEGER LocalTime
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlLocalTimeToSystemTime (
    _In_ PLARGE_INTEGER LocalTime,
    _Out_ PLARGE_INTEGER SystemTime
    );

//
//  A 64 bit Time value -> time field record
//

_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlTimeToElapsedTimeFields (
    _In_ PLARGE_INTEGER Time,
    _Out_ PTIME_FIELDS TimeFields
    );


#define RTL_IMAGE_NT_HEADER_EX_FLAG_NO_RANGE_CHECK      (0x00000001)
#define RTL_IMAGE_NT_HEADER_EX_FLAG_ALLOW_EXCEPTIONS    (0x00000002)

NTSYSAPI
NTSTATUS
NTAPI
RtlImageNtHeaderEx(
    _In_ ULONG Flags,
    _In_ PVOID Base,
    _In_ ULONG64 Size,
    _Outptr_ PIMAGE_NT_HEADERS * OutHeaders
    );

_Must_inspect_result_
NTSYSAPI
PIMAGE_NT_HEADERS
NTAPI
RtlImageNtHeader(
    _In_ PVOID Base
    );


#if !defined(MIDL_PASS) && !defined(_MANAGED)

FORCEINLINE
ULONG64
RtlAtomicRead64 (
    _In_ LONG64 volatile *Target
    )

/*++

Routine Description:

    This routine performs an atomic, 64-bit read.

Arguments:

    Target - Supplies the address of the memory to be read.

Return Value:

    The value stored at the target address.

--*/

{

#ifdef _WIN64

    return ReadNoFence64(Target);

#else

    return InterlockedCompareExchangeNoFence64(Target, 0, 0);

#endif

}

FORCEINLINE
VOID
RtlAtomicWrite64 (
    _Inout_ LONG64 volatile *Target,
    _In_ LONGLONG Value
    )

/*++

Routine Description:

    This routine performs an atomic, 64-bit write.

Arguments:

    Target - Supplies the address of the memory to be written to.

    Value - Supplies the value to write to memory.

Return Value:

    None.

--*/

{

#ifdef _WIN64

    WriteNoFence64(Target, Value);

#else

    LONGLONG OldValue;
    LONGLONG ReadOldValue;

    ReadOldValue = ReadNoFence64(Target);
    for (;;) {
        OldValue = InterlockedCompareExchangeNoFence64(Target,
                                                       Value,
                                                       ReadOldValue);

        if (OldValue == ReadOldValue) {
            break;

        } else {
            ReadOldValue = OldValue;
        }
    }

#endif

    return;
}

#endif  // !defined(MIDL_PASS) && !defined(_MANAGED)


NTSYSAPI
ULONG32
NTAPI
RtlComputeCrc32(
    IN ULONG32 PartialCrc,
    IN PVOID Buffer,
    IN ULONG Length
    );


NTKERNELAPI
ULONG
PsGetProcessSessionIdEx(
    _In_ PEPROCESS Process
    );


NTKERNELAPI
VOID
PsEnterPriorityRegion (
    VOID
    );

NTKERNELAPI
VOID
PsLeavePriorityRegion (
    VOID
    );


#define CONTAINER_INFO_FLAG_CHARGE_ONLY 1

typedef struct _CONTAINER_ID_INFO {
    GUID ContainerId;
    ULONG Flags;
} CONTAINER_ID_INFO, *PCONTAINER_ID_INFO;

typedef enum _CONTAINER_TYPE {
    ContainerTypeCpu,
    ContainerTypeDiskIo,
    ContainerTypeNetIo,
//    ContainerTypeWorkingSet,
    ContainerTypeHeap,
    ContainerTypeImmediate,
    ContainerTypeMaximumList
} CONTAINER_TYPE, *PCONTAINER_TYPE;

#if (NTDDI_VERSION >= NTDDI_WIN10)

_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PsGetEffectiveContainerId(
    _In_ CONTAINER_TYPE ContainerType,
    _In_ PETHREAD Thread,
    _Out_ PCONTAINER_ID_INFO ContainerIdInfo
    );

#endif

// end_ntosp
typedef struct _AUX_ACCESS_DATA {
    PPRIVILEGE_SET PrivilegesUsed;
    GENERIC_MAPPING GenericMapping;
    ACCESS_MASK AccessesToAudit;
    ACCESS_MASK MaximumAuditMask;
    GUID TransactionId;
    PSECURITY_DESCRIPTOR NewSecurityDescriptor; // The new SD for a new object.
    PSECURITY_DESCRIPTOR ExistingSecurityDescriptor; // The exisiting SD that has been passed into SeAccessCheck.
    PSECURITY_DESCRIPTOR ParentSecurityDescriptor; // The parent SD that has been passed into SeAccessCheck to check delete and read attribute.
    PNTFS_DEREF_EXPORTED_SECURITY_DESCRIPTOR DeRefSecurityDescriptor;
    PVOID SDLock;
    ACCESS_REASONS AccessReasons;
    BOOLEAN GenerateStagingEvents;
} AUX_ACCESS_DATA, *PAUX_ACCESS_DATA;

#if (NTDDI_VERSION >= NTDDI_WIN7)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeAccessCheckWithHint(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG SecurityDescriptorFlags,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ BOOLEAN SubjectContextLocked,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeAccessCheckEx(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ BOOLEAN SubjectContextLocked,
    _Inout_ PSE_ACCESS_REQUEST Request,
    _Inout_ PSE_ACCESS_REPLY Reply,
    _Inout_opt_ PSE_AUDIT_INFO AuditInfo,
    _In_ KPROCESSOR_MODE AccessMode
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
SeSrpAccessCheck(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ BOOLEAN SubjectContextLocked,
    _Inout_ PSE_ACCESS_REQUEST Request,
    _Inout_ PSE_ACCESS_REPLY Reply,
    _Inout_opt_ PSE_AUDIT_INFO AuditInfo,
    _In_ KPROCESSOR_MODE AccessMode
    );

#endif

FORCEINLINE
VOID
SeSetAccessStateNewSecurityDescriptor(
    _Inout_ PACCESS_STATE AccessState,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    )
/*++

Routine Description:

    Updates ACCESS_STATE structure with updated through inheritance security
    descriptor.

Arguments:

    AccessState - Pointer to ACCESS_STATE structure.

    SecurityDescriptor - Pointer to inherited security descriptor.

Return Value:

    None

--*/
{
    PAUX_ACCESS_DATA AuxData = (PAUX_ACCESS_DATA)(AccessState->AuxData);

    if (AuxData->NewSecurityDescriptor != NULL)
    {
        ExFreePool(AuxData->NewSecurityDescriptor);
    }
    AuxData->NewSecurityDescriptor = SecurityDescriptor;
}


#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcFlushCacheToLsn (
    __in PSECTION_OBJECT_POINTERS SectionObjectPointer,
    __in_opt PLARGE_INTEGER LargestLsn,
    __out_opt PIO_STATUS_BLOCK IoStatus
    );
#endif


//
// This routine changes the read ahead granularity for a file, which is
// PAGE_SIZE by default.
// It also sets the pipeline request size. Local as well as Remote FSes
// can use this.
//
#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcSetReadAheadGranularityEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PREAD_AHEAD_PARAMETERS ReadAheadParameters
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcSetLogHandleForFileEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID LogHandle,
    _In_ PFLUSH_TO_LSN FlushToLsnRoutine,
    _In_ PQUERY_LOG_USAGE QueryLogUsageRoutine,
    _In_opt_ PFILE_OBJECT RelatedLogHandleFileObject
    );
#endif


#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
BOOLEAN
CcIsThereDirtyLoggedPages (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_opt_ PULONG NumberOfDirtyPages
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTKERNELAPI
VOID
CcSetLoggedDataThreshold (
    _In_ PVOID LogHandle,
    _In_ ULONG NumberOfPages
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
VOID
CcUnmapFileOffsetFromSystemCache (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags
    );
#endif

//
//  Callback to external caches indicating that they should
//  lazywrite as well as how much they should lazywrite.
//

#if (NTDDI_VERSION >= NTDDI_WIN8)
typedef
VOID (*PEXTERNAL_CACHE_CALLBACK) (
    _In_ PVOID ExternalCacheContext,
    _In_ PFN_NUMBER PagesToWrite,
    _In_ ULONG Reserved
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
NTSTATUS
CcRegisterExternalCache(
    _In_ PEXTERNAL_CACHE_CALLBACK Callback,
    _Out_ PVOID *ExternalCacheContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
VOID
CcUnregisterExternalCache (
    _In_ PVOID ExternalCacheContext
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
VOID
CcAddDirtyPagesToExternalCache (
    _In_ PVOID ExternalCacheContext,
    _In_ PFN_NUMBER Pages
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WIN8)
VOID
CcDeductDirtyPagesFromExternalCache (
    _In_ PVOID ExternalCacheContext,
    _In_ PFN_NUMBER Pages
    );
#endif


//
// IO coalesing APIs and structures
//

typedef PVOID PO_COALESCING_REGISTRATION, *PPO_COALESCING_REGISTRATION;

typedef enum _PO_COALESCING_MSG {

     REGISTRY_FIRST_DIRTY_WRITE_AFTER_COMMAND_FLUSH,
     PM_COALESCE_ON,
     PM_COALESCE_OFF,
     PM_COMMAND_FLUSH,
     DISK_SPINUP,
     CACHE_FIRST_DIRTY_WRITE_AFTER_COMMAND_FLUSH
} PO_COALESCING_MSG;


typedef
VOID
PO_COALESCING_CALLBACK (
    _In_ PO_COALESCING_MSG Msg,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PVOID Context
    );

typedef PO_COALESCING_CALLBACK *PPO_COALESCING_CALLBACK;

_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
PoRegisterCoalescingCallback (
    _In_ PPO_COALESCING_CALLBACK Callback,
    _In_ BOOLEAN Client,
    _Out_ PPO_COALESCING_REGISTRATION Registration,
    _In_opt_ PVOID Context
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
PoUnregisterCoalescingCallback (
    _In_ PO_COALESCING_REGISTRATION Registration
    );

#define FSCTL_SET_BREAK_ON_STATUS           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 183, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define FSCTL_CBAFILT_IGNORE_ADS_CHANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 184, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_MPFILTER_QUERY_FILE_CHANGE    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 186, METHOD_NEITHER, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_USN_SUBMIT_MODIFIED_RANGES    CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 190, METHOD_BUFFERED, FILE_ANY_ACCESS) // RANGETRACK_TRANSFER_PACKET
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#define FSCTL_START_OVERLAY_INTEGRITY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 200, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_STOP_OVERLAY_INTEGRITY            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 201, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_CONTROL_OVERLAY_INTEGRITY         CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 202, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#define FSCTL_QUERY_OVERLAY_INTEGRITY           CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 203, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
#define FSCTL_SHUFFLE_FILE                      CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 208, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS) // SHUFFLE_FILE_DATA
#endif /*_WIN32_WINNT >= _WIN32_WINNT_WIN8 */
#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)
#define FSCTL_CHECK_FOR_SECTION                 CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 210, METHOD_BUFFERED, FILE_ANY_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE) */
#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)
#define FSCTL_CLOUD_DATA_TRANSFER               CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 213, METHOD_IN_DIRECT, FILE_SPECIAL_ACCESS)
#define FSCTL_CLOUD_COMMAND                     CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 214, METHOD_BUFFERED, FILE_SPECIAL_ACCESS)
#endif /* (_WIN32_WINNT >= _WIN32_WINNT_WIN7) */

//======================= FSCTL_SET_BREAK_ON_STATUS ===========================

#define MAX_IMAGE_FILE_NAME_LEN 15  // to match EPROCESS.ImageFileName

typedef struct BREAK_ON_STATUS_BUFFER {

    //
    //  Set at least one of these to have the file system break into the
    //  debugger when it is about to return a particular NT status code
    //  or Win32 error code (which can cover multiple NT status codes).
    //
    //  It is sufficient for EITHER of these to be satisfied, not
    //  necessarily both.  This means that NtStatus does not override
    //  Win32Error; it can be used to break on an additional status code.
    //
    //  Set both of these to 0 to disable break-on-status.
    //

    NTSTATUS NtStatus;
    ULONG Win32Error;

    //
    //  Additional restrictions (optional).  ALL of these that are set to
    //  a non-zero value must be satisfied or the file system will not break.
    //  This means that ThreadId overrides ProcessId.
    //

    ULONG ThreadId;   // e.g. GetCurrentThreadId()
    ULONG ProcessId;  // e.g. GetCurrentProcessId()

    CHAR ImageFileName[MAX_IMAGE_FILE_NAME_LEN + 1];  // ANSI, case insensitive

} BREAK_ON_STATUS_BUFFER, *PBREAK_ON_STATUS_BUFFER;


#if (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

typedef struct _WIM_PROVIDER_CONTROL_INTEGRITY {
    ULONG ControlCode;
} WIM_PROVIDER_CONTROL_INTEGRITY, *PWIM_PROVIDER_CONTROL_INTEGRITY;

#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_SNAPSHOT                 (0)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_REVERT_SNAPSHOT          (1)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_POWER_HIBERNATE          (2)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_POWER_RESUME             (3)
#define WIM_PROVIDER_INTEGRITY_CONTROLCODE_BACKGROUND_VALIDATION    (4)

typedef struct _WIM_PROVIDER_INTEGRITY_STATUS {
    BOOLEAN IntegrityComplete;
    BOOLEAN IntegrityRunning;
    ULONGLONG IntegrityAvailable;
    ULONGLONG IntegrityRequired;
} WIM_PROVIDER_INTEGRITY_STATUS, *PWIM_PROVIDER_INTEGRITY_STATUS;

typedef struct _WIM_PROVIDER_START_INTEGRITY {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_START_INTEGRITY, *PWIM_PROVIDER_START_INTEGRITY;


//
//  Structures for WOF Cloud Files provider specific fsctls.
//

//
//  This is the cloud-specific part of the reparse tag.
//

#define CLOUD_PROVIDER_CURRENT_VERSION      (0x00000001)

#define CPEI_FLAG_CONVERT_TO_PLACEHOLDER    (0x00000001)

#define CPEI_FLAG_VALID_FLAGS               (0x00000001)

typedef struct _CLOUD_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER ServerFileSize;
    GUID SyncServiceId;
    ULONG ServiceDataOffset;
    ULONG ServiceDataSize;
} CLOUD_PROVIDER_EXTERNAL_INFO, *PCLOUD_PROVIDER_EXTERNAL_INFO;

//
//  Defines for FSCTL_CLOUD_DATA_TRANSFER.
//

#define CLOUD_DATA_TRANSFER_FLAG_NO_RECALL          (0x00000001)

typedef struct _CLOUD_DATA_TRANSFER {
    LARGE_INTEGER RequiredOffset;
    LARGE_INTEGER ByteOffset;
    ULONG RequiredLength;
    ULONG Length;
    ULONG Flags;
    NTSTATUS ServiceStatus;
} CLOUD_DATA_TRANSFER, *PCLOUD_DATA_TRANSFER;

//
//  Defines for FSCTL_CLOUD_COMMAND.
//

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4201)       // unnamed struct

#define CLOUD_COMMAND_CURRENT_VERSION       (0x00000001)

#define CLOUD_COMMAND_INITIATE_RECALL       (0)
#define CLOUD_COMMAND_DEFLATE               (1)
#define CLOUD_COMMAND_INVALIDATE_VERSION    (2)
#define CLOUD_COMMAND_GET_SERVICE_DATA      (3)
#define CLOUD_COMMAND_SET_SERVICE_DATA      (4)
#define CLOUD_COMMAND_SET_SYNC_SCOPE        (5)

typedef struct _CLOUD_COMMAND {
    ULONG Version;
    ULONG CommandCode;

    union {

        struct {
            LARGE_INTEGER RecallOffset;
            ULONG RecallLength;
        } InitiateRecall;

        struct {
            LARGE_INTEGER DeflateOffset;
            ULONG DeflateLength;
        } Deflate;

        struct {
            LARGE_INTEGER NewServerFileSize;
            ULONG ServiceDataOffset;
            ULONG ServiceDataSize;
        } InvalidateVersion;

        struct {
            ULONG ServiceDataOffset;
            ULONG ServiceDataSize;
        } ServiceData;

        struct {
            GUID SyncServiceId;
            BOOLEAN SetScope;
        } SetSyncScope;

    } DUMMYUNIONNAME;
} CLOUD_COMMAND, *PCLOUD_COMMAND;

//
//  Defines for cloud filter communication port messages.
//

#define CLOUDPROV_PORT_NAME L"\\CloudFileFilterPort"

//
//  The service GUID is appended to this prefix.
//

#define CLOUDPROV_SERVICE_PREFIX L"\\CloudServicePort"

#define CLOUD_PROVIDER_MESSAGE_CURRENT_VERSION      (0x00000001)

#define CLOUD_PROVIDER_MESSAGE_CODE_FILE_OPEN               (1)
#define CLOUD_PROVIDER_MESSAGE_CODE_FETCH_DATA              (2)
#define CLOUD_PROVIDER_MESSAGE_CODE_FILE_LEAVING_SCOPE      (3)
#define CLOUD_PROVIDER_MESSAGE_CODE_DELETE_PENDING          (4)
#define CLOUD_PROVIDER_MESSAGE_CODE_LAST_USER_HANDLE_CLOSE  (5)

#define FETCH_DATA_FLAG_READ    (0x00000001)
#define FETCH_DATA_FLAG_WRITE   (0x00000002)

#define CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE   48

typedef struct _CLOUD_PROVIDER_MESSAGE {
    ULONG Version;
    ULONG MessageCode;

    union {
        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FileOpen;

        struct {
            FILE_ID_128 FileId;
            LARGE_INTEGER ContainingOffset;
            LARGE_INTEGER ContainingLength;
            LARGE_INTEGER RequiredOffset;
            ULONG RequiredLength;
            ULONG Flags;
            ULONG Alignment;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FetchData;

        struct {
            FILE_ID_128 FileId;
            FILE_ID_128 TargetDirectoryFileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } FileLeavingScope;

        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } DeletePending;

        struct {
            FILE_ID_128 FileId;
            WCHAR VolumeGuidName[CLOUD_PROVIDER_VOLUME_GUID_NAME_SIZE];
        } LastUserHandleClose;

    } DUMMYUNIONNAME;
} CLOUD_PROVIDER_MESSAGE, *PCLOUD_PROVIDER_MESSAGE;

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning( default : 4201 ) /* nonstandard extension used : nameless struct/union */
#endif

#endif  //  (_WIN32_WINNT >= _WIN32_WINNT_WIN7)

#if (_WIN32_WINNT >= _WIN32_WINNT_WIN8)
//
//=============== FSCTL_SHUFFLE_FILE ====================
//

#define SHUFFLE_FILE_FLAG_SKIP_INITIALIZING_NEW_CLUSTERS                (0x00000001)

//
//  Input structure for FSCTL_SHUFFLE_FILE
//

typedef struct _SHUFFLE_FILE_DATA {

    LONGLONG StartingOffset;
    LONGLONG Length;
    ULONG Flags;

} SHUFFLE_FILE_DATA, *PSHUFFLE_FILE_DATA;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WIN8)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

//
//============== FSCTL_SPARSE_OVERALLOCATE ==============
//

//
//  Input/Output structure for FSCTL_SPARSE_OVERALLOCATE
//
//  It's possible to pass this structure just as input, just as output, or as
//  both input and output.
//

typedef struct _SPARSE_OVERALLOCATE_DATA {

    //
    //  On input:   The desired minimum size (in bytes) that the file system
    //              will allocate for writes to a sparse region of the file.
    //              If a write spans multiple distinct sparse regions of a
    //              file, then this size only applies to the last sparse region
    //              affected (since earlier sparse regions are bounded).
    //              A value of 0 means the file system uses its own default
    //              allocation policy (usually the minimum necessary).
    //
    //  On output:  The effective over-allocate size for the file.  This is
    //              usually the desired minimum size from the input structure,
    //              rounded up to file system-specific alignment requirements
    //              (e.g. on NTFS this would be rounded up to compression unit
    //              alignment).  The file system may also impose a maximum
    //              supported value.
    //

    ULONG SparseOverAllocateSize;

} SPARSE_OVERALLOCATE_DATA, *PSPARSE_OVERALLOCATE_DATA;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINBLUE)

#if (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
//
//=============== FSCTL_QUERY_FILE_METADATA_OPTIMIZATION ====================
//

//
//  Output structure for FSCTL_QUERY_FILE_METADATA_OPTIMIZATION
//

typedef enum _FILE_METADATA_OPTIMIZATION_STATE {

    FileMetadataOptimizationNone = 0,
    FileMetadataOptimizationInProgress,
    FileMetadataOptimizationPending

} FILE_METADATA_OPTIMIZATION_STATE, *PFILE_METADATA_OPTIMIZATION_STATE;

typedef struct _FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT {

    FILE_METADATA_OPTIMIZATION_STATE State;

    ULONG AttributeListSize;

    ULONG MetadataSpaceUsed;
    ULONG MetadataSpaceAllocated;

    ULONG NumberOfFileRecords;
    ULONG NumberOfResidentAttributes;
    ULONG NumberOfNonresidentAttributes;

    ULONG TotalInProgress;
    ULONG TotalPending;

} FILE_QUERY_METADATA_OPTIMIZATION_OUTPUT, *PFILE_QUERY_METADATA_OPTIMIZATION_OUTPUT;

#endif // (_WIN32_WINNT >= _WIN32_WINNT_WINTHRESHOLD)
//
//=============== END FileSystem FSCTL Structure Defintions ==================
//

//
// Definitions for full live kernel dump and WER support
//

#pragma warning(push)
#pragma warning(disable:4201)   // nameless struct/union
#pragma warning(disable:4214)   // bit field types other than int

typedef union DBGK_LIVEDUMP_FLAGS {
    struct {
        
        //
        // When set, capture user-mode process pages
        //

        ULONG  UserPages:1;
        ULONG  Reserved:31;
    };

    ULONG AsUlong;

}DBGK_LIVEDUMP_FLAGS, *PDBGK_LIVEDUMP_FLAGS; 

#pragma warning(pop)

//
// The function declaration provided to add secondary data to live kernel dump
//

typedef NTSTATUS (*PDBGK_LIVEDUMP_ADDSECONDARYDATA_ROUTINE) (

    // Report handle passed to the live dump callback routine
    _In_ HANDLE ReportHandle,

    // GUID to identify the secondary data
    _In_reads_bytes_(sizeof(GUID)) LPCGUID Identifier,   

    // Virtual address of data to add
    _In_reads_bytes_(Size) PVOID Data,

    // Size of data to add  
    _In_ ULONG Size
);

//
// Prototype of the callback function which will be called
// When a live dump is triggered
//

typedef NTSTATUS DBGK_LIVEDUMP_CALLBACK_ROUTINE(

    // An opaque handle to the WER report
    _In_ HANDLE ReportHandle,

    // Function pointer for a routine to add secondary data to the live dump
    _In_ PDBGK_LIVEDUMP_ADDSECONDARYDATA_ROUTINE AddSecondaryDataRoutine,

    // Bugcheck Code and Parameters
    _In_ ULONG BugCheckCode,
    _In_opt_ ULONG_PTR P1,  
    _In_opt_ ULONG_PTR P2,  
    _In_opt_ ULONG_PTR P3,  
    _In_opt_ ULONG_PTR P4,  

    // Caller supplied context
    _In_opt_ PVOID CallbackContext
    );
    
typedef DBGK_LIVEDUMP_CALLBACK_ROUTINE *PDBGK_LIVEDUMP_CALLBACK_ROUTINE;

//
// Defines the maximum component length name that can be passed
// to DbgkWerCaptureLiveKernelDump.
// 
// N.B. This definition must match WER_LIVE_KERNEL_REPORT_ID_LENGTH. 
//     There is a C_ASSERT in to verify this in ntos\dbgk\lkdmp\livekerneldump.c
//

#define DBGKWER_COMPONENT_NAME_LENGTH 16

_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
DbgkWerCaptureLiveKernelDump (
    _In_ LPCWSTR ComponentName,
    _In_ ULONG BugCheckCode,
    _In_opt_ ULONG_PTR P1,
    _In_opt_ ULONG_PTR P2,
    _In_opt_ ULONG_PTR P3,
    _In_opt_ ULONG_PTR P4,
    _In_opt_ PVOID CallbackContext,
    _In_opt_ PDBGK_LIVEDUMP_CALLBACK_ROUTINE CallbackFunction,
    _In_opt_ DBGK_LIVEDUMP_FLAGS Flags
    );

#if !defined(XBOX_SYSTEMOS)

NTSTATUS
DbgkWerAddSecondaryData (
    _In_ HANDLE ReportHandle,
    _In_reads_bytes_(sizeof(GUID)) LPCGUID Identifier,  
    _In_reads_bytes_(Size) PVOID Data,
    _In_ ULONG Size
    );

#endif


#ifdef __cplusplus
}    // extern "C"
#endif

#endif // _NTOSIFS_
