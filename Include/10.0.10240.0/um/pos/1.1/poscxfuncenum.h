/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: PoscxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _POSCXFUNCENUM_H_
#define _POSCXFUNCENUM_H_

extern PPOSCX_DRIVER_GLOBALS PoscxDriverGlobals;

typedef enum _POSCXFUNCENUM {

    PosCxClaimDeviceTableIndex = 0,
    PosCxInitTableIndex = 1,
    PosCxRetainDeviceTableIndex = 2,
    PosCxRemoteRequestReleaseTableIndex = 3,
    PosCxReleaseDeviceTableIndex = 4,
    PosCxIsDeviceOwnerTableIndex = 5,
    PosCxGetDeviceInterfaceTagTableIndex = 6,
    PosCxPutPendingEventTableIndex = 7,
    PosCxPutPendingEventMemoryTableIndex = 8,
    PosCxGetPendingEventTableIndex = 9,
    PosCxCleanupEventsTableIndex = 10,
    PosCxCleanPendingRequestsTableIndex = 11,
    PosCxIsPosAppTableIndex = 12,
    PosCxMarkPosAppTableIndex = 13,
    PosCxOpenTableIndex = 14,
    PosCxCloseTableIndex = 15,
    PoscxFunctionTableNumEntries = 16,
} POSCXFUNCENUM;

#endif // _POSCXFUNCENUM_H_

