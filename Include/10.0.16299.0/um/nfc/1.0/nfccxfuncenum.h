/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: NfccxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _NFCCXFUNCENUM_H_
#define _NFCCXFUNCENUM_H_

extern PNFCCX_DRIVER_GLOBALS NfccxDriverGlobals;

typedef enum _NFCCXFUNCENUM {

    NfcCxDeviceInitConfigTableIndex = 0,
    NfcCxDeviceInitializeTableIndex = 1,
    NfcCxDeviceDeinitializeTableIndex = 2,
    NfcCxHardwareEventTableIndex = 3,
    NfcCxNciReadNotificationTableIndex = 4,
    NfcCxSetRfDiscoveryConfigTableIndex = 5,
    NfcCxSetLlcpConfigTableIndex = 6,
    NfcCxRegisterSequenceHandlerTableIndex = 7,
    NfcCxUnregisterSequenceHandlerTableIndex = 8,
    NfcCxReleaseHardwareControlTableIndex = 9,
    NfcCxReacquireHardwareControlTableIndex = 10,
    NfccxFunctionTableNumEntries = 11,
} NFCCXFUNCENUM;

#endif // _NFCCXFUNCENUM_H_

