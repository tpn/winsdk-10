//
//    Copyright (C) Microsoft.  All rights reserved.
//
/*++

Module Name: SerFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _SERFUNCENUM_H_
#define _SERFUNCENUM_H_

extern PSER_DRIVER_GLOBALS SerDriverGlobals;

typedef enum _SERFUNCENUM {

    SerCxDeviceInitConfigTableIndex = 0,
    SerCxInitializeTableIndex = 1,
    SerCxGetActivityTableIndex = 2,
    SerCxGetWaitMaskTableIndex = 3,
    SerCxCompleteWaitTableIndex = 4,
    SerCxGetReadIntervalTimeoutTableIndex = 5,
    SerCxRetrieveTransmitBufferTableIndex = 6,
    SerCxRetrieveReceiveBufferTableIndex = 7,
    SerCxRetrieveTransmitMdlTableIndex = 8,
    SerCxRetrieveReceiveMdlTableIndex = 9,
    SerCxGetRingBufferUtilizationTableIndex = 10,
    SerCxGetConnectionParametersTableIndex = 11,
    SerCxProgressTransmitTableIndex = 12,
    SerCxProgressReceiveTableIndex = 13,
    SerFunctionTableNumEntries = 14,
} SERFUNCENUM;

#endif // _SERFUNCENUM_H_

