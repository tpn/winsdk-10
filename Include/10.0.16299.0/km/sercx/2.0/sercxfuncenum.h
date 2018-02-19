/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: SercxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _SERCXFUNCENUM_H_
#define _SERCXFUNCENUM_H_

extern PSERCX_DRIVER_GLOBALS SercxDriverGlobals;

typedef enum _SERCXFUNCENUM {

    SerCx2InitializeDeviceInitTableIndex = 0,
    SerCx2InitializeDeviceTableIndex = 1,
    SerCx2CompleteWaitTableIndex = 2,
    SerCx2PioTransmitCreateTableIndex = 3,
    SerCx2PioReceiveCreateTableIndex = 4,
    SerCx2SystemDmaTransmitCreateTableIndex = 5,
    SerCx2SystemDmaReceiveCreateTableIndex = 6,
    SerCx2SystemDmaTransmitGetDmaEnablerTableIndex = 7,
    SerCx2SystemDmaReceiveGetDmaEnablerTableIndex = 8,
    SerCx2SystemDmaTransmitInitializeTransactionCompleteTableIndex = 9,
    SerCx2SystemDmaReceiveInitializeTransactionCompleteTableIndex = 10,
    SerCx2SystemDmaTransmitCleanupTransactionCompleteTableIndex = 11,
    SerCx2SystemDmaReceiveCleanupTransactionCompleteTableIndex = 12,
    SerCx2SystemDmaReceiveNewDataNotificationTableIndex = 13,
    SerCx2PioTransmitInitializeTransactionCompleteTableIndex = 14,
    SerCx2PioReceiveInitializeTransactionCompleteTableIndex = 15,
    SerCx2PioTransmitCleanupTransactionCompleteTableIndex = 16,
    SerCx2PioReceiveCleanupTransactionCompleteTableIndex = 17,
    SerCx2PioTransmitReadyTableIndex = 18,
    SerCx2PioReceiveReadyTableIndex = 19,
    SerCx2SaveReceiveFifoOnD0ExitTableIndex = 20,
    SerCx2PioTransmitDrainFifoCompleteTableIndex = 21,
    SerCx2PioTransmitPurgeFifoCompleteTableIndex = 22,
    SerCx2SystemDmaTransmitDrainFifoCompleteTableIndex = 23,
    SerCx2SystemDmaTransmitPurgeFifoCompleteTableIndex = 24,
    SerCx2CustomTransmitCreateTableIndex = 25,
    SerCx2CustomReceiveCreateTableIndex = 26,
    SerCx2CustomTransmitTransactionCreateTableIndex = 27,
    SerCx2CustomReceiveTransactionCreateTableIndex = 28,
    SerCx2CustomTransmitTransactionInitializeCompleteTableIndex = 29,
    SerCx2CustomReceiveTransactionInitializeCompleteTableIndex = 30,
    SerCx2CustomTransmitTransactionCleanupCompleteTableIndex = 31,
    SerCx2CustomReceiveTransactionCleanupCompleteTableIndex = 32,
    SerCx2CustomReceiveTransactionNewDataNotificationTableIndex = 33,
    SerCx2CustomReceiveTransactionReportProgressTableIndex = 34,
    SercxFunctionTableNumEntries = 35,
} SERCXFUNCENUM;

#endif // _SERCXFUNCENUM_H_

