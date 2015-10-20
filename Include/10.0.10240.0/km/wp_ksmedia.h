//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

/******************************Module*Header*******************************\
*
* Module Name: wp_ksmedia.h
*
* This header holds the KS IDs and data structures for the camera.
*
\**************************************************************************/

#pragma once
#include <ksmedia.h>
#include <ksmedia_phone.h>

// {29B040D3-50E1-48AC-BC9F-D7CB91CD5BF3}
#define STATIC_KSPROPSETID_Metadata 0x29b040d3, 0x50e1, 0x48ac, 0xbc, 0x9f, 0xd7, 0xcb, 0x91, 0xcd, 0x5b, 0xf3
DEFINE_GUIDSTRUCT("29B040D3-50E1-48AC-BC9F-D7CB91CD5BF3", KSPROPSETID_Metadata);
#define KSPROPSETID_Metadata DEFINE_GUIDNAMED(KSPROPSETID_Metadata) 

typedef enum 
{ 
    KSPROPERTY_METADATA_EXIF=1, 
    KSPROPERTY_METADATA_ALL 
} KSPROPERTY_METADATA; 

typedef struct 
{ 
    KSPROPERTY ksProp; 
    CameraMetadata camMetadata; 
} KSPROPERTY_METADATA_S, *PKSPROPERTY_METADATA_S;

typedef struct {  
    KSPROPERTY_DESCRIPTION      PropertyDescription;  
    KSPROPERTY_MEMBERSHEADER    MembersHeader;  
    LONG                        DefaultValue;  
} CAMERACONTROL_DEFAULTLIST_WP;  

///////////////////////////////////////////////////////////////////////////////
// Set active storyboard
///////////////////////////////////////////////////////////////////////////////
// Set Active Storyboard
typedef struct 
{ 
    GUID guidSBId;     // Unique ID for this storyboard 
} KSPROPERTY_CAMERACONTROL_SET_ACTIVE_SB_S, *PKSPROPERTY_CAMERACONTROL_SET_ACTIVE_SB_S;

///////////////////////////////////////////////////////////////////////////////
// Storyboard Trigger 
///////////////////////////////////////////////////////////////////////////////
// Storyboard trigger values
typedef enum {
    WPCAMERA_STORYBOARD_TRIGGER_START,
    WPCAMERA_STORYBOARD_TRIGGER_STOP,
    WPCAMERA_STORYBOARD_TRIGGER_STOPLOOP,
    WPCAMERA_STORYBOARD_TRIGGER_CANCEL
} WPCAMERA_STORYBOARD_TRIGGER_VALUE;

///////////////////////////////////////////////////////////////////////////////
// Expected driver data format
///////////////////////////////////////////////////////////////////////////////
// Block item structure
typedef struct WPCAMERA_BLOCK_ITEM_S
{
    DWORD cbSize;     // The size of this structure
    DWORD dataType;   // The WPCAMERA_STORYBOARD_IMGSTAT_VALUE of this data
    DWORD cbDataSize; // Size of this block item
    BYTE byData[4];   // First byte of the data + Alignment
} WPCAMERA_BLOCK_ITEM_S, *PWPCAMERA_BLOCK_ITEM_S;

// Data block structure
typedef struct WPCAMERA_BLOCK_DESCRIPTOR_S
{
    DWORD cbSize;        // The size of this structure
    GUID guidSBId;       // The storyboard identifier for this data
    DWORD cElements;     // The number of WPCAMERA_BLOCK_ITEM_S structures
    DWORD dwFrameID;     // The identifier of this frame
    KS_BITMAPINFOHEADER rawImageInfoHeader; // Official data struct to describe FourCC
                                            // and image info
    WPCAMERA_BLOCK_ITEM_S BlockItem;        //The first block item in the "array"
} WPCAMERA_BLOCK_DESCRIPTOR_S, *PWPCAMERA_BLOCK_DESCRIPTOR_S;

// Define our cusom FourCC value
#define FOURCC_WPSB MAKEFOURCC('W', 'P', 'S', 'B')

///////////////////////////////////////////////////////////////////////////////
// GUID for ICodecAPI
///////////////////////////////////////////////////////////////////////////////

// Encoded nal units in annex-b format
// DataType: VT_BOOL
// {F0496C31-AACB-441D-BFB7-4186571A11F3}
DEFINE_GUID(CODECAPI_VideoEncNalUnits, 
0xf0496c31, 0xaacb, 0x441d, 0xbf, 0xb7, 0x41, 0x86, 0x57, 0x1a, 0x11, 0xf3);

// Drop frame by request
// Datatype: VT_UI4
// {98C78118-70F8-4211-BC53-DE2ECB82C6D2}
DEFINE_GUID(CODECAPI_DropNumFrames, 
0x98c78118, 0x70f8, 0x4211, 0xbc, 0x53, 0xde, 0x2e, 0xcb, 0x82, 0xc6, 0xd2);


///////////////////////////////////////////////////////////////////////////////
// GUID for ICodecAPI
///////////////////////////////////////////////////////////////////////////////

// Define the media subtype for EXIF
// 55A9746A-3B19-47F0-9704-ACB15A739F27
DEFINE_GUID(MEDIASUBTYPE_WP_EXIF,
0x55A9746A, 0x3B19, 0x47F0, 0x97, 0x04, 0xAC, 0xB1, 0x5A, 0x73, 0x9F, 0x27);

// Define the media subtype for METADATA
// E2F541A9-6D6B-4AAE-B61C-0EF85916EF90
DEFINE_GUID(MEDIASUBTYPE_WP_METADATA,
0xE2F541A9, 0x6D6B, 0x4AAE, 0xB6, 0x1C, 0x0E, 0xF8, 0x59, 0x16, 0xEF, 0x90);

// Define the media subtype for Applied ISP Values
// 472CCA81-5684-4817-80E5-0FF6B322E337
DEFINE_GUID(MEDIASUBTYPE_WP_ISP,
0x472CCA81, 0x5684, 0x4817, 0x80, 0xE5, 0x0F, 0xF6, 0xB3, 0x22, 0xE3, 0x37);

// Define the four static streams for
typedef enum
{
    WPCAMERA_STORYBOARD_STREAM_IMG_DATA  = 0,
    WPCAMERA_STORYBOARD_STREAM_ISP_METADATA,
    WPCAMERA_STORYBOARD_STREAM_ISP_APPLIED,
    WPCAMERA_STORYBOARD_STREAM_EXIF,
    WPCAMERA_STORYBOARD_STREAM_MAX
} WPCAMERA_STORYBOARD_STREAM_ID;

// Define the IMFAttributes GUID for MFTs to indicate in which attributes
//  they are interested.
// {B00FF797-0B7C-476E-9CE5-0BC9861805A2}
DEFINE_GUID(WP8_MFT_SUPPORTED_PROPERTIES, 
0xb00ff797, 0xb7c, 0x476e, 0x9c, 0xe5, 0xb, 0xc9, 0x86, 0x18, 0x5, 0xa2);

DEFINE_GUID(DEFAULT_MFT_LIST_GUID,
0x4a829421, 0x9dc4, 0x48eb, 0xad, 0xf7, 0x4f, 0x09, 0xbd, 0xf2, 0x40, 0x9b);

///////////////////////////////////////////////////////////////////////////////
// Public JpegAdapterMFT GUIDs
///////////////////////////////////////////////////////////////////////////////

//
// JpegQuality Property (Type: Double - Valid range: 0.0 - 1.0)
// 

// {96D557EF-57B5-4577-B11F-763658BF12E1}
DEFINE_GUID(JpegAdapterMFT_JpegQuality, 
0x96d557ef, 0x57b5, 0x4577, 0xb1, 0x1f, 0x76, 0x36, 0x58, 0xbf, 0x12, 0xe1);

//
// Thumbnail Longest Dimension Property (Type: UINT32)
//

// {D2F5CC87-4820-4567-A75B-6191CAB49517}
DEFINE_GUID(JpegAdapterMFT_ThumbnailLongestDimension, 
0xd2f5cc87, 0x4820, 0x4567, 0xa7, 0x5b, 0x61, 0x91, 0xca, 0xb4, 0x95, 0x17);

//
// JpegAdapterMFT_OEMCustomJpegMode(Type: UINT32)
//

// {D631ABA6-D3C3-4AF1-88AF-EDBF4A7FDD8D}
DEFINE_GUID(JpegAdapterMFT_OEMCustomJpegMode, 
0xd631aba6, 0xd3c3, 0x4af1, 0x88, 0xaf, 0xed, 0xbf, 0x4a, 0x7f, 0xdd, 0x8d);


///////////////////////////////////////////////////////////////////////////////
// Fixed ClassId for OEM custom Jpeg MFT
///////////////////////////////////////////////////////////////////////////////

// {BAA08AA4-9DAD-42AF-8076-5E57373C03D2}
DEFINE_GUID(CLSID_OEM_JPEG_ENCODER_MFT, 
0xbaa08aa4, 0x9dad, 0x42af, 0x80, 0x76, 0x5e, 0x57, 0x37, 0x3c, 0x3, 0xd2);


//===========================================================================

// MEDIASUBTYPE_WPSB
// Data type: GUID
// {42535057-0000-0010-8000-00AA00389B71}
/// <summary>
///     Media SubType of Storyboard custom type. Used for Windows Phone Camera
/// </summary>
DEFINE_GUID( MEDIASUBTYPE_WPSB, 0x42535057, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
// N.B This is for back-compat with WP8 drivers. This is deprecated for future drivers.

//===========================================================================
// KSSTREAM_HEADER extensions for digital video
//===========================================================================

#define KS_VIDEO_FLAG_STILLCONFIRMATIONINDEX 0x0080
// N.B. WHen this is set, the Reserved2 field contains the still confirmation image index
// N.B. This is for back-compat with WP8 drivers. This is deprecated for future drivers.

