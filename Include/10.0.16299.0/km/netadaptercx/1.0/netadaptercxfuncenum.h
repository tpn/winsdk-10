/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

_WdfVersionBuild_

Module Name: NetFuncEnum.h

Abstract:
    Generated an enum of all WDF API functions

Environment:
    kernel mode only

    Warning: manual changes to this file will be lost.
--*/

#ifndef _NETFUNCENUM_H_
#define _NETFUNCENUM_H_

extern PNET_DRIVER_GLOBALS NetDriverGlobals;

typedef enum _NETFUNCENUM {

    NetAdapterDeviceInitConfigTableIndex = 0,
    NetAdapterCreateTableIndex = 1,
    NetAdapterSetLinkLayerCapabilitiesTableIndex = 2,
    NetAdapterSetLinkLayerMtuSizeTableIndex = 3,
    NetAdapterSetPowerCapabilitiesTableIndex = 4,
    NetAdapterSetDataPathCapabilitiesTableIndex = 5,
    NetAdapterSetCurrentLinkStateTableIndex = 6,
    NetAdapterWdmGetNdisHandleTableIndex = 7,
    NetAdapterGetNetLuidTableIndex = 8,
    NetAdapterOpenConfigurationTableIndex = 9,
    NetAdapterGetPowerSettingsTableIndex = 10,
    NetAdapterDriverWdmGetHandleTableIndex = 11,
    NetPacketGetTypedContextTableIndex = 12,
    NetPacketGet802_15_4InfoTableIndex = 13,
    NetPacketGet802_15_4StatusTableIndex = 14,
    NetConfigurationCloseTableIndex = 15,
    NetConfigurationOpenSubConfigurationTableIndex = 16,
    NetConfigurationQueryUlongTableIndex = 17,
    NetConfigurationQueryStringTableIndex = 18,
    NetConfigurationQueryMultiStringTableIndex = 19,
    NetConfigurationQueryBinaryTableIndex = 20,
    NetConfigurationQueryNetworkAddressTableIndex = 21,
    NetConfigurationAssignUlongTableIndex = 22,
    NetConfigurationAssignUnicodeStringTableIndex = 23,
    NetConfigurationAssignMultiStringTableIndex = 24,
    NetConfigurationAssignBinaryTableIndex = 25,
    NetObjectMarkCancelableExTableIndex = 26,
    NetObjectUnmarkCancelableTableIndex = 27,
    NetPowerSettingsGetWakePatternCountTableIndex = 28,
    NetPowerSettingsGetWakePatternCountForTypeTableIndex = 29,
    NetPowerSettingsGetWakePatternTableIndex = 30,
    NetPowerSettingsIsWakePatternEnabledTableIndex = 31,
    NetPowerSettingsGetEnabledWakeUpFlagsTableIndex = 32,
    NetPowerSettingsGetEnabledWakePatternsTableIndex = 33,
    NetPowerSettingsGetEnabledProtocolOffloadsTableIndex = 34,
    NetPowerSettingsGetEnabledMediaSpecificWakeUpEventsTableIndex = 35,
    NetPowerSettingsGetProtocolOffloadCountTableIndex = 36,
    NetPowerSettingsGetProtocolOffloadCountForTypeTableIndex = 37,
    NetPowerSettingsGetProtocolOffloadTableIndex = 38,
    NetPowerSettingsIsProtocolOffloadEnabledTableIndex = 39,
    NetRequestRetrieveInputOutputBufferTableIndex = 40,
    NetRequestWdmGetNdisOidRequestTableIndex = 41,
    NetRequestCompleteWithoutInformationTableIndex = 42,
    NetRequestSetDataCompleteTableIndex = 43,
    NetRequestQueryDataCompleteTableIndex = 44,
    NetRequestMethodCompleteTableIndex = 45,
    NetRequestSetBytesNeededTableIndex = 46,
    NetRequestGetIdTableIndex = 47,
    NetRequestGetPortNumberTableIndex = 48,
    NetRequestGetSwitchIdTableIndex = 49,
    NetRequestGetVPortIdTableIndex = 50,
    NetRequestGetTypeTableIndex = 51,
    NetRequestQueueCreateTableIndex = 52,
    NetRequestQueueGetAdapterTableIndex = 53,
    NetRxQueueCreateTableIndex = 54,
    NetRxQueueNotifyMoreReceivedPacketsAvailableTableIndex = 55,
    NetRxQueueInitGetQueueIdTableIndex = 56,
    NetRxQueueConfigureDmaAllocatorTableIndex = 57,
    NetRxQueueGetRingBufferTableIndex = 58,
    NetTxQueueCreateTableIndex = 59,
    NetTxQueueNotifyMoreCompletedPacketsAvailableTableIndex = 60,
    NetTxQueueInitGetQueueIdTableIndex = 61,
    NetTxQueueGetRingBufferTableIndex = 62,
    NetFunctionTableNumEntries = 63,
} NETFUNCENUM;

#endif // _NETFUNCENUM_H_

