/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: IddFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _IDDFUNCENUM_H_
#define _IDDFUNCENUM_H_

extern PIDD_DRIVER_GLOBALS IddDriverGlobals;

typedef enum _IDDFUNCENUM {

    IddCxDeviceInitConfigTableIndex = 0,
    IddCxDeviceInitializeTableIndex = 1,
    IddCxAdapterInitAsyncTableIndex = 2,
    IddCxMonitorCreateTableIndex = 3,
    IddCxMonitorArrivalTableIndex = 4,
    IddCxMonitorDepartureTableIndex = 5,
    IddCxMonitorUpdateModesTableIndex = 6,
    IddCxAdapterUpdateMaxDisplayPipelineRateTableIndex = 7,
    IddCxMonitorSetupHardwareCursorTableIndex = 8,
    IddCxMonitorQueryHardwareCursorTableIndex = 9,
    IddCxSwapChainSetDeviceTableIndex = 10,
    IddCxSwapChainReleaseAndAcquireBufferTableIndex = 11,
    IddCxSwapChainGetDirtyRectsTableIndex = 12,
    IddCxSwapChainGetMoveRegionsTableIndex = 13,
    IddCxSwapChainFinishedProcessingFrameTableIndex = 14,
    IddCxSwapChainReportFrameStatisticsTableIndex = 15,
    IddCxDeviceInitOpmModeTableIndex = 16,
    IddCxMonitorOpmSetMftContextTableIndex = 17,
    IddCxSwapChainGetFrameLatencyTableIndex = 18,
    IddCxGetVersionTableIndex = 19,
    IddCxReportCriticalErrorTableIndex = 20,
    IddCxMonitorSetSrmListTableIndex = 21,
    IddCxMonitorGetSrmListVersionTableIndex = 22,
    IddFunctionTableNumEntries = 23,
} IDDFUNCENUM;

#endif // _IDDFUNCENUM_H_

