/*++

Copyright (c) 2003  Microsoft Corporation

Module Name:

    sddef.h

Abstract:

    This is the include file that defines the basic types used
    in the SD (Secure Digital) driver stack interface. These types
    are used in conjuction with header files NTDDSD.H or SFFDISK.H.

--*/

#ifndef _SDDEFH_
#define _SDDEFH_

#if _MSC_VER > 1000
#pragma once
#endif

#if _MSC_VER >= 1200
#pragma warning(push)
#endif

//
// Disable warning: nonstandard extension used : bit field types other than int 
//

#pragma warning(disable:4214) 

#ifdef __cplusplus
extern "C" {
#endif


//
// SD device commands codes either refer to the standard command
// set (0-63), or to the "App Cmd" set, which have the same value range,
// but are preceded by the app_cmd escape (55).
//

typedef UCHAR SD_COMMAND_CODE;

typedef enum {
    SDCC_STANDARD = 0,
    SDCC_APP_CMD
} SD_COMMAND_CLASS;
//
// SDTD_READ indicates data transfer from the SD device to the host
// SDTD_WRITE indicates data transfer from the SD host to the device
//

typedef enum {
    SDTD_UNSPECIFIED = 0,
    SDTD_READ,
    SDTD_WRITE
} SD_TRANSFER_DIRECTION;


//
// Transfer type refers to the style of data transfer of the SD data
// lines. Note that a command may have a response, but still not use
// the data lines (no_data).
//

typedef enum {
    SDTT_UNSPECIFIED = 0,
    SDTT_CMD_ONLY,
    SDTT_SINGLE_BLOCK,
    SDTT_MULTI_BLOCK,
    SDTT_MULTI_BLOCK_NO_CMD12
} SD_TRANSFER_TYPE;


//
// SD transfer responses are defined in the SD spec. A given command
// will only exhibit one of these responses. But because the interface
// allows function drivers to issue undefined commands, the transfer
// response may also need to be specified.
//

typedef enum {
    SDRT_UNSPECIFIED = 0,
    SDRT_NONE,
    SDRT_1,
    SDRT_1B,
    SDRT_2,
    SDRT_3,
    SDRT_4,
    SDRT_5,
    SDRT_5B,
    SDRT_6
} SD_RESPONSE_TYPE;

//
// Response structures are mapped into the response data field in the
// request packet
//

typedef struct _SDRESP_TYPE3 {
    ULONG Reserved1:4;
    ULONG VoltageProfile:20;
    ULONG Reserved2:7;
    ULONG PowerState:1;
} SDRESP_TYPE3, *PSDRESP_TYPE3;

//
// OCR Register structure for Physical Specification Version 2.00 or higher
//
typedef struct _OCR_REGISTER_V2 {
    ULONG Reserved1:7;
    ULONG VoltageProfile1:1;
    ULONG Reserved2:7;    
    ULONG VoltageProfile2:9;
    ULONG Reserved3:6;
    ULONG CardCapacityStatus:1;
    ULONG PowerState:1;
} OCR_REGISTER_V2, *POCR_REGISTER_V2;

//
// This structure defines a specific SD device command. Function drivers
// must build this structure to pass as a parameter to the DeviceCommand request.
//
//    Cmd               - SD device code
//    CmdClass          - specifies whether the command is a standard or APP command
//    TransferDirection - direction of data on SD data lines
//    TransferType      - 3 types of commands: CmdOnly, SingleBlock or MultiBlock
//    ResponseType      - SD response type
//
// For example, a driver can issue single byte (direct) I/O reads
// to an SDIO function by first defining the following structure:
//
//      const SDCMD_DESCRIPTOR ReadIoDirectDesc =
//          {SDCMD_IO_RW_DIRECT, SDTD_STANDARD, SDTD_READ, SDTT_CMD_ONLY, SDRT_5};
//
// Then, before the call to SdbusSubmitRequest(), copy this structure
// and the argument of the command to the request packet:
//
//      sdrp->RequestFunction = SDRF_DEVICE_COMMAND;
//      sdrp->Parameters.DeviceCommand.CmdDesc = ReadIoDirectDesc;
//      sdrp->Parameters.DeviceCommand.Argument = argument;
//      status = SdBusSubmitRequest(interfaceContext, sdrp);
//
//

typedef struct _SDCMD_DESCRIPTOR {

    SD_COMMAND_CODE  Cmd;
    SD_COMMAND_CLASS CmdClass;

    SD_TRANSFER_DIRECTION TransferDirection;
    SD_TRANSFER_TYPE      TransferType;
    SD_RESPONSE_TYPE      ResponseType;

} SDCMD_DESCRIPTOR, *PSDCMD_DESCRIPTOR;


//
// Class-neutral SD device definitions
//
// Note that the SDIO arguments may be validated by the bus driver. For
// example, the bus driver will reject attempts to write into the function
// space of a different function on an SD combo card.
//

typedef struct _SD_RW_DIRECT_ARGUMENT {

    union {
        struct {
            ULONG Data:8;
            ULONG Reserved1:1;
            ULONG Address:17;
            ULONG Reserved2:1;
            ULONG ReadAfterWrite:1;
            ULONG Function:3;
            ULONG WriteToDevice:1;
        } bits;

        ULONG AsULONG;
    } u;

} SD_RW_DIRECT_ARGUMENT, *PSD_RW_DIRECT_ARGUMENT;

typedef struct _SD_RW_EXTENDED_ARGUMENT {

    union {
        struct {
            ULONG Count:9;
            ULONG Address:17;
            ULONG OpCode:1;
            ULONG BlockMode:1;
            ULONG Function:3;
            ULONG WriteToDevice:1;
        } bits;

        ULONG AsULONG;
    } u;

} SD_RW_EXTENDED_ARGUMENT, *PSD_RW_EXTENDED_ARGUMENT;

typedef enum {
    SDBUS_TRANSFER_METHOD_UNSPECIFIED = 0,
    SDBUS_TRANSFER_METHOD_PIO,          // PIO mode
    SDBUS_TRANSFER_METHOD_DB_DMA,       // Double buffer DMA
    SDBUS_TRANSFER_METHOD_ADMA2,        // ADMA2 (SD-specific scatter-gather) DMA
    SDBUS_TRANSFER_METHOD_SYSTEM_DMA    // System DMA (non-bus-mastered)
} SDBUS_TRANSFER_METHOD;

typedef enum {
    SDBUS_SPEED_MODE_NORMAL = 0,        // 25MHz or below, max 12.5MB/s (SDR12)
    SDBUS_SPEED_MODE_HIGH,              // 50MHz or below, max 25MB/s (SDR25)
    SDBUS_SPEED_MODE_SDR50,             // 104MHz or below, max 50MB/s, tuning optional
    SDBUS_SPEED_MODE_SDR104,            // 208MHz or below, max 104MB/s, tuning mandatory
    SDBUS_SPEED_MODE_DDR50,             // 50MHz or below, max 50MB/s
    SDBUS_SPEED_MODE_HS200,             // 200MHz or below, max 200MB/s. tuning mandatory
    SDBUS_SPEED_MODE_HS400              // 200MHz or below, max 400MB/s, tuning mandatory
} SDBUS_SPEED_MODE;

#define SDBUS_SPEED_MODE_HIGH_MASK      0x01
#define SDBUS_SPEED_MODE_SDR50_MASK     0x02
#define SDBUS_SPEED_MODE_SDR104_MASK    0x04
#define SDBUS_SPEED_MODE_DDR50_MASK     0x08
#define SDBUS_SPEED_MODE_HS200_MASK     0x10
#define SDBUS_SPEED_MODE_HS400_MASK     0x20

typedef struct _SD_SOCKET_DATA {
    ULONGLONG HostRegisterPhysicalBase;
    ULONGLONG HostRegisterPhysicalBaseOriginal;
    SDBUS_TRANSFER_METHOD TransferMethod;
    SDBUS_SPEED_MODE SpeedMode;
    ULONG BusClock;
    ULONG NumHpiIOs;
    USHORT SupportedSpeedModes;
    USHORT SupportedCardSpeedModes;
    BOOLEAN NonremovableDevice;
    BOOLEAN Support8BitBus;
    BOOLEAN SupportWideBus;
    BOOLEAN SupportHpi;
    BOOLEAN UseTuningForSDR50;
    BOOLEAN NeedsSoftwareRetuner;
    BOOLEAN SupportAutoCmd23;
    BOOLEAN SupportAutoCmd12;
    BOOLEAN SupportGPIOCardDetection;
    BOOLEAN SupportWriteProtect;
} SD_SOCKET_DATA, *PSD_SOCKET_DATA;

typedef struct _SDBUS_ADAPTER_SOCKET_INFO {
    SD_SOCKET_DATA SocketData[ANYSIZE_ARRAY];
} SDBUS_ADAPTER_SOCKET_INFO, *PSDBUS_ADAPTER_SOCKET_INFO;

typedef struct _SDSTOR_DEVICE_INFO {   
    ULONG PackedCommandLookaheadCount;        // times we checked ahead for packed commands 
    ULONG PackedCommandLookaheadFoundCount;   // number of packets that have been packed
    ULONG PackedCommandReadIssuedCount;       // number of times we issued a read packed command
    ULONG PackedCommandWriteIssuedCount;      // number of times we issued a write packed command
    ULONG PackedCommandBackedOutCount;        // number of times we couldn't find enough packets to pack
    ULONG PackedCommandReadCompletedCount;    // number of times we completed a read packed command
    ULONG PackedCommandWriteCompletedCount;   // number of times we completed a write packed command
    ULONG PackedCommandLastPackedReadIrpsCount;   // the number of IRPs in the last packed read command that completed.
    ULONG PackedCommandLastPackedWriteIrpsCount;  // the number of IRPs in the last packed write command that completed.
    BOOLEAN SupportPacked;
    BOOLEAN HostSupportHpi;
} SDSTOR_DEVICE_INFO, *PSDSTOR_DEVICE_INFO;

//
// Class-neutral SD codes
//
// provided here are SD command codes that are not class specific.
// Typically other codes are defined in the class driver for the
// respective device class.
//

#define SDCMD_IO_RW_DIRECT              52
#define SDCMD_IO_RW_EXTENDED            53


#ifdef __cplusplus
}
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif

#endif
