/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Header Name:

    vffailure.h

Abstract:

    Verifier failure reporting. Used by ntos\verifier and busdrv\pci.

Author:

    Daniel Mihai (DMihai) 27-Dec-2005

Environment:

    Kernel mode

--*/

#ifndef INCLUDED_VFFAILURE_H
#define INCLUDED_VFFAILURE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {

    //
    // Bugs in this class are severe enough that the hardware should be removed
    // from a running production machine.
    //
    VFFAILURE_FAIL_IN_FIELD = 0,

    //
    // Bugs of this class are severe enough for WHQL to deny a logo for the
    // failing whateverware.
    //
    VFFAILURE_FAIL_LOGO = 1,

    //
    // Bugs of this class stop the machine only if it is running under a kernel
    // debugger.
    //
    VFFAILURE_FAIL_UNDER_DEBUGGER = 2

} VF_FAILURE_CLASS, *PVF_FAILURE_CLASS;

typedef enum {

    //
    // Driver object
    //
    VFOBJTYPE_DRIVER = 0,

    //
    // Physical Device Object pointing to hardware
    //
    VFOBJTYPE_DEVICE,

    //
    // System BIOS (no object)
    //
    VFOBJTYPE_SYSTEM_BIOS

} VF_OBJECT_TYPE;


//
// Example usage: (note - perMinorFlags statically preinitialized to zero)
//
// VfFailDeviceNode(
//     PhysicalDeviceObject
//     major,
//     minor,
//     VFFAILURE_FAIL_LOGO,
//     &perMinorFlags,
//     "Device %DevObj mishandled register %Ulong",
//     "%Ulong%DevObj",
//     value,
//     deviceObject
//     );
//
VOID
VfFailDeviceNode(
    _In_      PDEVICE_OBJECT      PhysicalDeviceObject,
    _In_      ULONG               BugCheckMajorCode,
    _In_      ULONG               BugCheckMinorCode,
    _In_      VF_FAILURE_CLASS    FailureClass,
    _Inout_   PULONG              AssertionControl,
    _In_      PSTR                DebuggerMessageText,
    _In_      PSTR                ParameterFormatString,
    ...
    );

//
// Example usage: (note - perMinorFlags statically preinitialized to zero)
//
// VfFailSystemBIOS(
//     major,
//     minor,
//     VFFAILURE_FAIL_LOGO,
//     &perMinorFlags,
//     "Driver at %Routine returned %Ulong",
//     "%Ulong%Routine",
//     value,
//     routine
//     );
//
VOID
VfFailSystemBIOS(
    _In_    ULONG               BugCheckMajorCode,
    _In_    ULONG               BugCheckMinorCode,
    _In_    VF_FAILURE_CLASS    FailureClass,
    _Inout_ PULONG              AssertionControl,
    _In_    PSTR                DebuggerMessageText,
    _In_    PSTR                ParameterFormatString,
    ...
    );

LOGICAL
VfIsVerificationEnabled(
    _In_     VF_OBJECT_TYPE  VfObjectType,
    _In_opt_ PVOID           Object
    );

#ifdef __cplusplus
}
#endif


#endif // #ifndef INCLUDED_VFFAILURE_H

