//+---------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 2007.
//
//  File:       systemrng.h
//
//  Contents:   API for system RNG infrastructure
//
//----------------------------------------------------------------------------

#ifdef _MSC_VER
#pragma once
#endif // _MSC_VER

#ifdef __cplusplus
extern "C" {
#endif

#if (NTDDI_VERSION >= NTDDI_WIN7)

typedef const BYTE * PCBYTE;

#define ENTROPY_MAX_DATA_LEN    (128)   // We limit size of an entropy string.
                                        // We have to process it while holding a spinlock
                                        // which means we also have to copy it to nonpaged memory.
                                        
//
// Entropy source handles are pointers to a struct. To provide both type-safety
// and type isolation we use a pointer to an unspecified structure
//
struct _ENTROPY_SOURCE_STATE;

typedef struct _ENTROPY_SOURCE_STATE * ENTROPY_SOURCE_HANDLE;

//
// We support three types of entropy sources.
// HIGH_PUSH sources are those that produce high-quality uniformly distributed random bytes on their own initiative.
// LOW_PUSH sources produce possibly low-quality entropy on their own initiative.
// HIGH_PULL are equivalent to HIGH_PUSH, but in addition can register a callback that is called every time
//     the system schedules a reseed of the root PRNG. This allows on-demand sources to not have their
//     own timer. 
//     The callback is called AFTER each scheduled reseed, so a HIGH_PULL source should also provide
//     entropy when it first registers.
//
// For HIGH_PUSH and HIGH_PULL sources, the first 32 bytes provided by that source between two reseeds 
// is always put in pool 0 so that it is used in the next reseed. 
// We recommend that HIGH_PULL sources that only produce entropy in the callback provide at least 64 bytes of entropy
// per callback.
//

typedef enum{
    ENTROPY_SOURCE_TYPE_HIGH_PUSH = 1,  // Source provides high-entropy data; data is pushed (source initiates the transfer).
    ENTROPY_SOURCE_TYPE_LOW_PUSH = 2,   // Low entropy data, push
    ENTROPY_SOURCE_TYPE_HIGH_PULL = 3,  // High entropy, support pull.
} ENTROPY_SOURCE_TYPE;

typedef NTSTATUS (*PENTROPY_SOURCE_CALLBACK_FUNCTION) (
    _In_    ENTROPY_SOURCE_HANDLE   hEntropySource,
    _In_    PVOID                   context );

// 
// EntropyRegisterSource
//
// Register a source.
// entropySourceType indicates the type of entropy source
// entropySourceName can be any Unicode string; 
// it is used for logging & auditing and should identify the source with a human-readable name.
//
// NULL is suitable as the not-a-handle value for entropy source handles.
// *phEntropySource is set to NULL if an error occurred (and phEntropySource is not NULL)
//
// May only be called at IRQL = PASSIVE_LEVEL
//
NTSTATUS
EntropyRegisterSource(
    _Out_   ENTROPY_SOURCE_HANDLE * phEntropySource,
            ENTROPY_SOURCE_TYPE     entropySourceType,
    _In_    PCWSTR                  entropySourceName );


//
// EntropyUnregisterSource
//
// The corresponding unregistration function. Must be called to close out the handle when the
// caller is done providing entropy.
// 
// May only be called at IRQL = PASSIVE_LEVEL
//
NTSTATUS
EntropyUnregisterSource( ENTROPY_SOURCE_HANDLE hEntropySource );

//
// EntropyProvideData
//
// Provide entropy data to the RNG system.
// cbData is limited to <= ENTROPY_MAX_DATA_LEN.
//
// The first time an entropy source provides entropy, that entropy data
// bypasses the pools and is used directly to reseed of the root PRNG.
// This is a relatively expensive operation, so entropy providers should NOT 
// register new sources repeatedly.
// Also, high-entropy sources should provide enough entropy in their first call
// to securely reseed an PRNG with.
//
// May be called at IRQL <= DISPATCH_LEVEL
// 
NTSTATUS
EntropyProvideData(
                            ENTROPY_SOURCE_HANDLE   hEntropySource,
    _In_reads_bytes_( cbData )   PCBYTE                  pbData,
                            SIZE_T                  cbData,
                            ULONG                   entropyEstimateInMilliBits );

#endif // (NTDDI_VERSION >= NTDDI_WIN7)

#if (NTDDI_VERSION >= NTDDI_WIN8)
//
// EntropyRegisterCallback
//
// Register the callback function that will be called in a worker thread
// after every reseed that the system performs.
// Only valid if the entropy source is a PULL type.
// The callback function is called with the entropy souce handle,
// and with the context pointer passed here.
// Except for the callback, a PULL and PUSH entropy source are identical.
//
// The callback function is run in a work item at passive level, so it can
// spend a reasonable amount of time in the callback. 
// Typically, the callback function will gather 64 bytes of entropy and 
// call the EntropyProvideData function.
// 
// While callbacks are in progress, 
// other sources are blocked from registering and unregistering
// sources, so callback functions should aim to return quickly. (Goal: < 25 ms.)
// Sources that can have a long delay should use the callback merely to schedule
// the work, and perform the actual EntropyProvideData() call at a later time.
//
// The callback is merely informational, there is no requirement to actually provide
// entropy, or any restriction on providing entropy at any other time.
//
// May only be called at IRQL = PASSIVE_LEVEL
//
NTSTATUS
EntropyRegisterCallback(
            ENTROPY_SOURCE_HANDLE               hEntropySource,
    _In_    PENTROPY_SOURCE_CALLBACK_FUNCTION   pCallbackFunction,
            PVOID                               context );

#endif // (NTDDI_VERSION >= NTDDI_WIN8)

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
//
// EntropyPoolTriggerReseedForIum
//
// Trigger a kernel RNG reseed for the cng.sys inside the IUM (Isolated User Mode)
// environment. As this environment does not currently support work items or 
// DPC routines, we expose this method to trigger a root reseed by calling it 
// explicitly by the securekernel.
//
// If called inside the IUM environment, it triggers a reseed from one or more of 
// the entropy pools of the system. Also if the fPerformCallBacks flag is set 
// it pulls entropy from all the "PULL" entropy sources. Currently the only 
// caller is the securekernel.exe.
//
// If called inside the NW (normal world) environment, it does nothing by default.
//
VOID
EntropyPoolTriggerReseedForIum(BOOLEAN fPerformCallbacks);

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#ifdef __cplusplus
}
#endif
