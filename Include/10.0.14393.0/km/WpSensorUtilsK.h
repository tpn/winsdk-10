/*++

Copyright (c) 1990-2011  Microsoft Corporation. All rights reserved.

Module Name:

    WpSensorUtilsK.h

Abstract:

    This file contains kernel mode utility functions for Windows Phone Sensors
    drivers.

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// This routine reads the requested ACPI entry using the supplied method name
//

NTSTATUS
GetMethodArgumentFromAcpi(
    __in WDFDEVICE Device,
    __in_bcount(MethodNameLength) PSZ MethodName,
    __in UCHAR MethodNameLength,
    __out_bcount(MethodArgumentLength) BYTE *MethodArgument,
    __in ULONG MethodArgumentLength
    );

//
// This routine reads the rotation matrix from the ACPI entries.
//
// The caller is responsible for saving/restoring the floating point context
// prior to calling this function.
//

NTSTATUS
InitTransformationMatrix(
    __in WDFDEVICE Device,
    __out PVEC3D RotationMatrix,
    __in ULONG RotationMatrixEntryCount
    );

//
// This routine applies the rotation matrix to the given sample. 
//
// The caller is responsible for saving/restoring the floating point context 
// prior to calling this function.
//

VOID
TranslateAxes(
    __in VEC3D *RotationMatrix,
    __in ULONG RotationMatrixEntryCount,
    __inout VEC3D *Data,
    __in ULONG DataCount
    );

//
// This routine reads the rotation matrix from the ACPI entries. 
//
// The caller is responsible for saving/restoring the floating point context 
// prior to calling this function.
//

NTSTATUS
GetRotationMatrixFromAcpi(
    __in WDFDEVICE Device,
    __in PSZ MethodName,
    __in UCHAR MethodNameLength,
    __inout PVEC3D RotationMatrix,
    __in ULONG RotationMatrixEntries
    );

//
// Read one or few I2C registers starting from given address
//

NTSTATUS I2CSensorReadRegister(
    __in WDFIOTARGET I2CIoTarget,
    __in UCHAR RegAddress,
    __in_ecount(BufferCb) BYTE* Buffer,
    __in ULONG BufferCb);

//
// Write one or few I2C registers starting from given address
//

NTSTATUS
I2CSensorWriteRegister(
    __in WDFIOTARGET I2CIoTarget,
    __in UCHAR RegAddress,
    __in_bcount(RegLength) BYTE* RegValue,
    __in size_t RegLength);

//
// This routine implements a sleep in milliseconds using KeDelayExecutionThread
//

VOID
SleepMSec(
    ULONG TimeMsec
    );

#ifdef __cplusplus
}
#endif
