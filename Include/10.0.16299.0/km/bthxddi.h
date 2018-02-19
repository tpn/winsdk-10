/****************************************************************************

Copyright (c) Microsoft Corporation.  All Rights Reserved

Module Name:

    BthXDDI.h

Abstract:

    Public IOCTL codes and structure common to BTHMINI and its Bluetooth 
    extensible transport driver.
    
Environment:

    Kernel mode only

Revision History:

****************************************************************************/
#ifndef __BTHXDDI_H__
#define __BTHXDDI_H__



#if (NTDDI_VERSION >= NTDDI_WIN8)

//
// DDI Version definition
//
#define BTHX_DDI_VERSION_1  0x00000001      // Initial release version


//
// HCI packet types
//
typedef enum _BTHX_HCI_PACKET_TYPE {
    HciPacketCommand    = 0x01,
    HciPacketAclData    = 0x02,
    HciPacketEvent      = 0x04
} BTHX_HCI_PACKET_TYPE;


//
// IOCTL definitions. 
//
#define BTHX_IOCTL_BASE      0

#define BTHX_CTL(id)  CTL_CODE(FILE_DEVICE_BLUETOOTH,  \
                                     (id), \
                                     METHOD_NEITHER,  \
                                     FILE_ANY_ACCESS)

//
// kernel-level (internal) IOCTLs 
//

#define IOCTL_BTHX_GET_VERSION              BTHX_CTL(BTHX_IOCTL_BASE+0x100)
#define IOCTL_BTHX_SET_VERSION              BTHX_CTL(BTHX_IOCTL_BASE+0x101)

#define IOCTL_BTHX_QUERY_CAPABILITIES       BTHX_CTL(BTHX_IOCTL_BASE+0x102)

#define IOCTL_BTHX_WRITE_HCI                BTHX_CTL(BTHX_IOCTL_BASE+0x103)
#define IOCTL_BTHX_READ_HCI                 BTHX_CTL(BTHX_IOCTL_BASE+0x104)


//
// BTH XDDI Interface Version Structure
// 
typedef struct _BTHX_VERSION {
    ULONG Version;
} BTHX_VERSION, *PBTHX_VERSION;    

//
// Initialize the version data
//
__declspec(selectany)
BTHX_VERSION Microsoft_BTHX_DDI_Version = { BTHX_DDI_VERSION_1 };

//
// Bluetooth SCO support option.
//
typedef enum _BTHX_SCO_SUPPORT {
    ScoSupportNone          = 0,
    ScoSupportHCI           = 1,
    ScoSupportHCIBypass     = 2,
} BTHX_SCO_SUPPORT, *PBTHX_SCO_SUPPORT;

//
// Bluetooth transport driver's capabilities.
//
typedef struct _BTHX_CAPABILITIES {
    ULONG               MaxAclTransferInSize;   // [out] Max ACL IN transfer.
    BTHX_SCO_SUPPORT    ScoSupport;             // [out] Type of SCO support
    ULONG               MaxScoChannels;         // [out] Max SCO channels supported.
    BOOLEAN             IsDeviceIdleCapable;    // [out] TRUE if device can support idle/sleep state.
    BOOLEAN             IsDeviceWakeCapable;    // [out] TRUE if device can support remote wake.
} BTHX_CAPABILITIES, *PBTHX_CAPABILITIES;


#include <PSHPACK1.H>

// 
// READ/WRITE context 
//
typedef struct _BTHX_HCI_READ_WRITE_CONTEXT {
    ULONG   DataLen;    // Size of Data
    UCHAR   Type;       // Packet Type
    _Field_size_bytes_(DataLen) UCHAR   Data[1];    // Actual data
} BTHX_HCI_READ_WRITE_CONTEXT, *PBTHX_HCI_READ_WRITE_CONTEXT;

#include <POPPACK.H>


#endif  // NTDDI_VERSION

#endif  // __BTHXDDI_H__
