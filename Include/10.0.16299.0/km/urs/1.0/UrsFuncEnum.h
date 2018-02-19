/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UrsFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _URSFUNCENUM_H_
#define _URSFUNCENUM_H_

extern PURS_DRIVER_GLOBALS UrsDriverGlobals;

typedef enum _URSFUNCENUM {

    UrsDeviceInitializeTableIndex = 0,
    UrsDeviceInitInitializeTableIndex = 1,
    UrsIoResourceListAppendDescriptorTableIndex = 2,
    UrsReportHardwareEventTableIndex = 3,
    UrsSetPoHandleTableIndex = 4,
    UrsSetHardwareEventSupportTableIndex = 5,
    UrsFunctionTableNumEntries = 6,
} URSFUNCENUM;

#endif // _URSFUNCENUM_H_

