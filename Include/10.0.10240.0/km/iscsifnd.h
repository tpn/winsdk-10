#ifndef _iscsifnd_h_
#define _iscsifnd_h_

// ISCSI_DiscoveredTargetPortal - ISCSI_DiscoveredTargetPortal
// iSCSI target portal


//***************************************************************************
//
//  iscsifnd.h
// 
//  Module: iScsi Discovery api
//
//  Purpose: Header defining interface between user mode discovery 
//           engine and HBA driver miniport.
//
//  Copyright (c) 2001 Microsoft Corporation
//
//***************************************************************************

#include <iscsidef.h>


#define ISCSI_DiscoveredTargetPortalGuid \
    { 0xfa218c5d,0xb306,0x4d5d, { 0xb2,0xdb,0x6b,0xba,0x05,0x0f,0xd8,0xfa } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTargetPortal_GUID, \
            0xfa218c5d,0xb306,0x4d5d,0xb2,0xdb,0x6b,0xba,0x05,0x0f,0xd8,0xfa);
#endif


typedef struct _ISCSI_DiscoveredTargetPortal
{
    // Socket number
    USHORT Socket;
    #define ISCSI_DiscoveredTargetPortal_Socket_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortal_Socket_ID 1

    // Network Address
    ISCSI_IP_Address Address;
    #define ISCSI_DiscoveredTargetPortal_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_DiscoveredTargetPortal_Address_ID 2

    // Portal Symbolic Name
    WCHAR SymbolicName[256 + 1];
    #define ISCSI_DiscoveredTargetPortal_SymbolicName_ID 3

} ISCSI_DiscoveredTargetPortal, *PISCSI_DiscoveredTargetPortal;

// ISCSI_DiscoveredTargetPortalGroup - ISCSI_DiscoveredTargetPortalGroup
// iSCSI target portal group
#define ISCSI_DiscoveredTargetPortalGroupGuid \
    { 0x28c3af2c,0xa453,0x4a3d, { 0x8e,0x10,0x9e,0x09,0xd8,0x9e,0xf3,0x33 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTargetPortalGroup_GUID, \
            0x28c3af2c,0xa453,0x4a3d,0x8e,0x10,0x9e,0x09,0xd8,0x9e,0xf3,0x33);
#endif


typedef struct _ISCSI_DiscoveredTargetPortalGroup
{
    // Number of portals in group
    ULONG PortalCount;
    #define ISCSI_DiscoveredTargetPortalGroup_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortalGroup_PortalCount_ID 1

    // Target portals in group. NOTE: this field is a variable length array.
    ISCSI_DiscoveredTargetPortal Portals[1];
    #define ISCSI_DiscoveredTargetPortalGroup_Portals_ID 2

} ISCSI_DiscoveredTargetPortalGroup, *PISCSI_DiscoveredTargetPortalGroup;

// ISCSI_DiscoveredTarget - ISCSI_DiscoveredTarget
// ISCSI discovered target information
#define ISCSI_DiscoveredTargetGuid \
    { 0x08cdf465,0xe18d,0x42fe, { 0x8e,0xb2,0x56,0x8c,0xa9,0x6a,0x98,0x56 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTarget_GUID, \
            0x08cdf465,0xe18d,0x42fe,0x8e,0xb2,0x56,0x8c,0xa9,0x6a,0x98,0x56);
#endif


typedef struct _ISCSI_DiscoveredTarget
{
    // Number of portal groups for target
    ULONG TargetPortalGroupCount;
    #define ISCSI_DiscoveredTarget_TargetPortalGroupCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTarget_TargetPortalGroupCount_ID 1

    // Target Name
    WCHAR TargetName[223 + 1];
    #define ISCSI_DiscoveredTarget_TargetName_ID 2

    // Target Alias
    WCHAR TargetAlias[255 + 1];
    #define ISCSI_DiscoveredTarget_TargetAlias_ID 3

    // Portal Groups available for connection to target. NOTE: this field is a variable length array
    ISCSI_DiscoveredTargetPortalGroup TargetDiscoveredPortalGroups[1];
    #define ISCSI_DiscoveredTarget_TargetDiscoveredPortalGroups_ID 4

} ISCSI_DiscoveredTarget, *PISCSI_DiscoveredTarget;

// ISCSI_DiscoveredTargetPortal2 - ISCSI_DiscoveredTargetPortal2
// iSCSI target portal
#define ISCSI_DiscoveredTargetPortal2Guid \
    { 0xe95162a2,0x8ee5,0x40f1, { 0xb0,0x5d,0xa5,0x32,0x1a,0x30,0xd0,0x3d } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTargetPortal2_GUID, \
            0xe95162a2,0x8ee5,0x40f1,0xb0,0x5d,0xa5,0x32,0x1a,0x30,0xd0,0x3d);
#endif


typedef struct _ISCSI_DiscoveredTargetPortal2
{
    // Socket number
    USHORT Socket;
    #define ISCSI_DiscoveredTargetPortal2_Socket_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortal2_Socket_ID 1

    // Network Address
    ISCSI_IP_Address Address;
    #define ISCSI_DiscoveredTargetPortal2_Address_SIZE sizeof(ISCSI_IP_Address)
    #define ISCSI_DiscoveredTargetPortal2_Address_ID 2

    // Security capabilities bitmap as specified in iSNS spec
    ULONG SecurityBitmap;
    #define ISCSI_DiscoveredTargetPortal2_SecurityBitmap_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortal2_SecurityBitmap_ID 3

    // Number of bytes contained in key associated with portal address
    ULONG KeySize;
    #define ISCSI_DiscoveredTargetPortal2_KeySize_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortal2_KeySize_ID 4

    // Key associated with portal address. NOTE: This field is a variable length array, the field that follows this field starts immediately after the end of this field subject to appropriate padding. All fields after this are commented out in the header.
    UCHAR Key[1];
    #define ISCSI_DiscoveredTargetPortal2_Key_ID 5

    // Portal Symbolic Name
//  WCHAR SymbolicName[256 + 1];
    #define ISCSI_DiscoveredTargetPortal2_SymbolicName_ID 6

} ISCSI_DiscoveredTargetPortal2, *PISCSI_DiscoveredTargetPortal2;

// ISCSI_DiscoveredTargetPortalGroup2 - ISCSI_DiscoveredTargetPortalGroup2
// iSCSI target portal group
#define ISCSI_DiscoveredTargetPortalGroup2Guid \
    { 0x1732b30d,0xee08,0x4de7, { 0xbe,0xd1,0xde,0x16,0x5f,0x1d,0x7b,0x45 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTargetPortalGroup2_GUID, \
            0x1732b30d,0xee08,0x4de7,0xbe,0xd1,0xde,0x16,0x5f,0x1d,0x7b,0x45);
#endif


typedef struct _ISCSI_DiscoveredTargetPortalGroup2
{
    // Number of portals in group
    ULONG PortalCount;
    #define ISCSI_DiscoveredTargetPortalGroup2_PortalCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTargetPortalGroup2_PortalCount_ID 1

    // portal group tag
    USHORT Tag;
    #define ISCSI_DiscoveredTargetPortalGroup2_Tag_SIZE sizeof(USHORT)
    #define ISCSI_DiscoveredTargetPortalGroup2_Tag_ID 2

    // Target portals in group. NOTE: This field is a variable length array.
    ISCSI_DiscoveredTargetPortal2 Portals[1];
    #define ISCSI_DiscoveredTargetPortalGroup2_Portals_ID 3

} ISCSI_DiscoveredTargetPortalGroup2, *PISCSI_DiscoveredTargetPortalGroup2;

// ISCSI_DiscoveredTarget2 - ISCSI_DiscoveredTarget2
// ISCSI discovered target information
#define ISCSI_DiscoveredTarget2Guid \
    { 0xa71bcde9,0x5433,0x4b36, { 0xb9,0xc1,0x07,0x86,0x8e,0x18,0xb4,0x8a } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(ISCSI_DiscoveredTarget2_GUID, \
            0xa71bcde9,0x5433,0x4b36,0xb9,0xc1,0x07,0x86,0x8e,0x18,0xb4,0x8a);
#endif


typedef struct _ISCSI_DiscoveredTarget2
{
    // Number of portal groups for target
    ULONG TargetPortalGroupCount;
    #define ISCSI_DiscoveredTarget2_TargetPortalGroupCount_SIZE sizeof(ULONG)
    #define ISCSI_DiscoveredTarget2_TargetPortalGroupCount_ID 1

    // Target Name
    WCHAR TargetName[223 + 1];
    #define ISCSI_DiscoveredTarget2_TargetName_ID 2

    // Target Alias
    WCHAR TargetAlias[255 + 1];
    #define ISCSI_DiscoveredTarget2_TargetAlias_ID 3

    // Portal Groups available for connection to target. NOTE: This field is a variable length array.
    ISCSI_DiscoveredTargetPortalGroup2 TargetDiscoveredPortalGroups[1];
    #define ISCSI_DiscoveredTarget2_TargetDiscoveredPortalGroups_ID 4

} ISCSI_DiscoveredTarget2, *PISCSI_DiscoveredTarget2;

// MSiSCSI_DiscoveryOperations - MSiSCSI_DiscoveryOperations
// Discovery operations

//
// This class is required
//
// This class exposes the configuration capabilities if the adapter is able to
// perform target discovery. An adapter would need to support target discovery
// if it is ever placed on a separate network from the PC NIC.
//
// This classes uses PDO instance names with a single instance
//

#define MSiSCSI_DiscoveryOperationsGuid \
    { 0x556bc0b0,0x0fb5,0x40f2, { 0x92,0x55,0xb7,0xd9,0xa6,0x69,0xda,0xec } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSiSCSI_DiscoveryOperations_GUID, \
            0x556bc0b0,0x0fb5,0x40f2,0x92,0x55,0xb7,0xd9,0xa6,0x69,0xda,0xec);
#endif

//
// Method id definitions for MSiSCSI_DiscoveryOperations
#define ReportDiscoveredTargets     10
typedef struct _ReportDiscoveredTargets_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ReportDiscoveredTargets_OUT_Status_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets_OUT_Status_ID 1

    // Number of targets discovered
    ULONG TargetCount;
    #define ReportDiscoveredTargets_OUT_TargetCount_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets_OUT_TargetCount_ID 2

    // Targets that have been discovered. NOTE: This field is a variabale length array.
    ISCSI_DiscoveredTarget Targets[1];
    #define ReportDiscoveredTargets_OUT_Targets_ID 3

} ReportDiscoveredTargets_OUT, *PReportDiscoveredTargets_OUT;

#define ReportDiscoveredTargets2     11
typedef struct _ReportDiscoveredTargets2_OUT
{
    // Status code resulting from operation
    ULONG Status;
    #define ReportDiscoveredTargets2_OUT_Status_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets2_OUT_Status_ID 1

    // Number of targets discovered
    ULONG TargetCount;
    #define ReportDiscoveredTargets2_OUT_TargetCount_SIZE sizeof(ULONG)
    #define ReportDiscoveredTargets2_OUT_TargetCount_ID 2

    // Targets that have been discovered. NOTE: This field is a variabale length array.
    ISCSI_DiscoveredTarget2 Targets[1];
    #define ReportDiscoveredTargets2_OUT_Targets_ID 3

} ReportDiscoveredTargets2_OUT, *PReportDiscoveredTargets2_OUT;


#endif
