/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: SensorscxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _SENSORSCXFUNCENUM_H_
#define _SENSORSCXFUNCENUM_H_

extern PSENSORSCX_DRIVER_GLOBALS SensorscxDriverGlobals;

typedef enum _SENSORSCXFUNCENUM {

    SensorsCxDeviceInitConfigTableIndex = 0,
    SensorsCxDeviceInitializeTableIndex = 1,
    SensorsCxSensorCreateTableIndex = 2,
    SensorsCxSensorInitializeTableIndex = 3,
    SensorsCxSensorDataReadyTableIndex = 4,
    SensorsCxDeviceGetSensorListTableIndex = 5,
    SensorsCxSensorHistoryRetrievalCompletedTableIndex = 6,
    SensorsCxStateChangeTableIndex = 7,
    SensorscxFunctionTableNumEntries = 8,
} SENSORSCXFUNCENUM;

#endif // _SENSORSCXFUNCENUM_H_

