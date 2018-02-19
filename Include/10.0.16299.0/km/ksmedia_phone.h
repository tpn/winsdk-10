#include <winapifamily.h>

/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    ksmedia_phone.h

Abstract:

    WDM-CSA Multimedia Definitions.

--*/

#if !defined(_KSMEDIA_PHONE_)
#define _KSMEDIA_PHONE_

#include <ksmedia.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#pragma warning(push)

#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

//
// Nodetypes for Windows Phone Audio Routing.
//

// {A79D957D-5CD5-458A-B3F1-AF8E789B1F3B}
#define STATIC_KSNODETYPE_HFP_SIDEBAND_HEADSET \
    0xa79d957d, 0x5cd5, 0x458a, 0xb3, 0xf1, 0xaf, 0x8e, 0x78, 0x9b, 0x1f, 0x3b
DEFINE_GUIDSTRUCT("A79D957D-5CD5-458A-B3F1-AF8E789B1F3B", KSNODETYPE_HFP_SIDEBAND_HEADSET);
#define KSNODETYPE_HFP_SIDEBAND_HEADSET DEFINE_GUIDNAMED(KSNODETYPE_HFP_SIDEBAND_HEADSET)

// {1CCF610B-F3DB-47C1-834C-B19BC76CE5AB}
#define STATIC_KSNODETYPE_SPEAKER_AND_HEADSET \
    0x1ccf610b, 0xf3db, 0x47c1, 0x83, 0x4c, 0xb1, 0x9b, 0xc7, 0x6c, 0xe5, 0xab
DEFINE_GUIDSTRUCT("1CCF610B-F3DB-47C1-834C-B19BC76CE5AB", KSNODETYPE_SPEAKER_AND_HEADSET);
#define KSNODETYPE_SPEAKER_AND_HEADSET DEFINE_GUIDNAMED(KSNODETYPE_SPEAKER_AND_HEADSET)

// {9E25F2E6-8387-4DB3-A13F-9FAAC23D28A9}
#define STATIC_KSNODETYPE_TEE \
    0x9e25f2e6, 0x8387, 0x4db3, 0xa1, 0x3f, 0x9f, 0xaa, 0xc2, 0x3d, 0x28, 0xa9
DEFINE_GUIDSTRUCT("9E25F2E6-8387-4DB3-A13F-9FAAC23D28A9", KSNODETYPE_TEE);
#define KSNODETYPE_TEE DEFINE_GUIDNAMED(KSNODETYPE_TEE)

// {84A3C1BD-88A1-40DD-8420-1D9C6442B524}
#define STATIC_KSNODETYPE_AUDIO_TELEPHONY \
    0x84a3c1bd, 0x88a1, 0x40dd, 0x84, 0x20, 0x1d, 0x9c, 0x64, 0x42, 0xb5, 0x24
DEFINE_GUIDSTRUCT("84A3C1BD-88A1-40DD-8420-1D9C6442B524", KSNODETYPE_AUDIO_TELEPHONY);
#define KSNODETYPE_AUDIO_TELEPHONY DEFINE_GUIDNAMED(KSNODETYPE_AUDIO_TELEPHONY)

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)


//===========================================================================
// Phone-specific properties and property set

#if (NTDDI_VERSION >= NTDDI_WINBLUE)

typedef struct _tagKSKSTELEPHONY_DESCRIPTOR
{
    UINT    nRenderPinId;
    UINT    nCapturePinId;
} KSTELEPHONY_DESCRIPTOR, *PKSTELEPHONY_DESCRIPTOR;

typedef enum {
    TELEPHONY_PROVIDER_TYPE_CIRCUIT_SWITCHED = 0,
    TELEPHONY_PROVIDER_TYPE_PACKET_SWITCHED, // LTE
    TELEPHONY_PROVIDER_TYPE_PACKET_SWITCHED_WLAN,
} TELEPHONY_PROVIDER_TYPE;

typedef struct _tagKSKSTELEPHONY_INSTANCE_DATA
{
    TELEPHONY_PROVIDER_TYPE    TelephonyProviderType;
    UINT                       TelephonyProviderId;
} KSTELEPHONY_INSTANCE_DATA, *PKSTELEPHONY_INSTANCE_DATA;

#define STATIC_KSPROPSETID_PhoneAudio\
    0xb0c69f47, 0xeff1, 0x4009, 0xb2, 0x2e, 0xce, 0xb6, 0x22, 0xf, 0x6f, 0xfa
DEFINE_GUIDSTRUCT("B0C69F47-EFF1-4009-B22E-CEB6220F6FFA", KSPROPSETID_PhoneAudio);
#define KSPROPSETID_PhoneAudio DEFINE_GUIDNAMED(KSPROPSETID_PhoneAudio)

typedef enum {
    KSPROPERTY_PHONEAUDIO_TELEPHONY_INSTANCE_DATA = 0,
    KSPROPERTY_PHONEAUDIO_TELEPHONY_DESCRIPTOR,
    KSPROPERTY_PHONEAUDIO_DEVICE_ORIENTATION,
} KSPROPERTY_PHONEAUDIO;

#define STATIC_KSPROPSETID_BTSCO_NREC\
    0x7f50f0be, 0x8e26, 0x4f96, 0xa0, 0x79, 0x1c, 0xf8, 0x41, 0x02, 0xb9, 0x18
DEFINE_GUIDSTRUCT("7f50f0be-8e26-4f96-a079-1cf84102b918", KSPROPSETID_BTSCO_NREC);
#define KSPROPSETID_BTSCO_NREC DEFINE_GUIDNAMED(KSPROPSETID_BTSCO_NREC)

typedef enum {
    KSPROPERTY_BTSCO_NREC_STATE = 1,
} KSPROPERTY_BTSCO_NREC;

#endif // (NTDDI_VERSION >= NTDDI_WINBLUE)


typedef enum {
    KSEVENT_CAMERACONTROL_FLASH =2,
    KSEVENT_CAMERACONTROL_FOCUS_START,
    KSEVENT_CAMERACONTROL_FOCUS_COMPLETE,
    KSEVENT_CAMERACONTROL_CONTINUOUSFOCUS_START,
    KSEVENT_CAMERACONTROL_CONTINUOUSFOCUS_COMPLETE,
    KSEVENT_CAMERACONTROL_SAMPLE_SCANNED
} KSEVENT_CAMERACONTROL_EXT;

typedef enum {
    KSPROPERTY_CAMERACONTROL_FOCUS_REGION_CONTROL = 1000, 
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_CONTROL,
    KSPROPERTY_CAMERACONTROL_FOCUS_MODE_CONTROL,
    KSPROPERTY_CAMERACONTROL_FOCUS_LENS_POSITION,
    KSPROPERTY_CAMERACONTROL_FOCUS_RECTANGLE,
    KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER,
    KSPROPERTY_CAMERACONTROL_ZOOM_CONTROL,
    KSPROPERTY_CAMERACONTROL_FLASH_MODE,
    KSPROPERTY_CAMERACONTROL_FLASH_POWER_CONTROL,
    KSPROPERTY_CAMERACONTROL_VIDEO_LIGHT_MODE,
    KSPROPERTY_CAMERACONTROL_VIDEO_LIGHT_POWER_CONTROL,
    KSPROPERTY_CAMERACONTROL_3A_LOCK,
    KSPROPERTY_CAMERACONTROL_WB_MODE,
    KSPROPERTY_CAMERACONTROL_WB_MANUAL_PRESET,
    KSPROPERTY_CAMERACONTROL_WB_MANUAL,
    KSPROPERTY_CAMERACONTROL_FPS_CONTROL,
    KSPROPERTY_CAMERACONTROL_PREVIEW_FPS,
    KSPROPERTY_CAMERACONTROL_VIDEO_FPS,
    KSPROPERTY_CAMERACONTROL_EXPOSURE_MODE,
    KSPROPERTY_CAMERACONTROL_LINEAR_EXPOSURE,
    KSPROPERTY_CAMERACONTROL_EV_COMPENSATION,
    KSPROPERTY_CAMERACONTROL_ISO_MODE,
    KSPROPERTY_CAMERACONTROL_ISO,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE,
    KSPROPERTY_CAMERACONTROL_GET_CAPS,
    KSPROPERTY_CAMERACONTROL_SB,
    KSPROPERTY_CAMERACONTROL_SET_ACTIVE_SB,
    KSPROPERTY_CAMERACONTROL_SB_TRIGGER,
    KSPROPERTY_CAMERACONTROL_SB_RESOURCE_ESTIMATE,
    KSPROPERTY_CAMERACONTROL_EXIF,
    KSPROPERTY_CAMERACONTROL_MCC,
    KSPROPERTY_CAMERACONTROL_ZOOM_ROI_INFO
} KSPROPERTY_VIDCAP_CAMERACONTROL_EX;


typedef enum {
    KSPROPERTY_CAMERACONTROL_FOCUS_REGION_CONTROL_AUTO   = 0x0001,
    KSPROPERTY_CAMERACONTROL_FOCUS_REGION_CONTROL_MANUAL = 0x0002
} KSPROPERTY_CAMERACONTROL_FOCUS_REGION_CONTROL_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_MACRO      = 0x0001,
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_NORMAL     = 0x0002,
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_FULL       = 0x0004,
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_HYPERFOCAL = 0x0008,
    KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_INFINITY   = 0x0010
} KSPROPERTY_CAMERACONTROL_FOCUS_RANGE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_FOCUS_MODE_SINGLE      = 0x0001,
    KSPROPERTY_CAMERACONTROL_FOCUS_MODE_CONTINUOUS  = 0x0002,
    KSPROPERTY_CAMERACONTROL_FOCUS_MODE_MANUAL      = 0x0004
} KSPROPERTY_CAMERACONTROL_FOCUS_MODE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER_START,
    KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER_STOP,
    KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER_RESET,
    // Cancel command was deprecate. We are maintain this only for preventing
    // Build break. This will be removed soon.
    KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER_CANCEL,
} KSPROPERTY_CAMERACONTROL_FOCUS_TRIGGER_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_ASSISTANT_AUTO    = 0x0001,
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_ASSISTANT_ON_OFF  = 0x0002,
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_REDEYE_ON_OFF     = 0x0004,
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_FLASH_AUTO        = 0x0008,
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_FLASH_POWER       = 0x0010,
    KSPROPERTY_CAMERACONTROL_PHOTOFLASH_FLASH_ON_OFF      = 0x0020
} KSPROPERTY_CAMERACONTROL_FLASH_MODE_PHOTO;

typedef enum {
    KSPROPERTY_CAMERACONTROL_VIDEOFLASH_FLASH_AUTO    = 0x0001,
    KSPROPERTY_CAMERACONTROL_VIDEOFLASH_FLASH_ON_OFF  = 0x0002,
    KSPROPERTY_CAMERACONTROL_VIDEOFLASH_FLASH_POWER   = 0x0004
} KSPROPERTY_CAMERACONTROL_FLASH_MODE_VIDEO;

typedef enum {
    KSPROPERTY_CAMERACONTROL_EXPOSURE_MODE_AUTO    = 0x0001,
    KSPROPERTY_CAMERACONTROL_EXPOSURE_MODE_MANUAL  = 0x0002
} KSPROPERTY_CAMERACONTROL_EXPOSURE_MODE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_WB_MODE_AUTO           = 0x0001,
    KSPROPERTY_CAMERACONTROL_WB_MODE_MANUAL         = 0x0002,
    KSPROPERTY_CAMERACONTROL_WB_MODE_MANUAL_PRESET  = 0x0004
} KSPROPERTY_CAMERACONTROL_WB_MODE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_WB_PRESET_CLOUDY       = 0x0001,
    KSPROPERTY_CAMERACONTROL_WB_PRESET_DAYLIGHT     = 0x0002,
    KSPROPERTY_CAMERACONTROL_WB_PRESET_FLASH        = 0x0004,
    KSPROPERTY_CAMERACONTROL_WB_PRESET_FLUORESCENT  = 0x0008,
    KSPROPERTY_CAMERACONTROL_WB_PRESET_TUNGSTEN     = 0x0010,
    KSPROPERTY_CAMERACONTROL_WB_PRESET_CANDLELIGHT  = 0x0020
} KSPROPERTY_CAMERACONTROL_WB_PRESET_VALUE;
  
typedef enum {
    KSPROPERTY_CAMERACONTROL_ISO_MODE_AUTO    = 0x0001,
    KSPROPERTY_CAMERACONTROL_ISO_MODE_MANUAL  = 0x0002
} KSPROPERTY_CAMERACONTROL_ISO_MODE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_AUTO            = 0x0001,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_MACRO           = 0x0002,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_PORTRAIT        = 0x0004,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_SPORT           = 0x0008,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_SNOW            = 0x0010,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_NIGHT           = 0x0020,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_BEACH           = 0x0040,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_SUNSET          = 0x0080,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_CANDLE_LIGHT    = 0x0100,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_LANDSCAPE       = 0x0200,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_NIGHT_PORTRAIT  = 0x0400,
    KSPROPERTY_CAMERACONTROL_SCENE_MODE_BACKLIGHT       = 0x0800
} KSPROPERTY_CAMERACONTROL_SCENE_MODE_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_3A_LOCK_FOCUS      = 0x0001,
    KSPROPERTY_CAMERACONTROL_3A_LOCK_EXPOSURE   = 0x0002,
    KSPROPERTY_CAMERACONTROL_3A_LOCK_WB         = 0x0004
} KSPROPERTY_CAMERACONTROL_3A_LOCK_VALUE;

typedef enum {
    KSPROPERTY_CAMERACONTROL_FPS_PREVIEW_AUTO   = 0x0001,
    KSPROPERTY_CAMERACONTROL_FPS_VIDEO_AUTO     = 0x0002
} KSPROPERTY_CAMERACONTROL_FPS_MODE_VALUE;

#define KSPROPERTY_CAMERACONTROL_FLAGS_ASYNCHRONOUS 0X0004L

// Flattened version of the PropertyItem class defined in imaging.h 
typedef struct 
{ 
    size_t cbSize; // Size of this structure in bytes 
    DWORD dwPropId; // From imaging.h 
    DWORD dwType; // propId type; from imaging.h 
    size_t cbData; // Length of byData in bytes 
    BYTE byData[1]; // First byte of the data 
}CameraPropertyItem, *PCameraPropertyItem; 

// We will modify the CAMERA_METADATA_S structure to accommodate an "array" of variable length CameraPropertyItem structures 
typedef struct 
{ 
    size_t cbSize; // Size of this structure in bytes 
    DWORD cElements; // Number of CameraPropertyItems 
    CameraPropertyItem camPropertyItem; // The first CameraPropertyItem in the "array" 
} CameraMetadata, *PCameraMetadata; 

///////////////////////////////////////////////////////////////////////////////
// Pin descriptors ID
///////////////////////////////////////////////////////////////////////////////
// Dedicated Pin ID 
typedef enum {
    WPCAMERA_PIN_TYPE_STREAMING_STILL,
    WPCAMERA_PIN_TYPE_VIDEO,
    WPCAMERA_PIN_TYPE_PREVIEW,
    WPCAMERA_PIN_TYPE_STILL,
    WPCAMERA_PIN_TYPE_END_OF_PINTYPE
} WPCAMERA_PIN_TYPE;

///////////////////////////////////////////////////////////////////////////////
// Storyboard header and enums
///////////////////////////////////////////////////////////////////////////////
// Storyboard header structure
typedef struct 
{ 
    GUID guidSBId;              // Unique ID for this storyboard 
    DWORD dwIMGStats;           // Identifies the desired image stats
    DWORD dwMetadataIMGFormat;  // The image format appended by the driver
    DWORD dwSBLoopCount;        // Whether or not to loop
    DWORD dwSBLoopControl;      // How to loop in the storyboard
    DWORD dwSBLoopCondition;    // Loop until the loop condition is met
    DWORD dwSBLoopFramePosition;// The frame position of the SBLoop
    KS_BITMAPINFOHEADER rawImageInfoHeader; // Official data struct to describe FourCC
                                            // and image info
} WPCAMERA_STORYBOARD_HEADER_S, *PWPCAMERA_STORYBOARD_HEADER_S;

// Storyboard dwIMGStats values
typedef enum {
    WPCAMERA_STORYBOARD_IMGSTAT_IMG_DATA           = 0x00000001,
    WPCAMERA_STORYBOARD_IMGSTAT_ISP_METADATA       = 0x00000002,
    WPCAMERA_STORYBOARD_IMGSTAT_ISP_APPLIED_VALUES = 0x00000004,
    WPCAMERA_STORYBOARD_IMGSTAT_ISP_ALL_VALUES     = 0x00000008,
    WPCAMERA_STORYBOARD_IMGSTAT_EXIF_DATA          = 0x00000010,
} WPCAMERA_STORYBOARD_IMGSTAT_VALUE;

// Storyboard dwMetadataIMGFormat values
typedef enum {
    WPCAMERA_STORYBOARD_META_IMG_FORMAT_NONE       = 0x0000,
    WPCAMERA_STORYBOARD_META_IMG_FORMAT_PRE_RAW    = 0x0001,
    WPCAMERA_STORYBOARD_META_IMG_FORMAT_IDEAL_RAW  = 0x0002
} WPCAMERA_STORYBOARD_META_IMG_FORMAT_VALUE;

// Storyboard dwSBLoopCondition values
typedef enum {
    WPCAMERA_STORYBOARD_LOOP_COND_NONE = 0x00000000,
    WPCAMERA_STORYBOARD_LOOP_COND_FOCUS = 0x00000001,
    WPCAMERA_STORYBOARD_LOOP_COND_ZOOM  = 0x00000002,
    WPCAMERA_STORYBOARD_LOOP_COND_EXPOSURE = 0x00000004,
    WPCAMERA_STORYBOARD_LOOP_COND_AWB      = 0x00000008,
    WPCAMERA_STORYBOARD_LOOP_COND_FLASH_READY = 0x00000010,
    WPCAMERA_STORYBOARD_LOOP_COND_ALL   = 0xffffffff // All ISP controls must be applied before proceeding
} WPCAMERA_STORYBOARD_LOOP_COND_VALUE;

///////////////////////////////////////////////////////////////////////////////
// ISP Control property structure and types
///////////////////////////////////////////////////////////////////////////////
typedef struct 
{  
    float left;  
    float top;  
    float right;  
    float bottom;  
} FRECT, *PFRECT;

typedef struct 
{ 
    LONG requestedVal;
    LONG actualVal;
    RECT zoomRoI; 
} KSPROPERTY_ZOOM_ROI_INFO, *PKSPROPERTY_ZOOM_ROI_INFO;

// Supported ISP Control Data Types Enumeration
typedef enum WPCAMERA_ISPCONTROL_DATA_TYPE
{  
    WPCAMERA_ISPCONTROL_TYPE_LONG, 
    WPCAMERA_ISPCONTROL_TYPE_ULONG,
    WPCAMERA_ISPCONTROL_TYPE_RECT,
    WPCAMERA_ISPCONTROL_TYPE_FRECT,
    WPCAMERA_ISPCONTROL_TYPE_STEPPING,
    WPCAMERA_ISPCONTROL_TYPE_BYTEARRAY,
    WPCAMERA_ISPCONTROL_TYPE_ZOOMINFO
} WPCAMERA_ISPCONTROL_DATA_TYPE;

typedef union WPCAMERA_ISPCONTROL_TYPES_UNION 
{  
    LONG lLongValue;                                // WPCAMERA_ISPCONTROL_TYPE_LONG
    ULONG ulLongValue;                              // WPCAMERA_ISPCONTROL_TYPE_ULONG
    RECT rectValue;                                 // WPCAMERA_ISPCONTROL_TYPE_RECT
    FRECT fRectValue;                               // WPCAMERA_ISPCONTROL_TYPE_FRECT
    KSPROPERTY_STEPPING_LONG boundsAndSteppingValue;// WPCAMERA_ISPCONTROL_TYPE_STEPPING
    struct                                          // WPCAMERA_ISPCONTROL_TYPE_BYTEARRAY
    {
        size_t cbSize;
        BYTE byteArray[1];
    };
    KSPROPERTY_ZOOM_ROI_INFO zoomRoIInfo;           // WPCAMERA_ISPCONTROL_TYPE_ZOOMINFO
    LONG lDefaultValue;                             // Default is LONG
} WPCAMERA_ISPCONTROL_TYPES_UNION;

typedef struct 
{
    DWORD cbSize;
    WPCAMERA_ISPCONTROL_DATA_TYPE Type;
    WPCAMERA_ISPCONTROL_TYPES_UNION dataType;
} WPCAMERA_VARIANT;

// Structure representing an individual ISP control
typedef struct WPCAMERA_ISPCONTROL_PROPERTY_S
{
    DWORD cbSize;
    KSIDENTIFIER PropId; 
    WPCAMERA_VARIANT propData;
} WPCAMERA_ISPCONTROL_PROPERTY_S, *PWPCAMERA_ISPCONTROL_PROPERTY_S;

// This structure can be used to represent an array of ISP controls.
// It is currently used along with the WPCAMERA_STORYBOARD_IMGSTAT_ISP_APPLIED_VALUES
// image stats dataType in a WPCAMERA_BLOCK_ITEM_S structure.
typedef struct WPCAMERA_ISPCONTROL_APPLIED_PROPERTIES_S
{ 
    size_t cbSize;   //Size of this structure in bytes
    DWORD cElements; //Number of WPCAMERA_ISPCONTROL_PROPERTY_S structures
    WPCAMERA_ISPCONTROL_PROPERTY_S ISPcontrol[1];// The address of the first 
                                                 // WPCAMERA_ISPCONTROL_PROPERTY_S
                                                 // structure in the "array"
} WPCAMERA_ISPCONTROL_APPLIED_PROPERTIES_S, *PWPCAMERA_ISPCONTROL_APPLIED_PROPERTIES_S;

typedef struct {
    KSPROPERTY Property;
    LONG                Value;                   // value to get or set
    ULONG               Flags;                   // KSPROPERTY_CAMERACONTROL_FLAGS_*
    ULONG               Capabilities;            // KSPROPERTY_CAMERACONTROL_FLAGS_*
    WPCAMERA_VARIANT    PropData;
} KSPROPERTY_CAMERACONTROL_S_WP, *PKSPROPERTY_CAMERACONTROL_S_WP;

///////////////////////////////////////////////////////////////////////////////
// Storyboard frame and enums
///////////////////////////////////////////////////////////////////////////////
// Storyboard frame structure
typedef struct WPCAMERA_STORYBOARD_FRAME_S
{ 
    size_t cbSize;   //Size of this structure in bytes
    DWORD cElements; //Number of WPCAMERA_ISPCONTROL_PROPERTY_S structures
    DWORD dwSBDelayTime;                        // Delay in microseconds between frames
    DWORD dwSBDelayCondition;                   // Delay until the condition is met
    WPCAMERA_ISPCONTROL_PROPERTY_S ISPcontrol[1];// The address of the first 
                                                 // WPCAMERA_ISPCONTROL_PROPERTY_S
                                                 // structure in the "array"
} WPCAMERA_STORYBOARD_FRAME_S, *PWPCAMERA_STORYBOARD_FRAME_S;

// Storyboard dwSBDelayCondition values
typedef enum {
    WPCAMERA_STORYBOARD_DELAY_COND_NONE = 0x0000,
    WPCAMERA_STORYBOARD_DELAY_COND_FOCUS = 0x0001,
    WPCAMERA_STORYBOARD_DELAY_COND_ZOOM  = 0x0002,
    WPCAMERA_STORYBOARD_DELAY_COND_EXPOSURE = 0x0004,
    WPCAMERA_STORYBOARD_DELAY_COND_AWB      = 0x0008,
    WPCAMERA_STORYBOARD_DELAY_COND_FLASH_READY = 0x0010,
    WPCAMERA_STORYBOARD_DEALY_COND_ALL   = 0x80000000 // All ISP controls must be applied before proceeding
} WPCAMERA_STORYBOARD_DELAY_COND_VALUE;

// Supported storyboard targets
typedef enum WPCAMERA_STORYBOARD_TARGET 
{  
    STORYBOARD_TARGET_STILL, 
    STORYBOARD_TARGET_PREVIEW,
    STORYBOARD_TARGET_VIDEO
} WPCAMERA_STORYBOARD_TARGET;

///////////////////////////////////////////////////////////////////////////////
// Storyboard structure
///////////////////////////////////////////////////////////////////////////////
// Storyboard structure
typedef struct 
{ 
    size_t cbSize;                        // Size of this structure in bytes 
    WPCAMERA_STORYBOARD_TARGET sbTarget;  // Destination for this storyboard
    WPCAMERA_STORYBOARD_HEADER_S sbHeader;// The storyboard header structure
    DWORD csbFrames;                      // The number of frames in this storyboard
    WPCAMERA_STORYBOARD_FRAME_S SBFrame;  // The first storyboard frame in the "array"
} KSPROPERTY_CAMERACONTROL_SB_S, *PKSPROPERTY_CAMERACONTROL_SB_S;

///////////////////////////////////////////////////////////////////////////////
// Storyboard resource estimate request structure
///////////////////////////////////////////////////////////////////////////////
// Storyboard resource estimate request
typedef struct 
{ 
    KSPROPERTY ksProp;
    GUID guidSBId;              // Unique ID for this storyboard
    DWORD dwResourceEstimate;   // The resource estimate in bytes    
}KSPROPERTY_CAMERACONTROL_SB_RESOURCE_ESTIMATE_S, *PKSPROPERTY_CAMERACONTROL_SB_RESOURCE_ESTIMATE_S;

///////////////////////////////////////////////////////////////////////////////
// Device properties for Windows Phone cameras
///////////////////////////////////////////////////////////////////////////////

#ifdef DEFINE_DEVPROPKEY

//
// Device properties, these properties are stored in Windows Phone 8-style camera device interfaces.
//  {B7B4D61C-5A64-4187-A52E-B1539F359099}
//
DEFINE_DEVPROPKEY(DEVPKEY_WP8Camera_Flags,          0xb7b4d61c, 0x5a64, 0x4187, 0xa5, 0x2e, 0xb1, 0x53, 0x9f, 0x35, 0x90, 0x99, 2);     // DEVPROP_TYPE_UINT32

#define WP8CF_ORIGINAL          (0x00000001)  // If set, indicates this is an interface on an original WP8 camera device
#define WP8CF_LEGACY            (0x00001000)  // If set, indicates this is a legacy interface, for accessing a new camera device, using the original WP8 contract

#endif

// Note: In the original WP8 camera driver, the following GUIDs appeared in the DEVPKEY_Device_PhysicalDeviceLocation device key.
// That is now deprecated, and replaced by the property above. Instead, the DEVPKEY_Device_PhysicalDeviceLocation device key should
// always contain an ACPI_PLD_BUFFER structure.

// GUID for primary (rear-facing) camera
// {9D9A0F5E-CDE9-49f5-B464-BF13429DDEB5}
DEFINE_GUID(PRIMARY_CAMERA,
0x9d9a0f5e, 0xcde9, 0x49f5, 0xb4, 0x64, 0xbf, 0x13, 0x42, 0x9d, 0xde, 0xb5);

// GUID for front-facing camera
// {75D53C4E-963E-4415-AA88-89107F08D1EE}
DEFINE_GUID(FRONT_FACING_CAMERA,
0x75d53c4e, 0x963e, 0x4415, 0xaa, 0x88, 0x89, 0x10, 0x7f, 0x8, 0xd1, 0xee);


#if (NTDDI_VERSION >= NTDDI_WINBLUE && NTDDI_VERSION < NTDDI_WINTHRESHOLD)

// These Modes are defined for PhoneBlue only.
// Communications mode specifies that the application expects VoIP specific signal processing at the lowest latency and the hardware preferred sample rate for wideband speech (such as 16 kHz).
// For both Capture and Render.
#define STATIC_AUDIO_SIGNALPROCESSINGMODE_COMMUNICATIONS 0x98951333, 0xb9cd, 0x48b1, 0xa0, 0xa3, 0xff, 0x40, 0x68, 0x2d, 0x73, 0xf7
DEFINE_GUIDSTRUCT("98951333-B9CD-48B1-A0A3-FF40682D73F7", AUDIO_SIGNALPROCESSINGMODE_COMMUNICATIONS);
#define AUDIO_SIGNALPROCESSINGMODE_COMMUNICATIONS DEFINE_GUIDNAMED(AUDIO_SIGNALPROCESSINGMODE_COMMUNICATIONS)

// Speech mode specifies that the application expects speech recognition specific signal processing at the lowest latency and the hardware preferred sample rate for wideband speech (such as 16 kHz).
// For Capture only.
#define STATIC_AUDIO_SIGNALPROCESSINGMODE_SPEECH 0xfc1cfc9b, 0xb9d6, 0x4cfa, 0xb5, 0xe0, 0x4b, 0xb2, 0x16, 0x68, 0x78, 0xb2
DEFINE_GUIDSTRUCT("FC1CFC9B-B9D6-4CFA-B5E0-4BB2166878B2", AUDIO_SIGNALPROCESSINGMODE_SPEECH);
#define AUDIO_SIGNALPROCESSINGMODE_SPEECH DEFINE_GUIDNAMED(AUDIO_SIGNALPROCESSINGMODE_SPEECH)

// Music Mode specifies that the application expects post processing suitable for music content if available or else the same treatments as Default mode.
// For Render only.
#define STATIC_AUDIO_SIGNALPROCESSINGMODE_MUSIC 0x4780004e, 0x7133, 0x41d8, 0x8c, 0x74, 0x66, 0x0d, 0xad, 0xd2, 0xc0, 0xee
DEFINE_GUIDSTRUCT("4780004E-7133-41D8-8C74-660DADD2C0EE", AUDIO_SIGNALPROCESSINGMODE_MUSIC);
#define AUDIO_SIGNALPROCESSINGMODE_MUSIC DEFINE_GUIDNAMED(AUDIO_SIGNALPROCESSINGMODE_MUSIC)

#endif 


#pragma warning(pop)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#endif // !defined(_KSMEDIA_PHONE_)