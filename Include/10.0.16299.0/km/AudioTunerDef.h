

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __audiotunerdef_h__
#define __audiotunerdef_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_audiotunerdef_0000_0000 */
/* [local] */ 

typedef 
enum _TUNER_POWERSTATE
    {
        TUNER_POWERSTATE_OFF	= 0,
        TUNER_POWERSTATE_ON	= ( TUNER_POWERSTATE_OFF + 1 ) 
    } 	TUNER_POWERSTATE;

typedef enum _TUNER_POWERSTATE *PTUNER_POWERSTATE;

typedef 
enum _TUNER_ANTENNATYPE
    {
        TUNER_ANTENNATYPE_EXTERNAL	= 0,
        TUNER_ANTENNATYPE_INTERNAL	= ( TUNER_ANTENNATYPE_EXTERNAL + 1 ) 
    } 	TUNER_ANTENNATYPE;

typedef enum _TUNER_ANTENNATYPE *PTUNER_ANTENNATYPE;

typedef 
enum _TUNER_AUDIOENDPOINT
    {
        TUNER_AUDIOENDPOINT_INVALID	= 0,
        TUNER_AUDIOENDPOINT_AUTO	= ( TUNER_AUDIOENDPOINT_INVALID + 1 ) ,
        TUNER_AUDIOENDPOINT_HEADSET	= ( TUNER_AUDIOENDPOINT_AUTO + 1 ) ,
        TUNER_AUDIOENDPOINT_SPEAKER	= ( TUNER_AUDIOENDPOINT_HEADSET + 1 ) ,
        _TUNER_AUDIOENDPOINT_COUNT	= ( TUNER_AUDIOENDPOINT_SPEAKER + 1 ) 
    } 	TUNER_AUDIOENDPOINT;

typedef enum _TUNER_AUDIOENDPOINT *PTUNER_AUDIOENDPOINT;

typedef 
enum _TUNER_SYSTEMRESTARTSTATE
    {
        TUNER_SYSTEMRESTARTSTATE_REBOOT	= 0,
        TUNER_SYSTEMRESTARTSTATE_READY	= ( TUNER_SYSTEMRESTARTSTATE_REBOOT + 1 ) 
    } 	TUNER_SYSTEMRESTARTSTATE;

typedef enum _TUNER_SYSTEMRESTARTSTATE *PTUNER_SYSTEMRESTARTSTATE;

typedef LONG FM_FREQUENCY;

typedef LONG *PFM_FREQUENCY;

typedef 
enum _FM_SEEKDIR
    {
        FM_SEEKDIR_FORWARD	= 0,
        FM_SEEKDIR_BACKWARD	= ( FM_SEEKDIR_FORWARD + 1 ) 
    } 	FM_SEEKDIR;

typedef enum _FM_SEEKDIR *PFM_SEEKDIR;

typedef 
enum _FM_REGION
    {
        FM_REGION_INVALID	= 0,
        FM_REGION_NORTHAMERICA	= ( FM_REGION_INVALID + 1 ) ,
        FM_REGION_EUROPE	= ( FM_REGION_NORTHAMERICA + 1 ) ,
        FM_REGION_JAPAN	= ( FM_REGION_EUROPE + 1 ) 
    } 	FM_REGION;

typedef enum _FM_REGION *PFM_REGION;

typedef struct _FM_REGIONRANGE
    {
    FM_FREQUENCY FrequencyMin;
    FM_FREQUENCY FrequencyMax;
    FM_FREQUENCY FrequencySpacing;
    } 	FM_REGIONRANGE;

typedef struct _FM_REGIONRANGE *PFM_REGIONRANGE;

typedef 
enum _FM_STEREOMODE
    {
        FM_STEREOMODE_MONO	= 0,
        FM_STEREOMODE_STEREO	= ( FM_STEREOMODE_MONO + 1 ) 
    } 	FM_STEREOMODE;

typedef enum _FM_STEREOMODE *PFM_STEREOMODE;

typedef 
enum _RDS_TYPE
    {
        RDS_TYPE_PI	= 0x1,
        RDS_TYPE_PTY	= 0x2,
        RDS_TYPE_PS	= 0x4,
        RDS_TYPE_RT	= 0x10,
        RDS_TYPE_RTPLUS	= 0x20
    } 	RDS_TYPE;

typedef enum _RDS_TYPE *PRDS_TYPE;

#define	RDS_CCHMAX_PS	( 9 )

#define	RDS_CCHMAX_RT	( 65 )

typedef struct _RDS_RTPLUS_TAG
    {
    BOOL fRTPlusItemToggleBit;
    BOOL fRTPlusItemRunningBit;
    BYTE bContentType_tag1;
    BYTE bStartMarker_tag1;
    BYTE bLengthMarker_tag1;
    BYTE bContentType_tag2;
    BYTE bStartMarker_tag2;
    BYTE bLengthMarker_tag2;
    } 	RDS_RTPLUS_TAG;

typedef struct _RDS_RTPLUS_TAG *PRDS_RTPLUS_TAG;

typedef struct _RDS_DATA
    {
    RDS_TYPE Type;
    union 
        {
        WORD wPi;
        WORD wPty;
        WCHAR szPs[ 9 ];
        WCHAR szRt[ 65 ];
        RDS_RTPLUS_TAG RtPlusTag;
        } 	Value;
    } 	RDS_DATA;

typedef struct _RDS_DATA *PRDS_DATA;

DEFINE_GUID(TUNER_EVENT_POWERSTATECHANGE, 0xca88cdb8, 0x8986, 0x40f4, 0xb0, 0xe7, 0xaa, 0x65, 0x34, 0x50, 0x7, 0xd7);
DEFINE_GUID(TUNER_EVENT_ANTENNASTATUSCHANGE, 0xf577674b, 0xeee4, 0x48eb, 0xba, 0x48, 0x7c, 0xb9, 0x5c, 0xde, 0x6a, 0x99);
DEFINE_GUID(TUNER_EVENT_SYSTEMRESTARTSTATECHANGE, 0x51ee679f, 0x5e93, 0x4786, 0x90, 0x4d, 0x75, 0xa3, 0x33, 0x40, 0x6e, 0x6d);
DEFINE_GUID(FM_EVENT_RDSAVAILABLE, 0x496528f1, 0x2648, 0x45c9, 0x8e, 0x1, 0xf5, 0x86, 0x16, 0xc2, 0xb9, 0x31);
DEFINE_GUID(FM_EVENT_STEREOMODECHANGE, 0x54fdd6b7, 0x10a9, 0x4ea0, 0x96, 0x40, 0x4d, 0xb3, 0x65, 0xb6, 0xf7, 0x14);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdef_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdef_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


