/*++

Copyright (c) Microsoft Corporation. All Rights Reserved

Module Name:

    NciDef.h

Abstract:

    Standard defintions from the NCI 1.0 specifications.

--*/

#pragma once

//
// NCI Status Codes
//
#define NCI_STATUS_OK                                  (0x00)
#define NCI_STATUS_REJECTED                            (0x01)
#define NCI_STATUS_RF_FRAME_CORRUPTED                  (0x02)
#define NCI_STATUS_FAILED                              (0x03)
#define NCI_STATUS_NOT_INITALIZED                      (0x04)
#define NCI_STATUS_SYNTAX_ERROR                        (0x05)
#define NCI_STATUS_SEMANTIC_ERROR                      (0x06)
// 0x07 - 0x08 - Reserved for future use
#define NCI_STATUS_INVALID_PARAM                       (0x09)
#define NCI_STATUS_MESSAGE_SIZE_EXCEEDED               (0x0A)
// 0x0B - 0x9F -Reserved for future use
#define NCI_STATUS_DISCOVERY_ALREADY_STARTED           (0xA0)
#define NCI_STATUS_DISCOVERY_TARGET_ACTIVATION_FAILED  (0xA1)
#define NCI_STATUS_DISCOVERY_TEAR_DOWN                 (0xA2)
#define NCI_STATUS_RF_TRANSMISSION_ERROR               (0xB0)
#define NCI_STATUS_RF_PROTOCOL_ERROR                   (0xB1)
#define NCI_STATUS_RF_TIMEOUT_ERROR                    (0xB2)
// 0xB3 - 0xBF - Reserved for future use
#define NCI_STATUS_NFCEE_INTERFACE_ACTIVATION_FAILED   (0xC0)
#define NCI_STATUS_NFCEE_TRANSMISSION_ERROR            (0xC1)
#define NCI_STATUS_NFCEE_PROTOCOL_ERROR                (0xC2)
#define NCI_STATUS_NFCEE_TIMEOUT_ERROR                 (0xC3)
// 0xC4 - 0xCF - Reserved for future use
// 0xE0 - 0xFF - Proprietary Status Codes

//
// NCI Packet
//
#define NCI_PACKET_MAX_SIZE                             (0xFF)

#define NCI_PACKET_MT_BUFFER_OFFSET                     (0x00)
#define NCI_PACKET_MT_SHIFT                             (0x05)

#define NCI_PACKET_MT_DATA                              (0x0)
#define NCI_PACKET_MT_CONTROL_COMMAND                   (0x1)
#define NCI_PACKET_MT_CONTROL_RESPONSE                  (0x2)
#define NCI_PACKET_MT_CONTROL_NOTIFICATION              (0x3)

#define NCI_PACKET_HEADER_GET_MT(_Header_)              ((((PUCHAR)_Header_)[NCI_PACKET_MT_BUFFER_OFFSET]) >> NCI_PACKET_MT_SHIFT)

#define NCI_PACKET_PBF_BUFFER_OFFSET                    (0x00)
#define NCI_PACKET_PBF_MASK                             (0x10)
#define NCI_PACKET_PBF_SHIFT                            (0x04)

#define NCI_PACKET_PBF_COMPLETE                         (0x0)
#define NCI_PACKET_PBF_NOT_COMPLETE                     (0x1)

#define NCI_PACKET_HEADER_GET_PBF(_Header_)             (((((PUCHAR)_Header_)[NCI_PACKET_PBF_BUFFER_OFFSET]) & NCI_PACKET_PBF_MASK) >> NCI_PACKET_PBF_SHIFT)

#define NCI_PACKET_CONTROL_GID_BUFFER_OFFSET            (0x00)
#define NCI_PACKET_CONTROL_GID_MASK                     (0xF)

#define NCI_PACKET_HEADER_GET_CONTROL_GID(_Header_)     ((((PUCHAR)_Header_)[NCI_PACKET_CONTROL_GID_BUFFER_OFFSET]) & NCI_PACKET_CONTROL_GID_MASK)

#define NCI_PACKET_CONTROL_OID_BUFFER_OFFSET            (0x1)
#define NCI_PACKET_CONTROL_OID_MASK                     (0x3F)

#define NCI_PACKET_HEADER_GET_CONTROL_OID(_Header_)     ((((PUCHAR)_Header_)[NCI_PACKET_CONTROL_OID_BUFFER_OFFSET]) & NCI_PACKET_CONTROL_OID_MASK)

#define NCI_PACKET_DATA_CONNID_BUFFER_OFFSET            (0x00)
#define NCI_PACKET_DATA_CONNID_MASK                     (0xF)

#define NCI_PACKET_HEADER_GET_DATA_CONNID(_Header_)     ((((PUCHAR)_Header_)[NCI_PACKET_DATA_CONNID_BUFFER_OFFSET]) & NCI_PACKET_DATA_CONNID_MASK)

#define NCI_PACKET_PAYLOADLENGTH_BUFFER_OFFSET          (0x02)
#define NCI_PACKET_PAYLOAD_BUFFER_OFFSET                (0x03)

#define NCI_PACKET_HEADER_GET_PAYLOADLENGTH(_Header_)   (((PUCHAR)_Header_)[NCI_PACKET_PAYLOADLENGTH_BUFFER_OFFSET])

//
// Control Group Idenfiers
//
#define NCI_CTRL_GID_CORE               (0x00)
#define NCI_CTRL_GID_RF_MGMT            (0x01)
#define NCI_CTRL_GID_NFCEE_MGMT         (0x02)
#define NCI_CTRL_GID_PROPRIETARY        (0x0F)

//
// NCI Core Identifiers
//
#define CORE_RESET_CMD                  (0x00)
#define CORE_RESET_RSP                  (0x00)
#define CORE_RESET_NTF                  (0x00)

#define CORE_INIT_CMD                   (0x01)
#define CORE_INIT_RSP                   (0x01)

#define CORE_SET_CONFIG_CMD             (0x02)
#define CORE_SET_CONFIG_RSP             (0x02)

#define CORE_GET_CONFIG_CMD             (0x03)
#define CORE_GET_CONFIG_RSP             (0x03)

#define CORE_CONN_CREATE_CMD            (0x04)
#define CORE_CONN_CREATE_RSP            (0x04)

#define CORE_CONN_CLOSE_CMD             (0x05)
#define CORE_CONN_CLOSE_RSP             (0x05)

#define CORE_CONN_CREDITS_NTF           (0x06)

#define CORE_GENERIC_ERROR_NTF          (0x07)

#define CORE_INTERFACE_ERROR_NTF        (0x08)

#define CORE_SET_POWER_SUB_STATE_CMD    (0x09)
#define CORE_SET_POWER_SUB_STATE_RSP    (0x09)

//
// RF Interface Identifiers
//
#define RF_DISCOVER_MAP_CMD             (0x00)
#define RF_DISCOVER_MAP_RSP             (0x00)

#define RF_SET_LISTEN_MODE_ROUTING_CMD  (0x01)
#define RF_SET_LISTEN_MODE_ROUTING_RSP  (0x01)

#define RF_GET_LISTEN_MODE_ROUTING_CMD  (0x02)
#define RF_GET_LISTEN_MODE_ROUTING_RSP  (0x02)
#define RF_GET_LISTEN_MODE_ROUTING_NTF  (0x02)

#define RF_DISCOVER_CMD                 (0x03)
#define RF_DISCOVER_RSP                 (0x03)
#define RF_DISCOVER_NTF                 (0x03)

#define RF_DISCOVER_SELECT_CMD          (0x04)
#define RF_DISCOVER_SELECT_RSP          (0x04)

#define RF_INTF_ACTIVATED_NTF           (0x05)

#define RF_DEACTIVATE_CMD               (0x06)
#define RF_DEACTIVATE_RSP               (0x06)
#define RF_DEACTIVATE_NTF               (0x06)

#define RF_FIELD_INFO_NTF               (0x07)

#define RF_T3T_POLLING_CMD              (0x08)
#define RF_T3T_POLLING_RSP              (0x08)
#define RF_T3T_POLLING_NTF              (0x08)

#define RF_NFCEE_ACTION_NTF             (0x09)

#define RF_NFCEE_DISCOVERY_REQ_NTF      (0x0A)

#define RF_PARAMETER_UPDATE_CMD         (0x0B)
#define RF_PARAMETER_UPDATE_RSP         (0x0B)

#define RF_ISO_DEP_NAK_PRESENCE_CMD     (0x10)
#define RF_ISO_DEP_NAK_PRESENCE_RSP     (0x10)
#define RF_ISO_DEP_NAK_PRESENCE_NTF     (0x10)

//
// NFCEE Management Identifiers
//
#define NFCEE_DISCOVER_CMD              (0x00)
#define NFCEE_DISCOVER_RSP              (0x00)
#define NFCEE_DISCOVER_NTF              (0x00)

#define NFCEE_MODE_SET_CMD              (0x01)
#define NFCEE_MODE_SET_RSP              (0x01)

//
// RF Technologies
//
#define NFC_RF_TECHNOLOGY_A             (0x00)
#define NFC_RF_TECHNOLOGY_B             (0x01)
#define NFC_RF_TECHNOLOGY_F             (0x02)
#define NFC_RF_TECHNOLOGY_15693         (0x03)

//
// RF Technology and Mode
//
#define NFC_A_PASSIVE_POLL_MODE         (0x00)
#define NFC_B_PASSIVE_POLL_MODE         (0x01)
#define NFC_F_PASSIVE_POLL_MODE         (0x02)
#define NFC_A_ACTIVE_POLL_MODE          (0x03)
#define NFC_F_ACTIVE_POLL_MODE          (0x05)
#define NFC_15693_PASSIVE_POLL_MODE     (0x06)

#define NFC_A_PASSIVE_LISTEN_MODE       (0x80)
#define NFC_B_PASSIVE_LISTEN_MODE       (0x81)
#define NFC_F_PASSIVE_LISTEN_MODE       (0x82)
#define NFC_A_ACTIVE_LISTEN_MODE        (0x83)
#define NFC_F_ACTIVE_LISTEN_MODE        (0x85)
#define NFC_15693_PASSIVE_LISTEN_MODE   (0x86)

//
// Bit Rates
//
#define NFC_BIT_RATE_106                (0x00)
#define NFC_BIT_RATE_212                (0x01)
#define NFC_BIT_RATE_424                (0x02)
#define NFC_BIT_RATE_848                (0x03)
#define NFC_BIT_RATE_1695               (0x04)
#define NFC_BIT_RATE_3390               (0x05)
#define NFC_BIT_RATE_6780               (0x06)

//
// RF Protocols
//
#define PROTOCOL_UNKNOWN                (0x00)
#define PROTOCOL_T1T                    (0x01)
#define PROTOCOL_T2T                    (0x02)
#define PROTOCOL_T3T                    (0x03)
#define PROTOCOL_ISO_DEP                (0x04)
#define PROTOCOL_NFC_DEP                (0x05)

//
// RF Interfaces
//
#define NFC_RF_INTF_NFCEE_DIRECT        (0x00)
#define NFC_RF_INTF_FRAME_RF            (0x01)
#define NFC_RF_INTF_ISO_DEP             (0x02)
#define NFC_RF_INTF_NFC_DEP             (0x03)

//
// NFCEE Protocols
//
#define NFCEE_PROTOCOL_APDU             (0x00)
#define NFCEE_PROTOCOL_HCI              (0x01)
#define NFCEE_PROTOCOL_T3T              (0x02)
#define NFCEE_PROTOCOL_TRANSPARENT      (0x03)

//
// Configuration Parameter Tags
//
#define TOTAL_DURATION                  (0x00)
#define CON_DEVICES_LIMIT               (0x01)

#define PA_BAIL_OUT                     (0x08)

#define PB_AFI                          (0x10)
#define PB_BAIL_OUT                     (0x11)
#define PB_ATTRIB_PARAM1                (0x12)

#define PF_BIT_RATE                     (0x18)

#define PB_H_INFO                       (0x20)
#define PI_BIT_RATE                     (0x21)

#define PN_NFC_DEP_SPEED                (0x28)
#define PN_ATR_REQ_GEN_BYTES            (0x29)
#define PN_ATR_REQ_CONFIG               (0x2A)

#define LA_BIT_FRAME_SDD                (0x30)
#define LA_PLATFORM_CONFIG              (0x31)
#define LA_SEL_INFO                     (0x32)
#define LA_NFCID1                       (0x33)

#define LB_SENSB_INFO                   (0x38)
#define LB_NFCID0                       (0x39)
#define LB_APPLICATION_DATA             (0x3A)
#define LB_SFGI                         (0x3B)
#define LB_ADC_FO                       (0x3C)

#define LF_T3T_IDENTIFIERS_1            (0x40)
#define LF_T3T_IDENTIFIERS_2            (0x41)
#define LF_T3T_IDENTIFIERS_3            (0x42)
#define LF_T3T_IDENTIFIERS_4            (0x43)
#define LF_T3T_IDENTIFIERS_5            (0x44)
#define LF_T3T_IDENTIFIERS_6            (0x45)
#define LF_T3T_IDENTIFIERS_7            (0x46)
#define LF_T3T_IDENTIFIERS_8            (0x47)
#define LF_T3T_IDENTIFIERS_9            (0x48)
#define LF_T3T_IDENTIFIERS_10           (0x49)
#define LF_T3T_IDENTIFIERS_11           (0x4A)
#define LF_T3T_IDENTIFIERS_12           (0x4B)
#define LF_T3T_IDENTIFIERS_13           (0x4C)
#define LF_T3T_IDENTIFIERS_14           (0x4D)
#define LF_T3T_IDENTIFIERS_15           (0x4E)
#define LF_T3T_IDENTIFIERS_16           (0x4F)
#define LF_PROTOCOL_TYPE                (0x50)
#define LF_T3T_PMM                      (0x51)
#define LF_T3T_MAX                      (0x52)
#define LF_T3T_FLAGS                    (0x53)
#define LF_CON_BITR_F                   (0x54)

#define LI_FWI                          (0x58)
#define LA_HIST_BY                      (0x59)
#define LB_H_INFO_RESP                  (0x5A)
#define LI_BIT_RATE                     (0x5B)

#define LN_WT                           (0x60)
#define LN_ATR_RES_GEN_BYTES            (0x61)
#define LN_ATR_RES_CONFIG               (0x62)

#define RF_FIELD_INFO                   (0x80)
#define RF_NFCEE_ACTION                 (0x81)
#define NFCDEP_OP                       (0x82)

//
// RF Listen Routing Table
//
#define NCI_TECH_ROUTING_ENTRY_SIZE         (0x05)
#define NCI_PROTO_ROUTING_ENTRY_SIZE        (0x05)
#define NCI_AID_ROUTING_ENTRY_SIZE(_Aid_)   (0x04 + (_Aid_))
