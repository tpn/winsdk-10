#ifndef _npivwmi_h_
#define _npivwmi_h_

// MSFC_FibrePortNPIVMethods - MSFC_FibrePortNPIVMethods


//***************************************************************************
//
// This class allows System Center Virtual Machine Manager to create virtual
// ports for quickly migrating the VHD files associated with a VM from one
// host to another.
//
//***************************************************************************


#define MSFC_FibrePortNPIVMethodsGuid \
    { 0x8d49ef4c,0xc172,0x45d8, { 0xa3,0x03,0xc5,0xfb,0xc5,0x60,0x1f,0x37 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_FibrePortNPIVMethods_GUID, \
            0x8d49ef4c,0xc172,0x45d8,0xa3,0x03,0xc5,0xfb,0xc5,0x60,0x1f,0x37);
#endif

//
// Method id definitions for MSFC_FibrePortNPIVMethods
#define CreateVirtualPort     1
typedef struct _CreateVirtualPort_IN
{
    // 
    UCHAR WWPN[8];
    #define CreateVirtualPort_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPort_IN_WWPN_ID 2

    // 
    UCHAR WWNN[8];
    #define CreateVirtualPort_IN_WWNN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPort_IN_WWNN_ID 3

    // 
    UCHAR Tag[16];
    #define CreateVirtualPort_IN_Tag_SIZE sizeof(UCHAR[16])
    #define CreateVirtualPort_IN_Tag_ID 4

    // 
    USHORT VirtualName[64];
    #define CreateVirtualPort_IN_VirtualName_SIZE sizeof(USHORT[64])
    #define CreateVirtualPort_IN_VirtualName_ID 5

} CreateVirtualPort_IN, *PCreateVirtualPort_IN;

#define CreateVirtualPort_IN_SIZE (FIELD_OFFSET(CreateVirtualPort_IN, VirtualName) + CreateVirtualPort_IN_VirtualName_SIZE)

typedef struct _CreateVirtualPort_OUT
{
    // 
    ULONG Status;
    #define CreateVirtualPort_OUT_Status_SIZE sizeof(ULONG)
    #define CreateVirtualPort_OUT_Status_ID 1

} CreateVirtualPort_OUT, *PCreateVirtualPort_OUT;

#define CreateVirtualPort_OUT_SIZE (FIELD_OFFSET(CreateVirtualPort_OUT, Status) + CreateVirtualPort_OUT_Status_SIZE)

#define RemoveVirtualPort     2
typedef struct _RemoveVirtualPort_IN
{
    // 
    UCHAR WWPN[8];
    #define RemoveVirtualPort_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define RemoveVirtualPort_IN_WWPN_ID 2

} RemoveVirtualPort_IN, *PRemoveVirtualPort_IN;

#define RemoveVirtualPort_IN_SIZE (FIELD_OFFSET(RemoveVirtualPort_IN, WWPN) + RemoveVirtualPort_IN_WWPN_SIZE)

typedef struct _RemoveVirtualPort_OUT
{
    // 
    ULONG Status;
    #define RemoveVirtualPort_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveVirtualPort_OUT_Status_ID 1

} RemoveVirtualPort_OUT, *PRemoveVirtualPort_OUT;

#define RemoveVirtualPort_OUT_SIZE (FIELD_OFFSET(RemoveVirtualPort_OUT, Status) + RemoveVirtualPort_OUT_Status_SIZE)


// MSFC_DH_Chap_Parameters - MSFC_DH_Chap_Parameters


//***************************************************************************
//
// This class defines the parameters used to set up DH-CHAP.
//
//***************************************************************************


#define MSFC_DH_Chap_ParametersGuid \
    { 0x8c6bc95b,0xe363,0x418d, { 0xb8,0x6b,0x68,0x6f,0x49,0xc2,0x66,0x08 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_DH_Chap_Parameters_GUID, \
            0x8c6bc95b,0xe363,0x418d,0xb8,0x6b,0x68,0x6f,0x49,0xc2,0x66,0x08);
#endif


typedef struct _MSFC_DH_Chap_Parameters
{
    // 
    ULONG SharedSecretLength;
    #define MSFC_DH_Chap_Parameters_SharedSecretLength_SIZE sizeof(ULONG)
    #define MSFC_DH_Chap_Parameters_SharedSecretLength_ID 1

    // 
    UCHAR SecretEncoding;
    #define MSFC_DH_Chap_Parameters_SecretEncoding_SIZE sizeof(UCHAR)
    #define MSFC_DH_Chap_Parameters_SecretEncoding_ID 2

    // 
    UCHAR SharedSecret[1];
    #define MSFC_DH_Chap_Parameters_SharedSecret_ID 3

} MSFC_DH_Chap_Parameters, *PMSFC_DH_Chap_Parameters;

// MSFC_NPIVCapabilities - MSFC_NPIVCapabilities


//***************************************************************************
//
// This class advertizes the ability to use DH-CHAP with physical or virtual
// ports.  If these values are false, Hyper-V will not attempt to use DH-CHAP.
//
//***************************************************************************


#define MSFC_NPIVCapabilitiesGuid \
    { 0x57d6ff16,0xdb8a,0x4205, { 0xbd,0xc0,0xb6,0x90,0xe9,0xa2,0xf8,0x62 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_NPIVCapabilities_GUID, \
            0x57d6ff16,0xdb8a,0x4205,0xbd,0xc0,0xb6,0x90,0xe9,0xa2,0xf8,0x62);
#endif


typedef struct _MSFC_NPIVCapabilities
{
    // 
    BOOLEAN DhChapAvailableOnPhysicalPort;
    #define MSFC_NPIVCapabilities_DhChapAvailableOnPhysicalPort_SIZE sizeof(BOOLEAN)
    #define MSFC_NPIVCapabilities_DhChapAvailableOnPhysicalPort_ID 1

    // 
    BOOLEAN DhChapAvailableOnVirtualPorts;
    #define MSFC_NPIVCapabilities_DhChapAvailableOnVirtualPorts_SIZE sizeof(BOOLEAN)
    #define MSFC_NPIVCapabilities_DhChapAvailableOnVirtualPorts_ID 2

    // 
    USHORT MaxVirtualPortCount;
    #define MSFC_NPIVCapabilities_MaxVirtualPortCount_SIZE sizeof(USHORT)
    #define MSFC_NPIVCapabilities_MaxVirtualPortCount_ID 3

} MSFC_NPIVCapabilities, *PMSFC_NPIVCapabilities;

#define MSFC_NPIVCapabilities_SIZE (FIELD_OFFSET(MSFC_NPIVCapabilities, MaxVirtualPortCount) + MSFC_NPIVCapabilities_MaxVirtualPortCount_SIZE)

// MSFC_FibrePortNPIVMethodsEx - MSFC_FibrePortNPIVMethodsEx


//***************************************************************************
//
// This class defines methods which allow Hyper-V to create, delete and
// manipulate virtual ports for use on behalf of virtual machines.
//
//***************************************************************************


#define MSFC_FibrePortNPIVMethodsExGuid \
    { 0x4135419a,0x2ebe,0x472b, { 0xa8,0xc8,0x84,0x16,0xca,0x2a,0xe1,0xd8 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_FibrePortNPIVMethodsEx_GUID, \
            0x4135419a,0x2ebe,0x472b,0xa8,0xc8,0x84,0x16,0xca,0x2a,0xe1,0xd8);
#endif

//
// Method id definitions for MSFC_FibrePortNPIVMethodsEx
#define SetChapForPhysicalPort     1
typedef struct _SetChapForPhysicalPort_IN
{
    // 
    MSFC_DH_Chap_Parameters CHAP;
    #define SetChapForPhysicalPort_IN_CHAP_SIZE sizeof(MSFC_DH_Chap_Parameters)
    #define SetChapForPhysicalPort_IN_CHAP_ID 2

} SetChapForPhysicalPort_IN, *PSetChapForPhysicalPort_IN;

#define SetChapForPhysicalPort_IN_SIZE (FIELD_OFFSET(SetChapForPhysicalPort_IN, CHAP) + SetChapForPhysicalPort_IN_CHAP_SIZE)

typedef struct _SetChapForPhysicalPort_OUT
{
    // 
    ULONG Status;
    #define SetChapForPhysicalPort_OUT_Status_SIZE sizeof(ULONG)
    #define SetChapForPhysicalPort_OUT_Status_ID 1

} SetChapForPhysicalPort_OUT, *PSetChapForPhysicalPort_OUT;

#define SetChapForPhysicalPort_OUT_SIZE (FIELD_OFFSET(SetChapForPhysicalPort_OUT, Status) + SetChapForPhysicalPort_OUT_Status_SIZE)

#define RemoveChapForPhysicalPort     2
typedef struct _RemoveChapForPhysicalPort_OUT
{
    // 
    ULONG Status;
    #define RemoveChapForPhysicalPort_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveChapForPhysicalPort_OUT_Status_ID 1

} RemoveChapForPhysicalPort_OUT, *PRemoveChapForPhysicalPort_OUT;

#define RemoveChapForPhysicalPort_OUT_SIZE (FIELD_OFFSET(RemoveChapForPhysicalPort_OUT, Status) + RemoveChapForPhysicalPort_OUT_Status_SIZE)

#define CreateVirtualPortEx     3
typedef struct _CreateVirtualPortEx_IN
{
    // 
    UCHAR WWPN[8];
    #define CreateVirtualPortEx_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPortEx_IN_WWPN_ID 2

    // 
    UCHAR WWNN[8];
    #define CreateVirtualPortEx_IN_WWNN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPortEx_IN_WWNN_ID 3

    // 
    UCHAR Tag[16];
    #define CreateVirtualPortEx_IN_Tag_SIZE sizeof(UCHAR[16])
    #define CreateVirtualPortEx_IN_Tag_ID 4

    // 
    USHORT VirtualName[64];
    #define CreateVirtualPortEx_IN_VirtualName_SIZE sizeof(USHORT[64])
    #define CreateVirtualPortEx_IN_VirtualName_ID 5

} CreateVirtualPortEx_IN, *PCreateVirtualPortEx_IN;

#define CreateVirtualPortEx_IN_SIZE (FIELD_OFFSET(CreateVirtualPortEx_IN, VirtualName) + CreateVirtualPortEx_IN_VirtualName_SIZE)

typedef struct _CreateVirtualPortEx_OUT
{
    // 
    ULONG Status;
    #define CreateVirtualPortEx_OUT_Status_SIZE sizeof(ULONG)
    #define CreateVirtualPortEx_OUT_Status_ID 1

} CreateVirtualPortEx_OUT, *PCreateVirtualPortEx_OUT;

#define CreateVirtualPortEx_OUT_SIZE (FIELD_OFFSET(CreateVirtualPortEx_OUT, Status) + CreateVirtualPortEx_OUT_Status_SIZE)

#define CreateVirtualPortExUsingDHCHAP     4
typedef struct _CreateVirtualPortExUsingDHCHAP_IN
{
    // 
    UCHAR WWPN[8];
    #define CreateVirtualPortExUsingDHCHAP_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPortExUsingDHCHAP_IN_WWPN_ID 2

    // 
    UCHAR WWNN[8];
    #define CreateVirtualPortExUsingDHCHAP_IN_WWNN_SIZE sizeof(UCHAR[8])
    #define CreateVirtualPortExUsingDHCHAP_IN_WWNN_ID 3

    // 
    UCHAR Tag[16];
    #define CreateVirtualPortExUsingDHCHAP_IN_Tag_SIZE sizeof(UCHAR[16])
    #define CreateVirtualPortExUsingDHCHAP_IN_Tag_ID 4

    // 
    USHORT VirtualName[64];
    #define CreateVirtualPortExUsingDHCHAP_IN_VirtualName_SIZE sizeof(USHORT[64])
    #define CreateVirtualPortExUsingDHCHAP_IN_VirtualName_ID 5

    // 
    MSFC_DH_Chap_Parameters CHAP;
    #define CreateVirtualPortExUsingDHCHAP_IN_CHAP_SIZE sizeof(MSFC_DH_Chap_Parameters)
    #define CreateVirtualPortExUsingDHCHAP_IN_CHAP_ID 6

} CreateVirtualPortExUsingDHCHAP_IN, *PCreateVirtualPortExUsingDHCHAP_IN;

#define CreateVirtualPortExUsingDHCHAP_IN_SIZE (FIELD_OFFSET(CreateVirtualPortExUsingDHCHAP_IN, CHAP) + CreateVirtualPortExUsingDHCHAP_IN_CHAP_SIZE)

typedef struct _CreateVirtualPortExUsingDHCHAP_OUT
{
    // 
    ULONG Status;
    #define CreateVirtualPortExUsingDHCHAP_OUT_Status_SIZE sizeof(ULONG)
    #define CreateVirtualPortExUsingDHCHAP_OUT_Status_ID 1

} CreateVirtualPortExUsingDHCHAP_OUT, *PCreateVirtualPortExUsingDHCHAP_OUT;

#define CreateVirtualPortExUsingDHCHAP_OUT_SIZE (FIELD_OFFSET(CreateVirtualPortExUsingDHCHAP_OUT, Status) + CreateVirtualPortExUsingDHCHAP_OUT_Status_SIZE)

#define RemoveVirtualPortEx     5
typedef struct _RemoveVirtualPortEx_IN
{
    // 
    UCHAR WWPN[8];
    #define RemoveVirtualPortEx_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define RemoveVirtualPortEx_IN_WWPN_ID 2

} RemoveVirtualPortEx_IN, *PRemoveVirtualPortEx_IN;

#define RemoveVirtualPortEx_IN_SIZE (FIELD_OFFSET(RemoveVirtualPortEx_IN, WWPN) + RemoveVirtualPortEx_IN_WWPN_SIZE)

typedef struct _RemoveVirtualPortEx_OUT
{
    // 
    ULONG Status;
    #define RemoveVirtualPortEx_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveVirtualPortEx_OUT_Status_ID 1

} RemoveVirtualPortEx_OUT, *PRemoveVirtualPortEx_OUT;

#define RemoveVirtualPortEx_OUT_SIZE (FIELD_OFFSET(RemoveVirtualPortEx_OUT, Status) + RemoveVirtualPortEx_OUT_Status_SIZE)

#define RescanVirtualPort     6
typedef struct _RescanVirtualPort_IN
{
    // 
    UCHAR WWPN[8];
    #define RescanVirtualPort_IN_WWPN_SIZE sizeof(UCHAR[8])
    #define RescanVirtualPort_IN_WWPN_ID 2

} RescanVirtualPort_IN, *PRescanVirtualPort_IN;

#define RescanVirtualPort_IN_SIZE (FIELD_OFFSET(RescanVirtualPort_IN, WWPN) + RescanVirtualPort_IN_WWPN_SIZE)

typedef struct _RescanVirtualPort_OUT
{
    // 
    ULONG Status;
    #define RescanVirtualPort_OUT_Status_SIZE sizeof(ULONG)
    #define RescanVirtualPort_OUT_Status_ID 1

} RescanVirtualPort_OUT, *PRescanVirtualPort_OUT;

#define RescanVirtualPort_OUT_SIZE (FIELD_OFFSET(RescanVirtualPort_OUT, Status) + RescanVirtualPort_OUT_Status_SIZE)


// MSFC_VirtualFibrePortAttributes - MSFC_VirtualFibrePortAttributes
#define MSFC_VirtualFibrePortAttributesGuid \
    { 0x3574bc0b,0x6f5f,0x4baf, { 0xaf,0x67,0xc4,0x8c,0xc7,0x9f,0xe9,0x57 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_VirtualFibrePortAttributes_GUID, \
            0x3574bc0b,0x6f5f,0x4baf,0xaf,0x67,0xc4,0x8c,0xc7,0x9f,0xe9,0x57);
#endif


typedef struct _MSFC_VirtualFibrePortAttributes
{
    // 
    ULONG Status;
    #define MSFC_VirtualFibrePortAttributes_Status_SIZE sizeof(ULONG)
    #define MSFC_VirtualFibrePortAttributes_Status_ID 1

    // 
    ULONG FCId;
    #define MSFC_VirtualFibrePortAttributes_FCId_SIZE sizeof(ULONG)
    #define MSFC_VirtualFibrePortAttributes_FCId_ID 2

    // 
    USHORT VirtualName[64];
    #define MSFC_VirtualFibrePortAttributes_VirtualName_SIZE sizeof(USHORT[64])
    #define MSFC_VirtualFibrePortAttributes_VirtualName_ID 3

    // 
    UCHAR Tag[16];
    #define MSFC_VirtualFibrePortAttributes_Tag_SIZE sizeof(UCHAR[16])
    #define MSFC_VirtualFibrePortAttributes_Tag_ID 4

    // 
    UCHAR WWPN[8];
    #define MSFC_VirtualFibrePortAttributes_WWPN_SIZE sizeof(UCHAR[8])
    #define MSFC_VirtualFibrePortAttributes_WWPN_ID 5

    // 
    UCHAR WWNN[8];
    #define MSFC_VirtualFibrePortAttributes_WWNN_SIZE sizeof(UCHAR[8])
    #define MSFC_VirtualFibrePortAttributes_WWNN_ID 6

    // 
    UCHAR FabricWWN[8];
    #define MSFC_VirtualFibrePortAttributes_FabricWWN_SIZE sizeof(UCHAR[8])
    #define MSFC_VirtualFibrePortAttributes_FabricWWN_ID 7

} MSFC_VirtualFibrePortAttributes, *PMSFC_VirtualFibrePortAttributes;

#define MSFC_VirtualFibrePortAttributes_SIZE (FIELD_OFFSET(MSFC_VirtualFibrePortAttributes, FabricWWN) + MSFC_VirtualFibrePortAttributes_FabricWWN_SIZE)

// MSFC_FibrePortNPIVAttributes - MSFC_FibrePortNPIVAttributes
#define MSFC_FibrePortNPIVAttributesGuid \
    { 0x66902796,0x54f4,0x4e24, { 0xad,0x91,0x0a,0xb3,0xb1,0xad,0x65,0xaf } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_FibrePortNPIVAttributes_GUID, \
            0x66902796,0x54f4,0x4e24,0xad,0x91,0x0a,0xb3,0xb1,0xad,0x65,0xaf);
#endif


typedef struct _MSFC_FibrePortNPIVAttributes
{
    // 
    UCHAR WWPN[8];
    #define MSFC_FibrePortNPIVAttributes_WWPN_SIZE sizeof(UCHAR[8])
    #define MSFC_FibrePortNPIVAttributes_WWPN_ID 1

    // 
    UCHAR WWNN[8];
    #define MSFC_FibrePortNPIVAttributes_WWNN_SIZE sizeof(UCHAR[8])
    #define MSFC_FibrePortNPIVAttributes_WWNN_ID 2

    // 
    ULONG NumberVirtualPorts;
    #define MSFC_FibrePortNPIVAttributes_NumberVirtualPorts_SIZE sizeof(ULONG)
    #define MSFC_FibrePortNPIVAttributes_NumberVirtualPorts_ID 3

    // 
    MSFC_VirtualFibrePortAttributes VirtualPorts[1];
    #define MSFC_FibrePortNPIVAttributes_VirtualPorts_ID 4

} MSFC_FibrePortNPIVAttributes, *PMSFC_FibrePortNPIVAttributes;

// MSFC_NPIVLUNMappingInformation - MSFC_NPIVLUNMappingInformation
#define MSFC_NPIVLUNMappingInformationGuid \
    { 0x21763208,0xfeb5,0x49bc, { 0xa4,0xe6,0xf5,0x6f,0xdd,0x8c,0xcb,0xd4 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_NPIVLUNMappingInformation_GUID, \
            0x21763208,0xfeb5,0x49bc,0xa4,0xe6,0xf5,0x6f,0xdd,0x8c,0xcb,0xd4);
#endif


typedef struct _MSFC_NPIVLUNMappingInformation
{
    // 
    UCHAR WWPNVirtualPort[8];
    #define MSFC_NPIVLUNMappingInformation_WWPNVirtualPort_SIZE sizeof(UCHAR[8])
    #define MSFC_NPIVLUNMappingInformation_WWPNVirtualPort_ID 1

    // 
    UCHAR WWPNPhysicalPort[8];
    #define MSFC_NPIVLUNMappingInformation_WWPNPhysicalPort_SIZE sizeof(UCHAR[8])
    #define MSFC_NPIVLUNMappingInformation_WWPNPhysicalPort_ID 2

    // 
    UCHAR OSBus;
    #define MSFC_NPIVLUNMappingInformation_OSBus_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformation_OSBus_ID 3

    // 
    UCHAR OSTarget;
    #define MSFC_NPIVLUNMappingInformation_OSTarget_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformation_OSTarget_ID 4

    // 
    UCHAR OSLUN;
    #define MSFC_NPIVLUNMappingInformation_OSLUN_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformation_OSLUN_ID 5

} MSFC_NPIVLUNMappingInformation, *PMSFC_NPIVLUNMappingInformation;

#define MSFC_NPIVLUNMappingInformation_SIZE (FIELD_OFFSET(MSFC_NPIVLUNMappingInformation, OSLUN) + MSFC_NPIVLUNMappingInformation_OSLUN_SIZE)

// MSFC_NPIVLUNMappingInformationEx - MSFC_NPIVLUNMappingInformationEx


//***************************************************************************
//
// This class allows Hyper-V to identify the virtual port associated with a
// specific LUN.
//
//***************************************************************************


#define MSFC_NPIVLUNMappingInformationExGuid \
    { 0x684c1fef,0x3c76,0x4147, { 0xb2,0x14,0xe9,0xaa,0x06,0x1a,0x75,0x64 } }

#if ! (defined(MIDL_PASS))
DEFINE_GUID(MSFC_NPIVLUNMappingInformationEx_GUID, \
            0x684c1fef,0x3c76,0x4147,0xb2,0x14,0xe9,0xaa,0x06,0x1a,0x75,0x64);
#endif


typedef struct _MSFC_NPIVLUNMappingInformationEx
{
    // 
    UCHAR WWPNVirtualPort[8];
    #define MSFC_NPIVLUNMappingInformationEx_WWPNVirtualPort_SIZE sizeof(UCHAR[8])
    #define MSFC_NPIVLUNMappingInformationEx_WWPNVirtualPort_ID 1

    // 
    UCHAR WWPNPhysicalPort[8];
    #define MSFC_NPIVLUNMappingInformationEx_WWPNPhysicalPort_SIZE sizeof(UCHAR[8])
    #define MSFC_NPIVLUNMappingInformationEx_WWPNPhysicalPort_ID 2

    // 
    UCHAR PortNumber;
    #define MSFC_NPIVLUNMappingInformationEx_PortNumber_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformationEx_PortNumber_ID 3

    // 
    UCHAR OSBus;
    #define MSFC_NPIVLUNMappingInformationEx_OSBus_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformationEx_OSBus_ID 4

    // 
    UCHAR OSTarget;
    #define MSFC_NPIVLUNMappingInformationEx_OSTarget_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformationEx_OSTarget_ID 5

    // 
    UCHAR OSLUN;
    #define MSFC_NPIVLUNMappingInformationEx_OSLUN_SIZE sizeof(UCHAR)
    #define MSFC_NPIVLUNMappingInformationEx_OSLUN_ID 6

} MSFC_NPIVLUNMappingInformationEx, *PMSFC_NPIVLUNMappingInformationEx;

#define MSFC_NPIVLUNMappingInformationEx_SIZE (FIELD_OFFSET(MSFC_NPIVLUNMappingInformationEx, OSLUN) + MSFC_NPIVLUNMappingInformationEx_OSLUN_SIZE)

#endif
