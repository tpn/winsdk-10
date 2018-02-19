/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

 bthhfpddi.h

Abstract:

    This module defines the types, constants, and functions that are
    exposed to device drivers that interact with the Windows Bluetooth
    Handsfree profile driver.

--*/

//
// The interface class GUID for HFP SCO HCI bypass
//
// {BE446647-F655-4919-8BD0-125BA5D4CE65}
//
DEFINE_GUID (GUID_DEVINTERFACE_BLUETOOTH_HFP_SCO_HCIBYPASS,
0xbe446647, 0xf655, 0x4919, 0x8b, 0xd0, 0x12, 0x5b, 0xa5, 0xd4, 0xce, 0x65);

//
// BTHHFP_DESCRIPTOR
//
//  Describes the characteristics of the Bluetooth HFP device for an audio
//  driver. This information does not change while the interface is enabled
//  but can change while disabled.
//
typedef struct _BTHHFP_DESCRIPTOR
{
    GUID                InputPinCategory;
    GUID                OutputPinCategory;
    GUID                ContainerId;
    BOOL                SupportsVolume;
    ULONG               VolumePropertyValuesSize;
    UNICODE_STRING      FriendlyName;
} BTHHFP_DESCRIPTOR, *PBTHHFP_DESCRIPTOR;

typedef struct _BTHHFP_DESCRIPTOR2
{
    GUID                InputPinCategory;
    GUID                OutputPinCategory;
    GUID                ContainerId;
    BOOL                SupportsVolume;
    ULONG               VolumePropertyValuesSize;
    UNICODE_STRING      FriendlyName;
    BOOL                SupportsNREC;
} BTHHFP_DESCRIPTOR2, *PBTHHFP_DESCRIPTOR2;


typedef struct _BTHHFP_AUDIO_DEVICE_CAPABILTIES
{
    DWORD Version;
    BOOL Supports16kHzSampling;
} BTHHFP_AUDIO_DEVICE_CAPABILTIES, *PBTHHFP_AUDIO_DEVICE_CAPABILTIES;

#define AUDIO_DEVICE_CAPABILITIES_VERSION 1

VOID
FORCEINLINE
BTHHFP_AUDIO_DEVICE_CAPABILTIES_INIT(
    _Out_ PBTHHFP_AUDIO_DEVICE_CAPABILTIES caps
    )
{
    RtlZeroMemory(caps, sizeof(BTHHFP_AUDIO_DEVICE_CAPABILTIES));
    caps->Version = AUDIO_DEVICE_CAPABILITIES_VERSION;
}

typedef enum _HFP_BYPASS_CODEC_ID_VERSION
{ 
    REQ_HFP_BYPASS_CODEC_ID_V1  = 1
} HFP_BYPASS_CODEC_ID_VERSION, *PHFP_BYPASS_CODEC_ID_VERSION;

typedef struct _HFP_BYPASS_CODEC_ID_V1
{
    UCHAR CodecId;
} HFP_BYPASS_CODEC_ID_V1, *PHFP_BYPASS_CODEC_ID_V1;

//
// The control codes used by an audio driver when cooperating with the
// HF profile class driver to operate a SCO HCI bypass connection.
//
#define BTHHFP_IOCTL(_index_) \
    CTL_CODE (FILE_DEVICE_UNKNOWN, _index_, METHOD_NEITHER, FILE_ANY_ACCESS)

#define IOCTL_BTHHFP_GET_DEVICEOBJECT                           BTHHFP_IOCTL (0)
#define IOCTL_BTHHFP_DEVICE_GET_DESCRIPTOR                      BTHHFP_IOCTL (100)
#define IOCTL_BTHHFP_DEVICE_GET_VOLUMEPROPERTYVALUES            BTHHFP_IOCTL (101)
#define IOCTL_BTHHFP_DEVICE_GET_KSNODETYPES                     BTHHFP_IOCTL (1)    // will be deprecated
#define IOCTL_BTHHFP_DEVICE_GET_CONTAINERID                     BTHHFP_IOCTL (2)    // will be deprecated
#define IOCTL_BTHHFP_DEVICE_REQUEST_CONNECT                     BTHHFP_IOCTL (3)
#define IOCTL_BTHHFP_DEVICE_REQUEST_DISCONNECT                  BTHHFP_IOCTL (4)
#define IOCTL_BTHHFP_DEVICE_GET_CONNECTION_STATUS_UPDATE        BTHHFP_IOCTL (5)
#define IOCTL_BTHHFP_SPEAKER_SET_VOLUME                         BTHHFP_IOCTL (6)
#define IOCTL_BTHHFP_SPEAKER_GET_VOLUME_STATUS_UPDATE           BTHHFP_IOCTL (7)
#define IOCTL_BTHHFP_MIC_SET_VOLUME                             BTHHFP_IOCTL (8)
#define IOCTL_BTHHFP_MIC_GET_VOLUME_STATUS_UPDATE               BTHHFP_IOCTL (9)
#define IOCTL_BTHHFP_STREAM_OPEN                                BTHHFP_IOCTL (10)
#define IOCTL_BTHHFP_STREAM_CLOSE                               BTHHFP_IOCTL (11)
#define IOCTL_BTHHFP_STREAM_GET_STATUS_UPDATE                   BTHHFP_IOCTL (12)

#if (NTDDI_VERSION >= NTDDI_WINBLUE)
#define IOCTL_BTHHFP_DEVICE_GET_DESCRIPTOR2                     BTHHFP_IOCTL (13)
#define IOCTL_BTHHFP_DEVICE_GET_NRECDISABLE_STATUS_UPDATE       BTHHFP_IOCTL (14)
#define IOCTL_BTHHFP_DEVICE_GET_CODEC_ID                        BTHHFP_IOCTL (15)
#endif

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#define IOCTL_BTHHFP_DEVICE_INDICATE_AUDIO_DEVICE_CAPABILITIES  BTHHFP_IOCTL (16)
#endif
