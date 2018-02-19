/*++

Copyright (c) 1993-2003  Microsoft Corporation

Module Name:

    sffdisk.h

Abstract:

    This header file defines constants and types for accessing functionality
    specific to SFF (Small Form Factor) storage devices.


--*/

#ifndef _SFFDISK_H_
#define _SFFDISK_H_

#if _MSC_VER >= 1200
#pragma warning(push)
#endif
#pragma warning(disable:4200) // array[0] is not a warning for this file


//
// IOCTL codes.
//

#define IOCTL_SFFDISK_QUERY_DEVICE_PROTOCOL \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a0, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SFFDISK_DEVICE_COMMAND \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a1, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define IOCTL_SFFDISK_DEVICE_PASSWORD \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a2, METHOD_BUFFERED, FILE_WRITE_ACCESS)

#define IOCTL_SFFDISK_PARTITION_ACCESS \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a3, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SFFDISK_MMC_SOFT_RESET \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a4, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SFFDISK_MMC_QUERY_EXT_CSD \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a5, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_SFFDISK_MMC_QUERY_BKOPS_STATE \
            CTL_CODE( FILE_DEVICE_DISK, 0x7a6, METHOD_BUFFERED, FILE_ANY_ACCESS)


//
// Protocol GUIDs that are returned in SFFDISK_QUERY_DEVICE_PROTOCOL_DATA structure
//
#define GUID_SFF_PROTOCOL_SD   { 0xAD7536A8, 0xD055, 0x4c40, { 0xAA, 0x4D, 0x96, 0x31, 0x2D, 0xDB, 0x6B, 0x38 } }

#define GUID_SFF_PROTOCOL_MMC  { 0x77274D3F, 0x2365, 0x4491, { 0xA0, 0x30, 0x8B, 0xB4, 0x4A, 0xE6, 0x00, 0x97 } }

//
// Structures
//


//
// Structure used in IOCTL_SFFDISK_QUERY_DEVICE_PROTOCOL
//

typedef struct _SFFDISK_QUERY_DEVICE_PROTOCOL_DATA {
    //
    // size of this structure in bytes to be filled in by the caller
    //
    USHORT Size;
    USHORT Reserved;

    //
    // This GUID is returned by the protocol which uniquely identifies it.
    //

    GUID ProtocolGUID;

} SFFDISK_QUERY_DEVICE_PROTOCOL_DATA, *PSFFDISK_QUERY_DEVICE_PROTOCOL_DATA;


//
// Structure used in IOCTL_SFFDISK_DEVICE_COMMAND
// The layout of the buffer passed to this IOCTL is as follows:
//
//        +-----------------------------+
//        | header (this structure)     |
//        +-----------------------------+
//        | protocol arguments          |
//        +-----------------------------+
//        | device data buffer          |
//        +-----------------------------+
//
// The actual layout of the protocol arguments depends on the protocol of
// the target device. So as an example, if the target device an SD (Secure Digital)
// storage device, then the protocol arguments would consist of an SDCMD_DESCRIPTOR,
// which is defined in SDDEF.H. The SD argument for the command should be stored
// in the "Information" field of this structure. In that case, ProtocolArgumentSize
// would be sizeof(SDCMD_DESCRIPTOR).
//
// The three size fields in the structure (HeaderSize, ProtocolArgumentSize,
// DeviceDataBufferSize) each hold the length in bytes of each respective area as
// described by the diagram above. Thus, the entire length of the buffer must be
// at least as large as the sum of these three fields.
//


typedef enum {
    SFFDISK_DC_GET_VERSION = 0,
    SFFDISK_DC_LOCK_CHANNEL,
    SFFDISK_DC_UNLOCK_CHANNEL,
    SFFDISK_DC_DEVICE_COMMAND,
} SFFDISK_DCMD;

//
// SFFDISK_DEVCMD_FLAG_APPEND_CMD_SEQ tells the SD stack that 
// the command is being appended to an earlier command 
// sequence and that no internal commands should be inserted 
// before this command.
//
// Typically this means the SD stack will defer things 
// like tuning sequences and not issue them before
// this command executes.
//

#define SFFDISK_DEVCMD_FLAG_APPEND_CMD_SEQ 0x0001

//
// SFFDISK_DEVCMD_FLAG_LONG_OPERATION tells the SD stack that
// the operation will assert the busy line for a very long time.
// This may require special handling as some host controllers
// may time out.
//

#define SFFDISK_DEVCMD_FLAG_LONG_OPERATION 0x0002

#define SFFDISK_DEVCMD_VALID_FLAGS       (SFFDISK_DEVCMD_FLAG_APPEND_CMD_SEQ | SFFDISK_DEVCMD_FLAG_LONG_OPERATION)

typedef struct _SFFDISK_DEVICE_COMMAND_DATA {

    //
    // size of this structure in bytes to be filled in by the caller.
    // This size does not include any data concatenated at the end.
    //
    USHORT HeaderSize;

    //
    // This field is used to pass flags to SDBUS.
    //
    
    USHORT Flags;

    //
    // command defines the type of operation
    //

    SFFDISK_DCMD Command;

    //
    // ProtocolArgumentSize is the length in bytes of the device command
    // arguments specific to the protocol of the device. This data is appended
    // to the structure after the field member "Data".
    //
    USHORT ProtocolArgumentSize;

    //
    // DeviceDataBufferSize defines the length of data being sent to, or received
    // from the device.
    //

    ULONG DeviceDataBufferSize;

    //
    // Information is a parameter or return value for the operation
    //

    ULONG_PTR Information;

    //
    // Beginning of data.
    //

    UCHAR Data[0];

} SFFDISK_DEVICE_COMMAND_DATA, *PSFFDISK_DEVICE_COMMAND_DATA;




//
// Structure used in IOCTL_SFFDISK_DEVICE_PASSWORD
//

typedef enum {
    SFFDISK_DP_IS_SUPPORTED = 0,
    SFFDISK_DP_SET_PASSWORD,
    SFFDISK_DP_LOCK_DEVICE,
    SFFDISK_DP_UNLOCK_DEVICE,
    SFFDISK_DP_RESET_DEVICE_ALL_DATA
} SFFDISK_DPCMD;

typedef struct _SFFDISK_DEVICE_PASSWORD_DATA {
    //
    // size of this structure in bytes to be filled in by the caller
    //
    USHORT Size;
    USHORT Reserved;

    //
    // command defines the type of operation
    //

    SFFDISK_DPCMD Command;

    //
    // Information is a parameter or return value for the operation
    //

    ULONG_PTR Information;

    //
    // Password length and data supplied depend on the operation
    //

    UCHAR PasswordLength;
    UCHAR NewPasswordLength;
    UCHAR Data[0];

} SFFDISK_DEVICE_PASSWORD_DATA, *PSFFDISK_DEVICE_PASSWORD_DATA;

//
// The RPMB command that sdstor should issue on behalf of the caller. Some of these constants are intentionally
// identical to the values defined in JESD84-A441/7.6.16.1 table 17 for consistency.
//

typedef enum {
    SFFDISK_RPMB_IS_SUPPORTED           = 0x00000000, // defined by Windows
    SFFDISK_RPMB_PROGRAM_AUTH_KEY       = 0x00000001, // defined in JESD84-A441/7.6.16.1 table 17
    SFFDISK_RPMB_QUERY_WRITE_COUNTER    = 0x00000002, // defined in JESD84-A441/7.6.16.1 table 17
    SFFDISK_RPMB_AUTHENTICATED_WRITE    = 0x00000003, // defined in JESD84-A441/7.6.16.1 table 17    
    SFFDISK_RPMB_AUTHENTICATED_READ     = 0x00000004, // defined in JESD84-A441/7.6.16.1 table 17
//    SFFDISK_RPMB_READ_RESULT            = 0x00000005, // implicitly issued by SDBUS, never issued by caller.    
    SFFDISK_GPP_IS_SUPPORTED            = 0x00010000, // defined by Windows
    SFFDISK_GPP_READ                    = 0x00010001, // defined by Windows
    SFFDISK_GPP_WRITE                   = 0x00010002, // defined by Windows
} SFFDISK_PARTITION_ACCESS;

//
// defined in the eMMC spec JESD84-A441, PARTITION_ACCESS bits EXT_CSD[179]
//

#define EMMC_USER_DATA_AREA                 0
#define EMMC_BOOT_PARTITION_1               1
#define EMMC_BOOT_PARTITION_2               2
#define EMMC_RPMB_PARTITION                 3
#define EMMC_GENERAL_PURPOSE_PARTITION_1    4
#define EMMC_GENERAL_PURPOSE_PARTITION_2    5
#define EMMC_GENERAL_PURPOSE_PARTITION_3    6
#define EMMC_GENERAL_PURPOSE_PARTITION_4    7

//
// This is the RPMB data frame used to compose all RPMB requests and responses.
//
// Note that the byte order is BIG ENDIAN, and the caller is responsible 
// for calculating the MAC and abiding by all the requirements of 
// JESD84-A441/7.6.16 before handing the frame to the SD storage 
// stack.  
//

// Ensure we are byte aligned
#pragma pack(push)
#pragma pack(1)

typedef struct _SFFDISK_DEVICE_RPMB_DATA_FRAME {
    UCHAR Stuff[196];               // reserved
    UCHAR KeyOrMAC[32];             // either the key to be programmed or the MAC authenticating this frame or series of frames
    UCHAR Data[256];                // the data input or output
    UCHAR Nonce[16];                // random 128-bit number generated by host
    UCHAR WriteCounter[4];          // 32-bit counter
    UCHAR Address[2];               // the half-sector address to operate on
    UCHAR BlockCount[2];            // the count of half-sector blocks to read/write
    UCHAR OperationResult[2];       // the result of the operation
    UCHAR RequestOrResponseType[2]; // the type of request or response
} SFFDISK_DEVICE_RPMB_DATA_FRAME, *PSFFDISK_DEVICE_RPMB_DATA_FRAME;

//
// This is the IOCTL_SFFDISK_PARTITION_ACCESS structure.
// This IOCTL allows users of SD storage devices to gain access
// to the GPP or RPMB of eMMC compliant storage devices.
//
// This structure is variable sized with a header at the beginning.
//
// IOCTL_SFFDISK_PARTITION_ACCESS IS *KERNEL MODE ONLY* IN FREE BUILDS.
// In CHK builds it is available to user mode for test purposes only.
//
// Please note that programming the RPMB key is also blocked in FREE builds.
//

typedef struct _SFFDISK_DEVICE_PARTITION_ACCESS_DATA {

    //
    // for versioning purposes, must be set to sizeof(SFFDISK_DEVICE_PARTITION_ACCESS_DATA).
    // IE the size of this struct definition.
    // 

    ULONG Size;

    //
    // command defines the type of operation requested
    //

    SFFDISK_PARTITION_ACCESS Command;

    ULONG Reserved[2];
    
    //
    // the actual command parameters
    //

    union {

        struct {
            // 0 if not supported, RPMB size in bytes otherwise            
            ULONG SizeInBytes; 

            // 0 if not supported, minimum 512 bytes            
            ULONG MaxReliableWriteSizeInBytes;
        } RpmbIsSupported;

        struct {
            ULONG Reserved[4];
        
            // the single frame containing the result of the programming
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;
        
            // the single frame containing the program auth key request
            SFFDISK_DEVICE_RPMB_DATA_FRAME ProgramAuthKeyFrame;
        } RpmbProgramAuthKey;

        struct {
            ULONG Reserved[4];
            
            // the single frame containing the result of the query
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;
            
            // the single frame containing the query write counter request
            SFFDISK_DEVICE_RPMB_DATA_FRAME QueryWriteCounterFrame;
        } RpmbQueryWriteCounter;

        struct {
            // the count of frames to be written            
            ULONG CountToWrite;
            ULONG Reserved[3];
            
            // the single response frame from the RPMB
            SFFDISK_DEVICE_RPMB_DATA_FRAME ResultFrame;

            // the variable sized frame data to write follows inside this buffer
            // the size should be CountToWrite*sizeof(SFFDISK_DEVICE_RPMB_DATA_FRAME)
            SFFDISK_DEVICE_RPMB_DATA_FRAME FrameDataToWrite[1];
        } RpmbAuthenticatedWrite;

        struct {
            // the number of frames to read
            ULONG CountToRead;
            ULONG Reserved[3];
            
            // the single frame containing the read request
            SFFDISK_DEVICE_RPMB_DATA_FRAME AuthenticatedReadFrame;
            
            // the variable sized frame data read follows inside this buffer
            // the size should be CountToRead*sizeof(SFFDISK_DEVICE_RPMB_DATA_FRAME)
            SFFDISK_DEVICE_RPMB_DATA_FRAME ReturnedFrameData[1];
        } RpmbAuthenticatedRead;

        struct {
            // 0 if not supported, GPP size in bytes otherwise
            ULONGLONG Gpp_1_SizeInBytes; 
            ULONGLONG Gpp_2_SizeInBytes; 
            ULONGLONG Gpp_3_SizeInBytes; 
            ULONGLONG Gpp_4_SizeInBytes; 

            // The block size (typically 512 bytes)
            ULONG     GppBlockSize;
        } GppIsSupported;
        
        struct {
            // the GPP partition id to target the operation
            ULONG       GppPartitionId;

            // the length of the read or write
            ULONG       Length;

            // the offset of the read or write
            ULONGLONG   Offset;

            // the variable sized data follows inside this buffer
            // the size should be Length bytes
            // Length should be a multiple of the block size.
            // there is enough reserved in the struct for 1024 bytes of data.
            UCHAR       Data[1024];
        } GppReadWrite;
        
    } Parameters;

    //
    // Nothing can ever be defined here, as it will overlap with the variable sized 
    // frame data inside the Parameters union.
    //
    
} SFFDISK_DEVICE_PARTITION_ACCESS_DATA, *PSFFDISK_DEVICE_PARTITION_ACCESS_DATA;

//
// The device interface for IOCTL_SFFDISK_PARTITION_ACCEESS
//

DEFINE_GUID(GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_RPMB, 0x27447c21L, 0xbcc3, 0x4d07, 0xa0, 0x5b, 0xa3, 0x39, 0x5b, 0xb4, 0xee, 0xe7);
DEFINE_GUID(GUID_DEVINTERFACE_EMMC_PARTITION_ACCESS_GPP , 0x2e0e2e39L, 0x1f19, 0x4595, 0xa9, 0x06, 0x88, 0x78, 0x82, 0xe7, 0x39, 0x03);

// defined by eMMC spec
#define SFFDISK_BKOPS_IS_SUPPORTED (0x00000001) 
#define SFFDISK_BKOPS_IS_ENABLED   (0x00000001)

// defined by eMMC spec
#define SFFDISK_BKOPS_NO_OPERATIONS_NEEDED                          (0x00000000)
#define SFFDISK_BKOPS_OPERATIONS_OUTSTANDING_NON_CRITICAL           (0x00000001)
#define SFFDISK_BKOPS_OPERATIONS_OUTSTANDING_PERFORMANCE_IMPACTED   (0x00000002)
#define SFFDISK_BKOPS_OPERATIONS_OUTSTANDING_CRITICAL               (0x00000003)

typedef struct __SFFDISK_BKOPS_STATUS_DATA {
    UCHAR BkopsIsSupported; // is manual BKOPS supported by the eMMC
    UCHAR BkopsIsEnabled;   // is manual BKOPS enabled
    UCHAR BkopsStatus;      // the criticality of the BKOPS state of the device
}  SFFDISK_BKOPS_STATUS_DATA, *PSFFDISK_BKOPS_STATUS_DATA;

#pragma pack(pop)

#if _MSC_VER >= 1200
#pragma warning(pop)          // un-sets any local warning changes
#endif
#pragma warning(default:4200) // array[0] is not a warning for this file


#endif // _SFFDISK_H_
