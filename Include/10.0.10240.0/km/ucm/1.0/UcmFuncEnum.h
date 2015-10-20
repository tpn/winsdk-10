/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UcmFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _UCMFUNCENUM_H_
#define _UCMFUNCENUM_H_

extern PUCM_DRIVER_GLOBALS UcmDriverGlobals;

typedef enum _UCMFUNCENUM {

    UcmInitializeDeviceTableIndex = 0,
    UcmConnectorCreateTableIndex = 1,
    UcmConnectorTypeCAttachTableIndex = 2,
    UcmConnectorTypeCDetachTableIndex = 3,
    UcmConnectorTypeCCurrentAdChangedTableIndex = 4,
    UcmConnectorPdSourceCapsTableIndex = 5,
    UcmConnectorPdPartnerSourceCapsTableIndex = 6,
    UcmConnectorPdConnectionStateChangedTableIndex = 7,
    UcmConnectorChargingStateChangedTableIndex = 8,
    UcmConnectorDataDirectionChangedTableIndex = 9,
    UcmConnectorPowerDirectionChangedTableIndex = 10,
    UcmFunctionTableNumEntries = 11,
} UCMFUNCENUM;

#endif // _UCMFUNCENUM_H_

