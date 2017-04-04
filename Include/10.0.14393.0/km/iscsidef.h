#ifndef _iscsidef_h_
#define _iscsidef_h_

// ISCSI_IP_Address - ISCSI_IP_Address


//***************************************************************************
//
//  iscsidef.h
// 
//  Module: iScsi Discovery api
//
//  Purpose: Internal header defining interface between user mode discovery
//           api dll and HBA driver miniport.
//
//  Copyright (c) 2001 Microsoft Corporation
//
//***************************************************************************

//
// Definitions for iscsi security flags. These flags provide
// information about the security expectations of a target portal and
// are needed to insure a successful IKE/IPSEC negotiation. Note that
// the flags and values are taken directly from the iSNS spec
//

    // 1 = Tunnel Mode Preferred; 0 = No Preference
#define ISCSI_SECURITY_FLAG_TUNNEL_MODE_PREFERRED    0x00000040

    // 1 = Transport Mode Preferred; 0 = No Preference
#define ISCSI_SECURITY_FLAG_TRANSPORT_MODE_PREFERRED 0x00000020
               
    // 1 = PFS Enabled; 0 = PFS Disabled
#define ISCSI_SECURITY_FLAG_PFS_ENABLED              0x00000010
               
    // 1 = Aggressive Mode Enabled; 0 = Disabled
#define ISCSI_SECURITY_FLAG_AGGRESSIVE_MODE_ENABLED  0x00000008
               
    // 1 = Main Mode Enabled; 0 = MM Disabled
#define ISCSI_SECURITY_FLAG_MAIN_MODE_ENABLED        0x00000004
               
    // 1 = IKE/IPSec Enabled; 0 = IKE/IPSec Disabled
#define ISCSI_SECURITY_FLAG_IKE_IPSEC_ENABLED        0x00000002

    // If set then all other ISCSI_SECURITY_FLAGS are valid                
#define ISCSI_SECURITY_FLAG_VALID                    0x00000001                


//
// Types of addresses that can be passed by management app to driver
//
typedef enum {
           // Text based host name. This needs to be resolved to binary form
    ISCSI_IP_ADDRESS_TEXT = 0,
           // Binary IPv4 address
    ISCSI_IP_ADDRESS_IPV4 = 1,
           // Binary IPv6 address
    ISCSI_IP_ADDRESS_IPV6 = 2,
           // Empty address
    ISCSI_IP_ADDRESS_EMPTY = 3
} ISCSIIPADDRESSTYPE, *PISCSIIPADDRESSTYPE;

#define ISCSI_IP_AddressGuid \
    { 0x9ac5d4a1,0x1a1a,0x48ec, { 0x8e,0x79,0x73,0x58,0x06,0xe9,0xa1,0xfa } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_IP_Address_GUID, \
            0x9ac5d4a1,0x1a1a,0x48ec,0x8e,0x79,0x73,0x58,0x06,0xe9,0xa1,0xfa);
#endif


typedef struct _ISCSI_IP_Address
{
    // Type of address specified. It can be text: a DNS or dotted address or it can be a binary ipv4 or ipv6 address
    ULONG Type;
    #define ISCSI_IP_Address_Type_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_Type_ID 1

    // If IPV4 Address is specified as the Address Format then this conains the binary IPv4 ip address
    ULONG IpV4Address;
    #define ISCSI_IP_Address_IpV4Address_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV4Address_ID 2

    // If IPV6 Address is specified as the Address Format then this conains the binary IPv6 ip address
    UCHAR IpV6Address[16];
    #define ISCSI_IP_Address_IpV6Address_SIZE sizeof(UCHAR[16])
    #define ISCSI_IP_Address_IpV6Address_ID 3

    // IPV6 flow information
    ULONG IpV6FlowInfo;
    #define ISCSI_IP_Address_IpV6FlowInfo_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV6FlowInfo_ID 4

    // IPV6 scope id
    ULONG IpV6ScopeId;
    #define ISCSI_IP_Address_IpV6ScopeId_SIZE sizeof(ULONG)
    #define ISCSI_IP_Address_IpV6ScopeId_ID 5

    // Text address, either a DNS address or dotted address
    WCHAR TextAddress[256 + 1];
    #define ISCSI_IP_Address_TextAddress_ID 6

} ISCSI_IP_Address, *PISCSI_IP_Address;

// ISCSI_TargetPortal - ISCSI_TargetPortal
// ISCSI target portal
#define ISCSI_TargetPortalGuid \
    { 0xde5051a7,0xbf27,0x48f1, { 0xbd,0x12,0x07,0xca,0xde,0x92,0xae,0xfd } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_TargetPortal_GUID, \
            0xde5051a7,0xbf27,0x48f1,0xbd,0x12,0x07,0xca,0xde,0x92,0xae,0xfd);
#endif


typedef struct _ISCSI_TargetPortal
{
    // Network Address
    ISCSI_IP_Address Address;
    #define ISCSI_TargetPortal_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_TargetPortal_Address_ID 1

    // Reserved
    ULONG Reserved;
    #define ISCSI_TargetPortal_Reserved_SIZE sizeof(ULONG)
    #define ISCSI_TargetPortal_Reserved_ID 2

    // Socket number
    USHORT Socket;
    #define ISCSI_TargetPortal_Socket_SIZE sizeof(USHORT)
    #define ISCSI_TargetPortal_Socket_ID 3

} ISCSI_TargetPortal, *PISCSI_TargetPortal;

#define ISCSI_TargetPortal_SIZE (FIELD_OFFSET(ISCSI_TargetPortal, Socket) + ISCSI_TargetPortal_Socket_SIZE)

// ISCSI_TargetPortalGroup - ISCSI_TargetPortalGroup
// iSCSI target portal group
#define ISCSI_TargetPortalGroupGuid \
    { 0x3081f2a5,0x95f5,0x4d2a, { 0x81,0x3d,0xee,0x59,0x86,0x4c,0x6f,0xc5 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_TargetPortalGroup_GUID, \
            0x3081f2a5,0x95f5,0x4d2a,0x81,0x3d,0xee,0x59,0x86,0x4c,0x6f,0xc5);
#endif


typedef struct _ISCSI_TargetPortalGroup
{
    // Number of portals in group
    ULONG PortalCount;
    #define ISCSI_TargetPortalGroup_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_TargetPortalGroup_PortalCount_ID 1

    // Target portals in group
    ISCSI_TargetPortal Portals[1];
    #define ISCSI_TargetPortalGroup_Portals_ID 2

} ISCSI_TargetPortalGroup, *PISCSI_TargetPortalGroup;

// ISCSI_LoginOptions - ISCSI_LoginOptions
// These are options that can be used for logging into a target

#ifndef _ISCSI_ISCSIDSC_
typedef enum
{
   ISCSI_DIGEST_TYPE_NONE = 0,
   ISCSI_DIGEST_TYPE_CRC32C = 1
} ISCSI_DIGEST_TYPES, *PISCSI_DIGEST_TYPES;

typedef enum
{
   ISCSI_NO_AUTH_TYPE = 0,
   ISCSI_CHAP_AUTH_TYPE = 1,
   ISCSI_MUTUAL_CHAP_AUTH_TYPE = 2 
} ISCSI_AUTH_TYPES, *PISCSI_AUTH_TYPES;
#endif

#define ISCSI_LoginOptionsGuid \
    { 0x3011a7bd,0x0491,0x478e, { 0x8c,0x79,0x3c,0x76,0x42,0x4d,0x05,0xe2 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_LoginOptions_GUID, \
            0x3011a7bd,0x0491,0x478e,0x8c,0x79,0x3c,0x76,0x42,0x4d,0x05,0xe2);
#endif


typedef struct _ISCSI_LoginOptions
{

//
// Bit flags for InformationSpecifies
//
#define ISCSI_LOGIN_OPTIONS_HEADER_DIGEST               0x00000001
#define ISCSI_LOGIN_OPTIONS_DATA_DIGEST                 0x00000002
#define ISCSI_LOGIN_OPTIONS_MAXIMUM_CONNECTIONS         0x00000004
#define ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_WAIT         0x00000008
#define ISCSI_LOGIN_OPTIONS_DEFAULT_TIME_2_RETAIN       0x00000010
#define ISCSI_LOGIN_OPTIONS_USERNAME                    0x00000020
#define ISCSI_LOGIN_OPTIONS_PASSWORD                    0x00000040
#define ISCSI_LOGIN_OPTIONS_AUTH_TYPE                   0x00000080


    // Bit flags that specify which login option values are specified
    ULONG InformationSpecified;
    #define ISCSI_LoginOptions_InformationSpecified_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_InformationSpecified_ID 1

    // cyclic integrity checksums that can be negotiated for the header digests
    ULONG HeaderDigest;
    #define ISCSI_LoginOptions_HeaderDigest_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_HeaderDigest_ID 2

    // cyclic integrity checksums that can be negotiated for the header digests
    ULONG DataDigest;
    #define ISCSI_LoginOptions_DataDigest_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DataDigest_ID 3

    // Maximum number of connections, 0 implies no limit
    ULONG MaximumConnections;
    #define ISCSI_LoginOptions_MaximumConnections_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_MaximumConnections_ID 4

    // The initiator and target negotiate the minimum time, in seconds, to wait before attempting an explicit/implicit logout or active task reassignment after an unexpected connection termination or a connection reset.
    ULONG DefaultTime2Wait;
    #define ISCSI_LoginOptions_DefaultTime2Wait_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DefaultTime2Wait_ID 5

    //  The initiator and target negotiate the maximum time, in seconds after an initial wait (Time2Wait), before which an explicit/implicit connection Logout or active task reassignment is still possible after an unexpected connection termination or a connection reset.
    ULONG DefaultTime2Retain;
    #define ISCSI_LoginOptions_DefaultTime2Retain_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_DefaultTime2Retain_ID 6


//
// bit flags for ISCSI_LOGIN_FLAGS
//
#ifndef _ISCSI_ISCSIDSC_
#define ISCSI_LOGIN_FLAGS ULONG

#define ISCSI_LOGIN_FLAG_REQUIRE_IPSEC                0x00000001
#define ISCSI_LOGIN_FLAG_MULTIPATH_ENABLED            0x00000002
#define ISCSI_LOGIN_FLAG_RESERVED1                    0x00000004
#define ISCSI_LOGIN_FLAG_ALLOW_PORTAL_HOPPING         0x00000008
#define ISCSI_LOGIN_FLAG_USE_RADIUS_RESPONSE          0x00000010
#define ISCSI_LOGIN_FLAG_USE_RADIUS_VERIFICATION          0x00000020

#endif

    // Flags that affect how login occurs
    ULONG LoginFlags;
    #define ISCSI_LoginOptions_LoginFlags_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_LoginFlags_ID 7

    // Authentication method specified for login
    ULONG AuthType;
    #define ISCSI_LoginOptions_AuthType_SIZE sizeof(ULONG)
    #define ISCSI_LoginOptions_AuthType_ID 8

} ISCSI_LoginOptions, *PISCSI_LoginOptions;

#define ISCSI_LoginOptions_SIZE (FIELD_OFFSET(ISCSI_LoginOptions, AuthType) + ISCSI_LoginOptions_AuthType_SIZE)

// ISCSI_LUNList - ISCSI_LUNList
// This class describes a mapping from a an OS LUN to target device LUN
#define ISCSI_LUNListGuid \
    { 0x994ff278,0x3512,0x4d9b, { 0xa2,0x41,0x54,0xce,0xf4,0x5f,0x5a,0x25 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_LUNList_GUID, \
            0x994ff278,0x3512,0x4d9b,0xa2,0x41,0x54,0xce,0xf4,0x5f,0x5a,0x25);
#endif


typedef struct _ISCSI_LUNList
{
    // Target LUN
    ULONGLONG TargetLUN;
    #define ISCSI_LUNList_TargetLUN_SIZE sizeof(ULONGLONG)
    #define ISCSI_LUNList_TargetLUN_ID 1

    // OS Scsi bus number target is mapped to
    ULONG OSLUN;
    #define ISCSI_LUNList_OSLUN_SIZE sizeof(ULONG)
    #define ISCSI_LUNList_OSLUN_ID 2

    // Reserved
    ULONG Reserved;
    #define ISCSI_LUNList_Reserved_SIZE sizeof(ULONG)
    #define ISCSI_LUNList_Reserved_ID 3

} ISCSI_LUNList, *PISCSI_LUNList;

#define ISCSI_LUNList_SIZE (FIELD_OFFSET(ISCSI_LUNList, Reserved) + ISCSI_LUNList_Reserved_SIZE)

// ISCSI_TargetMapping - ISCSI_TargetMapping
// This class describes a mapping from a target LUN to a Windows port driver LUN
#define ISCSI_TargetMappingGuid \
    { 0x21a28820,0x3c4c,0x4944, { 0xac,0x4f,0xda,0x7f,0xeb,0xa2,0x11,0x68 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_TargetMapping_GUID, \
            0x21a28820,0x3c4c,0x4944,0xac,0x4f,0xda,0x7f,0xeb,0xa2,0x11,0x68);
#endif


typedef struct _ISCSI_TargetMapping
{
    // OS Scsi bus number target is mapped to. If 0xffffffff then any value can be picked by the miniport.
    ULONG OSBus;
    #define ISCSI_TargetMapping_OSBus_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_OSBus_ID 1

    // OS Scsi Target number target is mapped to. If 0xffffffff then any value can be picked by the miniport.
    ULONG OSTarget;
    #define ISCSI_TargetMapping_OSTarget_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_OSTarget_ID 2

    // Unique Session ID for the target mapping
    ULONGLONG UniqueSessionId;
    #define ISCSI_TargetMapping_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ISCSI_TargetMapping_UniqueSessionId_ID 3

    // Count of LUNs mapped for this target
    ULONG LUNCount;
    #define ISCSI_TargetMapping_LUNCount_SIZE sizeof(ULONG)
    #define ISCSI_TargetMapping_LUNCount_ID 4

    // Target Name
    WCHAR TargetName[223 + 1];
    #define ISCSI_TargetMapping_TargetName_ID 5

    // TRUE if session created from a persistent login
    BOOLEAN FromPersistentLogin;
    #define ISCSI_TargetMapping_FromPersistentLogin_SIZE sizeof(BOOLEAN)
    #define ISCSI_TargetMapping_FromPersistentLogin_ID 6

    // Reserved
    ULONGLONG Reserved;
    #define ISCSI_TargetMapping_Reserved_SIZE sizeof(ULONGLONG)
    #define ISCSI_TargetMapping_Reserved_ID 7

    // List of LUNs mapped for this target
    ISCSI_LUNList LUNList[1];
    #define ISCSI_TargetMapping_LUNList_ID 8

} ISCSI_TargetMapping, *PISCSI_TargetMapping;

#endif
