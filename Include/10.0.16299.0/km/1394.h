/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    1394.h

Abstract:

    Definitions for 1394 drivers.

Environment:

    Kernel mode only

--*/

#ifndef _1394_H_
#define _1394_H_

#if (_MSC_VER >= 1020)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

#if(NTDDI_VERSION >= NTDDI_WINXP)

#define BUS1394_DDI_MAJOR_VERSION               3
#define BUS1394_DDI_MINOR_VERSION               0

#define BUS1394_CURRENT_DDI_VERSION             BUS1394_DDI_MAJOR_VERSION

#endif

//
// 1394 Additional NT DDK definitions.
//

#define RCODE                                   ULONG

#define BASE_DEVICE_NAME                        L"\\Device\\1394BUS"
#define BASE_SYMBOLIC_LINK_NAME                 L"\\DosDevices\\1394BUS"

//
// 1394 Node Address format.
//

typedef struct _NODE_ADDRESS {
    USHORT              NA_Node_Number:6;       // Bits 10-15
    USHORT              NA_Bus_Number:10;       // Bits 0-9
} NODE_ADDRESS, *PNODE_ADDRESS;

//
// 1394 Address Offset format (48 bit addressing).
//

typedef struct _ADDRESS_OFFSET {
    USHORT              Off_High;
    ULONG               Off_Low;
} ADDRESS_OFFSET, *PADDRESS_OFFSET;

//
// 1394 I/O Address format.
//

typedef struct _IO_ADDRESS {
    NODE_ADDRESS        IA_Destination_ID;
    ADDRESS_OFFSET      IA_Destination_Offset;
} IO_ADDRESS, *PIO_ADDRESS;

//
// 1394 Allocated Address Range format.
//

typedef struct _ADDRESS_RANGE {
    USHORT              AR_Off_High;
    USHORT              AR_Length;
    ULONG               AR_Off_Low;
} ADDRESS_RANGE, *PADDRESS_RANGE;

//
// 1394 Self ID packet format.
//

typedef struct _SELF_ID {
    ULONG               SID_Phys_ID:6;          // Byte 0 - Bits 0-5
    ULONG               SID_Packet_ID:2;        // Byte 0 - Bits 6-7
    ULONG               SID_Gap_Count:6;        // Byte 1 - Bits 0-5
    ULONG               SID_Link_Active:1;      // Byte 1 - Bit 6
    ULONG               SID_Zero:1;             // Byte 1 - Bit 7
    ULONG               SID_Power_Class:3;      // Byte 2 - Bits 0-2
    ULONG               SID_Contender:1;        // Byte 2 - Bit 3
    ULONG               SID_Delay:2;            // Byte 2 - Bits 4-5
    ULONG               SID_Speed:2;            // Byte 2 - Bits 6-7
    ULONG               SID_More_Packets:1;     // Byte 3 - Bit 0
    ULONG               SID_Initiated_Rst:1;    // Byte 3 - Bit 1
    ULONG               SID_Port3:2;            // Byte 3 - Bits 2-3
    ULONG               SID_Port2:2;            // Byte 3 - Bits 4-5
    ULONG               SID_Port1:2;            // Byte 3 - Bits 6-7
} SELF_ID, *PSELF_ID;

//
// Additional 1394 Self ID packet format (only used when More bit is on).
//

typedef struct _SELF_ID_MORE {
    ULONG               SID_Phys_ID:6;          // Byte 0 - Bits 0-5
    ULONG               SID_Packet_ID:2;        // Byte 0 - Bits 6-7
    ULONG               SID_PortA:2;            // Byte 1 - Bits 0-1
    ULONG               SID_Reserved2:2;        // Byte 1 - Bits 2-3
    ULONG               SID_Sequence:3;         // Byte 1 - Bits 4-6
    ULONG               SID_One:1;              // Byte 1 - Bit 7
    ULONG               SID_PortE:2;            // Byte 2 - Bits 0-1
    ULONG               SID_PortD:2;            // Byte 2 - Bits 2-3
    ULONG               SID_PortC:2;            // Byte 2 - Bits 4-5
    ULONG               SID_PortB:2;            // Byte 2 - Bits 6-7
    ULONG               SID_More_Packets:1;     // Byte 3 - Bit 0
    ULONG               SID_Reserved3:1;        // Byte 3 - Bit 1
    ULONG               SID_PortH:2;            // Byte 3 - Bits 2-3
    ULONG               SID_PortG:2;            // Byte 3 - Bits 4-5
    ULONG               SID_PortF:2;            // Byte 3 - Bits 6-7
} SELF_ID_MORE, *PSELF_ID_MORE;

//
// 1394 Phy Configuration packet format.
//

typedef struct _PHY_CONFIGURATION_PACKET {
    ULONG               PCP_Phys_ID:6;          // Byte 0 - Bits 0-5
    ULONG               PCP_Packet_ID:2;        // Byte 0 - Bits 6-7
    ULONG               PCP_Gap_Count:6;        // Byte 1 - Bits 0-5
    ULONG               PCP_Set_Gap_Count:1;    // Byte 1 - Bit 6
    ULONG               PCP_Force_Root:1;       // Byte 1 - Bit 7
    ULONG               PCP_Reserved1:8;        // Byte 2 - Bits 0-7
    ULONG               PCP_Reserved2:8;        // Byte 3 - Bits 0-7
    ULONG               PCP_Inverse;            // Inverse quadlet
} PHY_CONFIGURATION_PACKET, *PPHY_CONFIGURATION_PACKET;

//
// 1394 Asynchronous packet format.
//

typedef struct _ASYNC_PACKET {
    USHORT              AP_Priority:4;          // Bits 0-3     1st quadlet
    USHORT              AP_tCode:4;             // Bits 4-7
    USHORT              AP_rt:2;                // Bits 8-9
    USHORT              AP_tLabel:6;            // Bits 10-15
    NODE_ADDRESS        AP_Destination_ID;      // Bits 16-31
    union {                                     //              2nd quadlet
        struct {
            USHORT      AP_Reserved:12;         // Bits 0-11
            USHORT      AP_Rcode:4;             // Bits 12-15
        } Response;
        USHORT          AP_Offset_High;         // Bits 0-15
    } u;
    NODE_ADDRESS        AP_Source_ID;           // Bits 16-31
    ULONG               AP_Offset_Low;          // Bits 0-31    3rd quadlet
    union {                                     //              4th quadlet
        struct {
            USHORT      AP_Extended_tCode;      // Bits 0-15
            USHORT      AP_Data_Length;         // Bits 16-31
        } Block;
        ULONG           AP_Quadlet_Data;        // Bits 0-31
    } u1;

} ASYNC_PACKET, *PASYNC_PACKET;

//
// 1394 Isochronous packet header.
//

typedef struct _ISOCH_HEADER {
    ULONG               IH_Sy:4;                // Bits 0-3
    ULONG               IH_tCode:4;             // Bits 4-7
    ULONG               IH_Channel:6;           // Bits 8-13
    ULONG               IH_Tag:2;               // Bits 14-15
    ULONG               IH_Data_Length:16;      // Bits 16-31
} ISOCH_HEADER, *PISOCH_HEADER;

//
// 1394 Speed Map format.
//

typedef struct _SPEED_MAP {
    USHORT              SPD_Length;             // number of quadlets in map
    USHORT              SPD_CRC;                // 16 bit CRC defined by 1212
    ULONG               SPD_Generation;         // Generation number
    UCHAR               SPD_Speed_Code[4032];
} SPEED_MAP, *PSPEED_MAP;

//
// 1394 Topology Map format.
//

typedef struct _TOPOLOGY_MAP {
    USHORT              TOP_Length;             // number of quadlets in map
    USHORT              TOP_CRC;                // 16 bit CRC defined by 1212
    ULONG               TOP_Generation;         // Generation number
    USHORT              TOP_Node_Count;         // Node count
    USHORT              TOP_Self_ID_Count;      // Number of Self IDs
    SELF_ID             TOP_Self_ID_Array[1];   // Array of Self IDs
} TOPOLOGY_MAP, *PTOPOLOGY_MAP;

//
// 1394 Config Rom Definitions.
//

typedef struct _CONFIG_ROM {

    ULONG               CR_Info;                // 0x0
    ULONG               CR_Signiture;           // 0x4  // bus info block
    ULONG               CR_BusInfoBlockCaps;    // 0x8  //      "
    ULONG               CR_Node_UniqueID[2];    // 0xC  //      "
    ULONG               CR_Root_Info;           // 0x14

    //
    // The rest is the root directory which has variable definition and length.
    //

} CONFIG_ROM, *PCONFIG_ROM;

//
// 1394 Textual Leaf format.
//

typedef struct _TEXTUAL_LEAF {
    USHORT              TL_CRC;                 // using 1994 CRC algorithm
    USHORT              TL_Length;              // length of leaf in quads
    ULONG               TL_Spec_Id;             // vendor defined
    ULONG               TL_Language_Id;         // language Id
    UCHAR               TL_Data;                // variable length data
} TEXTUAL_LEAF, *PTEXTUAL_LEAF;

//
// 1394 Cycle Time format.
//

typedef struct _CYCLE_TIME {
    ULONG               CL_CycleOffset:12;      // Bits 0-11
    ULONG               CL_CycleCount:13;       // Bits 12-24
    ULONG               CL_SecondCount:7;       // Bits 25-31
} CYCLE_TIME, *PCYCLE_TIME;

//
// Definition of an Address Mapping FIFO element.
//

typedef struct _ADDRESS_FIFO {
    SLIST_ENTRY         FifoList;               // Singly linked list
    PMDL                FifoMdl;                // Mdl for this FIFO element
} ADDRESS_FIFO, *PADDRESS_FIFO;

//
// Information block the bus driver passes to the higher device drivers
// when the notification handler is called.
//

typedef struct _NOTIFICATION_INFO_W2K {
    PMDL                Mdl;                    // Supplied by device driver
    ULONG               ulOffset;               // Where in buffer
    ULONG               nLength;                // How big is the operation
    ULONG               fulNotificationOptions; // Which option occurred
    PVOID               Context;                // Device driver supplied
    PADDRESS_FIFO       Fifo;                   // FIFO that completed
    PVOID               RequestPacket;          // Pointer to request packet
    PMDL                ResponseMdl;            // Pointer to response MDL
    PVOID *             ResponsePacket;         // Pointer to pointer to response packet
    PULONG              ResponseLength;         // Pointer to length of response
    PKEVENT *           ResponseEvent;          // Event to be signaled
} NOTIFICATION_INFO_W2K, *PNOTIFICATION_INFO_W2K;

typedef struct _NOTIFICATION_INFO_WXP {
    PMDL                Mdl;                    // Supplied by device driver
    ULONG               ulOffset;               // Where in buffer
    ULONG               nLength;                // How big is the operation
    ULONG               fulNotificationOptions; // Which option occurred
    PVOID               Context;                // Device driver supplied
    PADDRESS_FIFO       Fifo;                   // FIFO that completed
    PVOID               RequestPacket;          // Pointer to request packet
    PMDL                ResponseMdl;            // Pointer to response MDL
    PVOID *             ResponsePacket;         // Pointer to pointer to response packet
    PULONG              ResponseLength;         // Pointer to length of response
    PKEVENT *           ResponseEvent;          // Event to be signaled
    RCODE               ResponseCode;           // RCode to be returned for request
} NOTIFICATION_INFO_WXP, *PNOTIFICATION_INFO_WXP;

#if(NTDDI_VERSION < NTDDI_WINXP)
typedef NOTIFICATION_INFO_W2K NOTIFICATION_INFO, *PNOTIFICATION_INFO;
#else
typedef NOTIFICATION_INFO_WXP NOTIFICATION_INFO, *PNOTIFICATION_INFO;
#endif

#if(NTDDI_VERSION >= NTDDI_WIN7)

//
// The size of the bus info block in bytes.
//

#define BUS_INFO_BLOCK_SIZE             16

//
// Config Rom Header.
//

typedef struct _CONFIG_ROM_HEADER {
    ULONG       Crc:16;
    ULONG       CrcLength:8;
    ULONG       InfoLength:8;
} CONFIG_ROM_HEADER, *PCONFIG_ROM_HEADER;

//
// Config Rom Bus Information Capabilities.
//

typedef struct _BUS_INFO_CAPABILITIES {
    ULONG       LinkSpeed:3;
    ULONG       Reserved0:1;
    ULONG       Generation:4;
    ULONG       MaxRom:2;
    ULONG       Reserved1:2;
    ULONG       MaxRec:4;
    ULONG       CycleClockAccuracy:8;
    ULONG       Reserved2:3;
    ULONG       PowerManagementCapable:1;
    ULONG       BusManagerCapable:1;
    ULONG       IsochCapable:1;
    ULONG       CycleMasterCapable:1;
    ULONG       IsochResourceManagerCapable:1;
} BUS_INFO_CAPABILITIES, *PBUS_INFO_CAPABILITIES;

//
// Config Rom Bus Information Ids
//

typedef struct _BUS_INFO_IDS {
    ULONG       ChipIdHigh:8;
    ULONG       NodeVendorId:24;
} BUS_INFO_IDS, *PBUS_INFO_IDS;

//
// Directory Header.
//

typedef struct _DIRECTORY_HEADER {
    ULONG       Crc:16;
    ULONG       Length:16;
} DIRECTORY_HEADER, *PDIRECTORY_HEADER;

//
// Directory Entry.
//

typedef struct _DIRECTORY_ENTRY {
    ULONG       Value:24;
    ULONG       KeyId:6;
    ULONG       KeyType:2;
} DIRECTORY_ENTRY, *PDIRECTORY_ENTRY;

//
// Leaf Format.
//

typedef struct _LEAF_FORMAT {
    ULONG       SpecifierId:24;
    ULONG       DescriptorType:8;
} LEAF_FORMAT, *PLEAF_FORMAT;

//
// Textual Leaf Format.
//

typedef struct _TEXTUAL_LEAF_FORMAT {
    ULONG       Language:16;
    ULONG       CharacterSet:12;
    ULONG       Width:4;
} TEXTUAL_LEAF_FORMAT, *PTEXTUAL_LEAF_FORMAT;

//
// Directory Entries.
//

typedef union _DIRECTORY_ENTRIES {
    ULONG               Quadlet;
    DIRECTORY_HEADER    Header;
    DIRECTORY_ENTRY     Entry;
    LEAF_FORMAT         LeafFormat;
    TEXTUAL_LEAF_FORMAT TextualLeafFormat;
} DIRECTORY_ENTRIES, *PDIRECTORY_ENTRIES;

//
// 1394 Config Rom.
//

typedef struct _CROM {

    CONFIG_ROM_HEADER       ConfigRomHeader;            // @ 400

    ULONG                   Signature;                  // @ 404

    BUS_INFO_CAPABILITIES   BusInfoCaps;                // @ 408

    BUS_INFO_IDS            BusInfoIds;                 // @ 40C

    ULONG                   ChipIdLow;                  // @ 410

    DIRECTORY_HEADER        RootDirectoryHeader;        // @ 414

    DIRECTORY_ENTRIES       Entries[250];               // @ 418 ...

} CROM, *PCROM;

#endif

//
// Various definitions.
//

#if(NTDDI_VERSION >= NTDDI_WINXP)
#include <initguid.h>
DEFINE_GUID( BUS1394_CLASS_GUID, 0x6BDD1FC1, 0x810F, 0x11d0, 0xBE, 0xC7, 0x08, 0x00, 0x2B, 0xE2, 0x09, 0x2F);
#endif

#define IOCTL_1394_CLASS                        CTL_CODE(            \
                                                FILE_DEVICE_UNKNOWN, \
                                                0x87,                \
                                                METHOD_IN_DIRECT,    \
                                                FILE_ANY_ACCESS      \
                                                )

//
// 1394 Transaction codes.
//

#define TCODE_WRITE_REQUEST_QUADLET             0
#define TCODE_WRITE_REQUEST_BLOCK               1
#define TCODE_WRITE_RESPONSE                    2
#define TCODE_RESERVED1                         3
#define TCODE_READ_REQUEST_QUADLET              4
#define TCODE_READ_REQUEST_BLOCK                5
#define TCODE_READ_RESPONSE_QUADLET             6
#define TCODE_READ_RESPONSE_BLOCK               7
#define TCODE_CYCLE_START                       8
#define TCODE_LOCK_REQUEST                      9
#define TCODE_ISOCH_DATA_BLOCK                  10
#define TCODE_LOCK_RESPONSE                     11
#define TCODE_RESERVED2                         12
#define TCODE_RESERVED3                         13
#define TCODE_PHY_PACKET                        14
#define TCODE_SELFID                            14
#define TCODE_RESERVED4                         15

#define TCODE_REQUEST_BLOCK_MASK                1
#define TCODE_RESPONSE_MASK                     2

//
// 1394 Extended Transaction codes.
//

#define EXT_TCODE_RESERVED0                     0
#define EXT_TCODE_MASK_SWAP                     1
#define EXT_TCODE_COMPARE_SWAP                  2
#define EXT_TCODE_FETCH_ADD                     3
#define EXT_TCODE_LITTLE_ADD                    4
#define EXT_TCODE_BOUNDED_ADD                   5
#define EXT_TCODE_WRAP_ADD                      6

//
// 1394 Acknowledgement codes.
//

#define ACODE_RESERVED_0                        0
#define ACODE_ACK_COMPLETE                      1
#define ACODE_ACK_PENDING                       2
#define ACODE_RESERVED_3                        3
#define ACODE_ACK_BUSY_X                        4
#define ACODE_ACK_BUSY_A                        5
#define ACODE_ACK_BUSY_B                        6
#define ACODE_RESERVED_7                        7
#define ACODE_RESERVED_8                        8
#define ACODE_RESERVED_9                        9
#define ACODE_RESERVED_10                       10
#define ACODE_ACK_TARDY                         11
#define ACODE_RESERVED_12                       12
#define ACODE_ACK_DATA_ERROR                    13
#define ACODE_ACK_TYPE_ERROR                    14
#define ACODE_RESERVED_15                       15

//
// 1394 Ack code to NT status mask (to be OR'd in when completing IRPs).
//

#define ACODE_STATUS_MASK                       ((NTSTATUS)0xC0120070L)

//
// 1394 Response codes.
//

#define RCODE_RESPONSE_COMPLETE                 0
#define RCODE_RESERVED1                         1
#define RCODE_RESERVED2                         2
#define RCODE_RESERVED3                         3
#define RCODE_CONFLICT_ERROR                    4
#define RCODE_DATA_ERROR                        5
#define RCODE_TYPE_ERROR                        6
#define RCODE_ADDRESS_ERROR                     7
#define RCODE_TIMED_OUT                         15

//
// 1394 Response code to NT status mask (to be OR'd in when completing IRPs).
//

#define RCODE_STATUS_MASK                       ((NTSTATUS)0xC0120080L)

#if(NTDDI_VERSION < NTDDI_WINXP)
#define STATUS_INVALID_GENERATION               ((NTSTATUS)0xC0128090L)
#else
#define STATUS_INVALID_GENERATION               ((NTSTATUS)0xC0120090L)
#endif

//
// 1394 Speed codes.
//

#define SCODE_100_RATE                          0
#define SCODE_200_RATE                          1
#define SCODE_400_RATE                          2
#define SCODE_800_RATE                          3
#define SCODE_1600_RATE                         4
#define SCODE_3200_RATE                         5

//
// 1394 Self ID definitions.
//

#define SELF_ID_CONNECTED_TO_CHILD              3
#define SELF_ID_CONNECTED_TO_PARENT             2
#define SELF_ID_NOT_CONNECTED                   1
#define SELF_ID_NOT_PRESENT                     0

//
// 1394 Self ID Power Class definitions.
//

#define POWER_CLASS_NOT_NEED_NOT_REPEAT         0
#define POWER_CLASS_SELF_POWER_PROVIDE_15W      1
#define POWER_CLASS_SELF_POWER_PROVIDE_30W      2
#define POWER_CLASS_SELF_POWER_PROVIDE_45W      3
#define POWER_CLASS_MAYBE_POWERED_UPTO_1W       4
#define POWER_CLASS_IS_POWERED_UPTO_1W_NEEDS_2W 5
#define POWER_CLASS_IS_POWERED_UPTO_1W_NEEDS_5W 6
#define POWER_CLASS_IS_POWERED_UPTO_1W_NEEDS_9W 7

//
// 1394 Phy Packet Ids.
//

#define PHY_PACKET_ID_CONFIGURATION             0
#define PHY_PACKET_ID_LINK_ON                   1
#define PHY_PACKET_ID_SELF_ID                   2

//
// Various Interesting 1394 IEEE 1212 locations.
//

#define INITIAL_REGISTER_SPACE_HI               0xffff
#define INITIAL_REGISTER_SPACE_LO               0xf0000000
#define STATE_CLEAR_LOCATION                    0x000
#define STATE_SET_LOCATION                      0x004
#define NODE_IDS_LOCATION                       0x008
#define RESET_START_LOCATION                    0x00C
#define SPLIT_TIMEOUT_HI_LOCATION               0x018
#define SPLIT_TIMEOUT_LO_LOCATION               0x01C
#define INTERRUPT_TARGET_LOCATION               0x050
#define INTERRUPT_MASK_LOCATION                 0x054
#define CYCLE_TIME_LOCATION                     0x200
#define BUS_TIME_LOCATION                       0x204
#define POWER_FAIL_IMMINENT_LOCATION            0x208
#define POWER_SOURCE_LOCATION                   0x20C
#define BUSY_TIMEOUT_LOCATION                   0x210
#define BUS_MANAGER_ID_LOCATION                 0x21C
#define BANDWIDTH_AVAILABLE_LOCATION            0x220
#define CHANNELS_AVAILABLE_LOCATION             0x224
#define NETWORK_CHANNELS_LOCATION               0x234
#define CONFIG_ROM_LOCATION                     0x400
#define TOPOLOGY_MAP_LOCATION                   0x1000
#define SPEED_MAP_LOCATION                      0x2000

//
// 1394 Configuration key values and masks.
//

#define CONFIG_ROM_KEY_MASK                     0x000000ff
#define CONFIG_ROM_OFFSET_MASK                  0xffffff00
#define MODULE_VENDOR_ID_KEY_SIGNATURE          0x03
#define NODE_CAPABILITIES_KEY_SIGNATURE         0x0c
#define SPEC_ID_KEY_SIGNATURE                   0x12
#define SOFTWARE_VERSION_KEY_SIGNATURE          0x13
#define MODEL_ID_KEY_SIGNATURE                  0x17
#define EXTENDED_SPECIFIER_ID_KEY_SIGNATURE     0x1C
#define EXTENDED_KEY_SIGNATURE                  0x1D
#define EXTENDED_DATA_KEY_SIGNATURE             0x1E

#define COMMAND_BASE_KEY_SIGNATURE              0x40
#define VENDOR_KEY_SIGNATURE                    0x81
#define TEXTUAL_LEAF_INDIRECT_KEY_SIGNATURE     0x81

#define MODEL_KEY_SIGNATURE                     0x82
#define UNIT_DIRECTORY_KEY_SIGNATURE            0xd1
#define UNIT_DEP_DIR_KEY_SIGNATURE              0xd4

//
// IEEE 1212-2001 Key Type Definitions.
//

#define IEEE1212_KEY_TYPE_IMMEDIATE             0
#define IEEE1212_KEY_TYPE_OFFSET                1
#define IEEE1212_KEY_TYPE_LEAF                  2
#define IEEE1212_KEY_TYPE_DIRECTORY             3

//
// IEEE 1212-2001 Key Id Definitions.
//

#define IEEE1212_KEY_ID_DESCRIPTOR              0x01
#define IEEE1212_KEY_ID_VENDOR                  0x03
#define IEEE1212_KEY_ID_UNIT                    0x11
#define IEEE1212_KEY_ID_SPECIFIER_ID            0x12
#define IEEE1212_KEY_ID_VERSION                 0x13
#define IEEE1212_KEY_ID_DEPENDENT_INFO          0x14
#define IEEE1212_KEY_ID_MODEL                   0x17
#define IEEE1212_KEY_ID_EXTENDED_KEY_SPEC_ID    0x1C
#define IEEE1212_KEY_ID_EXTENDED_KEY            0x1D
#define IEEE1212_KEY_ID_EXTENDED_DATA           0x1E

//
// 1394 Async Data Payload Sizes.
//

#define ASYNC_PAYLOAD_100_RATE                  512
#define ASYNC_PAYLOAD_200_RATE                  1024
#define ASYNC_PAYLOAD_400_RATE                  2048
#define ASYNC_PAYLOAD_800_RATE                  4096
#define ASYNC_PAYLOAD_1600_RATE                 4096
#define ASYNC_PAYLOAD_3200_RATE                 4096


//
// 1394 Isoch Data Payload Sizes.
//

#define ISOCH_PAYLOAD_100_RATE                  1024
#define ISOCH_PAYLOAD_200_RATE                  2048
#define ISOCH_PAYLOAD_400_RATE                  4096
#define ISOCH_PAYLOAD_800_RATE                  8192
#define ISOCH_PAYLOAD_1600_RATE                 16384
#define ISOCH_PAYLOAD_3200_RATE                 32768

//
// Various definitions.
//

#define S100_BW_UNITS_PER_QUADLET               19
#define S200_BW_UNITS_PER_QUADLET               9
#define S400_BW_UNITS_PER_QUADLET               4
#define S800_BW_UNITS_PER_QUADLET               2
#define S1600_BW_UNITS_PER_QUADLET              1

#define INITIAL_BANDWIDTH_UNITS                 4915        // Initial bandwidth units

#define MAX_REC_100_RATE                        0x08
#define MAX_REC_200_RATE                        0x09
#define MAX_REC_400_RATE                        0x0a

#define LOCAL_BUS                               0x3ff
#define MAX_LOCAL_NODES                         64
#define SELFID_PACKET_SIGNITURE                 2
#define NOMINAL_CYCLE_TIME                      125         // Microseconds
#define NO_BUS_MANAGER                          0x3f

#define CONFIG_ROM_SIGNATURE                    0x31333934

//
// IRB function number definitions.
//

#define REQUEST_ASYNC_READ                      0
#define REQUEST_ASYNC_WRITE                     1
#define REQUEST_ASYNC_LOCK                      2
#define REQUEST_ISOCH_ALLOCATE_BANDWIDTH        3
#define REQUEST_ISOCH_ALLOCATE_CHANNEL          4
#define REQUEST_ISOCH_ALLOCATE_RESOURCES        5
#define REQUEST_ISOCH_ATTACH_BUFFERS            6
#define REQUEST_ISOCH_DETACH_BUFFERS            7
#define REQUEST_ISOCH_FREE_BANDWIDTH            8
#define REQUEST_ISOCH_FREE_CHANNEL              9
#define REQUEST_ISOCH_FREE_RESOURCES            10
#define REQUEST_ISOCH_LISTEN                    11
#define REQUEST_ISOCH_STOP                      12
#define REQUEST_ISOCH_TALK                      13
#define REQUEST_ISOCH_QUERY_CYCLE_TIME          14
#define REQUEST_ISOCH_QUERY_RESOURCES           15
#define REQUEST_ISOCH_SET_CHANNEL_BANDWIDTH     16
#define REQUEST_ALLOCATE_ADDRESS_RANGE          17
#define REQUEST_FREE_ADDRESS_RANGE              18
#define REQUEST_GET_LOCAL_HOST_INFO             19
#define REQUEST_GET_ADDR_FROM_DEVICE_OBJECT     20
#define REQUEST_CONTROL                         21
#define REQUEST_GET_SPEED_BETWEEN_DEVICES       22
#define REQUEST_SET_DEVICE_XMIT_PROPERTIES      23
#define REQUEST_GET_CONFIGURATION_INFO          24
#define REQUEST_BUS_RESET                       25
#define REQUEST_GET_GENERATION_COUNT            26
#define REQUEST_SEND_PHY_CONFIG_PACKET          27
#define REQUEST_GET_SPEED_TOPOLOGY_MAPS         28
#define REQUEST_BUS_RESET_NOTIFICATION          29
#define REQUEST_ASYNC_STREAM                    30
#define REQUEST_SET_LOCAL_HOST_PROPERTIES       31

#if(NTDDI_VERSION >= NTDDI_WINXP)
#define REQUEST_ISOCH_MODIFY_STREAM_PROPERTIES  32
#endif

#if(NTDDI_VERSION >= NTDDI_WIN7)
#define REQUEST_SEND_PHY_PACKET                 33
#define REQUEST_RECEIVE_PHY_PACKETS             34
#define REQUEST_GET_CONFIG_ROM                  35
#endif

typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_NOTIFICATION_ROUTINE) (
    _In_ PNOTIFICATION_INFO NotificationInfo
    );

typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_ISOCH_DESCRIPTOR_ROUTINE) (
    _In_ PVOID  Context1,
    _In_ PVOID  Context2
    );

#if(NTDDI_VERSION >= NTDDI_WIN7)

typedef struct _BUS_RESET_DATA {
    PVOID           ResetContext;
    ULONG           GenerationCount;
    NODE_ADDRESS    DeviceNodeId;
    NODE_ADDRESS    LocalNodeId;
    UCHAR           SpeedToNode;
} BUS_RESET_DATA, *PBUS_RESET_DATA;

#endif

typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_BUS_RESET_NOTIFICATION)(
    _In_ PVOID  Context
    );

//
// Definition of Isoch Descriptor.
//

typedef struct _ISOCH_DESCRIPTOR {

    //
    // Flags (used in synchronization).
    //

    ULONG                                   fulFlags;

    //
    // Mdl pointing to buffer.
    //

    PMDL                                    Mdl;

    //
    // Length of combined buffer(s) as represented by the Mdl.
    //

    ULONG                                   ulLength;

    //
    // Payload size of each Isoch packet to be used in this descriptor.
    //

    ULONG                                   nMaxBytesPerFrame;

    //
    // Synchronization field; equivalent to Sy in the Isoch packet.
    //

    ULONG                                   ulSynch;

    //
    // Synchronization field; equivalent to Tag in the Isoch packet.
    //

    ULONG                                   ulTag;

    //
    // Cycle time field; returns time to be sent/received or when finished.
    //

    CYCLE_TIME                              CycleTime;

    //
    // Callback routine (if any) to be called when this descriptor completes.
    //

    PBUS_ISOCH_DESCRIPTOR_ROUTINE           Callback;

    //
    // First context (if any) parameter to be passed when doing callbacks.
    //

    PVOID                                   Context1;

    //
    // Second context (if any) parameter to be passed when doing callbacks.
    //

    PVOID                                   Context2;

    //
    // Holds the final status of this descriptor.
    //

    NTSTATUS                                status;

    //
    // Reserved for the device driver who submitted this descriptor to
    // stomp in.
    //

    ULONG_PTR                               DeviceReserved[8];

    //
    // Reserved for the bus driver to stomp in.
    //

    ULONG_PTR                               BusReserved[8];

    //
    // Reserved for the port driver to stomp in.
    //

    ULONG_PTR                               PortReserved[16];

} ISOCH_DESCRIPTOR, *PISOCH_DESCRIPTOR;

//
// Definition of header element for scatter/gather support.
//

typedef struct _IEEE1394_SCATTER_GATHER_HEADER{

    USHORT          HeaderLength;
    USHORT          DataLength;
    UCHAR           HeaderData;

} IEEE1394_SCATTER_GATHER_HEADER, *PIEEE1394_SCATTER_GATHER_HEADER;

//
// Fields necessary in order for the 1394 stack to carry out an
// AsyncRead request.
//

typedef struct _IRB_REQ_ASYNC_READ {
    IO_ADDRESS      DestinationAddress;     // Address to read from
    ULONG           nNumberOfBytesToRead;   // Bytes to read
    ULONG           nBlockSize;             // Block size of read
    ULONG           fulFlags;               // Flags pertinent to read
    PMDL            Mdl;                    // Destination buffer
    ULONG           ulGeneration;           // Generation as known by driver
    UCHAR           chPriority;             // Priority to send
    UCHAR           nSpeed;                 // Speed at which to send
    UCHAR           tCode;                  // Type of Read to do
    UCHAR           Reserved;               // Used to determine medium delay
    ULONG           ElapsedTime;            // Only valid for flag ASYNC_FLAGS_PING
                                            // units in nano secs..
} IRB_REQ_ASYNC_READ;

//
// Fields necessary in order for the 1394 stack to carry out an
// AsyncWrite request.
//

typedef struct _IRB_REQ_ASYNC_WRITE {
    IO_ADDRESS      DestinationAddress;     // Address to write to
    ULONG           nNumberOfBytesToWrite;  // Bytes to write
    ULONG           nBlockSize;             // Block size of write
    ULONG           fulFlags;               // Flags pertinent to write
    PMDL            Mdl;                    // Destination buffer
    ULONG           ulGeneration;           // Generation as known by driver
    UCHAR           chPriority;             // Priority to send
    UCHAR           nSpeed;                 // Speed at which to send
    UCHAR           tCode;                  // Type of Write to do
    UCHAR           Reserved;               // Reserved for future use
    ULONG           ElapsedTime;            // Only valid for flag ASYNC_FLAGS_PING
} IRB_REQ_ASYNC_WRITE;

//
// Fields necessary in order for the 1394 stack to carry out an
// AsyncLock request.
//

typedef struct _IRB_REQ_ASYNC_LOCK {
    IO_ADDRESS      DestinationAddress;     // Address to lock to
    ULONG           nNumberOfArgBytes;      // Bytes in Arguments
    ULONG           nNumberOfDataBytes;     // Bytes in DataValues
    ULONG           fulTransactionType;     // Lock transaction type
    ULONG           fulFlags;               // Flags pertinent to lock
    ULONG           Arguments[2];           // Arguments used in Lock
    ULONG           DataValues[2];          // Data values
    PVOID           pBuffer;                // Destination buffer (virtual address)
    ULONG           ulGeneration;           // Generation as known by driver
    UCHAR           chPriority;             // Priority to send
    UCHAR           nSpeed;                 // Speed at which to send
    UCHAR           tCode;                  // Type of Lock to do
    UCHAR           Reserved;               // Reserved for future use
} IRB_REQ_ASYNC_LOCK;

//
// Fields necessary in order for the Bus driver to carry out an
// IsochAllocateBandwidth request.
//

typedef struct _IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH {
    ULONG           nMaxBytesPerFrameRequested; // Bytes per Isoch frame
    ULONG           fulSpeed;                   // Speed flags
    HANDLE          hBandwidth;                 // bandwidth handle returned
    ULONG           BytesPerFrameAvailable;     // Available bytes per frame
    ULONG           SpeedSelected;              // Speed to be used
    ULONG           nBandwidthUnitsRequired;    // pre-calculated value
} IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochAllocateChannel request.
//

typedef struct _IRB_REQ_ISOCH_ALLOCATE_CHANNEL {
    ULONG           nRequestedChannel;      // Need a specific channel
    ULONG           Channel;                // Returned channel
    LARGE_INTEGER   ChannelsAvailable;      // Channels available
} IRB_REQ_ISOCH_ALLOCATE_CHANNEL;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochAllocateResources request
// Instructions:
// Receive alloc:
// fulSpeed - should be the max speed the tx side is expected to stream
// The payload size in nMaxBytesPerFram cannot exceed the max payload for
// for this speed.
// fulFlags - For receive, wtih the standard header stripped, the field should
// be = (RESOURCE_USED_IN_LISTEN | RESOURCES_STRIP_ADDITIONAL_QUADLETS)
// Also nQuadletsToStrip = 1
// For no stripping set nQuadsTostrip to 0 and dont specify the stripping flag.
// nMaxBytesPerframe - If not stripping it should include the 8 bytes for header/trailer
// expected to be recieved for each packet.
// nNumberOfBuffer - see below
// nMaxBufferSize - This should be always such mode(nMaxBufferSize,nMaxBytesPerFrame) == 0
// (integer product of number of bytes per packet).
// nQuadletsTostrip - If stripping only one quadlet (standrd iso header) this is set to 1
// if zero, the isoch header will be included AND the trailer. So 8 bytes extra will be recieved
// hResource - see below
//

typedef struct _IRB_REQ_ISOCH_ALLOCATE_RESOURCES_W2K {
    ULONG           fulSpeed;               // Speed flags
    ULONG           fulFlags;               // Flags
    ULONG           nChannel;               // Channel to be used
    ULONG           nMaxBytesPerFrame;      // Expected size of Isoch frame
    ULONG           nNumberOfBuffers;       // Number of buffer(s) that will be attached
    ULONG           nMaxBufferSize;         // Max size of buffer(s)
    ULONG           nQuadletsToStrip;       // Number striped from start of every packet
    HANDLE          hResource;              // handle to Resource
} IRB_REQ_ISOCH_ALLOCATE_RESOURCES_W2K;

typedef struct _IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP {
    ULONG           fulSpeed;               // Speed flags
    ULONG           fulFlags;               // Flags
    ULONG           nChannel;               // Channel to be used
    ULONG           nMaxBytesPerFrame;      // Expected size of Isoch frame
    ULONG           nNumberOfBuffers;       // Number of buffer(s) that will be attached
    ULONG           nMaxBufferSize;         // Max size of buffer(s)
    ULONG           nQuadletsToStrip;       // Number striped from start of every packet
    HANDLE          hResource;              // handle to Resource
    ULARGE_INTEGER  ChannelMask;            // channel mask for multi-channel recv
} IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP;

#if(NTDDI_VERSION < NTDDI_WINXP)
typedef IRB_REQ_ISOCH_ALLOCATE_RESOURCES_W2K IRB_REQ_ISOCH_ALLOCATE_RESOURCES;
#else
typedef IRB_REQ_ISOCH_ALLOCATE_RESOURCES_WXP IRB_REQ_ISOCH_ALLOCATE_RESOURCES;
#endif

//
// Fields necessary in order for the Bus driver to carry out a
// IsochAttachBuffers request.
// Note that pIsochDescriptor->UlLength must be an integer product of
// pIsochDescriptor->nBytesMaxPerFrame.
//

typedef struct _IRB_REQ_ISOCH_ATTACH_BUFFERS {
    HANDLE              hResource;            // Resource handle
    ULONG               nNumberOfDescriptors; // Number to attach
    PISOCH_DESCRIPTOR   pIsochDescriptor;     // Pointer to start of Isoch descriptors
} IRB_REQ_ISOCH_ATTACH_BUFFERS;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochDetachBuffers request.
//

typedef struct _IRB_REQ_ISOCH_DETACH_BUFFERS {
    HANDLE              hResource;            // Resource handle
    ULONG               nNumberOfDescriptors; // Number to detach
    PISOCH_DESCRIPTOR   pIsochDescriptor;     // Pointer to Isoch descriptors
} IRB_REQ_ISOCH_DETACH_BUFFERS;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochFreeBandwidth request.
//

typedef struct _IRB_REQ_ISOCH_FREE_BANDWIDTH {
    HANDLE          hBandwidth;         // Bandwidth handle to release
    ULONG           nMaxBytesPerFrameRequested; // Bytes per Isoch frame
    ULONG           fulSpeed;                   // Speed flags
    ULONG           BytesPerFrameAvailable;     // this is not used
    ULONG           SpeedSelected;              // this is not used
    ULONG           nBandwidthUnitsRequired;    // pre-calculated value
} IRB_REQ_ISOCH_FREE_BANDWIDTH;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochFreeChannel request.
//

typedef struct _IRB_REQ_ISOCH_FREE_CHANNEL {
    ULONG               nChannel;           // Channel to release
} IRB_REQ_ISOCH_FREE_CHANNEL;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochFreeResources request.
//

typedef struct _IRB_REQ_ISOCH_FREE_RESOURCES {
    HANDLE              hResource;          // Resource handle
} IRB_REQ_ISOCH_FREE_RESOURCES;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochListen request.
//

typedef struct _IRB_REQ_ISOCH_LISTEN {
    HANDLE              hResource;          // Resource handle to listen on
    ULONG               fulFlags;           // Flags
    CYCLE_TIME          StartTime;          // Cycle time to start
} IRB_REQ_ISOCH_LISTEN;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochQueryCurrentCycleTime request.
//

typedef struct _IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME {
    CYCLE_TIME          CycleTime;          // Current cycle time returned
} IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochQueryResources request.
//

typedef struct _IRB_REQ_ISOCH_QUERY_RESOURCES {
    ULONG               fulSpeed;                  // Speed flags
    ULONG               BytesPerFrameAvailable;    // Per Isoch Frame
    LARGE_INTEGER       ChannelsAvailable;         // Available channels
} IRB_REQ_ISOCH_QUERY_RESOURCES;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochSetChannelBandwidth request.
//

typedef struct _IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH {
    HANDLE              hBandwidth;                 // Bandwidth handle
    ULONG               nMaxBytesPerFrame;          // bytes per Isoch frame
    ULONG               nBandwidthUnitsRequired;    // pre-calculated value
} IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochStop request.
//

typedef struct _IRB_REQ_ISOCH_STOP {
    HANDLE              hResource;          // Resource handle to stop on
    ULONG               fulFlags;           // Flags
} IRB_REQ_ISOCH_STOP;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochTalk request.
//

typedef struct _IRB_REQ_ISOCH_TALK {
    HANDLE              hResource;          // Resource handle to talk on
    ULONG               fulFlags;           // Flags
    CYCLE_TIME          StartTime;          // Cycle time to start
} IRB_REQ_ISOCH_TALK;

//
// Fields necessary in order for the Bus driver to carry out a
// IsochModifyStreamProperties request.
// This request is used to dynamicaly change the properties of an allocated
// resource, without the need to free and re-allocate the resource.
// The resource must NOT be streaming when this is issued. The caller should
// issue an ISOCH_STOP first and then an isoch start. Also no buffer can be
// pending after the ISOCH_STOP and before this call is made.
//

typedef struct _IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES {
    HANDLE              hResource;              // Resource handle
    ULARGE_INTEGER      ChannelMask;            // New channels to tx/rx on
    ULONG               fulSpeed;               // New speed
} IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES;

//
// Fields necessary in order for the 1394 stack to carry out an
// AllocateAddressRange request.
// Note:
// if the allocation is specified with no notification options and no RequiredOffset
// the returned address will ALWAYS be a physical address (on ohci).
// As a result these rules apply:
// Allocation - If Callback and Context is specified, since no notification is used
// the callback will be used to notify the caller that the allocation is complete.
// This way the issuer of the alloc does not have to block  but instead his callback
// routine will be called asynchronously when this is complete
// The caller must create this irb as usual but instead use the physical mapping routine
// provided by the por driver, in order to usee this request. If it uses IoCallDriver
// the caller cannot specif Context/Callback for a physical address, and he/she has to block.
//

typedef struct _IRB_REQ_ALLOCATE_ADDRESS_RANGE {
    PMDL            Mdl;                    // Address to map to 1394 space
    ULONG           fulFlags;               // Flags for this operation
    ULONG           nLength;                // Length of 1394 space desired
    ULONG           MaxSegmentSize;         // Maximum segment size for a single address element
    ULONG           fulAccessType;          // Desired access: R, W, L
    ULONG           fulNotificationOptions; // Notify options on Async access
    PVOID           Callback;               // Pointer to callback routine
    PVOID           Context;                // Pointer to driver supplied data
    ADDRESS_OFFSET  Required1394Offset;     // Offset that must be returned
    PSLIST_HEADER   FifoSListHead;          // Pointer to SList FIFO head
    PKSPIN_LOCK     FifoSpinLock;           // Pointer to SList Spin Lock
    ULONG           AddressesReturned;      // Number of addresses returned
    PADDRESS_RANGE  p1394AddressRange;      // Pointer to returned 1394 Address Ranges
    HANDLE          hAddressRange;          // Handle to address range
    PVOID           DeviceExtension;        // Device Extension who created this mapping
} IRB_REQ_ALLOCATE_ADDRESS_RANGE;

//
// Fields necessary in order for the 1394 stack to carry out a
// FreeAddressRange request.
//

typedef struct _IRB_REQ_FREE_ADDRESS_RANGE {
    ULONG           nAddressesToFree;       // Number of Addresses to free
    PADDRESS_RANGE  p1394AddressRange;      // Array of 1394 Address Ranges to Free
    PHANDLE         pAddressRange;          // Array of Handles to address range
    PVOID           DeviceExtension;        // Device Extension who created this mapping
} IRB_REQ_FREE_ADDRESS_RANGE;

//
// Fields necessary in order for the Bus driver to carry out a
// GetLocalHostInformation request.
// All levels ans structures are descrived below.
//

typedef struct _IRB_REQ_GET_LOCAL_HOST_INFORMATION {
    ULONG           nLevel;                 // level of info requested
    PVOID           Information;            // returned information
} IRB_REQ_GET_LOCAL_HOST_INFORMATION;

//
// Fields necessary in order for the Bus driver to carry out a
// Get1394AddressFromDeviceObject request.
//

typedef struct _IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT {
    ULONG           fulFlags;              // Flags
    NODE_ADDRESS    NodeAddress;           // Returned Node address
} IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT;

//
// Fields necessary in order for the Bus driver to carry out a
// Control request.
//

typedef struct _IRB_REQ_CONTROL {
    ULONG           ulIoControlCode;        // Control code
    PMDL            pInBuffer;              // Input buffer
    ULONG           ulInBufferLength;       // Input buffer length
    PMDL            pOutBuffer;             // Output buffer
    ULONG           ulOutBufferLength;      // Output buffer length
    ULONG           BytesReturned;          // Bytes returned
} IRB_REQ_CONTROL;

//
// Fields necessary in order for the Bus driver to carry out a
// GetMaxSpeedBetweenDevices request.
//

typedef struct _IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES {
    ULONG           fulFlags;                       // Flags
    ULONG           ulNumberOfDestinations;         // Number of destinations
    PDEVICE_OBJECT  hDestinationDeviceObjects[64];  // Destinations
    ULONG           fulSpeed;                       // Max speed returned
} IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES;

//
// Fields necessary in order for the Bus driver to carry out a
// SetDeviceXmitProperties request.
//

typedef struct _IRB_REQ_SET_DEVICE_XMIT_PROPERTIES {
    ULONG           fulSpeed;               // Speed
    ULONG           fulPriority;            // Priority
} IRB_REQ_SET_DEVICE_XMIT_PROPERTIES;

//
// Fields necessary in order for the Bus driver to carry out a
// SetPortProperties request.
//

typedef struct _IRB_REQ_SET_LOCAL_HOST_PROPERTIES {
    ULONG           nLevel;
    PVOID           Information;
} IRB_REQ_SET_LOCAL_HOST_PROPERTIES;

//
// Fields necessary in order for the Bus driver to carry out a
// GetConfigurationInformation request.
//

typedef struct _IRB_REQ_GET_CONFIGURATION_INFORMATION {
    PCONFIG_ROM     ConfigRom;                          // Pointer to config rom
    ULONG           UnitDirectoryBufferSize;
    PVOID           UnitDirectory;                      // Pointer to unit directory
    IO_ADDRESS      UnitDirectoryLocation;              // Starting Location of Unit Directory
    ULONG           UnitDependentDirectoryBufferSize;
    PVOID           UnitDependentDirectory;
    IO_ADDRESS      UnitDependentDirectoryLocation;
    ULONG           VendorLeafBufferSize;               // Size available to get vendor leafs
    PTEXTUAL_LEAF   VendorLeaf;                         // Pointer to vendor leafs
    ULONG           ModelLeafBufferSize;                // Size available to get model leafs
    PTEXTUAL_LEAF   ModelLeaf;                          // Pointer to model leafs

} IRB_REQ_GET_CONFIGURATION_INFORMATION;

#if(NTDDI_VERSION >= NTDDI_WIN7)

//
// Fields necessary in order for the Bus driver to carry out a
// GetConfigRom request.
//

typedef struct _IRB_REQ_GET_CONFIG_ROM {
    ULONG           GenerationCount;
    PCROM           ConfigRom;
    ULONG           UnitDirectoryIndex;
    ULONG           UnitDependentDirectoryIndex;
    ULONG           VendorLeafIndex;
    ULONG           ModelLeafIndex;
} IRB_REQ_GET_CONFIG_ROM;

#endif

//
// Fields necessary in order for the Bus driver to carry out a
// BusReset request.
//

typedef struct _IRB_REQ_BUS_RESET {
    ULONG           fulFlags;               // Flags for Bus Reset
} IRB_REQ_BUS_RESET;

//
// Fields necessary in order for the Bus driver to carry out a
// GetGenerationCount request.
//

typedef struct _IRB_REQ_GET_GENERATION_COUNT {
    ULONG           GenerationCount;        // generation count
} IRB_REQ_GET_GENERATION_COUNT;

//
// Fields necessary in order for the Bus driver to carry out a
// SendPhyConfigurationPacket request.
//

typedef struct _IRB_REQ_SEND_PHY_CONFIGURATION_PACKET {
    PHY_CONFIGURATION_PACKET PhyConfigurationPacket; // Phy packet
} IRB_REQ_SEND_PHY_CONFIGURATION_PACKET;

#if(NTDDI_VERSION >= NTDDI_WIN7)

//
// Fields necessary in order to send a phy packet.
//

typedef struct _IRB_REQ_SEND_PHY_PACKET {
    ULONG           Flags;
    ULONG           GenerationCount;
    ULARGE_INTEGER  PhyPacket;
} IRB_REQ_SEND_PHY_PACKET;

//
// Parameters used for register phy packet notification.
//

#define REGISTER_PHY_PACKET_NOTIFICATION        0x00000001
#define DEREGISTER_PHY_PACKET_NOTIFICATION      0x00000002

typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PBUS_PHY_PACKET_NOTIFICATION)(
    _In_ PVOID          Context,
    _In_ ULONG          GenerationCount,
    _In_ ULARGE_INTEGER PhyPacket
    );

//
// Fields necessary in order to receive phy packets.
//

typedef struct _IRB_RECEIVE_PHY_PACKETS {
    ULONG                           Flags;
    PBUS_PHY_PACKET_NOTIFICATION    PhyPacketRoutine;
    PVOID                           PhyPacketContext;
} IRB_REQ_RECEIVE_PHY_PACKETS;

#endif

//
// Fields necessary in order for the Bus driver to carry out a
// GetSpeedTopologyMaps request.
// The topology map and speed map are in big endian.
//

typedef struct _IRB_REQ_GET_SPEED_TOPOLOGY_MAPS {
    PSPEED_MAP      SpeedMap;
    PTOPOLOGY_MAP   TopologyMap;
} IRB_REQ_GET_SPEED_TOPOLOGY_MAPS;

//
// Fields necessary in order for the Bus driver to carry out a
// BusResetNotification request.
// This is the suggested method for a client driver on top of 1394bus, to get notified
// about 1394 bus resets. The client register by using this IRB, in its START_DEVICE
// routine and de-registers using the same IRB (but different flags) in its REMOVE routine
// This notification will ONLY be issued if after the bus reset, the target device is
// STILL present on the bus. This way the caller does not have to verify its existence.
//

typedef struct _IRB_REQ_BUS_RESET_NOTIFICATION {
    ULONG                           fulFlags;
    PBUS_BUS_RESET_NOTIFICATION     ResetRoutine;
    PVOID                           ResetContext;
} IRB_REQ_BUS_RESET_NOTIFICATION;

//
// Fields necessary in order for the Bus driver to carry out a
// AsyncStream request.
//

typedef struct _IRB_REQ_ASYNC_STREAM {
    ULONG           nNumberOfBytesToStream; // Bytes to stream
    ULONG           fulFlags;               // Flags pertinent to stream
    PMDL            Mdl;                    // Source buffer
    ULONG           ulTag;                  // Tag
    ULONG           nChannel;               // Channel
    ULONG           ulSynch;                // Sy
    ULONG           Reserved;               // Reserved for future use
    UCHAR           nSpeed;
} IRB_REQ_ASYNC_STREAM;

//
// IEEE 1394 Request Block definition (IRB).  IRBs are the basis of how other
// device drivers communicate with the 1394 Bus driver.
//

#define IRB_BUS_RESERVED_SZ                     8
#define IRB_PORT_RESERVED_SZ                    8

typedef struct _IRB {

    //
    // Holds the zero based Function number that corresponds to the request
    // that device drivers are asking the 1394 Bus driver to carry out.
    //

    ULONG           FunctionNumber;

    //
    // Holds Flags that may be unique to this particular operation.
    //

    ULONG           Flags;

    //
    // Reserved for internal bus driver use and/or future expansion.
    //

    ULONG_PTR       BusReserved[IRB_BUS_RESERVED_SZ];

    //
    // Reserved for internal port driver usage.
    //

    ULONG_PTR       PortReserved[IRB_PORT_RESERVED_SZ];

    //
    // Holds the structures used in performing the various 1394 APIs.
    //

    union {

        IRB_REQ_ASYNC_READ                              AsyncRead;
        IRB_REQ_ASYNC_WRITE                             AsyncWrite;
        IRB_REQ_ASYNC_LOCK                              AsyncLock;
        IRB_REQ_ISOCH_ALLOCATE_BANDWIDTH                IsochAllocateBandwidth;
        IRB_REQ_ISOCH_ALLOCATE_CHANNEL                  IsochAllocateChannel;
        IRB_REQ_ISOCH_ALLOCATE_RESOURCES                IsochAllocateResources;
        IRB_REQ_ISOCH_ATTACH_BUFFERS                    IsochAttachBuffers;
        IRB_REQ_ISOCH_DETACH_BUFFERS                    IsochDetachBuffers;
        IRB_REQ_ISOCH_FREE_BANDWIDTH                    IsochFreeBandwidth;
        IRB_REQ_ISOCH_FREE_CHANNEL                      IsochFreeChannel;
        IRB_REQ_ISOCH_FREE_RESOURCES                    IsochFreeResources;
        IRB_REQ_ISOCH_LISTEN                            IsochListen;
        IRB_REQ_ISOCH_QUERY_CURRENT_CYCLE_TIME          IsochQueryCurrentCycleTime;
        IRB_REQ_ISOCH_QUERY_RESOURCES                   IsochQueryResources;
        IRB_REQ_ISOCH_SET_CHANNEL_BANDWIDTH             IsochSetChannelBandwidth;
        IRB_REQ_ISOCH_STOP                              IsochStop;
        IRB_REQ_ISOCH_TALK                              IsochTalk;
#if(NTDDI_VERSION >= NTDDI_WINXP)
        IRB_REQ_ISOCH_MODIFY_STREAM_PROPERTIES          IsochModifyStreamProperties;
#endif
        IRB_REQ_ALLOCATE_ADDRESS_RANGE                  AllocateAddressRange;
        IRB_REQ_FREE_ADDRESS_RANGE                      FreeAddressRange;
        IRB_REQ_GET_LOCAL_HOST_INFORMATION              GetLocalHostInformation;
        IRB_REQ_GET_1394_ADDRESS_FROM_DEVICE_OBJECT     Get1394AddressFromDeviceObject;
        IRB_REQ_CONTROL                                 Control;
        IRB_REQ_GET_MAX_SPEED_BETWEEN_DEVICES           GetMaxSpeedBetweenDevices;
        IRB_REQ_SET_DEVICE_XMIT_PROPERTIES              SetDeviceXmitProperties;
        IRB_REQ_SET_LOCAL_HOST_PROPERTIES               SetLocalHostProperties;
        IRB_REQ_GET_CONFIGURATION_INFORMATION           GetConfigurationInformation;
#if(NTDDI_VERSION >= NTDDI_WIN7)
        IRB_REQ_GET_CONFIG_ROM                          GetConfigRom;
#endif
        IRB_REQ_BUS_RESET                               BusReset;
        IRB_REQ_GET_GENERATION_COUNT                    GetGenerationCount;
        IRB_REQ_SEND_PHY_CONFIGURATION_PACKET           SendPhyConfigurationPacket;
#if(NTDDI_VERSION >= NTDDI_WIN7)
        IRB_REQ_SEND_PHY_PACKET                         SendPhyPacket;
        IRB_REQ_RECEIVE_PHY_PACKETS                     ReceivePhyPackets;
#endif
        IRB_REQ_GET_SPEED_TOPOLOGY_MAPS                 GetSpeedTopologyMaps;
        IRB_REQ_BUS_RESET_NOTIFICATION                  BusResetNotification;
        IRB_REQ_ASYNC_STREAM                            AsyncStream;

    } u;

} IRB, *PIRB;

//
// Irb flags specified for isoch bandwidth allocations.
//

#define IRB_FLAG_USE_PRE_CALCULATED_VALUE               1
#define IRB_FLAG_ALLOW_REMOTE_FREE                      2

//
// Flags for the SetPortProperties request.
//

#define SET_LOCAL_HOST_PROPERTIES_NO_CYCLE_STARTS       0x00000001
#if(NTDDI_VERSION >= NTDDI_WINXP)
#define SET_LOCAL_HOST_PROPERTIES_CYCLE_START_CONTROL   0x00000001
#endif
#define SET_LOCAL_HOST_PROPERTIES_GAP_COUNT             0x00000002
#define SET_LOCAL_HOST_PROPERTIES_MODIFY_CROM           0x00000003
#if(NTDDI_VERSION >= NTDDI_WINXP)
#define SET_LOCAL_HOST_PROPERTIES_MAX_PAYLOAD           0x00000004
#endif
#if(NTDDI_VERSION >= NTDDI_VISTA)
#define SET_LOCAL_HOST_PROPERTIES_DEBUG_ENTRY           0x00000005
#endif

//
// Definitions of the structures that correspond to the Host info levels.
//

#if(NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _SET_LOCAL_HOST_PROPS1 {
    ULONG       fulFlags;
} SET_LOCAL_HOST_PROPS1, *PSET_LOCAL_HOST_PROPS1;
#endif

typedef struct _SET_LOCAL_HOST_PROPS2 {
    ULONG       GapCountLowerBound;
} SET_LOCAL_HOST_PROPS2, *PSET_LOCAL_HOST_PROPS2;

//
// Definition for appending a properly formated Config Rom subsection, to
// the core config rom exposed by the PC.
// The first element of the submitted buffer must be a unit directory and any
// offset to other leafs/dir following it, must be indirect offsets from the
// beginning of the submitted buffer.
// The bus driver will then add a pointer to this unit dir, in our root directory.
// The entire supplied buffer must be in big endian with CRCs pre-calculated.
// If a driver fails to remove its added crom data, when it gets removed, the bus driver
// will do so automatically, restoring the crom image prior to this modification.
//

typedef struct _SET_LOCAL_HOST_PROPS3 {

    ULONG       fulFlags;
    HANDLE      hCromData;
    ULONG       nLength;
    PMDL        Mdl;

} SET_LOCAL_HOST_PROPS3, *PSET_LOCAL_HOST_PROPS3;

//
// Params for setting max payload size to less than the port driver
// default to assuage ill-behaved legacy devices.  Valid values
// for the MaxAsyncPayloadRequested field are those corresponding
// to the ASYNC_PAYLOAD_###_RATE constants and zero (which will
// restore the port driver default values).  On successful completion
// of this request the MaxAsyncPayloadResult will contain the
// updated max async payload value in use.
//
// On successful completion of this request it is the caller's
// responsibility to request a bus reset in order to propagate
// these new values to other device stacks.
//
// Failure to restore default port driver values as appropriate
// (e.g. on legacy device removal) may result in degraded bus
// performance.
//

#if(NTDDI_VERSION >= NTDDI_WINXP)
typedef struct _SET_LOCAL_HOST_PROPS4 {
    ULONG       MaxAsyncPayloadRequested;
    ULONG       MaxAsyncPayloadResult;
} SET_LOCAL_HOST_PROPS4, *PSET_LOCAL_HOST_PROPS4;
#endif

//
// This is used to set the extended key value that is
// used for 1394 debug.

#if(NTDDI_VERSION >= NTDDI_VISTA)
typedef struct _SET_LOCAL_HOST_PROPS5 {
    ULONG       DebugAddress;
} SET_LOCAL_HOST_PROPS5, *PSET_LOCAL_HOST_PROPS5;
#endif

//
// Definition of Flags for SET_LOCAL_HOST_PROPERTIES_MODIFY_CROM.
//

#define SLHP_FLAG_ADD_CROM_DATA                         0x01
#define SLHP_FLAG_REMOVE_CROM_DATA                      0x02

//
// Definition of fulFlags in Async Read/Write/Lock requests.
//

#define ASYNC_FLAGS_NONINCREMENTING                     0x00000001

//
// Flag instucts the port driver to NOT take an int for checking the status
// of this transaction. Always return success.
//

#define ASYNC_FLAGS_NO_STATUS                           0x00000002

//
// If this flag is set the read packet is going to be used as a PING packet also.
// we are going to determine, in units of micro secs, the delay
// between Tx of the async packet and reception of ACK_PENDING or ACK_COMPLETE.
//

#define ASYNC_FLAGS_PING                                0x00000004

//
// When this flag is set, the bus driver will use 63 as the node id, so this message
// is broadcast to all nodes.
//

#define ASYNC_FLAGS_BROADCAST                           0x00000008

//
// Definition of fulAccessType for AllocateAddressRange.
//

#define ACCESS_FLAGS_TYPE_READ                          1
#define ACCESS_FLAGS_TYPE_WRITE                         2
#define ACCESS_FLAGS_TYPE_LOCK                          4
#define ACCESS_FLAGS_TYPE_BROADCAST                     8

//
// Definition of fulNotificationOptions for AllocateAddressRange.
//

#define NOTIFY_FLAGS_NEVER                              0
#define NOTIFY_FLAGS_AFTER_READ                         1
#define NOTIFY_FLAGS_AFTER_WRITE                        2
#define NOTIFY_FLAGS_AFTER_LOCK                         4

//
// Definitions of Speed flags used throughout 1394 Bus APIs.
//

#define SPEED_FLAGS_100                                 0x01
#define SPEED_FLAGS_200                                 0x02
#define SPEED_FLAGS_400                                 0x04
#define SPEED_FLAGS_800                                 0x08
#define SPEED_FLAGS_1600                                0x10
#define SPEED_FLAGS_3200                                0x20
#define SPEED_FLAGS_FASTEST                             0x80000000

//
// Definitions of Channel flags.
//

#define ISOCH_ANY_CHANNEL                               0xffffffff
#define ISOCH_MAX_CHANNEL                               63

//
// Definitions of Bus Reset flags (used when Bus driver asks Port driver
// to perform a bus reset).
//

#define BUS_RESET_FLAGS_PERFORM_RESET                   1
#define BUS_RESET_FLAGS_FORCE_ROOT                      2

//
// Definitions of Lock transaction types.
//

#define LOCK_TRANSACTION_MASK_SWAP                      1
#define LOCK_TRANSACTION_COMPARE_SWAP                   2
#define LOCK_TRANSACTION_FETCH_ADD                      3
#define LOCK_TRANSACTION_LITTLE_ADD                     4
#define LOCK_TRANSACTION_BOUNDED_ADD                    5
#define LOCK_TRANSACTION_WRAP_ADD                       6


//
// Definitions of Isoch Allocate Resources flags.
//

#define RESOURCE_USED_IN_LISTENING                      0x00000001
#define RESOURCE_USED_IN_TALKING                        0x00000002
#define RESOURCE_BUFFERS_CIRCULAR                       0x00000004
#define RESOURCE_STRIP_ADDITIONAL_QUADLETS              0x00000008
#define RESOURCE_TIME_STAMP_ON_COMPLETION               0x00000010
#define RESOURCE_SYNCH_ON_TIME                          0x00000020
#define RESOURCE_USE_PACKET_BASED                       0x00000040
#define RESOURCE_VARIABLE_ISOCH_PAYLOAD                 0x00000080
#define RESOURCE_USE_MULTICHANNEL                       0x00000100

//
// Definitions of Isoch Descriptor flags.
//

#define DESCRIPTOR_SYNCH_ON_SY                          0x00000001
#define DESCRIPTOR_SYNCH_ON_TAG                         0x00000002
#define DESCRIPTOR_SYNCH_ON_TIME                        0x00000004
#define DESCRIPTOR_USE_SY_TAG_IN_FIRST                  0x00000008
#define DESCRIPTOR_TIME_STAMP_ON_COMPLETION             0x00000010
#define DESCRIPTOR_PRIORITY_TIME_DELIVERY               0x00000020
#define DESCRIPTOR_HEADER_SCATTER_GATHER                0x00000040
#define DESCRIPTOR_SYNCH_ON_ALL_TAGS                    0x00000080

//
// Definitions of Isoch synchronization flags.
//

#define SYNCH_ON_SY                                     DESCRIPTOR_SYNCH_ON_SY
#define SYNCH_ON_TAG                                    DESCRIPTOR_SYNCH_ON_TAG
#define SYNCH_ON_TIME                                   DESCRIPTOR_SYNCH_ON_TIME

//
// Definitions of levels of Host controller information.
//

#define GET_HOST_UNIQUE_ID                              1
#define GET_HOST_CAPABILITIES                           2
#define GET_POWER_SUPPLIED                              3
#define GET_PHYS_ADDR_ROUTINE                           4
#define GET_HOST_CONFIG_ROM                             5
#define GET_HOST_CSR_CONTENTS                           6
#define GET_HOST_DMA_CAPABILITIES                       7
#if(NTDDI_VERSION >= NTDDI_WIN7)
#define GET_HOST_DDI_VERSION                            8
#endif

//
// Definitions of the structures that correspond to the Host info levels.
//

typedef struct _GET_LOCAL_HOST_INFO1 {
    LARGE_INTEGER       UniqueId;
} GET_LOCAL_HOST_INFO1, *PGET_LOCAL_HOST_INFO1;

typedef struct _GET_LOCAL_HOST_INFO2 {
    ULONG               HostCapabilities;
    ULONG               MaxAsyncReadRequest;
    ULONG               MaxAsyncWriteRequest;
} GET_LOCAL_HOST_INFO2, *PGET_LOCAL_HOST_INFO2;

typedef struct _GET_LOCAL_HOST_INFO3 {
    ULONG               deciWattsSupplied;
    ULONG               Voltage;                    // x10 -> +3.3 == 33
                                                    // +5.0 == 50,+12.0 == 120
                                                    // etc.
} GET_LOCAL_HOST_INFO3, *PGET_LOCAL_HOST_INFO3;

//                                               l
// Physical mapping routine.
//

typedef
_Must_inspect_result_
_IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
(*PPORT_PHYS_ADDR_ROUTINE) (
    _In_ PVOID      Context,
    _Inout_ PIRB    Irb
    );

//
// Callback from Physical Mapping routine, indicating its done.
//

typedef
_IRQL_requires_(DISPATCH_LEVEL)
void
(*PPORT_ALLOC_COMPLETE_NOTIFICATION) (
    _In_ PVOID  Context
    );

typedef struct _GET_LOCAL_HOST_INFO4 {
    PPORT_PHYS_ADDR_ROUTINE PhysAddrMappingRoutine;
    PVOID                   Context;
} GET_LOCAL_HOST_INFO4, *PGET_LOCAL_HOST_INFO4;

//
// The caller can set ConfigRomLength to zero, issue the request, which will
// be failed with STATUS_INVALID_BUFFER_SIZE and the ConfigRomLength will be set
// by the port driver to the proper length. The caller can then re-issue the request
// after it has allocated a buffer for the configrom with the correct length.
// Same is true for the GET_LOCAL_HOST_INFO6 call.
//

typedef struct _GET_LOCAL_HOST_INFO5 {
    PVOID                   ConfigRom;
    ULONG                   ConfigRomLength;
} GET_LOCAL_HOST_INFO5, *PGET_LOCAL_HOST_INFO5;

typedef struct _GET_LOCAL_HOST_INFO6 {
    ADDRESS_OFFSET          CsrBaseAddress;
    ULONG                   CsrDataLength;
    PVOID                   CsrDataBuffer;
} GET_LOCAL_HOST_INFO6, *PGET_LOCAL_HOST_INFO6;

typedef struct _GET_LOCAL_HOST_INFO7_W2K {
    ULONG                   HostDmaCapabilities;
    ULARGE_INTEGER          MaxDmaBufferSize;
    ULONG                   MaxOutstandingXmitRequests;
    ULONG                   MaxOutstandingXmitResponses;
} GET_LOCAL_HOST_INFO7_W2K, *PGET_LOCAL_HOST_INFO7_W2K;

typedef struct _GET_LOCAL_HOST_INFO7_WXP {
    ULONG                   HostDmaCapabilities;
    ULARGE_INTEGER          MaxDmaBufferSize;
} GET_LOCAL_HOST_INFO7_WXP, *PGET_LOCAL_HOST_INFO7_WXP;

#if(NTDDI_VERSION < NTDDI_WINXP)
typedef GET_LOCAL_HOST_INFO7_W2K GET_LOCAL_HOST_INFO7, *PGET_LOCAL_HOST_INFO7;
#else
typedef GET_LOCAL_HOST_INFO7_WXP GET_LOCAL_HOST_INFO7, *PGET_LOCAL_HOST_INFO7;
#endif

#if(NTDDI_VERSION >= NTDDI_WIN7)

typedef struct _GET_LOCAL_HOST_INFO8 {
    USHORT                  MajorVersion;
    USHORT                  MinorVersion;
} GET_LOCAL_HOST_INFO8, *PGET_LOCAL_HOST_INFO8;

#endif

//
// Definitions of capabilities in Host info level 2.
//

#define HOST_INFO_PACKET_BASED                          0x00000001
#define HOST_INFO_STREAM_BASED                          0x00000002
#define HOST_INFO_SUPPORTS_ISOCH_STRIPPING              0x00000004
#define HOST_INFO_SUPPORTS_START_ON_CYCLE               0x00000008
#define HOST_INFO_SUPPORTS_RETURNING_ISO_HDR            0x00000010
#define HOST_INFO_SUPPORTS_ISO_HDR_INSERTION            0x00000020
#if(NTDDI_VERSION < NTDDI_WINXP)
#define HOST_INFO_SUPPORTS_DV_CIP_STRIPPING             0x00000040
#else
#define HOST_INFO_SUPPORTS_ISO_DUAL_BUFFER_RX           0x00000040
#define HOST_INFO_DMA_DOUBLE_BUFFERING_ENABLED          0x00000080
#endif

//
// Definitions of flags for GetMaxSpeedBetweenDevices and
// Get1394AddressFromDeviceObject.
//

#define USE_LOCAL_NODE                                  1
#define USE_SCODE_SPEED                                 0x00000002

//
// Definitions of flags for IndicationFlags in INDICATION_INFO struct.
//

#define BUS_RESPONSE_IS_RAW                             1

//
// Definition of flags for BusResetNotification Irb.
//

#define REGISTER_NOTIFICATION_ROUTINE                   1
#define DEREGISTER_NOTIFICATION_ROUTINE                 2
#if(NTDDI_VERSION >= NTDDI_WIN7)
#define EXTENDED_NOTIFICATION_ROUTINE                   0x00000004
#endif

//
// Definition of flags for AllocateAddressRange Irb.
//

#if(NTDDI_VERSION < NTDDI_WINXP)
#define BIG_ENDIAN_ADDRESS_RANGE                        1
#else
#define ALLOCATE_ADDRESS_FLAGS_USE_BIG_ENDIAN           1
#define ALLOCATE_ADDRESS_FLAGS_USE_COMMON_BUFFER        2
#endif

//
// Definitions below are included for legacy support.
//

#define IRP_MN_BUS_RESET                        0x87

#define DEVICE_EXTENSION_TAG                    0xdeadbeef
#define VIRTUAL_DEVICE_EXTENSION_TAG            0xdeafbeef

#define PORT_EXTENSION_TAG                      0xdeafcafe
#define BUS_EXTENSION_TAG                       0xabacadab
#define ISOCH_RESOURCE_TAG                      0xbabeface
#define BANDWIDTH_ALLOCATE_TAG                  0xfeedbead

#define SPEED_MAP_LENGTH                        0x3f1

//
// 1394A Network channels register format.
//

typedef struct _NETWORK_CHANNELS {
    ULONG               NC_Channel:6;           // bits 0-5
    ULONG               NC_Reserved:18;         // bits 6-23
    ULONG               NC_Npm_ID:6;            // bits 24-29
    ULONG               NC_Valid:1;             // bit  30
    ULONG               NC_One:1;               // bit  31
} NETWORK_CHANNELSR, *PNETWORK_CHANNELS;

//
// These guys are meant to be called from a ring 3 app.
// Call through the port device object.
//

#define IOCTL_1394_TOGGLE_ENUM_TEST_ON          CTL_CODE(            \
                                                FILE_DEVICE_UNKNOWN, \
                                                0x88,                \
                                                METHOD_BUFFERED,     \
                                                FILE_ANY_ACCESS      \
                                                )

#define IOCTL_1394_TOGGLE_ENUM_TEST_OFF         CTL_CODE(            \
                                                FILE_DEVICE_UNKNOWN, \
                                                0x89,                \
                                                METHOD_BUFFERED,     \
                                                FILE_ANY_ACCESS      \
                                                )

//
// 1394 ByteSwap definitions.
//

#if(NTDDI_VERSION < NTDDI_WINXP)
#if defined(_X86_)

ULONG static __inline
bswap(ULONG value)
{
    __asm mov eax, value
    __asm bswap eax
}
#else
#define bswap(value)    RtlUlongByteSwap(value)
#endif

#define bswapw(value) ( (((USHORT) (value)) & 0x00ff) << 8 | \
                        (((USHORT) (value)) & 0xff00) >> 8)

#else
#define bswap(value)    RtlUlongByteSwap(value)
#define bswapw(value)   RtlUshortByteSwap(value)
#endif

//
// These are definitions that are only used internally to 1394.
//

#define MAX_SUFFIX_SIZE                         4*sizeof(WCHAR)

//
// Definition of minidriver capability bits.
//

//
// Specifies port driver has no special capabilities.
//

#define PORT_SUPPORTS_NOTHING                   0

//
// Specifies port driver implements the core 1394 CSRs internally.  These
// may be implemented in software/hardware.  When this bit is ON, all
// local read/write requests to the core CSRs are passed down to the
// port driver, and the 1394 Bus driver does not issue "listens" for
// the virtual CSR locations.  If this bit is OFF, the 1394 Bus driver
// mimicks the core 1394 CSRs.  The core CSRs are defined as
// Bandwidth Units, Channels Available and the  entire 1k of ConfigROM.
//

#define PORT_SUPPORTS_CSRS                      1

//
// Specifies port driver implements large Async Read/Write requests.
// If this bit is ON, the 1394 Bus driver will NOT chop up Async requests
// based on speed constraints (i.e. 512 bytes at 100Mbps, 1024 bytes at
// 200Mbps, etc.).  Otherwise the 1394 Bus driver WILL chop up large
// requests into speed constrained sizes before handing them to the port
// driver.
//

#define PORT_SUPPORTS_LARGE_ASYNC               2

//
// Specifies port driver indicates packet headers to the bus driver in the
// native format of the bus driver (as defined by the structs in this file.
// If this capability bit is turned on, the bus driver will not need to byte
// swap headers to get the packet headers in the right format before acting
// on them.  This bit is used on indication or reception of packets only, as
// the bus driver doesn't try to assemble packet headers on transmission.
//

#define PORT_SUPPORTS_NATIVE_ENDIAN             4

#if(NTDDI_VERSION >= NTDDI_WINXP)
//
// if present port driver supports WMI.
//

#define PORT_SUPPORTS_WMI                       8
#endif

//
// Definitions of Bus Reset informative states.
//

#define BUS_RESET_BEGINNING                     0x00000001
#define BUS_RESET_FINISHED                      0x00000002
#define BUS_RESET_LOCAL_NODE_IS_ROOT            0x00000004
#define BUS_RESET_LOCAL_NODE_IS_ISOCH_MANAGER   0x00000008
#define BUS_RESET_LOCAL_NODE_IS_BUS_MANAGER     0x00000010
#define BUS_RESET_SELFID_ENUMERATION_ERROR      0x00000020
#define BUS_RESET_STORM_ERROR                   0x00000040
#define BUS_RESET_ABSENT_ON_POWER_UP            0x00000080
#define BUS_RESET_UNOPTIMIZED_TOPOLOGY          0x00000100


//
// Device Extension common to all nodes that the 1394 Bus driver
// created when it enumerated the bus and found a new unique node.
//

typedef struct _NODE_DEVICE_EXTENSION {

    //
    // Holds Tag to determine if this is really a "Node" Device Extension.
    //

    ULONG Tag;

    //
    // Holds the flag as to whether or not we've read the configuration
    // information out of this device.
    //

    BOOLEAN bConfigurationInformationValid;

    //
    // Holds the Configuration Rom for this device.  Multi-functional
    // devices (i.e. many units) will share this same Config Rom
    // structure, but they are represented as a different Device Object.
    // This is not the entire Config Rom, but does contain the root directory
    // as well as everything in front of it.
    //

    PCONFIG_ROM ConfigRom;

    //
    // Holds the length of the UnitDirectory pointer.
    //

    ULONG UnitDirectoryLength;

    //
    // Holds the Unit Directory for this device.  Even on multi-functional
    // devices (i.e. many units) this should be unique to each Device Object.
    //

    PVOID UnitDirectory;

    //
    // Holds the Unit Directory location for this device.  Only the lower 48
    // bits are valid in this IO_ADDRESS.  Useful for computing offsets from
    // within the UnitDirectory as all offsets are relative.
    //

    IO_ADDRESS UnitDirectoryLocation;

    //
    // Holds the length of the UnitDependentDirectory pointer.
    //

    ULONG UnitDependentDirectoryLength;

    //
    // Holds the Unit Dependent directory for this device.
    //

    PVOID UnitDependentDirectory;

    //
    // Holds the Unit Dependent Directory location for this device.  Only the
    // lower 48 bits are valid in this IO_ADDRESS.  Useful for computing
    // offsets from within the UnitDependentDirectory as offsets are relative.
    //

    IO_ADDRESS UnitDependentDirectoryLocation;

    //
    // Holds the length of the VendorLeaf pointer.
    //

    ULONG VendorLeafLength;

    //
    // Holds the pointer to the Vendor Leaf information
    //

    PTEXTUAL_LEAF VendorLeaf;

    //
    // Holds the length of the VendorLeaf pointer.
    //

    ULONG ModelLeafLength;

    //
    // Holds the pointer to the Model Leaf information.
    //

    PTEXTUAL_LEAF ModelLeaf;

    //
    // Holds the 1394 10 bit BusId / 6 bit NodeId structure.
    //

    NODE_ADDRESS NodeAddress;

    //
    // Holds the speed to be used in reaching this device.
    //

    UCHAR Speed;

    //
    // Holds the priority at which to send packets.
    //

    UCHAR Priority;

    //
    // Holds the Irp used to notify this device object about events.
    //

    PIRP Irp;

    //
    // Holds the Device Object that this Device Extension hangs off of.
    //

    PDEVICE_OBJECT DeviceObject;

    //
    // Holds the Port Device Object that this Device hangs off of.
    //

    PDEVICE_OBJECT PortDeviceObject;

    //
    // Holds the pointer to corresponding information about this deivce
    // in the bus driver's head.
    //

    PVOID DeviceInformation;

    //
    // Holds the pointer to the bus reset notification routine (if any).
    //

    PBUS_BUS_RESET_NOTIFICATION ResetRoutine;

    //
    // Holds the pointer to the context the client wanted when bus reset occurs.
    //

    PVOID ResetContext;

} NODE_DEVICE_EXTENSION, *PNODE_DEVICE_EXTENSION;

//
// Definition of Bandwidth allocation structure.
//

typedef struct _BANDWIDTH_ALLOCATION {

    //
    // Holds the list of allocation entries.
    //

    LIST_ENTRY                      AllocationList;

    //
    // Holds the tag of this structure.
    //

    ULONG                           Tag;

    //
    // Holds the Bandwidth units that this allocation owns.
    //

    ULONG                           OwnedUnits;

    //
    // Holds the speed at which this bandwidth was allocated.
    //

    ULONG                           fulSpeed;

    //
    // Holds whether or not this was a local or remote allocation.
    //

    BOOLEAN                         bRemoteAllocation;

    //
    // Holds the generation of the bus when this bandwidth was secured.
    //

    ULONG                           Generation;

    //
    // Holds the owner of this allocation.
    //

    PNODE_DEVICE_EXTENSION          DeviceExtension;

} BANDWIDTH_ALLOCATION, *PBANDWIDTH_ALLOCATION;


#ifdef __cplusplus
}
#endif

#endif      // _1394_H_

