/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: UdecxFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _UDECXFUNCENUM_H_
#define _UDECXFUNCENUM_H_

extern PUDECX_DRIVER_GLOBALS UdecxDriverGlobals;

typedef enum _UDECXFUNCENUM {

    UdecxUrbRetrieveControlSetupPacketTableIndex = 0,
    UdecxUrbRetrieveBufferTableIndex = 1,
    UdecxUrbSetBytesCompletedTableIndex = 2,
    UdecxUrbCompleteTableIndex = 3,
    UdecxUrbCompleteWithNtStatusTableIndex = 4,
    UdecxUsbDeviceInitAllocateTableIndex = 5,
    UdecxUsbDeviceInitSetSpeedTableIndex = 6,
    UdecxUsbDeviceInitSetEndpointsTypeTableIndex = 7,
    UdecxUsbDeviceLinkPowerEntryCompleteTableIndex = 8,
    UdecxUsbDeviceLinkPowerExitCompleteTableIndex = 9,
    UdecxUsbDeviceSetFunctionSuspendAndWakeCompleteTableIndex = 10,
    UdecxUsbDeviceInitSetStateChangeCallbacksTableIndex = 11,
    UdecxUsbDeviceInitAddDescriptorTableIndex = 12,
    UdecxUsbDeviceInitAddDescriptorWithIndexTableIndex = 13,
    UdecxUsbDeviceInitAddStringDescriptorTableIndex = 14,
    UdecxUsbDeviceInitAddStringDescriptorRawTableIndex = 15,
    UdecxUsbDeviceCreateTableIndex = 16,
    UdecxUsbDeviceInitFreeTableIndex = 17,
    UdecxUsbDevicePlugInTableIndex = 18,
    UdecxUsbDevicePlugOutAndDeleteTableIndex = 19,
    UdecxUsbDeviceSignalWakeTableIndex = 20,
    UdecxUsbDeviceSignalFunctionWakeTableIndex = 21,
    UdecxUsbSimpleEndpointInitAllocateTableIndex = 22,
    UdecxUsbEndpointInitFreeTableIndex = 23,
    UdecxUsbEndpointInitSetEndpointAddressTableIndex = 24,
    UdecxUsbEndpointInitSetCallbacksTableIndex = 25,
    UdecxUsbEndpointCreateTableIndex = 26,
    UdecxUsbEndpointSetWdfIoQueueTableIndex = 27,
    UdecxUsbEndpointPurgeCompleteTableIndex = 28,
    UdecxInitializeWdfDeviceInitTableIndex = 29,
    UdecxWdfDeviceResetCompleteTableIndex = 30,
    UdecxWdfDeviceAddUsbDeviceEmulationTableIndex = 31,
    UdecxWdfDeviceTryHandleUserIoctlTableIndex = 32,
    UdecxFunctionTableNumEntries = 33,
} UDECXFUNCENUM;

#endif // _UDECXFUNCENUM_H_

