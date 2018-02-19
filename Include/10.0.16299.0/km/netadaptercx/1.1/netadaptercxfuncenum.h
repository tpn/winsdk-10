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
    NetAdapterSetPermanentLinkLayerAddressTableIndex = 12,
    NetAdapterSetCurrentLinkLayerAddressTableIndex = 13,
    NetPacketGetTypedContextTableIndex = 14,
    NetPacketGetContextFromTokenTableIndex = 15,
    NetConfigurationCloseTableIndex = 16,
    NetConfigurationOpenSubConfigurationTableIndex = 17,
    NetConfigurationQueryUlongTableIndex = 18,
    NetConfigurationQueryStringTableIndex = 19,
    NetConfigurationQueryMultiStringTableIndex = 20,
    NetConfigurationQueryBinaryTableIndex = 21,
    NetConfigurationQueryLinkLayerAddressTableIndex = 22,
    NetConfigurationAssignUlongTableIndex = 23,
    NetConfigurationAssignUnicodeStringTableIndex = 24,
    NetConfigurationAssignMultiStringTableIndex = 25,
    NetConfigurationAssignBinaryTableIndex = 26,
    NetObjectMarkCancelableExTableIndex = 27,
    NetObjectUnmarkCancelableTableIndex = 28,
    NetPowerSettingsGetWakePatternCountTableIndex = 29,
    NetPowerSettingsGetWakePatternCountForTypeTableIndex = 30,
    NetPowerSettingsGetWakePatternTableIndex = 31,
    NetPowerSettingsIsWakePatternEnabledTableIndex = 32,
    NetPowerSettingsGetEnabledWakeUpFlagsTableIndex = 33,
    NetPowerSettingsGetEnabledWakePatternFlagsTableIndex = 34,
    NetPowerSettingsGetEnabledProtocolOffloadFlagsTableIndex = 35,
    NetPowerSettingsGetEnabledMediaSpecificWakeUpEventsTableIndex = 36,
    NetPowerSettingsGetProtocolOffloadCountTableIndex = 37,
    NetPowerSettingsGetProtocolOffloadCountForTypeTableIndex = 38,
    NetPowerSettingsGetProtocolOffloadTableIndex = 39,
    NetPowerSettingsIsProtocolOffloadEnabledTableIndex = 40,
    NetRequestRetrieveInputOutputBufferTableIndex = 41,
    NetRequestWdmGetNdisOidRequestTableIndex = 42,
    NetRequestCompleteWithoutInformationTableIndex = 43,
    NetRequestSetDataCompleteTableIndex = 44,
    NetRequestQueryDataCompleteTableIndex = 45,
    NetRequestMethodCompleteTableIndex = 46,
    NetRequestSetBytesNeededTableIndex = 47,
    NetRequestGetIdTableIndex = 48,
    NetRequestGetPortNumberTableIndex = 49,
    NetRequestGetSwitchIdTableIndex = 50,
    NetRequestGetVPortIdTableIndex = 51,
    NetRequestGetTypeTableIndex = 52,
    NetRequestQueueCreateTableIndex = 53,
    NetRequestQueueGetAdapterTableIndex = 54,
    NetRxQueueCreateTableIndex = 55,
    NetRxQueueNotifyMoreReceivedPacketsAvailableTableIndex = 56,
    NetRxQueueInitGetQueueIdTableIndex = 57,
    NetRxQueueQueryAllocatorCacheEnabledTableIndex = 58,
    NetRxQueueGetRingBufferTableIndex = 59,
    NetRxQueueGetPacketContextTokenTableIndex = 60,
    NetRxQueueInitAddPacketContextAttributesTableIndex = 61,
    NetRxQueueInitSetDmaAllocatorConfigTableIndex = 62,
    NetRxQueueGetBufferLayoutHintTableIndex = 63,
    NetTxQueueCreateTableIndex = 64,
    NetTxQueueNotifyMoreCompletedPacketsAvailableTableIndex = 65,
    NetTxQueueInitGetQueueIdTableIndex = 66,
    NetTxQueueGetRingBufferTableIndex = 67,
    NetTxQueueGetPacketContextTokenTableIndex = 68,
    NetTxQueueInitAddPacketContextAttributesTableIndex = 69,
    NetFunctionTableNumEntries = 70,
} NETFUNCENUM;

#endif // _NETFUNCENUM_H_

