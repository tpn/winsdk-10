/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 USBSidebandAudio.h

Abstract:

    This module defines the types, constants, and functions that are
    exposed to device drivers that interact with the Windows USB Audio
    Driver.

--*/

//
// The interface class GUID for USB SIDEBAND AUDIO bypass
//
// {84709979-C929-433A-A244-2AB8009C7B35}
//
DEFINE_GUID (GUID_DEVINTERFACE_USB_SIDEBAND_AUDIO_HCIBYPASS, 
0x84709979, 0xc929, 0x433a, 0xa2, 0x44, 0x2a, 0xb8, 0x0, 0x9c, 0x7b, 0x35);

//
// USBSIDEBANDAUDIO_DEVICE_DESCRIPTOR
//
//  Describes the Container ID and number of endpoints on the USB device.
//
typedef struct _USBSIDEBANDAUDIO_DEVICE_DESCRIPTOR
{
    // Size of Descriptor
    ULONG               CbSize;

    // Pnp Container ID for connected USB device
    GUID                ContainerId;

    // Number of Audio endpoints on the USB devices that can be sidebanded
    // This excludes the feedback endpoints
    ULONG               NumberOfEndpoints;
} USBSIDEBANDAUDIO_DEVICE_DESCRIPTOR, *PUSBSIDEBANDAUDIO_DEVICE_DESCRIPTOR;


// Bit field
// Value 0: Not supported
// Value 1: Supported
typedef union _USBSIDEBANDAUDIO_ENDPOINT_CAPABILITIES
{
    struct
    {
        ULONG   Volume      : 1;
        ULONG   Mute        : 1;
        ULONG   Sidetone    : 1;
        ULONG   Feedback    : 1;
        ULONG   Reserved    : 28;
    };
    ULONG       Capabilities;
} USBSIDEBANDAUDIO_ENDPOINT_CAPABILITIES;
// capabilities bit field
//+-----+-----+-----+-----+----------+--------+-----+-------+
//|  7  |  6  |  5  |  4  |    3     |    2   |  1  |   0   |
//+-----+-----+-----+-----+----------+--------+-----|-------+
//|  R  |  R  |  R  |  R  | feedback |sidetone|mute |volume |
//+-----+-----+-----+-----+----------+--------+-----+-------+
// R: Reserved


//
// USBSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR
//
// Describes the characteristics of the USB audio Endpoiont
// driver. This information does not change while the interface is enabled
// but can change while disabled.
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR
{
    // Size of Descriptor including storage for UNICODE_STRING and any additional data
    ULONG                                   CbSize;

    // KSPIN_DESCRIPTOR.Category to indicate form factor e.g. KSNODETYPE_HEADSET_MICROPHONE
    GUID                                    Category;

    // Indicates render/capture
    KSPIN_DATAFLOW                          Direction;

    USBSIDEBANDAUDIO_ENDPOINT_CAPABILITIES  Capabilities;

    // Storage for friendly name is attached after descriptor and is 
    // included in cbSize
    UNICODE_STRING                          FriendlyName;

    // Size of data returned by IOCTL_USBSBAUD_GET_VOLUMEPROPERTYVALUES
    ULONG                                   VolumePropertyValuesSize;

    // Size of data returned by IOCTL_USBSBAUD_GET_SIDETONE_VOLUMEPROPERTYVALUES
    ULONG                                   SidetoneVolumePropertyValueSize;
} USBSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR, *PUSBSIDEBANDAUDIO_ENDPOINT_DESCRIPTOR;


//
// USBSIDEBANDAUDIO_VOLUME_PARAMS
//
// Describes the endpoint index and volume value
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_VOLUME_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL    Immediate;

    LONG    Value;
} USBSIDEBANDAUDIO_VOLUME_PARAMS, *PUSBSIDEBANDAUDIO_VOLUME_PARAMS;


//
// USBSIDEBANDAUDIO_MUTE_PARAMS
//
// Describes the endpoint index and mute value
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_MUTE_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL    Immediate;

    BOOL    Value;
} USBSIDEBANDAUDIO_MUTE_PARAMS, *PUSBSIDEBANDAUDIO_MUTE_PARAMS;


//
// USBSIDEBANDAUDIO_STREAM_STATUS_PARAMS
//
// Describes the endpoint index and Device Error NTSTATUS
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_STREAM_STATUS_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG       EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL        Immediate;

    NTSTATUS    Status;
} USBSIDEBANDAUDIO_STREAM_STATUS_PARAMS, *PUSBSIDEBANDAUDIO_STREAM_STATUS_PARAMS;


//
// USBSIDEBANDAUDIO_SUPPORTED_FORMATS
//
//  Describes the formats supported by the USB Audio Endpoint.
//  
//
typedef struct _USBSIDEBANDAUDIO_SUPPORTED_FORMATS
{
    // Size of structure including storage for Formats Array allocated
    // after the struct
    ULONG                               CbSize;
    ULONG                               NumFormats;
    KSDATAFORMAT_WAVEFORMATEXTENSIBLE   *Formats;
} USBSIDEBANDAUDIO_SUPPORTED_FORMATS, *PUSBSIDEBANDAUDIO_SUPPORTED_FORMATS;


//
// USBSIDEBANDAUDIO_STREAM_OPEN_PARAMS
//
// Describes the endpoint index and format to open
// stream
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_STREAM_OPEN_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG                               EpIndex;

    // Indicates the format to configure the ISOCH
    // channel
    KSDATAFORMAT_WAVEFORMATEXTENSIBLE   Format;

} USBSIDEBANDAUDIO_STREAM_OPEN_PARAMS, *PUSBSIDEBANDAUDIO_STREAM_OPEN_PARAMS;

//
// USBSIDEBANDAUDIO_SIDETONE_DESCRIPTOR
//
//  Describes mute and volume components of the sidetone topology
//  
//
typedef struct _USBSIDEBANDAUDIO_SIDETONE_DESCRIPTOR
{
    LONG                Volume;
    BOOL                Mute;
}USBSIDEBANDAUDIO_SIDETONE_DESCRIPTOR, *PUSBSIDEBANDAUDIO_SIDETONE_DESCRIPTOR;


//
// USBSIDEBANDAUDIO_SIDETONE_PARAMS
//
// Describes the endpoint index and sidetone value
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_SIDETONE_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG                                   EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    BOOL                                    Immediate;

    USBSIDEBANDAUDIO_SIDETONE_DESCRIPTOR    Sidetone;
} USBSIDEBANDAUDIO_SIDETONE_PARAMS, *PUSBSIDEBANDAUDIO_SIDETONE_PARAMS;


//
// USBSIDEBANDAUDIO_EP_SHADOW_RESOURCE_TYPE
//
//  Describes the type of shadow resource
//  
//
typedef enum _USBSIDEBANDAUDIO_EP_SHADOW_RESOURCE_TYPE
{
    // USB Interface Descriptor
    USBSBAUD_EP_SHADOW_RESOURCE_TYPE_AUDIO_INTERFACE_DESCRIPTOR = 0,

    // Shadow resource information is about an audio endpoint
    USBSBAUD_EP_SHADOW_RESOURCE_TYPE_AUDIO_DATA,

    // Shadow resource information is about an feedback endpoint
    USBSBAUD_EP_SHADOW_RESOURCE_TYPE_AUDIO_FEEDBACK,

    USBSBAUD_EP_SHADOW_RESOURCE_TYPE_INVALID,

}USBSIDEBANDAUDIO_EP_SHADOW_RESOURCE_TYPE;

typedef struct _USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_FUNCTION
{
    // Size of struct including storage for descriptors
    ULONG                           CbSize;

    // USB Spec Endpoint Descriptor
    PUSB_ENDPOINT_DESCRIPTOR        pUsbEndpointDescriptor;

    // From USB class-specific AC interface descriptor
    USHORT                          bcdAudioSpec;

    // Delay introduced by the data path
    UCHAR                           bDelay;

    // From Audio Format Type I Descriptor
    UCHAR                           bSlotSize;
}USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_FUNCTION, *PUSBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_FUNCTION;

//
// USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES
//
//  Describes shadow resources per end point
//  
//
typedef struct _USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES
{
    // Size of struct including Shadow resource data and
    // EpFunctionResources data following this header
    ULONG                                           CbSize;

    // Size of Shadow resource blob following this header
    ULONG                                           CbDataSize;

    // USB Audio Function device specific resources
    PUSBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_FUNCTION  pEpFunctionResources;

    // Beginning of Shadow Resource blob
    // Type-Cast (&ShadowResourceBlob) into USB data structure
    LONGLONG                                        ShadowResourceBlob;
}USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES, *PUSBSIDEBANDAUDIO_EP_SHADOW_RESOURCES;

//
// USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_PARAMS
//
// Describes the endpoint index and type of information
// required
//
// ----------------------------------------------------------
typedef struct _USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_PARAMS
{
    // 0 based index indicating the Endpoint on USB device
    ULONG                                       EpIndex;

    // Indicates the type of shadow resource information
    // required
    USBSIDEBANDAUDIO_EP_SHADOW_RESOURCE_TYPE    Type;

} USBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_PARAMS, *PUSBSIDEBANDAUDIO_EP_SHADOW_RESOURCES_PARAMS;

//
// USBSIDEBANDAUDIO_DEVICE_ERROR
//
//  Describes error reported on the Device
//  
//
typedef struct _USBSIDEBANDAUDIO_DEVICE_ERROR
{
    // 0 based index indicating the Endpoint on USB device
    ULONG               EpIndex;

    // Indicates whether IOCTL current value is requested
    // or IRP should complete upon next change in value
    bool                Immediate;

    NTSTATUS            Status;
}USBSIDEBANDAUDIO_DEVICE_ERROR, *PUSBSIDEBANDAUDIO_DEVICE_ERROR;

//
// The control codes used by an audio driver when cooperating with the
// USB Audio class driver to operate a Sideband connection.
//
#define USBSIDEBANDAUDIO_IOCTL(_index_) \
    CTL_CODE (FILE_DEVICE_UNKNOWN, _index_, METHOD_NEITHER, FILE_ANY_ACCESS)

#define IOCTL_USBSBAUD_GET_DEVICE_DESCRIPTOR                USBSIDEBANDAUDIO_IOCTL (1)
#define IOCTL_USBSBAUD_GET_ENDPOINT_DESCRIPTOR              USBSIDEBANDAUDIO_IOCTL (2)
#define IOCTL_USBSBAUD_GET_VOLUMEPROPERTYVALUES             USBSIDEBANDAUDIO_IOCTL (3)
#define IOCTL_USBSBAUD_SET_VOLUME                           USBSIDEBANDAUDIO_IOCTL (4)
#define IOCTL_USBSBAUD_GET_VOLUME_STATUS_UPDATE             USBSIDEBANDAUDIO_IOCTL (5)
#define IOCTL_USBSBAUD_SET_MUTE                             USBSIDEBANDAUDIO_IOCTL (6)
#define IOCTL_USBSBAUD_GET_MUTE_STATUS_UPDATE               USBSIDEBANDAUDIO_IOCTL (7)
#define IOCTL_USBSBAUD_GET_SIDETONE_VOLUMEPROPERTYVALUES    USBSIDEBANDAUDIO_IOCTL (8)
#define IOCTL_USBSBAUD_GET_SIDETONE_STATUS_UPDATE           USBSIDEBANDAUDIO_IOCTL (9)
#define IOCTL_USBSBAUD_SET_SIDETONE_PROPERTY                USBSIDEBANDAUDIO_IOCTL (10)
#define IOCTL_USBSBAUD_SET_STREAM_OPEN                      USBSIDEBANDAUDIO_IOCTL (11)
#define IOCTL_USBSBAUD_SET_STREAM_CLOSE                     USBSIDEBANDAUDIO_IOCTL (12)
#define IOCTL_USBSBAUD_GET_STREAM_STATUS_UPDATE             USBSIDEBANDAUDIO_IOCTL (13)
#define IOCTL_USBSBAUD_GET_SUPPORTED_FORMATS                USBSIDEBANDAUDIO_IOCTL (14)
#define IOCTL_USBSBAUD_GET_SHADOW_RESOURCES                 USBSIDEBANDAUDIO_IOCTL (15)
#define IOCTL_USBSBAUD_GET_ERROR_STATUS_UPDATE              USBSIDEBANDAUDIO_IOCTL (16)

