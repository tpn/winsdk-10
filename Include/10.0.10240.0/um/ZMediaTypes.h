//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
////////////////////////////////////////////////////////////////////////////////
// ZMediaTypes.h
////////////////////////////////////////////////////////////////////////////////

#ifndef _ZMEDIATYPES_
#define _ZMEDIATYPES_

#include <zmedialibtypes.h>
#include <zmediaqueuetypes.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// TODO: MEIW: rich metadata is not used anywhere in Mango.  
// Disable it for now.  The union datatype is causing RPC marshalling issue.
 
#ifdef HD_RADIO

typedef enum _ZMEDIAQUEUE_RADIO_METADATA_TYPE
{
    ZMEDIAQUEUE_RADIO_METADATA_TYPE_NONE,
    ZMEDIAQUEUE_RADIO_METADATA_TYPE_RT,
    ZMEDIAQUEUE_RADIO_METADATA_TYPE_RT_PLUS,
    ZMEDIAQUEUE_RADIO_METADATA_TYPE_HD
} ZMEDIAQUEUE_RADIO_METADATA_TYPE;

typedef struct _ZMEDIAQUEUE_RADIO_RDS_TEXT
{
    WCHAR radioText[ZMEDIAQUEUE_RADIO_MAX_LENGTH_RADIO_TEXT + 1];
    WCHAR scrollingText[ZMEDIAQUEUE_RADIO_MAX_LENGTH_SCROLLING_TEXT + 1];
    WORD  genre;
} ZMEDIAQUEUE_RADIO_RDS_TEXT;

typedef struct _ZMEDIAQUEUE_RADIO_RT_PLUS
{
    WCHAR title[ZMEDIAQUEUE_RADIO_MAX_LENGTH_TITLE + 1];
    WCHAR artist[ZMEDIAQUEUE_RADIO_MAX_LENGTH_ARTIST + 1];
    WCHAR album[ZMEDIAQUEUE_RADIO_MAX_LENGTH_ALBUM + 1];
    WORD genre;
} ZMEDIAQUEUE_RADIO_RT_PLUS;

typedef struct _ZMEDIAQUEUE_RADIO_PSD
{
    WCHAR title[ZMEDIAQUEUE_RADIO_MAX_LENGTH_TITLE + 1];
    WCHAR artist[ZMEDIAQUEUE_RADIO_MAX_LENGTH_ARTIST + 1];
    WCHAR album[ZMEDIAQUEUE_RADIO_MAX_LENGTH_ALBUM + 1];
    WCHAR genre[ZMEDIAQUEUE_RADIO_MAX_LENGTH_GENRE + 1];
    WORD stationGenre;
} ZMEDIAQUEUE_RADIO_PSD;

typedef struct _ZMEDIAQUEUE_RADIO_MEDIABASE_ID
{
    DWORD mediabase[16];
} ZMEDIAQUEUE_RADIO_MEDIABASE_ID;

// ZMEDIAQUEUE_RADIO_RICHMETADATA
//
// This contains all the radio metadata (RDS & HD)
//
// All metadata shares common fields for station
// and mediaBase. Based on the metaType, the appropriate
// data should be consumed from the union.
//
// COMMON DATA:
// ============
// metaType
// station
// mediaBase
//
// SPECIFIC DATA:
//===============
// psd - valid when metaType = ZMEDIAQUEUE_RADIO_META_TYPE_HD
// rtPlus - valid when metaType = ZMEDIAQUEUE_RADIO_META_TYPE_RT_PLUS
// rdsText - valid when metaType = ZMEDIAQUEUE_RADIO_META_TYPE_RT
typedef struct _ZMEDIAQUEUE_RADIO_RICHMETADATA
{
    ZMEDIAQUEUE_RADIO_METADATA_TYPE metaType;
    ZMEDIAQUEUE_RADIO_STATION_INFO station;
    ZMEDIAQUEUE_RADIO_MEDIABASE_ID mediaBase;

    union
    {
        ZMEDIAQUEUE_RADIO_PSD psd;
        ZMEDIAQUEUE_RADIO_RT_PLUS rtPlus;
        ZMEDIAQUEUE_RADIO_RDS_TEXT rdsText;
    };

    BOOL fIdiAvailable;
    ZMEDIAQUEUE_RADIO_IDI idi;
} ZMEDIAQUEUE_RADIO_RICHMETADATA;

#endif // HD_RADIO

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // _ZMEDIATYPES_

