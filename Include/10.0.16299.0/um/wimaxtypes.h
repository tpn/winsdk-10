/*++

Copyright (c) 2007-2008  Microsoft Corporation

Module Name:

    wimaxtypes.h

Abstract:

    This module contains common data type, structure definition for WiMAX.

Author:

    Xinyan Zan (xinyanz) 26-July-2007

Environment:

    User mode and kernel mode 

--*/

#ifndef _WIMAXTYPES_
#define _WIMAXTYPES_
#pragma once


#ifdef __cplusplus
extern "C" {
#endif
    
#define WIMAX_MAXIMUM_VENDOR_NAME_LENGTH 128
#define WIMAX_MAXIMUM_MODEL_NAME_LENGTH 128
#define WIMAX_MAXIMUM_SERVICE_CLASS_NAME_LENGTH 128

#define WIMAX_DRIVER_MODEL_MAJOR_VERSION_1 1
#define WIMAX_DRIVER_MODEL_MINOR_VERSION_1 0

#ifdef __midl
// use 4-byte enum
typedef [v1_enum] enum _WIMAX_FULL_SCAN_SUPPORT {
#else
typedef enum _WIMAX_FULL_SCAN_SUPPORT {
#endif
    WiMAXFullScanDisconnect,
    WiMAXFullScanDisruptConnection,
    WiMAXFullScanNoDisruptConnection,
    WiMAXFullScanMaximum,
} WIMAX_FULL_SCAN_SUPPORT, *PWIMAX_FULL_SCAN_SUPPORT;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_NETWORK_SELECTION_MODE {
#else
typedef enum _WIMAX_NETWORK_SELECTION_MODE {
#endif
    WiMAXNetworkSelectionModeAuto,
    WiMAXNetworkSelectionModeManual,
    WiMAXNetworkSelectionModeMaximum,
} WIMAX_NETWORK_SELECTION_MODE, *PWIMAX_NETWORK_SELECTION_MODE;

typedef struct _WIMAX_BS_IDENTIFIER {
    UCHAR BSID[6];
} WIMAX_BS_IDENTIFIER, *PWIMAX_BS_IDENTIFIER;

#define WIMAX_BS_IDENTIFIER_UNSPECIFIED {0}

typedef struct _WIMAX_BS_INFORMATION {
    WIMAX_BS_IDENTIFIER BSIdentifier;
    LONG CINRMean;
    ULONG RSSIMean;
    ULONG BSRTD;
} WIMAX_BS_INFORMATION, *PWIMAX_BS_INFORMATION;

typedef struct _WIMAX_NAP_IDENTIFIER {
    UCHAR NapID[3];
} WIMAX_NAP_IDENTIFIER, *PWIMAX_NAP_IDENTIFIER;

#define WIMAX_MAXIMUM_NSP_NAME_LENGTH 128

typedef struct _WIMAX_NSP_IDENTIFIER {
    UCHAR NspID[3];
} WIMAX_NSP_IDENTIFIER, *PWIMAX_NSP_IDENTIFIER;

#define WIMAX_NSP_IDENTIFIER_UNSPECIFIED {0}

typedef struct _WIMAX_NSP_STATIC_INFORMATION {
    WIMAX_NSP_IDENTIFIER NspIdentifier;
    WCHAR NspName[WIMAX_MAXIMUM_NSP_NAME_LENGTH];
    ULONGLONG Reserved;
} WIMAX_NSP_STATIC_INFORMATION, *PWIMAX_NSP_STATIC_INFORMATION;


#ifdef __midl
// use 4-byte enum
typedef [v1_enum] enum _WIMAX_NSP_TYPE {
#else
typedef enum _WIMAX_NSP_TYPE {
#endif
    WiMAXNspHome,
    WiMAXNspRoamingPartner,
    WiMAXNspOther,
    WiMAXNspMaximum,
} WIMAX_NSP_TYPE, *PWIMAX_NSP_TYPE;

typedef struct _WIMAX_VISIBLE_NSP_INFORMATION {
    WIMAX_NSP_STATIC_INFORMATION NspStaticInformation;
    WIMAX_NSP_TYPE NspType;
    LONG CINRMean;
    ULONG RSSIMean;
} WIMAX_VISIBLE_NSP_INFORMATION, *PWIMAX_VISIBLE_NSP_INFORMATION;

#define WIMAX_MAXIMUM_SUBSCRIPTION_IDENTIFIER_LENGTH 256

typedef struct _WIMAX_SUBSCRIPTION_IDENTIFIER {
    WCHAR SubscriptionIdentifier[WIMAX_MAXIMUM_SUBSCRIPTION_IDENTIFIER_LENGTH];
} WIMAX_SUBSCRIPTION_IDENTIFIER, *PWIMAX_SUBSCRIPTION_IDENTIFIER;

#define MAXIMUM_WIMAX_SUBSCRIPTION_NAME_LENGTH 128
#define MAXIMUM_WIMAX_SUBSCRIPTION_ICON_LENGTH 260

typedef struct _WIMAX_SUBSCRIPTION_INFORMATION {
    WIMAX_SUBSCRIPTION_IDENTIFIER SubscriptionIdentifier;
    BOOLEAN SubscriptionLocked;
    BOOLEAN Activated;
    BOOLEAN Enabled;
    WCHAR SubscriptionName[MAXIMUM_WIMAX_SUBSCRIPTION_NAME_LENGTH];
    WCHAR SubscriptionIconPath[MAXIMUM_WIMAX_SUBSCRIPTION_ICON_LENGTH];
    ULONG NumberOfHomeNsps;
    ULONG NumberOfOperatorPreferredNsps;
#ifdef __midl
    [unique, size_is(NumberOfHomeNsps+NumberOfOperatorPreferredNsps)] WIMAX_NSP_STATIC_INFORMATION Nsps[*];
#else
    WIMAX_NSP_STATIC_INFORMATION Nsps[0];
#endif    
} WIMAX_SUBSCRIPTION_INFORMATION, *PWIMAX_SUBSCRIPTION_INFORMATION;


typedef struct _WIMAX_SUBSCRIPTION_VISIBLE_NETWORK {
    // Number of visible NSPs of this subscription.    
    ULONG NumberOfVisibleNSPs;   
    // Subscription identifier.
    WIMAX_SUBSCRIPTION_IDENTIFIER Subscription;
#ifdef __midl
    [unique, size_is(NumberOfVisibleNSPs)] WIMAX_VISIBLE_NSP_INFORMATION NSPs[*];
#else
    WIMAX_VISIBLE_NSP_INFORMATION NSPs[0];
#endif     
} WIMAX_SUBSCRIPTION_VISIBLE_NETWORK, *PWIMAX_SUBSCRIPTION_VISIBLE_NETWORK;

typedef struct _WIMAX_RADIO_STATE {
    BOOLEAN SoftwareRadioState;     // TRUE: On, FALSE: Off
    BOOLEAN HardwareRadioState;     // TRUE: On, FALSE: Off
} WIMAX_RADIO_STATE, *PWIMAX_RADIO_STATE;

typedef struct _WIMAX_STATISTICS_INFORMATION {
    ULONGLONG MACTransmittedSuccessFrameCount;
    ULONGLONG MACReceivedSuccessFrameCount;
    ULONGLONG MACTransmittedFailureFrameCount;
    ULONGLONG MACReceivedFailureFrameCount;
    ULONGLONG MACTransmittedSuccessFragmentCount;
    ULONGLONG MACReceivedSuccessFragmentCount;
    ULONGLONG MACReassembleSuccessCount;
    ULONGLONG MACReassembleFailureCount;
    ULONGLONG MACFragmentSuccessCount;
    ULONGLONG MACFragmentFailureCount;
    ULONGLONG MACFrameDecryptSuccessCount;
    ULONGLONG MACFrameDecryptFailureCount;
    ULONGLONG MACFrameEncryptSuccessCount;
    ULONGLONG MACFrameEncryptFailureCount;
} WIMAX_STATISTICS_INFORMATION, *PWIMAX_STATISTICS_INFORMATION;


#ifdef __midl
typedef [v1_enum] enum _WIMAX_PHY_TYPE {
#else
typedef enum _WIMAX_PHY_TYPE {
#endif
    WiMAXPhySC,
    WiMAXPhySCa,
    WiMAXPhyOFDM,
    WiMAXPhyOFDMA,
    WiMAXPhyMaximum,
} WIMAX_PHY_TYPE, *PWIMAX_PHY_TYPE;

typedef union _WIMAX_PKM_SUPPORT {
    UCHAR PkmSupport;
    struct {
        UCHAR PkmV1 : 1;
        UCHAR PkmV2 : 1;
    };
} WIMAX_PKM_SUPPORT, *PWIMAX_PKM_SUPPORT; 

typedef union _WIMAX_EAP_METHOD_SUPPORT {
    ULONG SupportedEAPMethod;
    struct {
        ULONG EAPTLS : 1;
        ULONG EAPAKA : 1;
        ULONG EAPTTLS : 1;
        ULONG EAPMD5 : 1;
        ULONG EAPPSK : 1;
        ULONG EAPIKEv2 : 1;
        ULONG EAPSIM : 1;
        ULONG EAPFAST : 1;
    };
} WIMAX_EAP_METHOD_SUPPORT, *PWIMAX_EAP_METHOD_SUPPORT;

typedef union _WIMAX_AUTHORIZATION_POLICY_SUPPORT {
    UCHAR AuthorizationPolicySupport;
    struct {
        UCHAR RSAInitialEntry : 1;
        UCHAR EAPInitialEntry : 1;
        UCHAR AuthenticatedEAPEntry : 1;
        UCHAR Reserved : 1;
        UCHAR RSAReEntry : 1;
        UCHAR EAPReEntry : 1;
        UCHAR AuthenticatedEAPReEntry : 1;
    };
} WIMAX_AUTHORIZATION_POLICY_SUPPORT, *PWIMAX_AUTHORIZATION_POLICY_SUPPORT; 

typedef union _WIMAX_CS_TYPE_SUPPORTED {
    ULONG SupportedCS;
    struct {
        ULONG ATMCS : 1;
        ULONG IPv4CS : 1;
        ULONG IPv6CS : 1;
        ULONG EthernetCS : 1;
        ULONG IP8021QCS : 1;
        ULONG IPv4OverEthernetCS : 1;
        ULONG IPv6OverEthernetCS : 1;
        ULONG IPv4Over8021QCS : 1;
        ULONG IPv6Over8021QCS : 1;
        ULONG EthernetWithROHCCS : 1;
        ULONG EthernetWithECRTPCS : 1;
        ULONG IPWithROHCCS : 1;
        ULONG IPWithECRTPCS : 1;
    };
} WIMAX_CS_TYPE_SUPPORTED, *PWIMAX_CS_TYPE_SUPPORTED;	

typedef struct _WIMAX_FREQUENCY {
    ULONG CentralFrequency;
    ULONG Bandwidth;
} WIMAX_FREQUENCY, *PWIMAX_FREQUENCY;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_CONNECTION_STATUS {
#else
typedef enum _WIMAX_CONNECTION_COMPLETE_STATUS {
#endif
    WiMAXConnectionCompleteSuccess,
    WiMAXConnectionCompleteCandidateBSListExhausted,
    WiMAXConnectionCompleteCancelled,
    WiMAXConnectionCompleteOtherFailure,
    WiMAXConnectionCompleteStausMaximum = 255
} WIMAX_CONNECTION_COMPLETE_STATUS, *PWIMAX_CONNECTION_COMPLETE_STATUS;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_ASSOCIATION_STATUS {
#else
typedef enum _WIMAX_ASSOCIATION_COMPLETE_STATUS {
#endif
    WiMAXAssociationCompleteSuccess,
    WiMAXAssociationCompleteRangingAbortbyBS,
    WiMAXAssociationCompleteRangingTimeout,
    WiMAXAssociationCompleteRangingMaximumRetryExceeded,
    WiMAXAssociationCompleteRangingOtherFailure,
    WiMAXAssociationCompleteSBCTimeout,
    WiMAXAssociationCompleteIncompatibleSBC,
    WiMAXAssociationCompleteSBCOtherFailure,
    WiMAXAssociationCompleteAuthenticationEAPTimeout,
    WiMAXAssociationCompleteAuthenticationEAPFailure,
    WiMAXAssociationCompleteAuthenticationSATekTimeout,
    WiMAXAssociationCompleteAuthenticationSATekFailure,
    WiMAXAssociationCompleteAuthenticationKeyReqTimeout,
    WiMAXAssociationCompleteAuthenticationKeyFailure,
    WiMAXAssociationCompleteRegistrationMessageAuthenticationFailure,
    WiMAXAssociationCompleteRegistrationTimeout,
    WiMAXAssociationCompleteRegistrationOtherFailure,
    WiMAXAssociationCompleteISFCreationTimeout,
    WiMAXAssociationCompleteISFCreationFailure,
    WiMAXAssociationCompleteStatusMaximum = 255
} WIMAX_ASSOCIATION_COMPLETE_STATUS, *PWIMAX_ASSOCIATION_COMPLETE_STATUS;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_SCAN_STATUS {
#else
typedef enum _WIMAX_SCAN_COMPLETE_STATUS {
#endif
    WiMAXScanCompleteSuccess,
    WiMAXScanCompleteCancelled,
    WiMAXScanCompleteFailureRadioOff,
    WiMAXScanCompleteOtherFailure,
    WiMAXScanCompleteStausMaximum = 255
} WIMAX_SCAN_COMPLETE_STATUS, *PWIMAX_SCAN_COMPLETE_STATUS;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_HANDOVER_REASON {
#else
typedef enum _WIMAX_HANDOVER_REASON {
#endif
    WiMAXHandoverInitiatedbyBS,  // Handover is initiated by BS.
    WiMAXHandoverInitiatedbyMS,  // Handover is initiated by MS.
    WiMAXHandoverReasonMaximum = 255
} WIMAX_HANDOVER_REASON, *PWIMAX_HANDOVER_REASON;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_DISCONNECT_REASON {
#else
typedef enum _WIMAX_DISCONNECT_REASON {
#endif
    WiMAXDisconnectByBSReset,   // Reset by BS.
    WiMAXDisconnectByBSDeReg,   // By BS DE-REG.
    WiMAXDisconnectByMS,        // Disconnect request by MS.
    WiMAXDisconnectOther,       // All other disconnect reasons.
    WiMAXDisconnectReasonMaximum = 255
} WIMAX_DISCONNECT_REASON, *PWIMAX_DISCONNECT_REASON;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_CS_TYPE {
#else
typedef enum _WIMAX_CS_TYPE {
#endif
    WiMAXReservedCS,
    WiMAXIPv4CS,
    WiMAXIPv6CS,
    WiMAXEthernetCS,
    WiMAX8021QCS,
    WiMAXIPv4OverEthernetCS,
    WiMAXIPv6OverEthernetCS,
    WiMAXIPv4Over8021QCS,
    WiMAXIPv6Over8021QCS,
    WiMAXATMCS,
    WiMAXEthernetWithROHCCS,
    WiMAXEthernetWithECRTPCS,
    WiMAXIPWithROHCCS,
    WiMAXIPWithECRTPCS,
    WiMAXMaximumCS,
} WIMAX_CS_TYPE, *PWIMAX_CS_TYPE;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_CHANGE_TYPE {
#else
typedef enum _WIMAX_CHANGE_TYPE {
#endif
    WiMAXAdditionIndication,       // Adding an instance.
    WiMAXDeletionIndication,       // Deleting an instance.
    WiMAXChangeIndication,         // Instance change.
    WiMAXChangeMaximum
} WIMAX_CHANGE_TYPE, *PWIMAX_CHANGE_TYPE;

#ifdef __midl
typedef [v1_enum] enum _WIMAX_POWER_MODE {
#else
typedef enum _WIMAX_POWER_MODE {
#endif
    WiMAXPowerModeIdle,
    WiMAXPowerModeNormal,
    WiMAXPowerModeMaximum
} WIMAX_POWER_MODE, *PWIMAX_POWER_MODE;

#ifdef __cplusplus
}
#endif


#endif // _WIMAXTYPES_

