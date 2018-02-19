/*
    Copyright (c) Microsoft Corporation.  All rights reserved.

    Microsoft Confidential

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

    Module Name:
    wditypes.h

    Abstract:
    WDI specific type definitions

    */

#pragma once

// This should only contain types that are defined in the WDI spec and 
// can be shared between the OS and the IHV component

#ifdef WDI_FUTURE_COMPLIANT
// If future compliant version is desired, enable all features
#define WDI_FUTURE_COMPLIANT_ROAM 1
#endif // WDI_FUTURE_COMPLIANT



//
// TLV IDs
//
#define WDI_TLV_STATUS                                          0x1
#define WDI_TLV_BSSID                                           0x2
#define WDI_TLV_SSID_LIST                                       0x3
#define WDI_TLV_CHANNEL_LIST                                    0x4
#define WDI_TLV_VENDOR_SPECIFIC_IE                              0x5
#define WDI_TLV_SCAN_MODE                                       0x6
#define WDI_TLV_SCAN_DWELL_TIME                                 0x7
#define WDI_TLV_BSS_ENTRY                                       0x8
#define WDI_TLV_PROBE_RESPONSE_FRAME                            0x9
#define WDI_TLV_BEACON_FRAME                                    0xA
#define WDI_TLV_BSS_ENTRY_SIGNAL_INFO                           0xB
#define WDI_TLV_BSS_ENTRY_PHY_INFO                              0xC
#define WDI_TLV_BSS_ENTRY_DEVICE_CONTEXT                        0xD
#define WDI_TLV_COMMUNICATION_CAPABILITIES                      0xE
#define WDI_TLV_INTERFACE_CAPABILITIES                          0xF
#define WDI_TLV_VIRTUALIZATION_CAPABILITIES                     0x10
#define WDI_TLV_STATION_CAPABILITIES                            0x11
#define WDI_TLV_COUNTRY_REGION_LIST                             0x12
#define WDI_TLV_UNICAST_ALGORITHM_LIST                          0x13
#define WDI_TLV_MULTICAST_DATA_ALGORITHM_LIST                   0x14
#define WDI_TLV_MULTICAST_MGMT_ALGORITHM_LIST                   0x15
#define WDI_TLV_AP_CAPABILITIES                                 0x16
#define WDI_TLV_P2P_CAPABILITIES                                0x17
#define WDI_TLV_P2P_INTERFACE_ADDRESS_LIST                      0x18
#define WDI_TLV_PHY_TYPE_LIST                                   0x19
#define WDI_TLV_BAND_CAPABILITIES                               0x1A
#define WDI_TLV_PHY_CAPABILITIES                                0x1B
#define WDI_TLV_PHY_TX_POWER_LEVEL_LIST                         0x1C
#define WDI_TLV_PHY_SUPPORTED_RX_DATA_RATES_LIST                0x1D
#define WDI_TLV_PHY_SUPPORTED_TX_DATA_RATES_LIST                0x1E
#define WDI_TLV_PHY_DATA_RATE_LIST                              0x1F
#define WDI_TLV_COMMUNICATION_CONFIGURATION_ATTRIBUTES          0x20
#define WDI_TLV_INTERFACE_ATTRIBUTES                            0x21
#define WDI_TLV_STATION_ATTRIBUTES                              0x22
#define WDI_TLV_AP_ATTRIBUTES                                   0x23
#define WDI_TLV_VIRTUALIZATION_ATTRIBUTES                       0x24
#define WDI_TLV_P2P_ATTRIBUTES                                  0x25
#define WDI_TLV_PHY_INFO                                        0x26
#define WDI_TLV_BAND_INFO                                       0x27
#define WDI_TLV_CREATE_PORT_PARAMETERS                          0x28
#define WDI_TLV_PORT_ATTRIBUTES                                 0x29
#define WDI_TLV_DELETE_PORT_PARAMETERS                          0x2A
#define WDI_TLV_CANCEL_PARAMETERS                               0x2B
#define WDI_TLV_BAND_CHANNEL                                    0x2C
#define WDI_TLV_ASSOCIATION_RESULT_PARAMETERS                   0x2D
#define WDI_TLV_ASSOCIATION_REQUEST_FRAME                       0x2E
#define WDI_TLV_ASSOCIATION_RESPONSE_FRAME                      0x2F
#define WDI_TLV_BEACON_PROBE_RESPONSE                           0x30
#define WDI_TLV_ETHERTYPE_ENCAP_TABLE                           0x31
#define WDI_TLV_PHY_LIST                                        0x32
#define WDI_TLV_CONNECT_PARAMETERS                              0x33
#define WDI_TLV_CONNECT_BSS_ENTRY                               0x34
#define WDI_TLV_ASSOCIATION_RESULT                              0x35
#define WDI_TLV_DISCONNECT_PARAMETERS                           0x36
#define WDI_TLV_DISCONNECT_DEAUTH_FRAME                         0x37
#define WDI_TLV_DISCONNECT_DISASSOCIATION_FRAME                 0x38
#define WDI_TLV_BANDID                                          0x39
#define WDI_TLV_BSS_ENTRY_CHANNEL_INFO                          0x3A
#define WDI_TLV_SSID                                            0x3B
#define WDI_TLV_AUTH_ALGO_LIST                                  0x3C
#define WDI_TLV_MULTICAST_CIPHER_ALGO_LIST                      0x3D
#define WDI_TLV_UNICAST_CIPHER_ALGO_LIST                        0x3E
#define WDI_TLV_CONNECTION_SETTINGS                             0x3F
#define WDI_TLV_EXTRA_ASSOCIATION_REQUEST_IES                   0x40
#define WDI_TLV_CHANNEL_INFO_LIST                               0x41
#define WDI_TLV_PM_CAPABILITIES                                 0x42
#define WDI_TLV_POWER_MANAGMENT_CAPABILITIES                    0X43
#define WDI_TLV_POWER_STATE                                     0x44
#define WDI_TLV_SET_AUTO_POWER_SAVE                             0x45
#define WDI_TLV_PACKET_FILTER_PARAMETERS                        0x47
#define WDI_TLV_PRIVACY_EXEMPTION_ENTRY                         0x48
#define WDI_TLV_CIPHER_KEY_TKIP_KEY                             0x49
#define WDI_TLV_CIPHER_KEY_TKIP_MIC                             0x4A
#define WDI_TLV_CIPHER_KEY_TKIP_INFO                            0x4B
#define WDI_TLV_PEER_MAC_ADDRESS                                0x4C
#define WDI_TLV_CIPHER_KEY_ID                                   0x4D
#define WDI_TLV_CIPHER_KEY_TYPE_INFO                            0x4E
#define WDI_TLV_CIPHER_KEY_RECEIVE_SEQUENCE_COUNT               0x4F
#define WDI_TLV_CIPHER_KEY_CCMP_KEY                             0x50
#define WDI_TLV_CIPHER_KEY_BIP_KEY                              0x51
#define WDI_TLV_SET_CIPHER_KEY_INFO                             0x52
#define WDI_TLV_DELETE_CIPHER_KEY_INFO                          0x53
#define WDI_TLV_DEFAULT_TX_KEY_ID_PARAMETERS                    0x54
#define WDI_TLV_ROAMING_NEEDED_PARAMETERS                       0x55
#define WDI_TLV_LINK_STATE_CHANGE_PARAMETERS                    0x56
#define WDI_TLV_TKIP_MIC_FAILURE_INFO                           0x57
#define WDI_TLV_CIPHER_KEY_WEP_KEY                              0x58
#define WDI_TLV_NETWORK_LIST_OFFLOAD_PARAMETERS                 0x59
#define WDI_TLV_NETWORK_OFFLOAD_CHANNELS                        0x5a
#define WDI_TLV_WAKE_PACKET_BITMAP_PATTERN                      0x5b
#define WDI_TLV_WAKE_PACKET_MAGIC_PACKET                        0x5c
#define WDI_TLV_WAKE_PACKET_IPv4_TCP_SYNC                       0x5d
#define WDI_TLV_WAKE_PACKET_IPv6_TCP_SYNC                       0x5e
#define WDI_TLV_WAKE_PACKET_EAPOL_REQUEST_ID_MESSAGE            0x5f
#define WDI_TLV_ENABLE_WAKE_EVENTS                              0x60
#define WDI_TLV_PM_PROTOCOL_OFFLOAD_IPv4ARP                     0x61
#define WDI_TLV_PM_PROTOCOL_OFFLOAD_IPv6NS                      0x62
#define WDI_TLV_PM_PROTOCOL_OFFLOAD_80211RSN_REKEY              0x63
#define WDI_TLV_SET_RECEIVE_COALESCING                          0x64
#define WDI_TLV_RECEIVE_FILTER_FIELD                            0x65
#define WDI_TLV_COALESCING_FILTER_MATCH_COUNT                   0x66
#define WDI_TLV_BITMAP_PATTERN_AND_MASK                         0x67
#define WDI_TLV_BITMAP_PATTERN                                  0x68
#if WDI_DISABLED
#define WDI_TLV_PHY_TYPE_LIST                                   0x69
#endif
#define WDI_TLV_MULTICAST_LIST                                  0x6a
#define WDI_TLV_WAKE_PACKET_PATTERN_REMOVE                      0x6b
#define WDI_TLV_PM_PROTOCOL_OFFLOAD_REMOVE                      0x6c
#define WDI_TLV_P2P_GO_NEGOTIATION_REQUEST_INFO                 0x6d
#define WDI_TLV_P2P_GO_NEGOTIATION_REQUEST_PARAMETERS           0x6e
#define WDI_TLV_P2P_GO_NEGOTIATION_RESPONSE_INFO                0x6f
#define WDI_TLV_ADDITIONAL_PROBE_REQUEST_DEFAULT_IES            0x70
#define WDI_TLV_P2P_GO_NEGOTIATION_RESPONSE_PARAMETERS          0x71
#define WDI_TLV_ASSOCIATION_REQUEST_DEVICE_CONTEXT              0x72
#define WDI_TLV_P2P_GROUP_BSSID                                 0x73
#define WDI_TLV_ASSOCIATION_RESPONSE_IES                        0x74
#define WDI_TLV_P2P_GROUP_ID                                    0x75
#define WDI_TLV_ASSOCIATION_RESPONSE_RESULT_PARAMETERS          0x76
#define WDI_TLV_P2P_GROUP_OWNER_CAPABILITY                      0x77
#define WDI_TLV_BEACON_IES                                      0x78
#define WDI_TLV_P2P_INCOMING_FRAME_INFORMATION                  0x79
#define WDI_TLV_P2P_INCOMING_FRAME_PARAMETERS                   0x7a
#define WDI_TLV_P2P_INVITATION_REQUEST_INFO                     0x7b
#define WDI_TLV_P2P_INVITATION_REQUEST_PARAMETERS               0x7c
#define WDI_TLV_INCOMING_ASSOCIATION_REQUEST_PARAMETERS         0x7d
#define WDI_TLV_P2P_INVITATION_RESPONSE_INFO                    0x7e
#define WDI_TLV_P2P_ACTION_FRAME_DEVICE_CONTEXT                 0x7f
#define WDI_TLV_P2P_INVITATION_RESPONSE_PARAMETERS              0x80
#define WDI_TLV_P2P_LISTEN_STATE                                0x81
#define WDI_TLV_P2P_CHANNEL_NUMBER                              0x82
#define WDI_TLV_P2P_PROVISION_DISCOVERY_REQUEST_INFO            0x83
#define WDI_TLV_P2P_DEVICE_CAPABILITY                           0x84
#define WDI_TLV_P2P_PROVISION_DISCOVERY_REQUEST_PARAMETERS      0x85
#define WDI_TLV_P2P_DEVICE_INFO_PARAMETERS                      0x86
#define WDI_TLV_P2P_PROVISION_DISCOVERY_RESPONSE_INFO           0x87
#define WDI_TLV_P2P_GO_NEGOTIATION_CONFIRMATION_INFO            0x88
#define WDI_TLV_P2P_RESPONSE_FRAME_PARAMETERS                   0x89
#define WDI_TLV_ADDITIONAL_IES                                  0x8a
#define WDI_TLV_P2P_SEND_ACTION_REQUEST_FRAME_PARAMETERS        0x8b
#define WDI_TLV_ASSOCIATION_REQUEST_IES                         0x8c
#define WDI_TLV_P2P_SEND_REQUEST_ACTION_FRAME_RESULT            0x8d
#define WDI_TLV_P2P_SEND_RESPONSE_ACTION_FRAME_RESULT           0x8e
#define WDI_TLV_INCOMING_ASSOCIATION_REQUEST_INFO               0x8f
#define WDI_TLV_P2P_ACTION_FRAME_IES                            0x90
#define WDI_TLV_P2P_DEVICE_ADDRESS                              0x91
#define WDI_TLV_P2P_DEVICE_NAME                                 0x92
#define WDI_TLV_ADDITIONAL_PROBE_RESPONSE_IES                   0x93
#define WDI_TLV_P2P_SECONDARY_DEVICE_TYPE_LIST                  0x94
#define WDI_TLV_OPERATION_MODE                                  0x95
#define WDI_TLV_P2P_DEVICE_INFO                                 0x96
#define WDI_TLV_ASSOCIATION_RESPONSE_PARAMETERS                 0x97
#define WDI_TLV_ADDITIONAL_BEACON_IES                           0x98
#define WDI_TLV_CONFIGURED_MAC_ADDRESS                          0x99
#define WDI_TLV_RECEIVE_COALESCING_CAPABILITIES                 0x9a
#define WDI_TLV_SET_CLEAR_RECEIVE_COALESCING                    0x9b
#define WDI_TLV_INDICATION_WAKE_REASON                          0x9c
#define WDI_TLV_INDICATION_WAKE_PACKET                          0x9d
#define WDI_TLV_SSID_OFFLOAD                                    0x9e
#define WDI_TLV_PMKID                                           0x9F
#define WDI_TLV_RADIO_STATE_PARAMETERS                          0xA0
#define WDI_TLV_RADIO_STATE                                     0xA1
#define WDI_TLV_DOT11_RESET_PARAMETERS                          0xA2
#define WDI_TLV_CONNECTION_QUALITY_PARAMETERS                   0xA3
#define WDI_TLV_SAFE_MODE_PARAMETERS                            0xA4

#define WDI_TLV_MAC_STATISTICS                                  0xA6
#define WDI_TLV_PHY_STATISTICS                                  0xA7
#define WDI_TLV_PM_PROTOCOL_OFFLOAD_GET                         0xA8
#define WDI_TLV_P2P_DISCOVER_MODE                               0xA9
#define WDI_TLV_P2P_GO_NEGOTIATION_CONFIRMATION_PARAMETERS      0xAA
#define WDI_TLV_START_AP_PARAMETERS                             0xAB
#define WDI_TLV_ACTION_FRAME_DEVICE_CONTEXT                     0xAC
#define WDI_TLV_P2P_ACTION_FRAME_RESPONSE_PARAMETERS            0xAD
#define WDI_TLV_P2P_SEND_ACTION_FRAME_RESULT_PARAMETERS         0xAE
#define WDI_TLV_P2P_SEND_ACTION_FRAME_RESULT                    0xAF
#define WDI_TLV_INDICATION_WAKE_PACKET_PATTERN_ID               0xB0
#define WDI_TLV_UNREACHABLE_DETECTION_THRESHOLD                 0xB1
#define WDI_TLV_P2P_GO_INTERNAL_RESET_POLICY                    0xB2
#define WDI_TLV_GET_AUTO_POWER_SAVE                             0xB3
#define WDI_TLV_DISASSOCIATION_PARAMETERS                       0xB4
#define WDI_TLV_DELETE_PEER_STATE_PARAMETERS                    0xB5
#define WDI_TLV_BAND_ID_LIST                                    0xB6
#define WDI_TLV_ADAPTER_RESUME_REQUIRED                         0xB7
#define WDI_TLV_DATAPATH_ATTRIBUTES                             0xB8
#define WDI_TLV_DATAPATH_CAPABILITIES                           0xB9
#define WDI_TLV_BSS_ENTRY_AGE_INFO                              0xBA
#define WDI_TLV_ASSOCIATION_PARAMETERS_REQUESTED_TYPE           0xBB
#define WDI_TLV_DISASSOCIATION_INDICATION_PARAMETERS            0xBC
#define WDI_TLV_IHV_DATA                                        0xBD
#define WDI_TLV_ACTION_FRAME_BODY                               0xBE
#define WDI_TLV_SEND_ACTION_FRAME_REQUEST_PARAMETERS            0xBF
#define WDI_TLV_ALLOWED_BSSIDS_LIST                             0xC2
#define WDI_TLV_DISALLOWED_BSSIDS_LIST                          0xC3
#define WDI_TLV_P2P_BACKGROUND_DISCOVER_MODE                    0xC4
#define WDI_TLV_P2P_DEVICE_FILTER_LIST                          0xC5
#define WDI_TLV_P2P_PROVISION_SERVICE_ATTRIBUTES                0xC6

#define WDI_TLV_HESSID                                          0xC8

#define WDI_TLV_TCP_OFFLOAD_CAPABILITIES                        0xCA
#define WDI_TLV_CHECKSUM_OFFLOAD_CAPABILITIES                   0xCB
#define WDI_TLV_LSO_V1_CAPABILITIES                             0xCC
#define WDI_TLV_LSO_V2_CAPABILITIES                             0xCD
#define WDI_TLV_RECEIVE_COALESCE_OFFLOAD_CAPABILITIES           0xCE
#define WDI_TLV_IPV4_CHECKSUM_OFFLOAD                           0xCF
#define WDI_TLV_IPV6_CHECKSUM_OFFLOAD                           0xD0
#define WDI_TLV_CHECKSUM_OFFLOAD_V4_TX_PARAMETERS               0xD1
#define WDI_TLV_CHECKSUM_OFFLOAD_V4_RX_PARAMETERS               0xD2
#define WDI_TLV_IPV4_LSO_V2                                     0xD3
#define WDI_TLV_IPV6_LSO_V2                                     0xD4
#define WDI_TLV_P2P_CHANNEL_LIST_ATTRIBUTE                      0xD5

#define WDI_TLV_LINK_QUALITY_BAR_MAP                            0xD8
#define WDI_TLV_CREATE_PORT_MAC_ADDRESS                         0xD9

#define WDI_TLV_NETWORK_LIST_OFFLOAD_CONFIG                     0xDA
#define WDI_TLV_RECEIVE_COALESCING_CONFIG                       0xDB

#define WDI_TLV_CHECKSUM_OFFLOAD_V6_TX_PARAMETERS               0xDD
#define WDI_TLV_CHECKSUM_OFFLOAD_V6_RX_PARAMETERS               0xDE
#define WDI_TLV_IHV_TASK_REQUEST_PARAMETERS                     0xDF
#define WDI_TLV_IHV_TASK_DEVICE_CONTEXT                         0xE0

#define WDI_TLV_NEXT_DIALOG_TOKEN                               0xE1
#define WDI_TLV_SEND_ACTION_FRAME_RESPONSE_PARAMETERS           0xE2

#define WDI_TLV_WAKE_PACKET_BITMAP_PATTERN_ID                   0xE3
#define WDI_TLV_BITMAP_PATTERN_MASK                             0xE4

#define WDI_TLV_INDICATION_STOP_AP                              0xE6
#define WDI_TLV_INDICATION_CAN_SUSTAIN_AP                       0xE7

#define WDI_TLV_P2P_DISCOVERY_CHANNEL_SETTINGS                  0xE8
#define WDI_TLV_P2P_LISTEN_DURATION                             0xE9
#define WDI_TLV_P2P_ADVERTISEMENT_ID                            0xEA
#define WDI_TLV_P2P_CONFIG_METHODS                              0xEB
#define WDI_TLV_P2P_SERVICE_NAME                                0xEC
#define WDI_TLV_P2P_SERVICE_NAME_HASH                           0xED
#define WDI_TLV_P2P_SERVICE_INFORMATION                         0xEE
#define WDI_TLV_P2P_ADVERTISED_SERVICES                         0xEF
#define WDI_TLV_P2P_SERVICE_SESSION_INFO                        0xF0
#define WDI_TLV_P2P_PERSISTENT_GROUP_ID                         0xF1

#define WDI_TLV_TCP_SET_OFFLOAD_PARAMETERS                      0xF2
#define WDI_TLV_TCP_RSC_STATISTICS_PARAMETERS                   0xF3
#define WDI_TLV_FIRMWARE_VERSION                                0xF4
#define WDI_TLV_CHANNEL_WIDTH_LIST                              0xF5
#define WDI_TLV_LOW_LATENCY_CONNECTION_QUALITY_PARAMETERS       0xF6
#define WDI_TLV_P2P_WPS_ENABLED	                                0xF7
#define WDI_TLV_HOTSPOT_DOMAIN_PARTNER                          0xF8
#define WDI_TLV_P2P_CHANNEL_ENTRY_LIST                          0xF9
#define WDI_TLV_OPERATING_CLASS                                 0xFA
#define WDI_TLV_P2P_SERVICE_STATUS                              0xFB
#define WDI_TLV_P2P_ADVERTISED_SERVICE_ENTRY                    0xFC
#define WDI_TLV_SET_ENCAPSULATION_OFFLOAD_V4_PARAMETERS         0xFD
#define WDI_TLV_SET_ENCAPSULATION_OFFLOAD_V6_PARAMETERS         0xFE
#define WDI_TLV_HESSID_INFO                                     0xFF
#define WDI_TLV_ACCESS_NETWORK_TYPE                             0x100
#define WDI_TLV_HOTSPOT_INDICATION_ELEMENT                      0x101
#define WDI_TLV_P2P_CHANNEL_INDICATE_REASON                     0x102
#define WDI_TLV_SET_POWER_DX_REASON                             0x103
#define WDI_TLV_IHV_NON_WDI_OIDS_LIST                           0x104
#define WDI_TLV_FT_INITIAL_ASSOC_PARAMETERS                     0x105
#define WDI_TLV_FT_REASSOC_PARAMETERS                           0x106
#define WDI_TLV_FT_PMKR0NAME                                    0x107
#define WDI_TLV_FT_R0KHID                                       0x108
#define WDI_TLV_FT_R1KHID                                       0x109
#define WDI_TLV_FT_SNONCE                                       0x10A
#define WDI_TLV_FT_FTE                                          0x10B
#define WDI_TLV_FT_RSNIE                                        0x10C
#define WDI_TLV_FT_MDE                                          0x10D
#define WDI_TLV_FT_AUTH_RESPONSE                                0x10E
#define WDI_TLV_BSS_SELECTION_PARAMETERS                        0x10F
#define WDI_TLV_P2P_ADVERTISED_PREFIX_ENTRY                     0x110
#define WDI_TLV_P2P_SERVICE_INFORMATION_ENTRY                   0x111
#define WDI_TLV_P2P_DISCOVERED_SERVICE_ENTRY                    0x112
#define WDI_TLV_P2P_PROVISION_DISCOVERY_RESPONSE_PARAMETERS     0x113
#define WDI_TLV_P2P_LISTEN_CHANNEL                              0x114
#define WDI_TLV_P2P_SERVICE_UPDATE_INDICATOR                    0x115
#define WDI_TLV_P2P_SERVICE_TRANSACTION_ID                      0x116
#define WDI_TLV_P2P_SERVICE_INFORMATION_DISCOVERY_ENTRY         0x117
#define WDI_TLV_CIPHER_KEY_IHV_KEY                              0x118
#define WDI_TLV_FT_AUTH_REQUEST                                 0x119
#define WDI_TLV_PLDR_SUPPORT                                    0x11A

#define WDI_TLV_BSSID_INFO                                      0x120
#define WDI_TLV_CHANNEL_NUMBER                                  0x121
#define WDI_TLV_PHY_TYPE                                        0x122
#define WDI_TLV_NEIGHBOR_REPORT_ENTRY                           0x123
#define WDI_TLV_AUTHENTICATION_RESPONSE_FRAME                   0x124
#define WDI_TLV_ADAPTER_NLO_SCAN_MODE                           0x125
#define WDI_TLV_WFD_ASSOCIATION_STATUS                          0x126
#define WDI_TLV_AP_BAND_CHANNEL                                 0x127
#define WDI_TLV_P2P_INCLUDE_LISTEN_CHANNEL                      0x128
#define WDI_TLV_P2P_SERVICE_TYPE                                0x129
#define WDI_TLV_P2P_SERVICE_TYPE_HASH                           0x12A
#define WDI_TLV_P2P_INSTANCE_NAME                               0x12B
#define WDI_TLV_P2P_INSTANCE_NAME_HASH                          0x12C
#define WDI_TLV_P2P_ASP2_SERVICE_INFORMATION_DISCOVERY_ENTRY    0x12D
#define WDI_TLV_P2P_ASP2_ADVERTISED_SERVICE_ENTRY               0x12E
#define WDI_TLV_CIPHER_KEY_GCMP_KEY                             0x12F
#define WDI_TLV_SUPPORTED_GUIDS                                 0x130
#define WDI_TLV_IS_DIRECTED_PROBE_FOR_HIDDEN_PERMITTED          0x131
#define WDI_TLV_P2P_DISCOVERED_ASP2_SERVICE_ENTRY               0x132
#define WDI_TLV_P2P_ASP2_CCEX_INFO                              0x133
#define WDI_TLV_P2P_ASP2_CURRENT_SESSION_ID                     0x134
#define WDI_TLV_ADAPTER_STATE                                   0x135
#define WDI_TLV_P2P_ASP2_CONNECTION_TYPES                       0x136
#define WDI_TLV_STA_BSSID                                       0x137
#define WDI_TLV_CONNECTED_AP_BSSID                              0x138
#define WDI_TLV_P2P_ASP2_INFRASTRUCTURE_IPV4_ADDRESS            0x139
#define WDI_TLV_P2P_ASP2_INFRASTRUCTURE_IPV6_ADDRESS            0x13A
#define WDI_TLV_P2P_SESSION_ID                                  0x13B
#define WDI_TLV_P2P_SESSION_ADDRESS                             0x13C
#define WDI_TLV_AP_BAND_INFORMATION                             0x13D
#define WDI_TLV_OPERATING_IN_PBSS                               0x13E
#define WDI_TLV_DEVICE_SERVICE_PARAMS_OPCODE                    0x13F
#define WDI_TLV_DEVICE_SERVICE_PARAMS_GUID                      0x140
#define WDI_TLV_DEVICE_SERVICE_PARAMS_DATA_BLOB                 0x141
#define WDI_TLV_DEVICE_SERVICE_GUID_LIST                        0x142
#define WDI_TLV_OFFLOAD_SCOPE                                   0x143

#define WDI_TEST_TASK                                           0xFFE0
#define WDI_TLV_TEST1                                           0xFFE1
#define WDI_TLV_TEST2                                           0xFFE2
#define WDI_TLV_TEST3                                           0xFFE3
#define WDI_TLV_TEST4                                           0xFFE4
#define WDI_TLV_TEST5                                           0xFFE5
#define WDI_TLV_TEST6                                           0xFFE6
#define WDI_TLV_TEST7                                           0xFFE7
#define WDI_TLV_TEST8                                           0xFFE8
#define WDI_TLV_TEST9                                           0xFFE9
#define WDI_TLV_TEST10                                          0xFFEA
#define WDI_TLV_TEST11                                          0xFFEB
#define WDI_TLV_TEST12                                          0xFFEC
#define WDI_TLV_TEST13                                          0xFFED
#define WDI_TLV_TEST14                                          0xFFEE
#define WDI_TLV_TEST15                                          0xFFEF
#define WDI_TLV_TEST16                                          0xFFF0
#define WDI_TLV_TEST17                                          0xFFF1
#define WDI_TLV_TEST18                                          0xFFF2
#define WDI_TLV_TEST19                                          0xFFF3
#define WDI_TLV_TEST20                                          0xFFF4
#define WDI_TLV_TEST21                                          0xFFF5
#define WDI_TLV_TEST22                                          0xFFF6
#define WDI_TLV_TEST23                                          0xFFF7
#define WDI_TLV_TEST24                                          0xFFF8

typedef UINT32 WDI_CHANNEL_NUMBER;

typedef enum _WDI_FIPS_MODE
{
    WDI_FIPS_MODE_DISABLED = 0,
    WDI_FIPS_MODE_ENABLED = 1,
    WDI_FIPS_MODE_UNKNOWN = 2
}WDI_FIPS_MODE;

typedef struct _WDI_ETHERTYPE_ENCAPSULATION_ENTRY
{
    UINT16 EtherType;
    UINT16 EncapsulationType;
}WDI_ETHERTYPE_ENCAPSULATION_ENTRY, *PWDI_ETHERTYPE_ENCAPSULATION_ENTRY;

typedef enum _WDI_PHY_TYPE
{
    WDI_PHY_TYPE_UNKNOWN = 0,
    WDI_PHY_TYPE_ANY = 0,
    WDI_PHY_TYPE_FHSS = 1,
    WDI_PHY_TYPE_DSSS = 2,
    WDI_PHY_TYPE_IRBASEBAND = 3,
    WDI_PHY_TYPE_OFDM = 4,
    WDI_PHY_TYPE_HRDSSS = 5,
    WDI_PHY_TYPE_ERP = 6,
    WDI_PHY_TYPE_HT = 7,
    WDI_PHY_TYPE_VHT = 8,
    WDI_PHY_TYPE_DMG = 9,
    WDI_PHY_TYPE_IHV_START = 0x80000000,
    WDI_PHY_TYPE_IHV_END = 0xffffffff,
} WDI_PHY_TYPE;

typedef enum _WDI_AUTH_ALGORITHM
{
    WDI_AUTH_ALGO_80211_OPEN = 1,
    WDI_AUTH_ALGO_80211_SHARED_KEY = 2,
    WDI_AUTH_ALGO_WPA = 3,
    WDI_AUTH_ALGO_WPA_PSK = 4,
    WDI_AUTH_ALGO_WPA_NONE = 5,
    WDI_AUTH_ALGO_RSNA = 6,
    WDI_AUTH_ALGO_RSNA_PSK = 7,
    WDI_AUTH_ALGO_IHV_START = 0x80000000,
    WDI_AUTH_ALGO_IHV_END = 0xffffffff
} WDI_AUTH_ALGORITHM;

typedef enum _WDI_CIPHER_ALGORITHM
{
    WDI_CIPHER_ALGO_NONE = 0x00,
    WDI_CIPHER_ALGO_WEP40 = 0x01,
    WDI_CIPHER_ALGO_TKIP = 0x02,
    WDI_CIPHER_ALGO_CCMP = 0x04,
    WDI_CIPHER_ALGO_WEP104 = 0x05,
    WDI_CIPHER_ALGO_BIP = 0x06,
    WDI_CIPHER_ALGO_GCMP = 0x08,
    WDI_CIPHER_ALGO_WPA_USE_GROUP = 0x100,
    WDI_CIPHER_ALGO_RSN_USE_GROUP = 0x100,
    WDI_CIPHER_ALGO_WEP = 0x101,
    WDI_CIPHER_ALGO_IHV_START = 0x80000000,
    WDI_CIPHER_ALGO_IHV_END = 0xffffffff,
} WDI_CIPHER_ALGORITHM;

typedef struct _WDI_CHANNEL_MAPPING_ENTRY
{
    WDI_CHANNEL_NUMBER ChannelNumber;
    UINT32 ChannelCenterFrequency;
}
WDI_CHANNEL_MAPPING_ENTRY, *PWDI_CHANNEL_MAPPING_ENTRY;

typedef struct _WDI_TYPE_PMK_NAME
{
    UINT8 Name[16];
} WDI_TYPE_PMK_NAME, *PWDI_TYPE_PMK_NAME;

typedef struct _WDI_TYPE_MIC
{
    UINT8 Value[16];
} WDI_TYPE_MIC, *PWDI_TYPE_MIC;

typedef struct _WDI_TYPE_NONCE
{
    UINT8 Nonce[32];
} WDI_TYPE_NONCE, *PWDI_TYPE_NONCE;

typedef enum _WDI_DATA_RATE_FLAGS
{
    WDI_DATA_RATE_NON_STANDARD = 0x01,
    WDI_DATA_RATE_RX_RATE = 0x02,
    WDI_DATA_RATE_TX_RATE = 0x04
} WDI_DATA_RATE_FLAGS;

typedef struct _WDI_DATA_RATE_ENTRY
{
    UINT8  DataRateFlag;    // WDI_DATA_RATE_FLAGS
    UINT16 DataRateValue;
}
WDI_DATA_RATE_ENTRY, *PWDI_DATA_RATE_ENTRY;

#define WDI_MAX_DATA_RATE_ENTRIES  126

typedef enum _WDI_ASSOC_STATUS
{    
    WDI_ASSOC_STATUS_SUCCESS = 0,
    WDI_ASSOC_STATUS_FAILURE = 1,
    WDI_ASSOC_STATUS_UNREACHABLE = 2,
    WDI_ASSOC_STATUS_RADIO_OFF = 3,
    WDI_ASSOC_STATUS_PHY_DISABLED = 4,
    WDI_ASSOC_STATUS_ABORTED = 5,
    WDI_ASSOC_STATUS_CANDIDATE_LIST_EXHAUSTED = 6,

    /*
     * Beacon/Probe Response Receive Error
     */
    WDI_ASSOC_STATUS_PROBE_TX_FAILURE = 30,
    WDI_ASSOC_STATUS_NO_BEACON_PROBE_RESPONSE = 31,

    /*
     * 802.11 Authentication sequence errors
     */
    WDI_ASSOC_STATUS_AUTH_REQUEST_NO_ACK = 40,
    WDI_ASSOC_STATUS_NO_AUTH_RESPONSE = 41,
    WDI_ASSOC_STATUS_AUTH_RESPONSE_CAPABILITY_MISMATCH = 42,
    WDI_ASSOC_STATUS_BAD_AUTH_RESPONSE = 43,
    WDI_ASSOC_STATUS_AUTH_FAILED_BY_PEER = 44,
    WDI_ASSOC_STATUS_AUTH_EXCHANGE_FAILURE = 45,
    
    /*
     * 802.11 Association sequence errors
     */
    WDI_ASSOC_STATUS_ASSOC_REQUEST_NO_ACK = 50,
    WDI_ASSOC_STATUS_NO_ASSOC_RESPONSE = 51,
    WDI_ASSOC_STATUS_ASSOC_RESPONSE_CAPABILITY_MISMATCH = 52,
    WDI_ASSOC_STATUS_BAD_ASSOC_RESPONSE = 53,    
    WDI_ASSOC_STATUS_ASSOC_FAILED_BY_PEER = 54,    
    WDI_ASSOC_STATUS_ASSOC_EXCHANGE_FAILURE = 55,

    /* 
     * Disconnected (disassociated/deauthenticated) locally
     */
    WDI_ASSOC_STATUS_DISASSOCIATED_BY_HOST = 7,
    WDI_ASSOC_STATUS_DISASSOCIATE_BY_DEVICE_RESET = 60,
    WDI_ASSOC_STATUS_DISASSOCIATE_UNABLE_TO_MAINTAIN = 61,
    WDI_ASSOC_STATUS_DISASSOCIATE_NOT_VISIBLE = 62,
    WDI_ASSOC_STATUS_DISASSOCIATE_NEEDED_REASSOC = 63,

    /*
     * Disconnected (disassociated/deauthenticated) remotely
     */
    WDI_ASSOC_STATUS_PEER_DEAUTHENTICATED = 13,
    WDI_ASSOC_STATUS_PEER_DISASSOCIATED = 14,

    /*
     * Roaming needed triggers. If disconnect
     * reasons are applicable, they should be used
     */
    WDI_ASSOC_STATUS_ROAMING_BETTER_AP_FOUND = 10,
    WDI_ASSOC_STATUS_ROAMING_ASSOCIATION_LOST = 11,
    WDI_ASSOC_STATUS_ROAMING_LOW_LINK_QUALITY = 15,

    /*
     * Reserved
     */
    WDI_ASSOC_STATUS_RESERVED_0 = 0x01000000U,

} WDI_ASSOC_STATUS;

typedef enum _WDI_IHV_TASK_PRIORITY
{
    WDI_IHV_TASK_PRIORITY_HIGH = 1,
    WDI_IHV_TASK_PRIORITY_MEDIUM = 2,
    WDI_IHV_TASK_PRIORITY_LOW = 3
}WDI_IHV_TASK_PRIORITY;

typedef enum _WDI_POWER_SAVE_LEVEL
{
    WDI_POWER_SAVE_LEVEL_NO_POWER_SAVE = 0,
    WDI_POWER_SAVE_LEVEL_FAST_PSP = 8,
    WDI_POWER_SAVE_LEVEL_MAX_PSP = 16,
    WDI_POWER_SAVE_LEVEL_MAXIMUM_LEVEL = 24,
} WDI_POWER_SAVE_LEVEL;

typedef enum _WDI_POWER_MODE_REASON_CODE
{
    WDI_POWER_MODE_REASON_CODE_NO_CHANGE = 0,
    WDI_POWER_MODE_REASON_CODE_NONCOMPLANT_AP = 1,
    WDI_POWER_MODE_REASON_CODE_LEGACY_P2P_DEVICE = 2,
    WDI_POWER_MODE_REASON_CODE_COMPLIANT_AP = 3,
    WDI_POWER_MODE_REASON_CODE_COMPLIANT_P2P_DEVICE = 4,
    WDI_POWER_MODE_REASON_CODE_OTHERS = 5,
} WDI_POWER_MODE_REASON_CODE;

#define WDI_PORT_ID_ADAPTER ((UINT16)-1) // special port id to represent adapter

typedef enum _WDI_SCAN_TYPE
{
    WDI_SCAN_TYPE_ACTIVE_ONLY = 1,
    WDI_SCAN_TYPE_PASSIVE_ONLY = 2,
    WDI_SCAN_TYPE_AUTO = 3,
    WDI_SCAN_TYPE_MAX_VALUE = 0xFFFF
} WDI_SCAN_TYPE;

typedef enum _WDI_SCAN_TRIGGER
{
    WDI_SCAN_TRIGGER_MANUAL = 1,
    WDI_SCAN_TRIGGER_BACKGROUND = 2,
    WDI_SCAN_TRIGGER_ROAM = 3,
    WDI_SCAN_TRIGGER_CONNECT = 4,
    WDI_SCAN_TRIGGER_ANQP_QUERY = 5,
    WDI_SCAN_TRIGGER_FAST_ROAM = 6
} WDI_SCAN_TRIGGER;

typedef enum _WDI_PACKET_FILTER_TYPE
{
    WDI_PACKET_FILTER_NONE = 0x00000000,
    WDI_PACKET_FILTER_DIRECTED = 0x00000001,
    WDI_PACKET_FILTER_MULTICAST = 0x00000002,
    WDI_PACKET_FILTER_ALL_MULTICAST = 0x00000004,
    WDI_PACKET_FILTER_BROADCAST = 0x00000008,
    WDI_PACKET_FILTER_PROMISCUOUS = 0x00000020,
    WDI_PACKET_FILTER_802_11_RAW_DATA = 0x00010000,
    WDI_PACKET_FILTER_802_11_DIRECTED_MGMT = 0x00020000,
    WDI_PACKET_FILTER_802_11_BROADCAST_MGMT = 0x00040000,
    WDI_PACKET_FILTER_802_11_MULTICAST_MGMT = 0x00080000,
    WDI_PACKET_FILTER_802_11_ALL_MULTICAST_MGMT = 0x00100000,
    WDI_PACKET_FILTER_802_11_PROMISCUOUS_MGMT = 0x00200000,
    WDI_PACKET_FILTER_802_11_RAW_MGMT = 0x00400000,
    WDI_PACKET_FILTER_802_11_DIRECTED_CTRL = 0x00800000,
    WDI_PACKET_FILTER_802_11_BROADCAST_CTRL = 0x01000000,
    WDI_PACKET_FILTER_802_11_PROMISCUOUS_CTRL = 0x02000000,
    WDI_PACKET_FILTER_ALL = WDI_PACKET_FILTER_802_11_PROMISCUOUS_CTRL 
                    | WDI_PACKET_FILTER_802_11_BROADCAST_CTRL
                    | WDI_PACKET_FILTER_802_11_DIRECTED_CTRL
                    | WDI_PACKET_FILTER_802_11_RAW_MGMT
                    | WDI_PACKET_FILTER_802_11_PROMISCUOUS_MGMT
                    | WDI_PACKET_FILTER_802_11_ALL_MULTICAST_MGMT
                    | WDI_PACKET_FILTER_802_11_MULTICAST_MGMT
                    | WDI_PACKET_FILTER_802_11_BROADCAST_MGMT
                    | WDI_PACKET_FILTER_802_11_DIRECTED_MGMT
                    | WDI_PACKET_FILTER_802_11_RAW_DATA
                    | WDI_PACKET_FILTER_PROMISCUOUS
                    | WDI_PACKET_FILTER_BROADCAST
                    | WDI_PACKET_FILTER_ALL_MULTICAST
                    | WDI_PACKET_FILTER_MULTICAST
                    | WDI_PACKET_FILTER_DIRECTED
} WDI_PACKET_FILTER_TYPE;

typedef enum _WDI_BSS_SELECTION_FLAGS 
{
    WDI_BSS_SELECTION_HOST_PREFERRED               = 0x00000001,
    WDI_BSS_SELECTION_RECENT_ASSOCIATION_ERROR     = 0x00000002,
    WDI_BSS_SELECTION_FLAGS_AP_REQUESTED_TRANSITION = 0x00000004
}WDI_BSS_SELECTION_FLAGS;

typedef enum _WDI_ROAM_TRIGGER
{
    WDI_ROAM_TRIGGER_OTHER = 0x00000000,
    WDI_ROAM_TRIGGER_CRITICAL_BSS_TRANSITION_REQUEST = 0x00000001
}WDI_ROAM_TRIGGER;

typedef enum _WDI_ACTION_FRAME_CATEGORY
{
    WDI_ACTION_FRAME_CATEGORY_PUBLIC               = 4,
    WDI_ACTION_FRAME_CATEGORY_RADIO_MEASUREMENT    = 5,
    WDI_ACTION_FRAME_CATEGORY_FAST_BSS_TRANSITION  = 6,
    WDI_ACTION_FRAME_CATEGORY_WNM                  = 10,
} WDI_ACTION_FRAME_CATEGORY;

typedef enum _WDI_RADIO_MEASUREMENT_ACTION
{
    WDI_RADIO_MEASUREMENT_ACTION_NEIGHBOR_REPORT_REQUEST   = 4,
    WDI_RADIO_MEASUREMENT_ACTION_NEIGHBOR_REPORT_RESPONSE  = 5,
} WDI_RADIO_MEASUREMENT_ACTION;

typedef enum _WDI_WNM_ACTION
{
    WDI_WNM_ACTION_BSS_TRANSITION_MANAGEMENT_QUERY     = 6,
    WDI_WNM_ACTION_BSS_TRANSITION_MANAGEMENT_REQUEST   = 7,
    WDI_WNM_ACTION_BSS_TRANSITION_MANAGEMENT_RESPONSE  = 8,
} WDI_WNM_ACTION;

typedef enum _WDI_P2P_DISCOVER_TYPE
{
    WDI_P2P_DISCOVER_TYPE_SCAN_ONLY = 1,
    WDI_P2P_DISCOVER_TYPE_FIND_ONLY = 2,
    WDI_P2P_DISCOVER_TYPE_AUTO = 3,
    WDI_P2P_DISCOVER_TYPE_SCAN_SOCIAL_CHANNELS = 4,
    WDI_P2P_DISCOVER_TYPE_MAX_VALUE = 0xFFFFFFFF
}WDI_P2P_DISCOVER_TYPE;

typedef enum _WDI_P2P_SERVICE_DISCOVERY_TYPE
{
    WDI_P2P_SERVICE_DISCOVERY_TYPE_NO_SERVICE_DISCOVERY = 1,
    WDI_P2P_SERVICE_DISCOVERY_TYPE_SERVICE_NAME_ONLY = 2,
    WDI_P2P_SERVICE_DISCOVERY_TYPE_SERVICE_INFORMATION = 3,
    WDI_P2P_SERVICE_DISCOVERY_TYPE_MAX_VALUE = 0xFFFFFFFF
}WDI_P2P_SERVICE_DISCOVERY_TYPE;

typedef enum _WDI_P2P_SCAN_TYPE
{
    WDI_P2P_SCAN_TYPE_ACTIVE = 1,
    WDI_P2P_SCAN_TYPE_PASSIVE = 2,
    WDI_P2P_SCAN_TYPE_AUTO = 3,
    WDI_P2P_SCAN_TYPE_MAX_VALUE = 0xFFFFFFFF
}WDI_P2P_SCAN_TYPE;

typedef enum _WDI_P2P_ACTION_FRAME_TYPE
{ 
    WDI_P2P_ACTION_FRAME_GO_NEGOTIATION_REQUEST = 1,
    WDI_P2P_ACTION_FRAME_GO_NEGOTIATION_RESPONSE = 2,
    WDI_P2P_ACTION_FRAME_GO_NEGOTIATION_CONFIRM = 3,
    WDI_P2P_ACTION_FRAME_INVITATION_REQUEST = 4,
    WDI_P2P_ACTION_FRAME_INVITATION_RESPONSE = 5,
    WDI_P2P_ACTION_FRAME_PROVISION_DISCOVERY_REQUEST = 6,
    WDI_P2P_ACTION_FRAME_PROVISION_DISCOVERY_RESPONSE = 7,  
    WDI_P2P_ACTION_FRAME_MAX_VALUE = 0xFFFFFFFF
} WDI_P2P_ACTION_FRAME_TYPE;

typedef enum _WDI_BSS_TRANSITION_RESPONSE_RESULT
{
    WDI_BSS_TRANSITION_ACCEPT = 0,
    WDI_BSS_TRANSITION_REJECT_UNSPECIFIED_REASON = 1,
    WDI_BSS_TRANSITION_REJECT_INSUFFICIENT_BEACON_PROBE_RESP_FRAMES = 2,
    WDI_BSS_TRANSITION_REJECT_INSUFFICIENT_AVAILABLE_CAPACITY = 3,
    WDI_BSS_TRANSITION_REJECT_BSS_TERMINATION_UNDESIRED = 4,
    WDI_BSS_TRANSITION_REJECT_BSS_TERMINATION_DELAY_REQUESTED = 5,
    WDI_BSS_TRANSITION_REJECT_STA_BSS_CANDIDATE_LIST_PROVIDED = 6,
    WDI_BSS_TRANSITION_REJECT_NO_SUITABLE_BSS_CANDIDATES = 7,
    WDI_BSS_TRANSITION_REJECT_LEAVING_ESS = 8,
    WDI_BSS_TRANSITION_MAX = 9
}WDI_BSS_TRANSITION_RESPONSE_RESULT;

typedef enum _WDI_P2P_GO_INTERNAL_RESET_POLICY
{
    WDI_P2P_GO_INTERNAL_RESET_POLICY_USE_LAST_CHANNEL = 1,
    WDI_P2P_GO_INTERNAL_RESET_POLICY_ALLOW_CHANNEL_OPTIMIZATION = 2,
    WDI_P2P_GO_INTERNAL_RESET_POLICY_MAX = 0xFFFFFFFF
} WDI_P2P_GO_INTERNAL_RESET_POLICY;

typedef enum _WDI_P2P_CHANNEL_INDICATE_REASON
{
    WDI_P2P_CHANNEL_INDICATE_REASON_UNKNOWN = 0,
    WDI_P2P_CHANNEL_INDICATE_REASON_NEW_CONNECTION = 1,
    WDI_P2P_CHANNEL_INDICATE_REASON_ECSA_REQUESTED = 2,
    WDI_P2P_CHANNEL_INDICATE_REASON_ECSA_GO_INITIATED = 3,
    WDI_P2P_CHANNEL_INDICATE_REASON_MAX = 0xFFFFFFFF
} WDI_P2P_CHANNEL_INDICATE_REASON;

typedef enum _WDI_STOP_AP_REASON
{
    WDI_STOP_AP_REASON_FREQUENCY_NOT_AVAILABLE = 1,
    WDI_STOP_AP_REASON_CHANNEL_NOT_AVAILABLE = 2,
    WDI_STOP_AP_REASON_AP_ACTIVE = 3,
    WDI_STOP_AP_REASON_IHV_START = 0xFF000000,
    WDI_STOP_AP_REASON_IHV_END = 0xFFFFFFFF
} WDI_STOP_AP_REASON;

typedef enum _WDI_CAN_SUSTAIN_AP_REASON
{
    WDI_CAN_SUSTAIN_AP_REASON_IHV_START = 0xFF000000,
    WDI_CAN_SUSTAIN_AP_REASON_IHV_END = 0xFFFFFFFF
} WDI_CAN_SUSTAIN_AP_REASON;

typedef enum _WDI_ANQP_QUERY_STATUS
{
    WDI_ANQP_QUERY_STATUS_SUCCESS = 0,
    WDI_ANQP_QUERY_STATUS_FAILURE = 1,
    WDI_ANQP_QUERY_STATUS_TIMED_OUT = 2,
    WDI_ANQP_QUERY_STATUS_RESOURCES = 3,
    WDI_ANQP_QUERY_STATUS_ADVERTISEMENT_PROTOCOL_NOT_SUPPORTED_ON_REMOTE = 4,
    WDI_ANQP_QUERY_STATUS_GAS_PROTOCOL_FAILURE = 5,
    WDI_ANQP_QUERY_STATUS_ADVERTISEMENT_SERVER_NOT_RESPONDING = 6,
    WDI_ANQP_QUERY_STATUS_ACCESS_ISSUES = 7
} WDI_ANQP_QUERY_STATUS;

typedef enum _WDI_QOS_PROTOCOL
{
    WDI_QOS_PROTOCOL_NONE = 0x00,
    WDI_QOS_PROTOCOL_WMM = 0x01,
    WDI_QOS_PROTOCOL_11E = 0x02,
    WDI_QOS_PROTOCOL_MAX = 0xffffffff
}WDI_QOS_PROTOCOL;

typedef enum _WDI_DS_INFO
{
    WDI_DS_CHANGED = 1,
    WDI_DS_UNCHANGED = 2,
    WDI_DS_UNKNOWN = 3,
    WDI_DS_MAX = 0xffffffff
}WDI_DS_INFO;

typedef enum _WDI_ENCAPSULATION_TYPE
{
    WDI_ENCAPSULATION_RFC_1042 = 1,
    WDI_ENCAPSULATION_802_1H = 2,
}WDI_ENCAPSULATION_TYPE;

typedef enum _WDI_CIPHER_KEY_DIRECTION
{
    WDI_CIPHER_KEY_DIRECTION_INBOUND = 1,
    WDI_CIPHER_KEY_DIRECTION_OUTBOUND = 2,
    WDI_CIPHER_KEY_DIRECTION_BOTH = 3
} WDI_CIPHER_KEY_DIRECTION;


typedef enum _WDI_CIPHER_KEY_TYPE
{
    WDI_CIPHER_KEY_TYPE_PAIRWISE_KEY = 1,
    WDI_CIPHER_KEY_TYPE_GROUP_KEY = 2,
    WDI_CIPHER_KEY_TYPE_IGTK = 3
} WDI_CIPHER_KEY_TYPE;

typedef enum _WDI_EXEMPTION_PACKET_TYPE
{
    WDI_EXEMPT_PACKET_TYPE_UNICAST = 1,
    WDI_EXEMPT_PACKET_TYPE_MULTICAST = 2,
    WDI_EXEMPT_PACKET_TYPE_BOTH = 3
} WDI_EXEMPTION_PACKET_TYPE;


typedef enum _WDI_CONNECTION_QUALITY_HINT
{
    WDI_CONNECTION_QUALITY_AUTO_POWER_SAVE = 1,
    WDI_CONNECTION_QUALITY_LOW_LATENCY = 2,
    WDI_CONNECTION_QUALITY_HIGH_THROUGHPUT = 3,
    WDI_CONNECTION_QUALITY_NO_POWER_SAVE = 4
} WDI_CONNECTION_QUALITY_HINT;

typedef enum _WDI_P2P_LISTEN_STATE
{
    WDI_P2P_LISTEN_STATE_OFF = 0,
    WDI_P2P_LISTEN_STATE_PASSIVE_AVAILABILITY = 8,
    WDI_P2P_LISTEN_STATE_AUTOMATIC_AVAILABILITY = 16,
    WDI_P2P_LISTEN_STATE_HIGH_AVAILABILITY	= 24,
    WDI_P2P_LISTEN_STATE_DUMMY_MAX_VALUE = 0xFFFFFFFF,
} WDI_P2P_LISTEN_STATE;

typedef enum _WDI_WPS_CONFIGURATION_METHOD
{
    WDI_WPS_CONFIGURATION_METHOD_NULL = 0,
    WDI_WPS_CONFIGURATION_METHOD_DISPLAY = 0x0008,
    WDI_WPS_CONFIGURATION_METHOD_NFC_TAG = 0x0020,
    WDI_WPS_CONFIGURATION_METHOD_NFC_INTERFACE = 0x0040,
    WDI_WPS_CONFIGURATION_METHOD_PUSHBUTTON = 0x0080,
    WDI_WPS_CONFIGURATION_METHOD_KEYPAD = 0x0100,
    WDI_WPS_CONFIGURATION_METHOD_WFDS_DEFAULT = 0x1000,
    WDI_WPS_CONFIGURATION_METHOD_DUMMY_MAX_VALUE = 0xFFFF
} WDI_WPS_CONFIGURATION_METHOD;

//
// The following must match DOT11_BLUETOOTH_COEXISTENCE_SUPPORT
//
typedef enum _WDI_BLUETOOTH_COEXISTENCE_SUPPORT
{
    WDI_BLUETOOTH_COEXISTENCE_UNKNOWN                       = 0,
    WDI_BLUETOOTH_COEXISTENCE_PERFORMANCE_MAINTAINED        = 1,
    WDI_BLUETOOTH_COEXISTENCE_WIFI_DEGRADED_TO_1x1          = 2,
    WDI_BLUETOOTH_COEXISTENCE_WIFI_THROUGHPUT_DEGRADED      = 3,
    WDI_BLUETOOTH_COEXISTENCE_MUTUALLY_EXCLUSIVE            = 4,
    WDI_BLUETOOTH_COEXISTENCE_MAX                           = 5
} WDI_BLUETOOTH_COEXISTENCE_SUPPORT;

typedef struct _WDI_BYTE16 {
    UINT8 Byte[16];
} WDI_BYTE16, *PWDI_BYTE16;

typedef struct _WDI_BYTE4 {
    UINT8 Byte[4];
} WDI_BYTE4, *PWDI_BYTE4;

//
// mnemonics for constants
//

//
// wake reason codes in enum
//
#define WDI_WAKE_REASON_CODE_PACKET                    (0x0001)
#define WDI_WAKE_REASON_CODE_MEDIA_DISCONNECT          (0x0002)
#define WDI_WAKE_REASON_CODE_MEDIA_CONNECT             (0x0003)
#define WDI_WAKE_REASON_CODE_NLO_DISCOVERY             (0x1000)
#define WDI_WAKE_REASON_CODE_AP_ASSOCIATION_LOST       (0x1001)
#define WDI_WAKE_REASON_CODE_GTK_HANDSHAKE_ERROR       (0x1002)
#define WDI_WAKE_REASON_CODE_4WAY_HANDSHAKE_REQUEST    (0x1003)
#define WDI_WAKE_REASON_CODE_EAPID_REQUEST             (0x1004)
#define WDI_WAKE_REASON_CODE_INCOMING_M1               (0x1005)    // Use WDI_WAKE_REASON_CODE_4WAY_HANDSHAKE_REQUEST instead
#define WDI_WAKE_REASON_CODE_FIRMWARE_STALLED          (0x1010)

#define WDI_WAKE_REASON_CODE_GTK_HANDSHAKE_REQUEST     (0x1020)

//
// Band IDs
//
typedef enum _WDI_BAND_ID
{
    WDI_BAND_ID_UNKNOWN = 0,
    WDI_BAND_ID_2400 = 1,
    WDI_BAND_ID_5000 = 2,
    WDI_BAND_ID_60000 = 3,
    WDI_BAND_ID_900 = 4,

    WDI_BAND_ID_IHV_CUSTOM_START = 0x80000000,
    WDI_BAND_ID_IHV_CUSTOM_END = 0x81000000,
    WDI_BAND_ID_ANY = 0xFFFFFFFF                    // This value is reserved. A valid band_id should not use this.
} WDI_BAND_ID;


typedef UINT32 WDI_BAND_COMMON_FREQUENCY;

#define WDI_BAND_FREQUENCY_2400     2400
#define WDI_BAND_FREQUENCY_5000     5000
#define WDI_BAND_FREQUENCY_60000    60000
#define WDI_BAND_FREQUENCY_900      900

//
// Encapsulation Type for TCP Checksum/Large Send Offload
//
#define WDI_ENCAPSULATION_IEEE_802_11 0x00000020

//
// WDI_TLV_SET_POWER_DX_REASON enum
//
#define WDI_SET_POWER_DX_REASON_SELETIVE_SUSPEND 1
