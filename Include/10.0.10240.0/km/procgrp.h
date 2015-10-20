/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    procgrp.h

Abstract:

    This header exposes the new kernel APIs to device drivers in a 
    manner that makes it possible for drivers referencing these new 
    APIs to run on downlevel systems.

--*/

#ifndef _WDMLIB_PROCGRP_H_
#define _WDMLIB_PROCGRP_H_
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// Initialization function of the compatibility library. This function
// must be called at PASSIVE_LEVEL prior to calling any of the APIs in
// this library.
//

VOID
WdmlibProcgrpInitialize (
    VOID
    );

//
// Supply an overrideable library implementation of 
// KeGetCurrentProcessorNumberEx. See DDK documentation for more details 
// on this API.
//

#undef KeGetCurrentProcessorNumberEx
#define KeGetCurrentProcessorNumberEx WdmlibKeGetCurrentProcessorNumberEx

ULONG
WdmlibKeGetCurrentProcessorNumberEx (
    _Out_opt_ PPROCESSOR_NUMBER ProcNumber
    );

//
// Supply an overrideable library implementation of
// KeQueryActiveProcessorCountEx. See DDK documentation for more details
// on this API.
//

#undef KeQueryActiveProcessorCountEx
#define KeQueryActiveProcessorCountEx WdmlibKeQueryActiveProcessorCountEx

ULONG
WdmlibKeQueryActiveProcessorCountEx (
    _In_ USHORT GroupNumber
    );

//
// Supply an overrideable library implementation of
// KeQueryMaximumProcessorCountEx. See DDK documentation for more details
// on this API.
//

#undef KeQueryMaximumProcessorCountEx
#define KeQueryMaximumProcessorCountEx WdmlibKeQueryMaximumProcessorCountEx

ULONG
WdmlibKeQueryMaximumProcessorCountEx (
    _In_ USHORT GroupNumber
    );

//
// Supply an overrideable library implementation of
// KeQueryMaximumProcessorCount. See DDK documentation for more details
// on this API.
//

#undef KeQueryMaximumProcessorCount
#define KeQueryMaximumProcessorCount WdmlibKeQueryMaximumProcessorCount

ULONG
WdmlibKeQueryMaximumProcessorCount (
    VOID
    );

//
// Supply an overrideable library implementation of KeQueryGroupAffinity. 
// See DDK documentation for more details on this API.
//

#undef KeQueryGroupAffinity
#define KeQueryGroupAffinity WdmlibKeQueryGroupAffinity

KAFFINITY
WdmlibKeQueryGroupAffinity (
    _In_ USHORT GroupNumber
    );

//
// Supply an overrideable library implementation of
// KeQueryActiveGroupCount. See DDK documentation for more details
// on this API.
//

#undef KeQueryActiveGroupCount
#define KeQueryActiveGroupCount WdmlibKeQueryActiveGroupCount

USHORT
WdmlibKeQueryActiveGroupCount (
    VOID
    );

//
// Supply an overrideable library implementation of
// KeQueryMaximumGroupCount. See DDK documentation for more details
// on this API.
//

#undef KeQueryMaximumGroupCount
#define KeQueryMaximumGroupCount WdmlibKeQueryMaximumGroupCount

USHORT
WdmlibKeQueryMaximumGroupCount (
    VOID
    );

//
// Supply an overrideable library implementation of
// KeGetProcessorNumberFromIndex. See DDK documentation for more details
// on this API.
//

#undef KeGetProcessorNumberFromIndex
#define KeGetProcessorNumberFromIndex WdmlibKeGetProcessorNumberFromIndex

NTSTATUS
WdmlibKeGetProcessorNumberFromIndex (
    _In_ ULONG ProcIndex,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );

//
// Supply an overrideable library implementation of
// KeGetProcessorIndexFromNumber. See DDK documentation for more details
// on this API.
//

#undef KeGetProcessorIndexFromNumber
#define KeGetProcessorIndexFromNumber WdmlibKeGetProcessorIndexFromNumber

ULONG
WdmlibKeGetProcessorIndexFromNumber (
    _In_ PPROCESSOR_NUMBER ProcNumber
    );

//
// Supply an overrideable library implementation of
// KeSetSystemAffinityThreadEx. See DDK documentation for more details
// on this API.
//

#undef KeSetSystemAffinityThreadEx
#define KeSetSystemAffinityThreadEx WdmlibKeSetSystemAffinityThreadEx

KAFFINITY
WdmlibKeSetSystemAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );

//
// Supply an overrideable library implementation of
// KeSetSystemGroupAffinityThread. See DDK documentation for more details
// on this API.
//

#undef KeSetSystemGroupAffinityThread
#define KeSetSystemGroupAffinityThread WdmlibKeSetSystemGroupAffinityThread

VOID
WdmlibKeSetSystemGroupAffinityThread (
    _In_ PGROUP_AFFINITY NewAffinity,
    _Out_opt_ PGROUP_AFFINITY PreviousAffinity
    );

//
// Supply an overrideable library implementation of
// KeRevertToUserAffinityThreadEx. See DDK documentation for more details
// on this API.
//

#undef KeRevertToUserAffinityThreadEx
#define KeRevertToUserAffinityThreadEx WdmlibKeRevertToUserAffinityThreadEx

VOID
WdmlibKeRevertToUserAffinityThreadEx (
    _In_ KAFFINITY Affinity
    );

//
// Supply an overrideable library implementation of
// KeRevertToUserGroupAffinityThread. See DDK documentation for more details
// on this API.
//

#undef KeRevertToUserGroupAffinityThread
#define KeRevertToUserGroupAffinityThread \
            WdmlibKeRevertToUserGroupAffinityThread

VOID
WdmlibKeRevertToUserGroupAffinityThread (
    _In_ PGROUP_AFFINITY PreviousAffinity
    );

//
// Supply an overrideable library implementation of
// KeSetTargetProcessorDpcEx. See DDK documentation for more details
// on this API.
//

#undef KeSetTargetProcessorDpcEx
#define KeSetTargetProcessorDpcEx WdmlibKeSetTargetProcessorDpcEx

NTSTATUS
WdmlibKeSetTargetProcessorDpcEx (
    _Inout_ PKDPC Dpc,
    _In_ PPROCESSOR_NUMBER ProcNumber
    );

#ifdef __cplusplus
} // extern "C"
#endif

#endif // !defined(_WDMLIB_PROCGRP_H_)
