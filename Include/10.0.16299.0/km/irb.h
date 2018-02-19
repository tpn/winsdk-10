/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    irb.h

Abstract:

    Defines the interface between the Ataport and the ATA miniport drivers.

Authors:

Revision History:

--*/

#include <initguid.h>

#if (NTDDI_VERSION >= NTDDI_VISTA)

#ifndef _NTIRB_
#define _NTIRB_

#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int

#ifdef __cplusplus
extern "C"
{
#endif

//
// pre-defined channel numbers for P-ATA
//
#define PRIMARY_CHANNEL_NUMBER      0
#define SECONDARY_CHANNEL_NUMBER    1

//
// max number of devices per channel for P-ATA
//
#define MAX_IDE_DEVICE  2

#define MAX_IDE_LUN     8

#define IDE_UNTAGGED  0xFF
#define IDE_UNINITIALIZED_VALUE (-1)

#define IDE_REG_SZ          (1)
#define IDE_REG_BINARY      (3)
#define IDE_REG_DWORD       (4)

typedef PHYSICAL_ADDRESS IDE_PHYSICAL_ADDRESS, *PIDE_PHYSICAL_ADDRESS;

#undef TraceNotification
#define TraceNotification 0

#ifndef _NTDDSCSIH_

//
// Miniport ioctl header
//
typedef struct _IDE_IO_CONTROL {
        ULONG HeaderLength;
        UCHAR Signature[8];
        ULONG Timeout;
        ULONG ControlCode;
        ULONG ReturnStatus;
        ULONG DataLength;
} IDE_IO_CONTROL, *PIDE_IO_CONTROL;
#endif

//
// Notification Event Types
//
typedef enum _IDE_NOTIFICATION_TYPE {
    IdeDeviceArrival,
    IdeDeviceRemoval,
    IdePowerStateChange
} IDE_NOTIFICATION_TYPE, *PIDE_NOTIFICATION_TYPE;

//
// Callback types supported by the port driver
//
typedef enum _IDE_CALLBACK_TYPE {
    IdeTimerRoutine,
    IdeWorkerRoutine,
    IdeSynchronizedRoutine,
    IdeControllerSyncRoutine,
    IdeMaxCallbackType
} IDE_CALLBACK_TYPE, *PIDE_CALLBACK_TYPE;

//
// Device type
//
typedef enum  {
    DeviceUnknown = 0,
    DeviceIsAta,
    DeviceIsAtapi,
    DeviceNotExist
} IDE_DEVICE_TYPE;

//
// addressing mode
//
typedef enum {
    UnknownMode = 0,
    ChsMode,
    LbaMode,
    Lba48BitMode
}ATA_ADDRESS_TRANSLATION;

//
// control action for ChannelControl
//
typedef enum {
    IdeStart = 0,
    IdeStop,
    IdePowerUp,
    IdePowerDown,
    IdeVendorDefined
} IDE_CONTROL_ACTION;

//
// device power states
//
typedef enum {
    IdePowerUnSpecified = 0,
    IdePowerD0, 
    IdePowerD3
} IDE_POWER_STATE;


//
// SenseInfoBuffer return types
//
#define    SENSE_INFO_BUFFER_RETURN_TYPE_CDB             0
#define    SENSE_INFO_BUFFER_RETURN_TYPE_28BIT_TASKFILE  1
#define    SENSE_INFO_BUFFER_RETURN_TYPE_48BIT_TASKFILE  2
#define    SENSE_INFO_BUFFER_RETURN_TYPE_D2H_FIS         3

//
// power transition information
// defines a transition from 
// currentPowerState -> DesiredPowerState
//
typedef struct _IDE_POWER_INFO {
    IDE_POWER_STATE CurrentPowerState;
    IDE_POWER_STATE DesiredPowerState;
} IDE_POWER_INFO, *PIDE_POWER_INFO;

typedef struct _IDE_VENDOR_DEFINED_POWER_INFO {
    UCHAR   TargetId;
    GUID    SettingGuid;
    _Field_size_bytes_(ValueLength) 
    PVOID   Value;
    ULONG   ValueLength;
} IDE_VENDOR_DEFINED_POWER_INFO, *PIDE_VENDOR_DEFINED_POWER_INFO;
    

//
// task file register contents
//
typedef struct _IDEREGISTERS {

    //
    // ATA features/error register
    //
    UCHAR bFeaturesReg;

    //
    // sector count
    //
    UCHAR bSectorCountReg;

    //
    // block number (7:0)
    //
    UCHAR bSectorNumberReg;

    //
    // cylinder number (7:0) or LBA (15:8) 
    //
    UCHAR bCylLowReg;

    //
    // cylinder number (15:8) or LBA (23:16) 
    //
    UCHAR bCylHighReg;

    //
    // device/Head and LBA (27:24)
    //
    UCHAR bDriveHeadReg;

    //
    // command/status register
    //
    UCHAR bCommandReg;

    //
    // Reserved for future use. Shall be 0
    //
    UCHAR bReserved;

} IDEREGISTERS, *PIDEREGISTERS;

//
// task file (to hold 48 bit)
//
typedef struct _IDE_TASK_FILE {
    IDEREGISTERS Current;
    IDEREGISTERS Previous;
} IDE_TASK_FILE, *PIDE_TASK_FILE;

typedef UCHAR IRB_STATUS;

//
// irb
//
typedef struct _IDE_REQUEST_BLOCK {

    //
    // IRB_FUNCTION_XXX
    //
    USHORT Function;

    //
    // IRB_STATUS_XXX
    //
    UCHAR IrbStatus;

    //
    // contents of the status and error registers
    // at the completion of the command
    //
    UCHAR AtaStatus;
    UCHAR AtaError;

    //
    // channel, target and lun ids uniquely identify the target device
    //
    UCHAR Channel;
    UCHAR TargetId;
    UCHAR Lun;
    //
    // Length of the actual CDB in the Cdb[16] array
    //
    UCHAR CdbLength;   
    
    //
    // sense info buffer length
    //
    UCHAR SenseInfoBufferLength;    

    //
    // Type of data structure returned in the SenseInfoBuffer
    //
    UCHAR SenseInfoBufferType;       

    //
    // holds the queue tag
    //
    UCHAR QueueTag;

    ULONG ReservedAsUlong;
    
    //
    // Irb Flags
    //
    ULONG IrbFlags;                 

    //
    // timeout
    //
    ULONG TimeOutValue;             

    //
    // data transfer length
    //
    ULONG DataTransferLength;       

    //
    // irb extension
    //
    PVOID IrbExtension;

    //
    // data buffer
    //
    _Field_size_bytes_(DataTransferLength) 
    PVOID DataBuffer;               

    //
    // sense buffer
    //
    _Field_size_bytes_(SenseInfoBufferLength) 
    PVOID SenseInfoBuffer;          

    //
    // Used for queueing irbs
    //
    PVOID NextIrb;

    //
    // For future use (shall be set to NULL)
    //
    PVOID Reserved;

    //
    // task file for ATA devices    or 
    // CDB for ATAPI devices        or
    // power transition information or
    // an array of chars
    // (determined by IrbFunction)
    //
    union {

        //
        // ATA Task file register contents
        //
        IDE_TASK_FILE IdeTaskFile;

        //
        // CDB for ATAPI devices
        //
        UCHAR Cdb[16];

        //
        // power transitition information
        //
        IDE_POWER_INFO PowerChange;

        //
        // array of 16 uchars
        //
        UCHAR AsUChar[16];
    };

} IDE_REQUEST_BLOCK, *PIDE_REQUEST_BLOCK;

//
// irb status
//
#define IRB_STATUS_PENDING              0x0
#define IRB_STATUS_SUCCESS              0x1
#define IRB_STATUS_DATALENGTH_MISMATCH  0x2
#define IRB_STATUS_DEVICE_ERROR         0x3
#define IRB_STATUS_INVALID_REQUEST      0x4
#define IRB_STATUS_BUS_RESET            0x5
#define IRB_STATUS_SELECTION_TIMEOUT    0x6
#define IRB_STATUS_BUSY                 0x7

//
// bit to indicate the SenseInfoBuffer holds a valid Task File
//
#define IRB_STATUS_RETURN_TASKFILE_VALID      0x10

//
// bit mask to indicate valid sense info
//
#define IRB_STATUS_AUTOSENSE_VALID      0x20

//
// 0x40 is reserved for the port driver
//
#define IRB_STATUS_INTERNAL_ERROR       0x40

//
// bit mask to indicate whether the Port driver needs to set the
// the channel EnumDevice1 registry value.
//
#define IRB_STATUS_FORCE_ENUM_DEVICE1_NEEDED  0x80

//
// irb function
//

//
// 0x100 - 0x1FF indicate ATA commands
//
#define IRB_FUNCTION_ATA_COMMAND        0x100
#define IRB_FUNCTION_ATA_IDENTIFY       0x101
#define IRB_FUNCTION_ATA_READ           0x102
#define IRB_FUNCTION_ATA_WRITE          0x103
#define IRB_FUNCTION_ATA_FLUSH          0x104
#define IRB_FUNCTION_ATA_SMART          0x105
#define IRB_FUNCTION_ATA_GPLOG          0x106

//
// 0x200 - 0x2FF indicate ATAPI commands
//
#define IRB_FUNCTION_ATAPI_COMMAND      0x200
#define IRB_FUNCTION_REQUEST_SENSE      0x201 

//
// 0x400-0x4FF indicate miniport commands
//
#define IRB_FUNCTION_MINIPORT_COMMAND   0x400
#define IRB_FUNCTION_ADAPTER_FLUSH      0x401
#define IRB_FUNCTION_SHUTDOWN           0x402
#define IRB_FUNCTION_POWER_CHANGE       0x403
#define IRB_FUNCTION_LUN_RESET          0x404
#define IRB_FUNCTION_MINIPORT_IOCTL     0x405
#define IRB_FUNCTION_POWER_REBOOT       0x406

//
// irb flags
//
#define IRB_FLAGS_DRDY_REQUIRED         0x1
#define IRB_FLAGS_USE_DMA               0x2
#define IRB_FLAGS_MAP_BUFFERS           0x4
#define IRB_FLAGS_48BIT                 0x8
#define IRB_FLAGS_PIO_MULTIPLE          0x10
#define IRB_FLAGS_RETURN_RESULTS        0x20
#define IRB_FLAGS_DATA_IN               0x40
#define IRB_FLAGS_DATA_OUT              0x80
#define IRB_FLAGS_DISCARDABLE           0x100
#define IRB_FLAGS_HIGH_PRIORITY         0x200
#define IRB_FLAGS_FORCE_ENUM_DEVICE1    0x400

//
// helper macros
//
#define IsAtapiCommand(irb)     (irb->Function & IRB_FUNCTION_ATAPI_COMMAND)
#define IsAtaCommand(irb)       (irb->Function & IRB_FUNCTION_ATA_COMMAND)
#define IsMiniportCommand(irb)  (irb->Function & IRB_FUNCTION_MINIPORT_COMMAND)
#define IsRequestSenseIrb(irb)  (irb->Function == IRB_FUNCTION_REQUEST_SENSE)
#define IsReturnResults(irb)    (irb->IrbFlags & IRB_FLAGS_RETURN_RESULTS)

#define NeedRequestSense(irb) \
    (IsAtapiCommand(irb) && \
     !IsRequestSenseIrb(irb) && \
     (irb->IrbStatus == IRB_STATUS_DEVICE_ERROR) && \
     (irb->SenseInfoBuffer != NULL) && \
     (irb->SenseInfoBufferLength > 0))

#define Is48BitIrb(irb)         (irb->IrbFlags & IRB_FLAGS_48BIT)
#define IsPioMultipleIrb(irb)   (irb->IrbFlags & IRB_FLAGS_PIO_MULTIPLE)
#define IsHighPriorityIrb(irb)  (irb->IrbFlags & IRB_FLAGS_HIGH_PRIORITY)

#define IRB_USES_DMA(irb)       (irb->IrbFlags & IRB_FLAGS_USE_DMA)

#define MARK_IRB_FOR_DMA(irb)   (irb->IrbFlags |= IRB_FLAGS_USE_DMA)
#define MARK_IRB_FOR_PIO(irb)   (irb->IrbFlags &= ~IRB_FLAGS_USE_DMA)

#define IRB_FOR_DATA_TRANSFER(irb) \
    (irb->IrbFlags & (IRB_FLAGS_DATA_IN | IRB_FLAGS_DATA_OUT))
    

#define GET_IRB_CURRENT_REG(irb)        (&((irb->IdeTaskFile).Current))
#define GET_IRB_PREVIOUS_REG(irb)       (&((irb->IdeTaskFile).Previous))

#define GET_CURRENT_REG(taskFile)       (&(taskFile)->Current)
#define GET_PREVIOUS_REG(taskFile)      (&(taskFile)->Previous)

#define GetIrbErrorReg(irb) (irb->AtaError)
#define GetIrbStatusReg(irb) (irb->AtaStatus)
#define SetIrbCommandReg(irb, cmd) (irb->IdeTaskFile.Current.bCommandReg=cmd)

//
// TargetId >= 1 implies not device0
//
#define SetIrbDeviceReg(irb, val) \
    (irb->IdeTaskFile.Current.bDriveHeadReg = ((irb->TargetId == 0x0) ? (0xA0 | val) : (0xB0 | val)))

//
// algorithm used by the port driver to set the irbFunction
// for an ATA command
//
#define IdeMapAtaCommandToIrbFunction(AtaCommand, irbFunc) \
{ \
    switch (AtaCommand) { \
    case IDE_COMMAND_IDENTIFY: \
    case IDE_COMMAND_ATAPI_IDENTIFY: \
        irbFunc = IRB_FUNCTION_ATA_IDENTIFY; \
        break; \
    case IDE_COMMAND_READ: \
    case IDE_COMMAND_READ_MULTIPLE: \
    case IDE_COMMAND_READ_DMA: \
    case IDE_COMMAND_READ_EXT: \
    case IDE_COMMAND_READ_DMA_EXT: \
    case IDE_COMMAND_READ_MULTIPLE_EXT: \
        irbFunc = IRB_FUNCTION_ATA_READ; \
        break; \
    case IDE_COMMAND_WRITE: \
    case IDE_COMMAND_WRITE_MULTIPLE: \
    case IDE_COMMAND_WRITE_DMA: \
    case IDE_COMMAND_WRITE_EXT: \
    case IDE_COMMAND_WRITE_DMA_EXT: \
    case IDE_COMMAND_WRITE_DMA_FUA_EXT: \
    case IDE_COMMAND_WRITE_MULTIPLE_EXT: \
    case IDE_COMMAND_WRITE_MULTIPLE_FUA_EXT: \
        irbFunc = IRB_FUNCTION_ATA_WRITE; \
        break; \
    case IDE_COMMAND_CHECK_POWER: \
    case IDE_COMMAND_FLUSH_CACHE: \
    case IDE_COMMAND_FLUSH_CACHE_EXT: \
        irbFunc = IRB_FUNCTION_ATA_FLUSH;\
        break; \
    case IDE_COMMAND_SMART: \
        irbFunc = IRB_FUNCTION_ATA_SMART; \
        break;\
    default:\
        irbFunc = IRB_FUNCTION_ATA_COMMAND;\
        break;\
    } \
}

//
// scatter-gather list
//
typedef struct _IDE_SCATTER_GATHER_ELEMENT {
    IDE_PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} IDE_SCATTER_GATHER_ELEMENT, *PIDE_SCATTER_GATHER_ELEMENT;

#if defined(_MSC_VER) && (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(push)
#endif
#pragma warning(disable:4200) /* nonstandard extension used : zero-sized array in struct/union */
#endif

typedef struct _IDE_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    _Field_size_(NumberOfElements) 
    IDE_SCATTER_GATHER_ELEMENT Elements[];
} IDE_SCATTER_GATHER_LIST, *PIDE_SCATTER_GATHER_LIST;

#if defined(_MSC_VER) && (_MSC_VER >= 800)
#if (_MSC_VER >= 1200)
#pragma warning(pop)
#else
#pragma warning(default:4200) /* nonstandard extension used : zero-sized array in struct/union */
#endif
#endif

//
// task file register addresses
//
typedef struct _IDE_REGISTERS_1 {
    PUCHAR RegistersBaseAddress;

    PUSHORT Data;

    union {
        PUCHAR Error;
        PUCHAR Features;
    };

    union {
        PUCHAR BlockCount;
        PUCHAR InterruptReason;
    };

    PUCHAR BlockNumber;

    union {
        PUCHAR CylinderLow;
        PUCHAR ByteCountLow;
    };

    union {
        PUCHAR CylinderHigh;
        PUCHAR ByteCountHigh;
    };

    PUCHAR DriveSelect;
    PUCHAR Command;
} IDE_REGISTERS_1, *PIDE_REGISTERS_1;

//
// device control register addresses
//
typedef struct _IDE_REGISTERS_2 {
    PUCHAR RegistersBaseAddress;

    PUCHAR DeviceControl;
    PUCHAR DriveAddress;
} IDE_REGISTERS_2, *PIDE_REGISTERS_2;

//
// access range that indicates the resources
//
typedef struct _IDE_ACCESS_RANGE {
    IDE_PHYSICAL_ADDRESS RangeStart;
    IDE_PHYSICAL_ADDRESS PhysicalRangeStart;
    ULONG            RangeLength;
    BOOLEAN          InMemory;
    UCHAR            Bar;
} IDE_ACCESS_RANGE, *PIDE_ACCESS_RANGE;

//
// the miniport's error log entry
//
typedef struct _IDE_ERROR_LOG_ENTRY {
    UCHAR IrbStatus;
    UCHAR Channel;
    UCHAR TargetId;
    UCHAR Lun;
    UCHAR UniqueId;
    UCHAR DumpDataSize;
    _Field_size_bytes_(DumpDataSize) 
    UCHAR DumpData[1];
} IDE_ERROR_LOG_ENTRY, *PIDE_ERROR_LOG_ENTRY;

//
// device characterstics flags
//

//
// Indicates that the drive has the 'removable' bit set in
// identify data (offset 128)
//
#define DFLAGS_REMOVABLE_MEDIA       (1 << 0)    
                                              
//
// Indicates whether device interrupts as DRQ is set after   
// receiving Atapi Packet Command
//
#define DFLAGS_INT_DRQ               (1 << 1)    
                                                 
//
// Device supports media status notification
//
#define DFLAGS_MSN_SUPPORT           (1 << 2)    

//
// Device can be electronically safe unplugged (such as: eSATA device)
//
#define DFLAGS_REMOVABLE_DEVICE      (1 << 3)    

//
// A device that supports 1667 protocal
//
#define DFLAGS_1667_DEVICE           (1 << 4)    

//
// Indicates device supports for FUA
//
#define DFLAGS_FUA_SUPPORT           (1 << 12)  


typedef struct _IDE_DEVICE_PARAMETERS {

    //
    // size of this structure
    //
    USHORT Version;

    //
    // device type (ata, atapi etc)
    //
    IDE_DEVICE_TYPE IdeDeviceType;

    //
    // target id
    //
    UCHAR TargetId;

    //
    // Number of Luns
    //
    UCHAR MaximumLun;

    //
    // number of requests the miniport can handle 
    // at a time for this device
    //
    UCHAR NumberOfOverlappedRequests;

    //
    // max number of blocks that can be transferred
    // using read/write multiple command
    //
    UCHAR MaxBlockXfer;

    //
    // device characteristics (removable etc)
    //
    USHORT DeviceCharacteristics;

    //
    // Geometry
    //
    ATA_ADDRESS_TRANSLATION AddressTranslation;

    union {
        LARGE_INTEGER MaxLba;
        struct {
            USHORT NumCylinders;
            USHORT NumHeads;
            USHORT NumSectorsPerTrack;
            USHORT Reserved;
        } Chs;
    };

    //
    // number of bytes per sector
    //
    ULONG BytesPerLogicalSector;

    //
    // number of bytes per sector
    //
    ULONG BytesPerPhysicalSector;
    
    //
    // number of bytes per sector
    //
    ULONG BytesOffsetForSectorAlignment;

    //
    // The transfer modes supported by this device
    //
    ULONG TransferModeSupported;

    //
    // The selected transfer mode for this device
    //
    ULONG TransferModeSelected;

} IDE_DEVICE_PARAMETERS, *PIDE_DEVICE_PARAMETERS;

_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_INITIALIZE) (
    _In_ PVOID ChannelExtension,
    _Inout_ PIDE_DEVICE_PARAMETERS DeviceParameters,
    _In_ PIDENTIFY_DEVICE_DATA IdentifyData
    );

_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_STARTIO) (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );

_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_BUILDIO) (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );

_Must_inspect_result_
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_INTERRUPT) (
    _In_ PVOID ChannelExtension
    );

_IRQL_always_function_min_(DISPATCH_LEVEL) 
_IRQL_requires_(DISPATCH_LEVEL)
typedef
VOID
//KSYNCHRONIZE_ROUTINE
(*IDE_HW_DPC) (
    _In_ PVOID ChannelExtension
    );

_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_RESET) (
    _In_ PVOID ChannelExtension
    );

_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_HW_CONTROL) (
    _In_ PVOID ChannelExtension,
    _In_ IDE_CONTROL_ACTION ControlAction,
    _Inout_opt_ PVOID Parameters
    );

//
// Indicates the operation constraints
//
typedef enum _IDE_OPERATION_MODE {
    IdeModeNormal = 0,
    IdeModeDump,
    IdeModeRemovableBay
} IDE_OPERATION_MODE, *PIDE_OPERATION_MODE;

//
// miniport hardware resources
//
typedef struct _IDE_MINIPORT_RESOURCES{

    //
    // Number of access ranges
    //
    ULONG NumberOfAccessRanges;

    //
    // array of access range elements.
    //
    _Inout_updates_(NumberOfAccessRanges)
    PIDE_ACCESS_RANGE IdeAccessRange;

} IDE_MINIPORT_RESOURCES, *PIDE_MINIPORT_RESOURCES;

typedef struct _IDE_VENDOR_DEFINED_POWER {
    UCHAR   ValidGuids;
    GUID    Guid[3];
} IDE_VENDOR_DEFINED_POWER, *PIDE_VENDOR_DEFINED_POWER;


typedef union _SUPPORTED_ADVANCES {

    struct {
        //LSB
        USHORT AdvancedChannelConfigurationSupported :1; 
        USHORT Reserved :15;
        //MSB
    };   

    USHORT AsUshort;
} SUPPORTED_ADVANCES, *PSUPPORTED_ADVANCES;

typedef union _IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT {

    struct {
        //LSB
        USHORT VendorDefinedPower :1; 
        USHORT Reserved :15;
        //MSB
    };   

    USHORT AsUshort;
} IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT, *PIDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT;

typedef struct _IDE_ADVANCED_CHANNEL_CONFIGURATION {
    USHORT Length;
    IDE_ADVANCED_CHANNEL_CONFIGURATION_FIELDS_PRESENT Present;
    IDE_VENDOR_DEFINED_POWER VendorDefinedPower;
} IDE_ADVANCED_CHANNEL_CONFIGURATION, *PIDE_ADVANCED_CHANNEL_CONFIGURATION;

typedef struct _IDE_CHANNEL_CONFIGURATION {

    //
    // Input parameters
    //

    //
    // IN only. version
    //
    USHORT Version;

    //
    // IN only. The channel number
    //
    UCHAR ChannelNumber;

    //
    // Reserved
    //
    SUPPORTED_ADVANCES SupportedAdvances;

    //
    // Operating mode
    //
    IDE_OPERATION_MODE ChannelMode;

    //
    // IN only field. Pointer to hardware resources
    //
    PIDE_MINIPORT_RESOURCES ChannelResources;

    //
    // Output parameters
    //

    //
    // Number of overlapped requests the channel can handle
    //
    UCHAR NumberOfOverlappedRequests;

    //
    // The maximum targetId. 
    // Typically (MaxNumDevices - 1)
    //
    UCHAR MaxTargetId;

    //
    // Always TRUE
    //
    BOOLEAN SyncWithIsr;

    //
    // Always TRUE
    //
    BOOLEAN SupportsWmi;

    //
    // Reserved
    //
    PIDE_ADVANCED_CHANNEL_CONFIGURATION AdvancedChannelConfiguration;

} IDE_CHANNEL_CONFIGURATION, *PIDE_CHANNEL_CONFIGURATION;


typedef struct _IDE_CHANNEL_INTERFACE {

    //
    // Input parameters
    //
    
    //
    //  Size of this structure
    //
    USHORT Version;

    //
    // The channel number
    //
    UCHAR ChannelNumber;

    //
    //  Reserved for future use
    //
    UCHAR Reserved;

    //
    // Reserved
    //
    ULONG ReservedUlong;

    //
    // Output parameters
    //
    IDE_HW_INITIALIZE    IdeHwInitialize;
    IDE_HW_BUILDIO       IdeHwBuildIo;
    IDE_HW_STARTIO       IdeHwStartIo;
    IDE_HW_INTERRUPT     IdeHwInterrupt;
    IDE_HW_RESET         IdeHwReset;
    IDE_HW_CONTROL       IdeHwControl;

} IDE_CHANNEL_INTERFACE, *PIDE_CHANNEL_INTERFACE;

_Must_inspect_result_
_IRQL_requires_same_
typedef BOOLEAN
    (* IDE_CHANNEL_INIT) (
        _In_ PVOID ChannelExtension,
        _Inout_ PIDE_CHANNEL_INTERFACE ChannelInterface,
        _Inout_opt_ PVOID InitContext
        );

typedef struct _IDE_TRANSFER_MODE_PARAMETERS {

    //
    // Input Parameters
    //          
          
    //
    // IDE Channel Number. 
    //                                       
    UCHAR ChannelNumber;

    //
    // Indicate whether devices are present
    //                                  
    IDE_DEVICE_TYPE DeviceType[MAX_IDE_DEVICE];
    
    //
    // Indicate whether devices support IO Ready Line
    //                                                
    BOOLEAN IoReadySupported[MAX_IDE_DEVICE];

    //
    // Indicate the data transfer modes devices support
    //               
    ULONG DeviceTransferModeSupported[MAX_IDE_DEVICE];

    //
    // Indicate devices' current data transfer modes
    //
    ULONG DeviceTransferModeCurrent[MAX_IDE_DEVICE];

    //
    // Output Parameters
    //          
                      
    //
    // Indicate devices' data transfer modes chosen by
    // the miniport 
    //
    ULONG DeviceTransferModeSelected[MAX_IDE_DEVICE];

} IDE_TRANSFER_MODE_PARAMETERS, *PIDE_TRANSFER_MODE_PARAMETERS;

_Must_inspect_result_
_IRQL_requires_same_
typedef BOOLEAN
    (*IDE_TRANSFER_MODE_SELECT) (
        _In_    PVOID ControllerExtension,
        _Inout_ PIDE_TRANSFER_MODE_PARAMETERS TransferModeSelect
        );

//
// possible channel state
//         
typedef enum {
    ChannelStateDisabled = 0,
    ChannelStateEnabled,
    ChannelStateUnKnown
} ATA_CHANNEL_STATE;

_Must_inspect_result_
_IRQL_requires_same_
typedef ATA_CHANNEL_STATE
    (*IDE_CHANNEL_ENABLED) (
        _In_ PVOID ControllerExtension,
        _In_ ULONG Channel
        );

typedef enum {
    IdeBusPata = 0,
    IdeBusSata,
    IdeBusUnknown
} IDE_BUS_TYPE, *PIDE_BUS_TYPE;

typedef struct _IDE_CONTROLLER_CONFIGURATION {

    //
    // size of this structure
    //
    USHORT Version;

    //
    // number of IDE channels
    //
    UCHAR NumberOfChannels;

    //
    // Operating mode
    //
    IDE_OPERATION_MODE ControllerMode;
    
    //
    // number of elements in the scatter gather list
    //
    UCHAR NumberOfPhysicalBreaks;

    //
    // maximum transfer bytes supported by the controller
    //
    ULONG MaximumTransferLength;

    //
    // Reserved for future use
    //
    BOOLEAN Reserved;

    //
    // TRUE if the controller is in native mode
    //
    BOOLEAN NativeModeEnabled;

    //
    // TRUE if the controller supports 64 bit DMA
    //
    BOOLEAN Dma64BitAddress;

    //
    // TRUE if the controller is a bus master
    //
    BOOLEAN BusMaster;

    //
    // SATA or PATA
    //
    IDE_BUS_TYPE AtaBusType;

    //
    // IN only field. Pointer to hardware resources
    //
    PIDE_MINIPORT_RESOURCES ControllerResources;

} IDE_CONTROLLER_CONFIGURATION, *PIDE_CONTROLLER_CONFIGURATION;

_Must_inspect_result_
_IRQL_requires_same_
typedef
BOOLEAN
(*IDE_ADAPTER_CONTROL) (
    _In_ PVOID ControllerExtension,
    _In_ IDE_CONTROL_ACTION ControlAction,
    _Inout_opt_ PVOID Parameters
    );

typedef struct _IDE_CONTROLLER_INTERFACE {

    //
    //  Size of this structure
    //
    USHORT Version;

    //
    //  Reserved for future use
    //
    USHORT Reserved;
    
    // Size of the controller device extension
    //
    ULONG ControllerExtensionSize;

    //
    // Size of the channel extension
    //
    ULONG ChannelExtensionSize;

    //
    // Alignment requirement
    //
    ULONG AlignmentMask;

    //
    // mini driver entry point
    //

    //
    // init routine for each channel
    //
    IDE_CHANNEL_INIT AtaChannelInitRoutine;

    //
    // channelEnabled routine
    //
    IDE_CHANNEL_ENABLED AtaControllerChannelEnabled;

    //
    // Transfer mode select routine
    //
    IDE_TRANSFER_MODE_SELECT AtaControllerTransferModeSelect;

    //
    // Adapter control routine
    //
    IDE_ADAPTER_CONTROL AtaAdapterControl;
    
} IDE_CONTROLLER_INTERFACE, *PIDE_CONTROLLER_INTERFACE;


//
// 
//
typedef struct _IDE_LBA_RANGE {
    ULONGLONG StartSector:48;
    ULONGLONG SectorCount:16;
} IDE_LBA_RANGE, *PIDE_LBA_RANGE;

// by ATA spec, the SectorCount value is 1 - 0xffff. 0 means this entry is not valid.
#define MAX_IDE_LBA_RANGE_SECTOR_COUNT_VALUE    0xffff


//
// Transfer mode support bit masks
//
#define PIO_MODE0           (1 << 0)
#define PIO_MODE1           (1 << 1)
#define PIO_MODE2           (1 << 2)
#define PIO_MODE3           (1 << 3)
#define PIO_MODE4           (1 << 4)

#define SWDMA_MODE0         (1 << 5)
#define SWDMA_MODE1         (1 << 6)
#define SWDMA_MODE2         (1 << 7)

#define MWDMA_MODE0         (1 << 8)
#define MWDMA_MODE1         (1 << 9)
#define MWDMA_MODE2         (1 << 10)

#define UDMA_MODE0          (1 << 11)
#define UDMA_MODE1          (1 << 12)
#define UDMA_MODE2          (1 << 13)
#define UDMA_MODE3          (1 << 14)
#define UDMA_MODE4          (1 << 15)
#define UDMA_MODE5          (1 << 16)

#define PIO_SUPPORT         (PIO_MODE0      | PIO_MODE1     | PIO_MODE2    | PIO_MODE3     | PIO_MODE4)
#define SWDMA_SUPPORT       (SWDMA_MODE0    | SWDMA_MODE1   | SWDMA_MODE2)
#define MWDMA_SUPPORT       (MWDMA_MODE0    | MWDMA_MODE1   | MWDMA_MODE2)
#define UDMA_SUPPORT        (UNINITIALIZED_TRANSFER_MODE & (~(PIO_SUPPORT | SWDMA_SUPPORT | MWDMA_SUPPORT)))

#define DMA_SUPPORT         (SWDMA_SUPPORT  | MWDMA_SUPPORT | UDMA_SUPPORT)
#define ALL_MODE_SUPPORT    (PIO_SUPPORT | DMA_SUPPORT)

#define PIO0                        0
#define PIO1                        1
#define PIO2                        2
#define PIO3                        3
#define PIO4                        4
#define SWDMA0                      5
#define SWDMA1                      6
#define SWDMA2                      7
#define MWDMA0                      8
#define MWDMA1                      9
#define MWDMA2                      10
#define UDMA0                       11

#ifdef MAX_XFER_MODE
#undef MAX_XFER_MODE
#endif

#define MAX_XFER_MODE               18
#define UNINITIALIZED_CYCLE_TIME    0xffffffff
#define UNINITIALIZED_TRANSFER_MODE 0x7fffffff
#define IS_DEFAULT(mode)    (!(mode & 0x80000000))

#ifdef GenTransferModeMask
#undef GenTransferModeMask
#endif

#define GenTransferModeMask(i, mode) {\
    ULONG temp=0xffffffff; \
    mode = (temp >> (31-(i)));\
}

#define GetHighestBitSet(mode, i) {\
    ULONG temp = (mode); \
    i=0; \
    while (temp) { \
        temp >>= 1; \
        i++; \
    } \
    i--; \
}

_Must_inspect_result_
_IRQL_requires_same_
ULONG
AtaPortInitializeEx(
    _In_ PVOID                      DriverObject,
    _In_ PVOID                      RegistryPath,
    _In_ PIDE_CONTROLLER_INTERFACE  ControllerInterface
    );

//
// To query PCI IDE config space data
//                                    
_IRQL_requires_same_
ULONG
AtaPortGetBusData(
    _In_ PVOID ControllerExtension,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG ConfigDataOffset,
    _In_ ULONG BufferLength
    );

//
// To save PCI IDE config space data
//                                    
_IRQL_requires_same_
ULONG
AtaPortSetBusData(
    _In_ PVOID ControllerExtension,
    _In_reads_bytes_(BufferLength)  PVOID Buffer,
    _In_ ULONG ConfigDataOffset,
    _In_ ULONG BufferLength
    );

_Must_inspect_result_
_IRQL_requires_same_
PIDE_SCATTER_GATHER_LIST
AtaPortGetScatterGatherList (
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK   Irb
    );

_Must_inspect_result_
_IRQL_requires_same_
IDE_PHYSICAL_ADDRESS
AtaPortGetPhysicalAddress (
    _In_       PVOID ChannelExtension,
    _In_opt_   PIDE_REQUEST_BLOCK Irb,
    _In_opt_   PVOID VirtualAddress,
    _Out_opt_  ULONG * Length
    );

_Must_inspect_result_
_IRQL_requires_same_
PVOID
AtaPortGetDeviceBase (
    _In_ PVOID ChannelExtension,
    _In_ IDE_PHYSICAL_ADDRESS IoAddress,
    _In_ ULONG NumberOfBytes
    );

_IRQL_requires_same_
VOID
AtaPortCompleteRequest(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );

_IRQL_requires_same_
VOID
AtaPortCompleteAllActiveRequests(
    _In_ PVOID ChannelExtension,
    _In_ UCHAR Target,
    _In_ UCHAR Lun,
    _In_ UCHAR IrbStatus
    );

_IRQL_requires_same_
VOID
AtaPortNotification(
    _In_ IDE_NOTIFICATION_TYPE NotificationType,
    _In_ PVOID ChannelExtension,
    ...
    );

_IRQL_requires_same_
VOID
AtaPortMoveMemory(
    _Out_writes_bytes_(Length) PVOID WriteBuffer,
    _In_reads_bytes_(Length) PVOID ReadBuffer,
    _In_ ULONG Length
    );

_IRQL_requires_same_
VOID
AtaPortCopyMemory(
    _Out_writes_bytes_(Length) PVOID WriteBuffer,
    _In_reads_bytes_(Length) PVOID ReadBuffer,
    _In_ ULONG Length
    );

_IRQL_requires_same_
IDE_PHYSICAL_ADDRESS
AtaPortConvertUlongToPhysicalAddress(
    _In_ ULONG_PTR UlongAddress
    );

_IRQL_requires_same_
ULONG
AtaPortConvertPhysicalAddressToUlong(
    _In_ IDE_PHYSICAL_ADDRESS Address
    );

_IRQL_requires_same_
VOID
AtaPortStallExecution(
    _In_ ULONG Delay
    );

_Must_inspect_result_
_IRQL_requires_same_
PVOID
AtaPortGetUnCachedExtension (
    _In_ PVOID ChannelExtension,
    _In_ ULONG UncachedExtensionSize,
    _In_ ULONG IrbExtensionSize
    );

VOID
AtaPortDebugPrint(
    ULONG DebugPrintLevel,
    PCCHAR DebugMessage,
    ...
    );


_IRQL_requires_same_
VOID
AtaPortLogError(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_ERROR_LOG_ENTRY ErrorLogEntry
    );

_Must_inspect_result_
_IRQL_requires_same_
PIDE_REQUEST_BLOCK
AtaPortBuildRequestSenseIrb(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );

_IRQL_requires_same_
VOID
AtaPortReleaseRequestSenseIrb(
    _In_ PVOID ChannelExtension,
    _In_ PIDE_REQUEST_BLOCK Irb
    );

_IRQL_requires_same_
VOID
AtaPortDeviceStateChange (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG BusyTimeout
    );

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRequestCallback (
    _In_ IDE_CALLBACK_TYPE CallbackType,
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine,
    _In_ ULONG TimerValue
    );

_Must_inspect_result_
_IRQL_requires_same_
_Ret_maybenull_ _Post_writable_byte_size_(BufferSize)
PVOID
AtaPortRegistryAllocateBuffer (
    _In_ PVOID ChannelExtension,
    _In_ ULONG BufferSize
    );

_IRQL_requires_same_
VOID
AtaPortRegistryFreeBuffer (
    _In_ PVOID ChannelExtension,
    _In_ PVOID Buffer
    );

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortInitializeQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ UCHAR MaxQueueTag
    );

_Must_inspect_result_
_IRQL_requires_same_
UCHAR
AtaPortAllocateQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    );

_IRQL_requires_same_
VOID
AtaPortReleaseQueueTag (
    _In_ PVOID DeviceExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ UCHAR QueueTag
    );

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _Out_writes_bytes_opt_(*BufferLength) PUCHAR Buffer,
    _Inout_   PULONG BufferLength
    );

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    );

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
AtaPortRegistryWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ BOOLEAN ChannelSubKey,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    );

VOID
__inline
AtaPortDeviceBusy (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ ULONG BusyTimeout
    )
{
    AtaPortDeviceStateChange(ChannelExtension,
                             TargetId,
                             Lun,
                             BusyTimeout
                             );
}

VOID
__inline
AtaPortDeviceReady (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun
    )
{
    AtaPortDeviceStateChange(ChannelExtension,
                             TargetId,
                             Lun,
                             0
                             );
}

_Must_inspect_result_
_IRQL_requires_same_
_Success_(return != FALSE)
BOOLEAN
__inline
AtaPortRegistryControllerKeyRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _At_(Buffer,
        _Post_notnull_
        _Pre_writable_size_(*BufferLength)
        _Post_readable_size_(*BufferLength)
        _On_failure_(_Post_maybenull_)) PUCHAR Buffer,
    _Inout_   PULONG BufferLength
    )
{
    return AtaPortRegistryRead (ChannelExtension,
                                ControllerNumber,
                                FALSE,
                                ValueName,
                                ValueType,
                                Buffer,
                                BufferLength
                                );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryControllerKeyWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWrite (ChannelExtension,
                                 ControllerNumber,
                                 FALSE,
                                 ValueName,
                                 ValueType,
                                 Buffer,
                                 BufferLength
                                 );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryControllerKeyWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWriteDeferred (ChannelExtension,
                                         ControllerNumber,
                                         FALSE,
                                         ValueName,
                                         ValueType,
                                         Buffer,
                                         BufferLength
                                         );
}

_Must_inspect_result_
_IRQL_requires_same_
_Success_(return != FALSE)
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyRead (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _At_(Buffer,
        _Post_notnull_
        _Pre_writable_size_(*BufferLength)
        _Post_readable_size_(*BufferLength)
        _On_failure_(_Post_maybenull_)) PUCHAR Buffer,
    _Inout_   PULONG BufferLength
    )
{
    return AtaPortRegistryRead (ChannelExtension,
                                ControllerNumber,
                                TRUE,
                                ValueName,
                                ValueType,
                                Buffer,
                                BufferLength
                                );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyWrite (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWrite (ChannelExtension,
                                 ControllerNumber,
                                 TRUE,
                                 ValueName,
                                 ValueType,
                                 Buffer,
                                 BufferLength
                                 );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRegistryChannelSubkeyWriteDeferred (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR ControllerNumber,
    _In_ PCHAR ValueName,
    _In_ UCHAR ValueType,
    _In_reads_bytes_(*BufferLength) PUCHAR Buffer,
    _In_ PULONG BufferLength
    )
{
    return AtaPortRegistryWriteDeferred (ChannelExtension,
                                         ControllerNumber,
                                         TRUE,
                                         ValueName,
                                         ValueType,
                                         Buffer,
                                         BufferLength
                                         );

}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestWorkerRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeWorkerRoutine, 
                                   ChannelExtension, 
                                   CallBackRoutine, 
                                   0 
                                   );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestSynchronizedRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeSynchronizedRoutine, 
                                   ChannelExtension, 
                                   CallBackRoutine, 
                                   0 
                                   );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortControllerSyncRoutine (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine
    )
{
    return AtaPortRequestCallback (IdeControllerSyncRoutine, 
                                   ChannelExtension, 
                                   CallBackRoutine, 
                                   0 
                                   );
}

_Must_inspect_result_
_IRQL_requires_same_
BOOLEAN
__inline
AtaPortRequestTimer (
    _In_ PVOID ChannelExtension,
    _In_ IDE_HW_DPC CallBackRoutine,
    _In_ ULONG TimerValue
    )
{
    return AtaPortRequestCallback(IdeTimerRoutine, 
                                  ChannelExtension, 
                                  CallBackRoutine, 
                                  TimerValue 
                                  );
}

VOID
__inline
AtaPortBusChangeDetected (
    _In_ PVOID ChannelExtension
    )
{
    AtaPortNotification(IdeDeviceArrival,
                        ChannelExtension,
                        IDE_UNTAGGED,
                        0
                        );
}


VOID
__inline
AtaPortDeviceArrived (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId
    )
{
    AtaPortNotification(IdeDeviceArrival,
                        ChannelExtension,
                        TargetId,
                        0
                        );
}

VOID
__inline
AtaPortDeviceRemoved (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId
    )
{
    AtaPortNotification(IdeDeviceRemoval,
                        ChannelExtension,
                        TargetId,
                        0
                        );
}

VOID
__inline
AtaPortRequestPowerStateChange (
    _In_ PVOID ChannelExtension,
    _In_ UCHAR TargetId,
    _In_ UCHAR Lun,
    _In_ IDE_POWER_STATE DesiredPowerState
    )
{
    AtaPortNotification(IdePowerStateChange,
                        ChannelExtension,
                        TargetId,
                        Lun,
                        DesiredPowerState
                        );
}

_IRQL_requires_same_
VOID
AtaPortQuerySystemTime (
    _Out_ PLARGE_INTEGER CurrentTime
    );
    
VOID
AtaPortDebugBreak (
    _In_ PVOID ChannelExtension
    );

VOID
AtaPortTraceNotification(
    _In_ ULONG NotificationType,
    _In_opt_ PVOID HwDeviceExtension,
    ...
    );

//
// The below I/O access routines should be forwarded to the HAL or NTOSKRNL on
// Intel platforms.
//
UCHAR
AtaPortReadPortUchar(
    _In_ PUCHAR Port
    );

USHORT
AtaPortReadPortUshort(
    _In_ PUSHORT Port
    );

ULONG
AtaPortReadPortUlong(
    _In_ PULONG Port
    );

VOID
AtaPortReadPortBufferUchar(
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortReadPortBufferUshort(
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortReadPortBufferUlong(
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG  Count
    );

UCHAR
AtaPortReadRegisterUchar(
    _In_ PUCHAR Register
    );

USHORT
AtaPortReadRegisterUshort(
    _In_ PUSHORT Register
    );

ULONG
AtaPortReadRegisterUlong(
    _In_ PULONG Register
    );

VOID
AtaPortReadRegisterBufferUchar(
    _In_reads_(Count) PUCHAR Register,
    _Out_writes_all_(Count) PUCHAR Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortReadRegisterBufferUshort(
    _In_reads_(Count) PUSHORT Register,
    _Out_writes_all_(Count) PUSHORT Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortReadRegisterBufferUlong(
    _In_reads_(Count) PULONG Register,
    _Out_writes_all_(Count) PULONG Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWritePortUchar(
    _In_ PUCHAR Port,
    _In_ UCHAR Value
    );

VOID
AtaPortWritePortUshort(
    _In_ PUSHORT Port,
    _In_ USHORT Value
    );

VOID
AtaPortWritePortUlong(
    _In_ PULONG Port,
    _In_ ULONG Value
    );

VOID
AtaPortWritePortBufferUchar(
    _In_ PUCHAR Port,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWritePortBufferUshort(
    _In_ PUSHORT Port,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWritePortBufferUlong(
    _In_ PULONG Port,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG  Count
    );


VOID
AtaPortWriteRegisterUchar(
    _In_ PUCHAR Register,
    _In_ UCHAR Value
    );

VOID
AtaPortWriteRegisterUshort(
    _In_ PUSHORT Register,
    _In_ USHORT Value
    );

VOID
AtaPortWriteRegisterBufferUchar(
    _Out_writes_(Count) PUCHAR Register,
    _In_reads_(Count) PUCHAR Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWriteRegisterBufferUshort(
    _Out_writes_(Count) PUSHORT Register,
    _In_reads_(Count) PUSHORT Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWriteRegisterBufferUlong(
    _Out_writes_(Count) PULONG Register,
    _In_reads_(Count) PULONG Buffer,
    _In_ ULONG  Count
    );

VOID
AtaPortWriteRegisterUlong(
    _In_ PULONG Register,
    _In_ ULONG Value
    );


#ifdef __cplusplus
}
#endif

#if _MSC_VER >= 1200
#pragma warning(pop)
#else
#pragma warning(default:4201)
#pragma warning(default:4214)
#endif

#endif

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

