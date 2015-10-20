//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this sample source code is subject to the terms of the Microsoft
// license agreement under which you licensed this sample source code. If
// you did not accept the terms of the license agreement, you are not
// authorized to use this sample source code. For the terms of the license,
// please see the license agreement between you and Microsoft or, if applicable,
// see the LICENSE.RTF on your install media or the root of your tools installation.
// THE SAMPLE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//

#ifndef _AUDIOTUNERPROP_H_
#define _AUDIOTUNERPROP_H_

#if (_MSC_VER >= 1000)
#pragma once
#endif

#include <AudioTunerDef.h>

#ifdef __cplusplus
extern "C" {
#endif

// ----------------------------------------------------------------------------
//
// Tuner properties.
//

//
// RSSI
//
//  Indicates the RSSI.  Range is from 0 to 255.  This property is read-only.
//

// {597995DF-C843-41e4-AD45-C27EA4699E3F}
DEFINE_GUID(TUNER_PROPID_RSSI, 
    0x597995df, 0xc843, 0x41e4, 0xad, 0x45, 0xc2, 0x7e, 0xa4, 0x69, 0x9e, 0x3f);

typedef struct _TUNER_PROPDATA_RSSI
{
    DWORD dwRssi;
} TUNER_PROPDATA_RSSI, *PTUNER_PROPDATA_RSSI;

//
// Antenna Type
//
//  Indicates the antenna type.  This property is read-only.
//

// {6FAFEB91-60EA-48e1-87F3-4712590E325A}
DEFINE_GUID(TUNER_PROPID_ANTENNATYPE, 
    0x6fafeb91, 0x60ea, 0x48e1, 0x87, 0xf3, 0x47, 0x12, 0x59, 0xe, 0x32, 0x5a);

typedef struct _TUNER_PROPDATA_ANTENNATYPE
{
    TUNER_ANTENNATYPE AntennaType;
} TUNER_PROPDATA_ANTENNATYPE, *PTUNER_PROPDATA_ANTENNATYPE;

//
// Antenna Status
//
//  Indicates whether the antenna is attached.  This property is read-only.
//

// {657C63C5-728D-4c18-95B4-18576B8EE706}
DEFINE_GUID(TUNER_PROPID_ANTENNASTATUS, 
    0x657c63c5, 0x728d, 0x4c18, 0x95, 0xb4, 0x18, 0x57, 0x6b, 0x8e, 0xe7, 0x6);

typedef struct _TUNER_PROPDATA_ANTENNASTATUS
{
    BOOL fAttached;
} TUNER_PROPDATA_ANTENNASTATUS, *PTUNER_PROPDATA_ANTENNASTATUS;

//
// Audio Routing Preference
//
//  Indicates the preferred audio endpoint selection for receivers.  This property
//  is read-write.
//

// {78459DAD-B621-4f08-AE2F-59FF4DC8F386}
DEFINE_GUID(TUNER_PROPID_AUDIOROUTINGPREFERENCE, 
    0x78459dad, 0xb621, 0x4f08, 0xae, 0x2f, 0x59, 0xff, 0x4d, 0xc8, 0xf3, 0x86);

typedef struct _TUNER_PROPDATA_AUDIOROUTINGPREFERENCE
{
    TUNER_AUDIOENDPOINT AudioEndpoint;
} TUNER_PROPDATA_AUDIOROUTINGPREFERENCE, *PTUNER_PROPDATA_AUDIOROUTINGPREFERENCE;

// ----------------------------------------------------------------------------
//
// FM properties.
//

//
// FM Stereo Mode
//
//  Indicates whether the signal is broadcast in stereo.  This property
//  is read-only.
//

// {C9851417-2B06-4e0a-A54F-AB633D0FD762}
DEFINE_GUID(FM_PROPID_STEREOMODE, 
    0xc9851417, 0x2b06, 0x4e0a, 0xa5, 0x4f, 0xab, 0x63, 0x3d, 0xf, 0xd7, 0x62);

typedef struct _FM_PROPDATA_STEREOMODE
{
    FM_STEREOMODE StereoMode;
} FM_PROPDATA_STEREOMODE, *PFM_PROPDATA_STEREOMODE;

#ifdef __cplusplus
}
#endif

#endif // _AUDIOTUNERPROP_H_
