/*++

Module Name: SpbFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _SPBFUNCENUM_H_
#define _SPBFUNCENUM_H_

extern PSPB_DRIVER_GLOBALS SpbDriverGlobals;

typedef enum _SPBFUNCENUM {

    SpbDeviceInitConfigTableIndex = 0,
    SpbDeviceInitializeTableIndex = 1,
    SpbControllerSetIoOtherCallbackTableIndex = 2,
    SpbControllerSetRequestAttributesTableIndex = 3,
    SpbControllerSetTargetAttributesTableIndex = 4,
    SpbTargetGetConnectionParametersTableIndex = 5,
    SpbTargetGetFileObjectTableIndex = 6,
    SpbRequestGetTargetTableIndex = 7,
    SpbRequestGetControllerTableIndex = 8,
    SpbRequestGetParametersTableIndex = 9,
    SpbRequestGetTransferParametersTableIndex = 10,
    SpbRequestCompleteTableIndex = 11,
    SpbRequestCaptureIoOtherTransferListTableIndex = 12,
    SpbFunctionTableNumEntries = 13,
} SPBFUNCENUM;

#endif // _SPBFUNCENUM_H_

