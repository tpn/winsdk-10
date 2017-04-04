/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

        USBCAMDI.H

Abstract:

   interface definition for .

Environment:

    Kernel & user mode

Revision History:


--*/


#ifndef   __USBCAMDI_H__
#define   __USBCAMDI_H__
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


// the purpose of this structure is to establish a connection between pipes discovered and
// streams to be declared (video,still). the following structure will be be passed along with 
// USBD_PIPE_INFO structure in CamConfigEx to the cam driver. The Cam driver has to indicate 
// pipe stream asscociation by oring all the relevant streams associated with this particular 
// pipe. If there is more than one stream association, USBCAMD creates a virtual still pin,
// and assumes the first stream is video followed by still stream.
// The cam driver has to set the first field to USBCAMD_DONT_CARE_PIPE if a particular pipe should not be used by 
// usbcamd. For example, if you have an iso audio pipe, iso video pipe in a camera device that 
// supports stills and video .you should set the flag field in the first structure to 
// USBCAMD_DONT_CARE_PIPE, The second structure should be set as foolows:
// {USBCAMD_VIDEO_STILL_STREAM,USBCAMD_MULTIPLEX_PIPE)}. 
// the assumption here is that cam has one config descr, and all alt.interfcaes have the same 
// number and types of pipes.
// also, notice that the flags are mutually exclusive. 
//

typedef struct _pipe_config_descriptor {
    CHAR     StreamAssociation ;         // video stream, still stream, or both
    UCHAR    PipeConfigFlags;           // USBCAMD_PIPECONFIG_*
} USBCAMD_Pipe_Config_Descriptor, *PUSBCAMD_Pipe_Config_Descriptor;

#define USBCAMD_DATA_PIPE           0x0001  // video or still data pipe
#define USBCAMD_MULTIPLEX_PIPE      0x0002  // pipe used for both still & video  
#define USBCAMD_SYNC_PIPE           0x0004  // out-of-band signalling pipe.
#define USBCAMD_DONT_CARE_PIPE      0x0008  // pipe is not to be used for streaming vidoe or still.

#define USBCAMD_VIDEO_STREAM        0x1
#define USBCAMD_STILL_STREAM        0x2
#define USBCAMD_VIDEO_STILL_STREAM  (USBCAMD_VIDEO_STREAM | USBCAMD_STILL_STREAM)

                                                       
// PacketFlag definitions for CamProcessUSBPacketEx
// *** Notice *** : these flags are mutually exclusive.

// current frame is unsalvageable, recycle the read IRP
#define USBCAMD_PROCESSPACKETEX_DropFrame           0x0002 
// following frame is still.
#define USBCAMD_PROCESSPACKETEX_NextFrameIsStill    0x0004 
// copy this frame to still pin. .                                               
#define USBCAMD_PROCESSPACKETEX_CurrentFrameIsStill 0x0008 

// these flags are used in PipeStateFlag in usbcamd_setpipestate function.

#define USBCAMD_STOP_STREAM             0x00000001
#define USBCAMD_START_STREAM            0x00000000

//
// the following flags are passed to usbcamd in USBCAMD_InitializeNewInterface.
// If Cam driver doesn't need to operate on the still image raw frame, then it should 
// set the second flag in order to elminate on ebuffer copy. Likewise for the video frame.
// the associatedformat flag is set if the cam driver use the same format fro video and 
// virtual still pin. Once, this flag is set, USBCAMD will not allow virtual still pin to be
// opened at different format than the video pin. USE this flag only when the virtual still
// pin produces frames that have exact format as video frames.
// EnableDeviceEvents will expose a deviceevents to stream class & DSHOW which will enable an STI
// Monitor to lunch a still image app if still button is pressed on the camera.

typedef enum {
    USBCAMD_CamControlFlag_NoVideoRawProcessing  = 0x0001,
    USBCAMD_CamControlFlag_NoStillRawProcessing  = 0x0002,
    USBCAMD_CamControlFlag_AssociatedFormat      = 0x0004,
    USBCAMD_CamControlFlag_EnableDeviceEvents    = 0x0008,
} USBCAMD_CamControlFlags;


// ------------------------------------------------------------------------
// The master list of all streams supported by this driver
// ------------------------------------------------------------------------

typedef _Must_inspect_result_
NTSTATUS
(*PCOMMAND_COMPLETE_FUNCTION)(
    _In_ PVOID DeviceContext,
    _Inout_ PVOID CommandContext,
    _In_ NTSTATUS NtStatus
    );


typedef 
VOID
(*PSTREAM_RECEIVE_PACKET) (
    _In_ PVOID Srb,
    _In_ PVOID DeviceContext,
    _In_ PBOOLEAN Completed
    );


typedef _Must_inspect_result_
NTSTATUS
(*PCAM_INITIALIZE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );



typedef
NTSTATUS _Must_inspect_result_
(*PCAM_CONFIGURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PUSBD_INTERFACE_INFORMATION Interface,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ PLONG DataPipeIndex,
    _In_ PLONG SyncPipeIndex
    );    

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_CONFIGURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PUSBD_INTERFACE_INFORMATION Interface,
    _In_ PUSB_CONFIGURATION_DESCRIPTOR ConfigurationDescriptor,
    _In_ ULONG   PipeConfigListSize,
    _In_ PUSBCAMD_Pipe_Config_Descriptor PipeConfig,
    _In_ PUSB_DEVICE_DESCRIPTOR DeviceDescriptor
    );    


typedef
NTSTATUS _Must_inspect_result_
(*PCAM_START_CAPTURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );    

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_START_CAPTURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG StreamNumber

    );    


typedef
NTSTATUS _Must_inspect_result_
(*PCAM_ALLOCATE_BW_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PULONG RawFrameLength,
    _In_ PVOID Format
    );      

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_ALLOCATE_BW_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PULONG RawFrameLength,
    _In_ PVOID Format,
    _In_ ULONG StreamNumber
    );      

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_FREE_BW_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );      

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_FREE_BW_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG STreamNumber
    );      

typedef 
VOID
(*PADAPTER_RECEIVE_PACKET_ROUTINE)(
    _Inout_ PHW_STREAM_REQUEST_BLOCK Srb
    );

typedef
NTSTATUS _Must_inspect_result_
(*PCAM_STOP_CAPTURE_ROUTINE)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );   
   
typedef
NTSTATUS _Must_inspect_result_
(*PCAM_STOP_CAPTURE_ROUTINE_EX)(
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ ULONG StreamNumber
    );      

typedef 
ULONG
(*PCAM_PROCESS_PACKET_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID CurrentFrameContext,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR SyncPacket,
    _In_opt_ PVOID SyncBuffer,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR DataPacket,
    _Inout_ PVOID DataBuffer,
    _Out_ PBOOLEAN FrameComplete,
    _Out_ PBOOLEAN NextFrameIsStill
    );    

typedef
ULONG
(*PCAM_PROCESS_PACKET_ROUTINE_EX) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID CurrentFrameContext,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR SyncPacket,
    _In_opt_ PVOID SyncBuffer,
    _In_opt_ PUSBD_ISO_PACKET_DESCRIPTOR DataPacket,
    _Inout_ PVOID DataBuffer,
    _Out_ PBOOLEAN FrameComplete,
    _Out_ PULONG PacketFlag,
    _Out_ PULONG ValidDataOffset
    );    


typedef
VOID
(*PCAM_NEW_FRAME_ROUTINE) (
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext
    );

typedef
VOID
(*PCAM_NEW_FRAME_ROUTINE_EX) (
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ ULONG StreamNumber,
    _Out_ PULONG FrameLength
    );

typedef _Must_inspect_result_
NTSTATUS
(*PCAM_PROCESS_RAW_FRAME_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ PVOID FrameBuffer,
    _In_ ULONG FrameLength,
    _Out_ PVOID RawFrameBuffer,
    _In_ ULONG RawFrameLength,
    _In_ ULONG NumberOfPackets,
    _Out_ PULONG BytesReturned
    );

typedef _Must_inspect_result_
NTSTATUS
(*PCAM_PROCESS_RAW_FRAME_ROUTINE_EX) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext,
    _In_ PVOID FrameContext,
    _In_ PVOID FrameBuffer,
    _In_ ULONG FrameLength,
    _Out_ PVOID RawFrameBuffer,
    _In_ ULONG RawFrameLength,
    _In_ ULONG NumberOfPackets,
    _Out_ PULONG BytesReturned,
    _In_ ULONG ActualRawFrameLength,
    _In_ ULONG StreamNumber
    );

typedef _Must_inspect_result_
NTSTATUS
(*PCAM_STATE_ROUTINE) (
    _In_ PDEVICE_OBJECT BusDeviceObject,
    _In_ PVOID DeviceContext
    );      


#ifdef DEBUG_LOG

VOID
USBCAMD_Debug_LogEntry(
    _In_ CHAR *Name,
    _In_ ULONG Info1,
    _In_ ULONG Info2,
    _In_ ULONG Info3
    );

#define ILOGENTRY(sig, info1, info2, info3) \
    USBCAMD_Debug_LogEntry(sig, (ULONG)info1, (ULONG)info2, (ULONG)info3)

#else

#define ILOGENTRY(sig, info1, info2, info3)

#endif /* DEBUG_LOG */



typedef struct _USBCAMD_DEVICE_DATA {
    ULONG Sig;
    PCAM_INITIALIZE_ROUTINE                 CamInitialize;
    PCAM_INITIALIZE_ROUTINE                 CamUnInitialize;
    PCAM_PROCESS_PACKET_ROUTINE             CamProcessUSBPacket;
    PCAM_NEW_FRAME_ROUTINE                  CamNewVideoFrame;
    PCAM_PROCESS_RAW_FRAME_ROUTINE          CamProcessRawVideoFrame;
    PCAM_START_CAPTURE_ROUTINE              CamStartCapture;
    PCAM_STOP_CAPTURE_ROUTINE               CamStopCapture;
    PCAM_CONFIGURE_ROUTINE                  CamConfigure;
    PCAM_STATE_ROUTINE                      CamSaveState;
    PCAM_STATE_ROUTINE                      CamRestoreState;
    PCAM_ALLOCATE_BW_ROUTINE                CamAllocateBandwidth;
    PCAM_FREE_BW_ROUTINE                    CamFreeBandwidth;
    
} USBCAMD_DEVICE_DATA, *PUSBCAMD_DEVICE_DATA;

typedef struct _USBCAMD_DEVICE_DATA2 {
    ULONG Sig;
    PCAM_INITIALIZE_ROUTINE                 CamInitialize;
    PCAM_INITIALIZE_ROUTINE                 CamUnInitialize;
    PCAM_PROCESS_PACKET_ROUTINE_EX          CamProcessUSBPacketEx;
    PCAM_NEW_FRAME_ROUTINE_EX               CamNewVideoFrameEx;
    PCAM_PROCESS_RAW_FRAME_ROUTINE_EX       CamProcessRawVideoFrameEx;
    PCAM_START_CAPTURE_ROUTINE_EX           CamStartCaptureEx;
    PCAM_STOP_CAPTURE_ROUTINE_EX            CamStopCaptureEx;
    PCAM_CONFIGURE_ROUTINE_EX               CamConfigureEx;
    PCAM_STATE_ROUTINE                      CamSaveState;
    PCAM_STATE_ROUTINE                      CamRestoreState;
    PCAM_ALLOCATE_BW_ROUTINE_EX             CamAllocateBandwidthEx;
    PCAM_FREE_BW_ROUTINE_EX                 CamFreeBandwidthEx;
    
} USBCAMD_DEVICE_DATA2, *PUSBCAMD_DEVICE_DATA2;



//
// USBCAMD services
//

/* 

This function is called from the "cam" driver DriverEntry routine to register 
the driver with USBCAMD.  This effectively binds the two drivers together.

Context1, Context2 - these are passed to the "cam" drivers DriverEntry and 
    should simply be passed on 
DeviceContextSize - amount of memory needed for the "cam" driver's device 
    specific context. 
FrameContextSize - size of an optional per video frame structure passed to 
    NewVideoFrame and ProcessRawVideoFrame.

*/

    ULONG 
    USBCAMD_DriverEntry(
    _In_ PVOID Context1,
    _In_ PVOID Context2,
    _In_ ULONG DeviceContextSize,
    _In_ ULONG FrameCOntextSize,
    _In_ PADAPTER_RECEIVE_PACKET_ROUTINE ReceivePacket
    );

/*
This function is called by the "cam" driver from the AdapterReceivePacket 
routine to allow USBCAMD to process an SRB.  

Srb - The srb passed to the "cam" driver's AdapterReceievPacket Routine.
DeviceData - filled in USBCAMD_DEVICE_DATAx structure with entry points to the 
    "cam" driver for iso stream processing.
DeviceObject - this pointer will be filled in the device PDO, this is used by 
    the "cam" driver for calls to the USB stack through IoCallDriver. 
NeedsCompletion - if this flag is true USBCAMD will process the SRB and 
    complete it, otherwise USBCAMD will ignore the SRB and just return the 
    DeveiceConext.

Returns:
    Returns a pointer to the device specific context for this instance of the 
    camera "DeviceContext".

*/

PVOID
USBCAMD_AdapterReceivePacket(
    _In_ PHW_STREAM_REQUEST_BLOCK Srb,
    _In_ PUSBCAMD_DEVICE_DATA DeviceData,
    _In_ PDEVICE_OBJECT *DeviceObject,
    _In_ BOOLEAN NeedsCompletion
    );    

/*
This function is available to the "cam" driver to send vendor commands on the 
control pipe.   This function may be called at IRQL >= PASSIVE_LEVEL.  If the 
function is called at IRQL > PASSIVE_LEVEL the command will be deferred until 
passive level, once completed the callers CommandComplete function is called 
with a pointer to the CommandContext. 


DeviceContext - device specific context.
Request - value for the bRequest field for the vendor command.
Value - value for the wValue field of the vendor command.
Index - value for the wIndex field of the vendor conmmand.
Buffer - data buffer if the command has data, may be NULL.
BufferLength - pointer length of Buffer in bytes, may be NULL if buffer is NULL
GetData - flag indicating data direction, "GetData" indicates data is send 
    device-to-host.
CommandComplete - function called when command is completed.
CommandContext - context passed to CommandComplete function

Returns:
    Returns NTSTATUS code from command of STTAUS_PENDING if command is deferred.
    
*/

_Must_inspect_result_ NTSTATUS
USBCAMD_ControlVendorCommand(
    _In_ PVOID DeviceContext,
    _In_ UCHAR Request,
    _In_ USHORT Value,
    _In_ USHORT Index,
    _Inout_updates_bytes_opt_( *BufferLength )PVOID Buffer,
    _Inout_ PULONG BufferLength,
    _In_ BOOLEAN GetData,
    _In_opt_ PCOMMAND_COMPLETE_FUNCTION CommandComplete,
    _In_opt_ PVOID CommandContext
    );    

/*
This function is called by the "cam" driver to select an alternate interface, 
The RequestInterface structure is filled in with the information from the 
SELECT_INTERFACE request on successful completion.  This function is 
typically called from the "cam" driver in response to a request to allocate 
or free bandwidth.

DeviceContext - device specific context.
RequestInterface - USBD_INTERFACE_INFORMATION structure for the appropriate 
    interface to select. The same rules apply to this structure as for the 
    SELECT_INTERFACE USBD request (see USBDI doc). 

Returns:
    Returns the status from the SELECT_INTERFACE request to USBD.

*/

_Must_inspect_result_ NTSTATUS
USBCAMD_SelectAlternateInterface(
    _In_ PVOID DeviceContext,
    _Inout_ PUSBD_INTERFACE_INFORMATION RequestInterface
    );  

/*
    Handy function to get a device instance specific registry key value
*/

_Must_inspect_result_ NTSTATUS 
USBCAMD_GetRegistryKeyValue (
    _In_ HANDLE Handle,
    _In_reads_bytes_(KeyNameStringLength) PWCHAR KeyNameString,
    _In_ ULONG KeyNameStringLength,
    _In_reads_bytes_(DataLength) PVOID Data,
    _In_ ULONG DataLength
    );
//
// These services are new.
//

/* 

This function is called from the "cam" driver upon recieving SRB_INITIALIZE_DEVICE 
to provid usbcamd with all the necessary info to configure the cam driver correctly with
stream class and USB Bus drivers.

DeviceContext - device specific context.
DeviceData - filled in USBCAMD_DEVICE_DATAx structure with entry points to the 
    "cam" driver .
Version - USBCAMD version
CamControlFlag - flags to control interaction with cam driver.

*/

ULONG
USBCAMD_InitializeNewInterface( 
    _In_ PVOID DeviceContext,
    _In_ PVOID DeviceData,
    _In_ ULONG Version,
    _In_ ULONG CamControlFlag
    );



// To access the new USBCAMD functionality in a CAM driver , the driver sends 
// the following IRP to itself once it received SRB_INITIALIZATION_COMPLETE.

// MajorFunction = IRP_MJ_PNP;
// MinorFunction = IRP_MN_QUERY_INTERFACE;

// {2BCB75C0-B27F-11d1-BA41-00A0C90D2B05}
DEFINE_GUID( GUID_USBCAMD_INTERFACE ,
     0x2bcb75c0, 0xb27f, 0x11d1, 0xba, 0x41, 0x0, 0xa0, 0xc9, 0xd, 0x2b, 0x5);



//The QUERY_INTERFACE Irp will return an interface (set of function pointers)
// of the type xxxxINTERFACE, defined below. This is essentially a table of
// function pointers.


typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_SetVideoFormat)( 
    _In_ PVOID DeviceContext,
    _In_ PHW_STREAM_REQUEST_BLOCK pSrb
    );


typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_WaitOnDeviceEvent)( 
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeIndex,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG BufferLength,
    _In_ PCOMMAND_COMPLETE_FUNCTION   EventComplete,
    _In_ PVOID EventContext,
    _In_ BOOLEAN LoopBack
    );

// this function is callable at PASSIVE_LEVEL Only.

typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_CancelBulkReadWrite)( 
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeIndex
    );


typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_SetIsoPipeState)( 
    _In_ PVOID DeviceContext,
    _In_ ULONG PipeStateFlags
    );


typedef _Must_inspect_result_
NTSTATUS
(*PFNUSBCAMD_BulkReadWrite)( 
    _In_ PVOID DeviceContext,
    _In_ USHORT PipeIndex,
    _In_reads_bytes_(BufferLength) PVOID Buffer,
    _In_ ULONG BufferLength,
    _In_ PCOMMAND_COMPLETE_FUNCTION CommandComplete,
    _In_ PVOID CommandContext
    );

#define USBCAMD_VERSION_200    0x200

typedef struct {
    INTERFACE Interface;
    PFNUSBCAMD_WaitOnDeviceEvent      USBCAMD_WaitOnDeviceEvent;
    PFNUSBCAMD_BulkReadWrite          USBCAMD_BulkReadWrite;
    PFNUSBCAMD_SetVideoFormat         USBCAMD_SetVideoFormat;
    PFNUSBCAMD_SetIsoPipeState        USBCAMD_SetIsoPipeState;
    PFNUSBCAMD_CancelBulkReadWrite    USBCAMD_CancelBulkReadWrite;
} USBCAMD_INTERFACE, *PUSBCAMD_INTERFACE;





#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif /*  __USBCAMDI_H__ */    
