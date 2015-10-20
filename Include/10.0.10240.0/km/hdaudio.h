//
// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Assumptions for the type definitions:
//    ULONGLONG = 64bit unsigned integer
//    ULONG     = 32bit unsigned integer
//    USHORT    = 16bit unsigned integer
//    UCHAR     = 8bit unsigned integer
//
#ifndef _HDAUDIO_H_
#define _HDAUDIO_H_

#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int

//
// The HDAUDIO_BUS_INTERFACE interface GUID
//
// {D2EAF88B-AB18-41a8-B664-8D592167671B}
DEFINE_GUID (GUID_HDAUDIO_BUS_INTERFACE, 
0xd2eaf88b, 0xab18, 0x41a8, 0xb6, 0x64, 0x8d, 0x59, 0x21, 0x67, 0x67, 0x1b);

//
// The HDAUDIO_BUS_INTERFACE_BDL interface GUID
//
// {B4D65397-5634-40b0-B068-F5B9F8B967A5}
DEFINE_GUID(GUID_HDAUDIO_BUS_INTERFACE_BDL, 
0xb4d65397, 0x5634, 0x40b0, 0xb0, 0x68, 0xf5, 0xb9, 0xf8, 0xb9, 0x67, 0xa5);

//
// The HDAUDIO_BUS_INTERFACE_V2 interface GUID
//
// {B52AF5FB-424B-4BB9-A160-5B38BE94E568}
DEFINE_GUID (GUID_HDAUDIO_BUS_INTERFACE_V2,
0xb52af5fb, 0x424b, 0x4bb9, 0xa1, 0x60, 0x5b, 0x38, 0xbe, 0x94, 0xe5, 0x68);

//
// The HDAudio bus class GUID
//
// {BBD1A745-ADD6-4575-9C2E-9B428D1C3266}
DEFINE_GUID (GUID_HDAUDIO_BUS_CLASS,
  0xbbd1a745, 0xadd6, 0x4575, 0x9c, 0x2e, 0x9b, 0x42, 0x8d, 0x1c, 0x32, 0x66);

#ifndef _HDAUDIO_CODEC_TRANSFER_
#define _HDAUDIO_CODEC_TRANSFER_
//
// Structure for a codec command.
//
typedef struct _HDAUDIO_CODEC_COMMAND
{
  union
  {
    struct
    {
      ULONG Data    : 8;
      ULONG VerbId  : 12;
      ULONG Node    : 8;
      ULONG CodecAddress : 4;
    } Verb8;
    struct
    {
      ULONG Data    : 16;
      ULONG VerbId  : 4;
      ULONG Node    : 8;
      ULONG CodecAddress : 4;
    } Verb16;
    ULONG Command;
  };
} HDAUDIO_CODEC_COMMAND, *PHDAUDIO_CODEC_COMMAND;

//
// Structure to access a codec response.
//
typedef struct _HDAUDIO_CODEC_RESPONSE
{
  union
  {
    struct
    {
      union
      {
        struct
        {
          ULONG Response:21;
          ULONG SubTag  : 5;
          ULONG Tag     : 6;
        } Unsolicited;
        ULONG Response;
      };
      ULONG SDataIn : 4;
      ULONG IsUnsolicitedResponse : 1;
      ULONG :25;
      ULONG HasFifoOverrun : 1;
      ULONG IsValid : 1;
    };
    ULONGLONG CompleteResponse;   // Mostly used for debug print messages.
  };
} HDAUDIO_CODEC_RESPONSE, *PHDAUDIO_CODEC_RESPONSE;

//
// The structure passed in for sending CODEC verbs.
//
typedef struct _HDAUDIO_CODEC_TRANSFER
{
  HDAUDIO_CODEC_COMMAND  Output;
  HDAUDIO_CODEC_RESPONSE Input;
} HDAUDIO_CODEC_TRANSFER, *PHDAUDIO_CODEC_TRANSFER;
#endif

//
// Replacement for WAVEFORMATEXTENSIBLE which has fields that are not used.
//
typedef struct _HDAUDIO_STREAM_FORMAT
{
  ULONG   SampleRate;
  USHORT  ValidBitsPerSample;
  USHORT  ContainerSize;
  USHORT  NumberOfChannels;
} HDAUDIO_STREAM_FORMAT, *PHDAUDIO_STREAM_FORMAT;

//
// The stream descriptor format used to program the input/output converters.
//
typedef struct _HDAUDIO_CONVERTER_FORMAT
{
  union
  {
    struct
    {
      USHORT NumberOfChannels : 4;
      USHORT BitsPerSample : 3;
      USHORT : 1;
      USHORT SampleRate : 7;
      USHORT StreamType : 1;        // Is always set to 0 by bus driver DDI
    };
    USHORT  ConverterFormat;
  };
} HDAUDIO_CONVERTER_FORMAT, *PHDAUDIO_CONVERTER_FORMAT;

//
// The different stream states supported by HDAudio -> STOP (reset), PAUSE or RUN
//
typedef enum _HDAUDIO_STREAM_STATE
{
  ResetState = 0,
  StopState  = 1,
  PauseState = 1,
  RunState   = 2
} HDAUDIO_STREAM_STATE, *PHDAUDIO_STREAM_STATE;

//
// The different power states that HD Audio codecs can support.  All states
// are from DEVICE_POWER_STATE except PowerCodecD3Cold.
//
typedef enum _HDAUDIO_CODEC_POWER_STATE {
    PowerCodecUnspecified = 0,
    PowerCodecD0,
    PowerCodecD1,
    PowerCodecD2,
    PowerCodecD3,
    PowerCodecD3Cold,
    PowerCodecMaximum
} HDAUDIO_CODEC_POWER_STATE, *PHDAUDIO_CODEC_POWER_STATE;

//
// HDAudio codec transfer complete callback function
//
typedef VOID (*PHDAUDIO_TRANSFER_COMPLETE_CALLBACK)(HDAUDIO_CODEC_TRANSFER *, PVOID);

//
// HDAudio unsolicited response callback function
//
typedef VOID (*PHDAUDIO_UNSOLICITED_RESPONSE_CALLBACK)(HDAUDIO_CODEC_RESPONSE, PVOID);

//
// HDAudio device information structure
//
typedef struct _HDAUDIO_DEVICE_INFORMATION
{
  USHORT  Size;                 // size of this structure
  USHORT  DeviceVersion;        // maj.min (maj is high byte, min is low byte)
  USHORT  DriverVersion;        // maj.min (maj is high byte, min is low byte)
  USHORT  CodecsDetected;       // mask of codecs present. Bit number == SDI line number
  BOOLEAN IsStripingSupported;  // TRUE if striping (2 SDO lines) is supported
} HDAUDIO_DEVICE_INFORMATION, *PHDAUDIO_DEVICE_INFORMATION;

//
// HDAudio Buffer Descriptor list entry
//
typedef struct _HDAUDIO_BUFFER_DESCRIPTOR
{
  PHYSICAL_ADDRESS  Address;
  ULONG             Length;
  ULONG             InterruptOnCompletion;
} HDAUDIO_BUFFER_DESCRIPTOR, *PHDAUDIO_BUFFER_DESCRIPTOR;



typedef _Must_inspect_result_ NTSTATUS (*PTRANSFER_CODEC_VERBS) (_In_ PVOID _context, _In_ ULONG Count, _Inout_updates_(Count) PHDAUDIO_CODEC_TRANSFER CodecTransfer, _In_opt_ PHDAUDIO_TRANSFER_COMPLETE_CALLBACK Callback, _In_opt_ PVOID Context);
typedef _Must_inspect_result_ NTSTATUS (*PALLOCATE_CAPTURE_DMA_ENGINE) (_In_ PVOID _context, _In_ UCHAR CodecAddress, _In_ PHDAUDIO_STREAM_FORMAT StreamFormat, _Out_ PHANDLE Handle, _Out_ PHDAUDIO_CONVERTER_FORMAT ConverterFormat);
typedef _Must_inspect_result_ NTSTATUS (*PALLOCATE_RENDER_DMA_ENGINE) (_In_ PVOID _context, _In_ PHDAUDIO_STREAM_FORMAT StreamFormat, _In_ BOOLEAN Stripe, _Out_ PHANDLE Handle, _Out_ PHDAUDIO_CONVERTER_FORMAT ConverterFormat);
typedef _Must_inspect_result_ NTSTATUS (*PCHANGE_BANDWIDTH_ALLOCATION) (_In_ PVOID _context, _In_ HANDLE Handle, _In_ PHDAUDIO_STREAM_FORMAT StreamFormat, _Out_ PHDAUDIO_CONVERTER_FORMAT ConverterFormat);
typedef _Must_inspect_result_ NTSTATUS (*PALLOCATE_DMA_BUFFER) (_In_ PVOID _context, _In_ HANDLE Handle, _In_ SIZE_T RequestedBufferSize, _Out_ PMDL *BufferMdl, _Out_ PSIZE_T AllocatedBufferSize, _Out_ PUCHAR StreamId, _Out_ PULONG FifoSize);
typedef _Must_inspect_result_ NTSTATUS (*PFREE_DMA_BUFFER) (_In_ PVOID _context, _In_ HANDLE Handle);
typedef _Must_inspect_result_ NTSTATUS (*PFREE_DMA_ENGINE) (_In_ PVOID _context, _In_ HANDLE Handle);
typedef _Must_inspect_result_ NTSTATUS (*PSET_DMA_ENGINE_STATE) (_In_ PVOID _context, _In_ HDAUDIO_STREAM_STATE StreamState, _In_ ULONG NumberOfHandles, _In_reads_(NumberOfHandles) PHANDLE Handles);
typedef VOID     (*PGET_WALL_CLOCK_REGISTER) (_In_ PVOID _context, _Out_ PULONG *Wallclock);
typedef _Must_inspect_result_ NTSTATUS (*PGET_LINK_POSITION_REGISTER) (_In_ PVOID _context, _In_ HANDLE Handle, _Out_ PULONG *Position);
typedef _Must_inspect_result_ NTSTATUS (*PREGISTER_EVENT_CALLBACK) (_In_ PVOID _context, _In_ PHDAUDIO_UNSOLICITED_RESPONSE_CALLBACK Routine, _In_opt_ PVOID Context, _Out_ PUCHAR Tag);
typedef _Must_inspect_result_ NTSTATUS (*PUNREGISTER_EVENT_CALLBACK) (_In_ PVOID _context, _In_ UCHAR Tag);
typedef _Must_inspect_result_ NTSTATUS (*PGET_DEVICE_INFORMATION) (_In_ PVOID _context, _Out_ PHDAUDIO_DEVICE_INFORMATION DeviceInformation);
typedef VOID     (*PGET_RESOURCE_INFORMATION) (_In_ PVOID _context, _Out_ PUCHAR CodecAddress, _Out_ PUCHAR FunctionGroupStartNode);

typedef struct _HDAUDIO_BUS_INTERFACE
{
  //
  // First we define the standard INTERFACE structure ...
  //
  USHORT                    Size;
  USHORT                    Version;
  PVOID                     Context;
  PINTERFACE_REFERENCE      InterfaceReference;
  PINTERFACE_DEREFERENCE    InterfaceDereference;

  //
  // Then we expand the structure with our interface specific data
  //
  PTRANSFER_CODEC_VERBS           TransferCodecVerbs;
  PALLOCATE_CAPTURE_DMA_ENGINE    AllocateCaptureDmaEngine;
  PALLOCATE_RENDER_DMA_ENGINE     AllocateRenderDmaEngine;
  PCHANGE_BANDWIDTH_ALLOCATION    ChangeBandwidthAllocation;
  PALLOCATE_DMA_BUFFER            AllocateDmaBuffer;
  PFREE_DMA_BUFFER                FreeDmaBuffer;
  PFREE_DMA_ENGINE                FreeDmaEngine;
  PSET_DMA_ENGINE_STATE           SetDmaEngineState;
  PGET_WALL_CLOCK_REGISTER        GetWallClockRegister;
  PGET_LINK_POSITION_REGISTER     GetLinkPositionRegister;
  PREGISTER_EVENT_CALLBACK        RegisterEventCallback;
  PUNREGISTER_EVENT_CALLBACK      UnregisterEventCallback;
  PGET_DEVICE_INFORMATION         GetDeviceInformation;
  PGET_RESOURCE_INFORMATION       GetResourceInformation;
} HDAUDIO_BUS_INTERFACE, *PHDAUDIO_BUS_INTERFACE;

//
// To support the Bdl interface...
//
//
// ISR Callback definition for Bdl interface
//
typedef void (*PHDAUDIO_BDL_ISR) (_In_ VOID *Context, _In_ ULONG InterruptBitMask); 

//
// Additional BDL interface functions.
//
typedef _Must_inspect_result_ NTSTATUS (*PALLOCATE_CONTIGUOUS_DMA_BUFFER) (_In_ PVOID _context, _In_ HANDLE Handle,
  ULONG RequestedBufferSize, _Out_ PVOID *DataBuffer, _Out_ PHDAUDIO_BUFFER_DESCRIPTOR *BdlBuffer);
typedef _Must_inspect_result_ NTSTATUS (*PFREE_CONTIGUOUS_DMA_BUFFER) (_In_ PVOID _context, _In_ HANDLE Handle);
typedef _Must_inspect_result_ NTSTATUS (*PSETUP_DMA_ENGINE_WITH_BDL) (_In_reads_bytes_(BufferLength) PVOID _context, _In_ HANDLE Handle, _In_ ULONG BufferLength,
  _In_ ULONG Lvi, _In_ PHDAUDIO_BDL_ISR Isr, _In_ PVOID Context, _Out_ PUCHAR StreamId, _Out_ PULONG FifoSize);

typedef struct _HDAUDIO_BUS_INTERFACE_BDL
{
  //
  // First we define the standard INTERFACE structure ...
  //
  USHORT                    Size;
  USHORT                    Version;
  PVOID                     Context;
  PINTERFACE_REFERENCE      InterfaceReference;
  PINTERFACE_DEREFERENCE    InterfaceDereference;

  //
  // Then we expand the structure with the HDAUDIO_BUS_INTERFACE_BDL stuff.
  // Many functions are identical (and derived) from the HDAUDIO_BUS_INTERFACE
  // interface. PrepareDmaEngineWithBdl was added instead of PrepareDmaEngine
  // and GetDeviceInformationBdl instead of GetDeviceInformation.
  //
  PTRANSFER_CODEC_VERBS           TransferCodecVerbs;
  PALLOCATE_CAPTURE_DMA_ENGINE    AllocateCaptureDmaEngine;
  PALLOCATE_RENDER_DMA_ENGINE     AllocateRenderDmaEngine;
  PCHANGE_BANDWIDTH_ALLOCATION    ChangeBandwidthAllocation;
  PALLOCATE_CONTIGUOUS_DMA_BUFFER AllocateContiguousDmaBuffer;
  PSETUP_DMA_ENGINE_WITH_BDL      SetupDmaEngineWithBdl;
  PFREE_CONTIGUOUS_DMA_BUFFER     FreeContiguousDmaBuffer;
  PFREE_DMA_ENGINE                FreeDmaEngine;
  PSET_DMA_ENGINE_STATE           SetDmaEngineState;
  PGET_WALL_CLOCK_REGISTER        GetWallClockRegister;
  PGET_LINK_POSITION_REGISTER     GetLinkPositionRegister;
  PREGISTER_EVENT_CALLBACK        RegisterEventCallback;
  PUNREGISTER_EVENT_CALLBACK      UnregisterEventCallback;
  PGET_DEVICE_INFORMATION         GetDeviceInformation;
  PGET_RESOURCE_INFORMATION       GetResourceInformation;
} HDAUDIO_BUS_INTERFACE_BDL, *PHDAUDIO_BUS_INTERFACE_BDL;

//
// Additional interface functions for DMA notification support
//
typedef _Must_inspect_result_ NTSTATUS (*PALLOCATE_DMA_BUFFER_WITH_NOTIFICATION) (_In_ PVOID _context,
                                                                          _In_ HANDLE Handle, 
                                                                          _In_ ULONG NotificationCount,
                                                                          _In_ SIZE_T RequestedBufferSize,
                                                                          _Out_ PMDL *BufferMdl,
                                                                          _Out_ PSIZE_T AllocatedBufferSize,
                                                                          _Out_ PSIZE_T OffsetFromFirstPage,
                                                                          _Out_ PUCHAR StreamId,
                                                                          _Out_ PULONG FifoSize);

typedef _Must_inspect_result_ NTSTATUS (*PFREE_DMA_BUFFER_WITH_NOTIFICATION) (  _In_ PVOID _context,
                                                                        _In_ HANDLE Handle,
                                                                        _In_ PMDL BufferMdl,
                                                                        _In_ SIZE_T BufferSize);

typedef _Must_inspect_result_ NTSTATUS (*PREGISTER_NOTIFICATION_EVENT) (_In_ PVOID _context,
                                                                _In_ HANDLE Handle,
                                                                _In_ PKEVENT NotificationEvent);

typedef _Must_inspect_result_ NTSTATUS (*PUNREGISTER_NOTIFICATION_EVENT) (_In_ PVOID _context,
                                                                  _In_ HANDLE Handle,
                                                                  _In_ PKEVENT NotificationEvent);

typedef struct _HDAUDIO_BUS_INTERFACE_V2
{
    //
    // First we define the standard INTERFACE structure ...
    //
    USHORT                    Size;
    USHORT                    Version;
    PVOID                     Context;
    PINTERFACE_REFERENCE      InterfaceReference;
    PINTERFACE_DEREFERENCE    InterfaceDereference;

    //
    // Then we expand the structure with the HDAUDIO_BUS_INTERFACE_PING_PONG stuff.
    // Many functions are identical (and derived) from the HDAUDIO_BUS_INTERFACE
    // interface. 

    PTRANSFER_CODEC_VERBS           TransferCodecVerbs;
    PALLOCATE_CAPTURE_DMA_ENGINE    AllocateCaptureDmaEngine;
    PALLOCATE_RENDER_DMA_ENGINE     AllocateRenderDmaEngine;
    PCHANGE_BANDWIDTH_ALLOCATION    ChangeBandwidthAllocation;
    PALLOCATE_DMA_BUFFER            AllocateDmaBuffer;
    PFREE_DMA_BUFFER                FreeDmaBuffer;
    PFREE_DMA_ENGINE                FreeDmaEngine;
    PSET_DMA_ENGINE_STATE           SetDmaEngineState;
    PGET_WALL_CLOCK_REGISTER        GetWallClockRegister;
    PGET_LINK_POSITION_REGISTER     GetLinkPositionRegister;
    PREGISTER_EVENT_CALLBACK        RegisterEventCallback;
    PUNREGISTER_EVENT_CALLBACK      UnregisterEventCallback;
    PGET_DEVICE_INFORMATION         GetDeviceInformation;
    PGET_RESOURCE_INFORMATION       GetResourceInformation;
    PALLOCATE_DMA_BUFFER_WITH_NOTIFICATION AllocateDmaBufferWithNotification;
    PFREE_DMA_BUFFER_WITH_NOTIFICATION FreeDmaBufferWithNotification;
    PREGISTER_NOTIFICATION_EVENT    RegisterNotificationEvent;
    PUNREGISTER_NOTIFICATION_EVENT  UnregisterNotificationEvent;
} HDAUDIO_BUS_INTERFACE_V2, *PHDAUDIO_BUS_INTERFACE_V2;

#pragma warning(default:4201)
#pragma warning(default:4214)

#endif  // _HDAUDIO_H_
