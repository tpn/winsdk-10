/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UcmtcpciFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _UCMTCPCIFUNCENUM_H_
#define _UCMTCPCIFUNCENUM_H_

extern PUCMTCPCI_DRIVER_GLOBALS UcmtcpciDriverGlobals;

typedef enum _UCMTCPCIFUNCENUM {

    UcmTcpciDeviceInitInitializeTableIndex = 0,
    UcmTcpciDeviceInitializeTableIndex = 1,
    UcmTcpciPortControllerCreateTableIndex = 2,
    UcmTcpciPortControllerSetHardwareRequestQueueTableIndex = 3,
    UcmTcpciPortControllerStartTableIndex = 4,
    UcmTcpciPortControllerStopTableIndex = 5,
    UcmTcpciPortControllerAlertTableIndex = 6,
    UcmtcpciFunctionTableNumEntries = 7,
} UCMTCPCIFUNCENUM;

#endif // _UCMTCPCIFUNCENUM_H_

