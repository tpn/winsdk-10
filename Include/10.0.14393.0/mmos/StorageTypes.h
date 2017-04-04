

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
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


#ifndef __storagetypes_h__
#define __storagetypes_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_storagetypes_0000_0000 */
/* [local] */ 

typedef 
enum _STORAGE_DEVICE_PROPERTIES
    {
        STORAGE_PROPERTY_NONE	= 0,
        STORAGE_PROPERTY_REMOVABLE	= 0x1
    } 	STORAGE_DEVICE_PROPERTIES;

typedef 
enum _STORAGE_STATE
    {
        STORAGE_STATE_PRESENCE	= 0,
        STORAGE_STATE_VOLUME_STATUS	= ( STORAGE_STATE_PRESENCE + 1 ) ,
        STORAGE_STATE_FREE_SPACE	= ( STORAGE_STATE_VOLUME_STATUS + 1 ) ,
        STORAGE_STATE_TEMP_CLEANUP	= ( STORAGE_STATE_FREE_SPACE + 1 ) ,
        STORAGE_STATE_APP_PAIRING	= ( STORAGE_STATE_TEMP_CLEANUP + 1 ) ,
        STORAGE_STATE_FINISHED_USAGE_CATEGORY_UPDATE	= ( STORAGE_STATE_APP_PAIRING + 1 ) 
    } 	STORAGE_STATE;

typedef 
enum _STORAGE_PRESENCE_STATE
    {
        STORAGE_PRESENCE_MOUNTED	= 0,
        STORAGE_PRESENCE_PREDISMOUNTED	= ( STORAGE_PRESENCE_MOUNTED + 1 ) ,
        STORAGE_PRESENCE_DISMOUNTED	= ( STORAGE_PRESENCE_PREDISMOUNTED + 1 ) 
    } 	STORAGE_PRESENCE_STATE;

typedef 
enum _STORAGE_DISMOUNT_REASON
    {
        STORAGE_DISMOUNT_NONE	= 0,
        STORAGE_DISMOUNT_SAFE_REMOVAL	= ( STORAGE_DISMOUNT_NONE + 1 ) ,
        STORAGE_DISMOUNT_SURPRISE_REMOVAL	= ( STORAGE_DISMOUNT_SAFE_REMOVAL + 1 ) ,
        STORAGE_DISMOUNT_IO_FAILURE	= ( STORAGE_DISMOUNT_SURPRISE_REMOVAL + 1 ) ,
        STORAGE_DISMOUNT_BUSY	= ( STORAGE_DISMOUNT_IO_FAILURE + 1 ) 
    } 	STORAGE_DISMOUNT_REASON;

typedef 
enum _STORAGE_VOLUME_STATUS
    {
        STORAGE_STATUS_NORMAL	= 0,
        STORAGE_STATUS_DIRTY	= 0x1,
        STORAGE_STATUS_UNFORMATTED	= 0x2,
        STORAGE_STATUS_NEW_CARD	= 0x4,
        STORAGE_STATUS_DISABLED	= 0x8
    } 	STORAGE_VOLUME_STATUS;

typedef 
enum _STORAGE_FREE_SPACE_STATE
    {
        STORAGE_SPACE_NORMAL	= 0,
        STORAGE_SPACE_LOW	= ( STORAGE_SPACE_NORMAL + 1 ) 
    } 	STORAGE_FREE_SPACE_STATE;

typedef 
enum _STORAGE_TEMP_CLEANUP_STATE
    {
        STORAGE_TEMP_NORMAL	= 0,
        STORAGE_TEMP_CLEANUP	= ( STORAGE_TEMP_NORMAL + 1 ) 
    } 	STORAGE_TEMP_CLEANUP_STATE;

typedef 
enum _STORAGE_DEVICE_TYPE
    {
        STORAGE_DEVICE_CURRENT	= 0,
        STORAGE_DEVICE_INTERNAL	= ( STORAGE_DEVICE_CURRENT + 1 ) ,
        STORAGE_DEVICE_SD	= ( STORAGE_DEVICE_INTERNAL + 1 ) ,
        STORAGE_DEVICE_MAX	= ( STORAGE_DEVICE_SD + 1 ) 
    } 	STORAGE_DEVICE_TYPE;

typedef struct _STORAGE_DEVICE_INFO
    {
    DWORD Size;
    WCHAR PathName[ 260 ];
    DWORD DeviceProperties;
    STORAGE_PRESENCE_STATE PresenceState;
    STORAGE_DISMOUNT_REASON DismountReason;
    DWORD VolumeStatus;
    STORAGE_FREE_SPACE_STATE FreeSpaceState;
    STORAGE_TEMP_CLEANUP_STATE TempCleanupState;
    GUID StorageId;
    DWORD AppPairingStatus;
    } 	STORAGE_DEVICE_INFO;

typedef struct _STORAGE_DEVICE_INFO *PSTORAGE_DEVICE_INFO;

typedef 
enum _STORAGE_DISMOUNT_FLAGS
    {
        STORAGE_DISMOUNT_FLAG_FORCE	= 0x1
    } 	STORAGE_DISMOUNT_FLAGS;

typedef 
enum _STORAGE_CARD_ACCESS_FLAGS
    {
        STORAGE_CARD_WRITE_ACCESS_MUSIC	= 0x1,
        STORAGE_CARD_WRITE_ACCESS_VIDEOS	= 0x2,
        STORAGE_CARD_WRITE_ACCESS_PICTURES	= 0x4,
        STORAGE_CARD_WRITE_ACCESS_APP_DATA	= 0x8,
        STORAGE_CARD_WRITE_ACCESS_APP_INSTALL	= 0x10,
        STORAGE_CARD_WRITE_ACCESS_DOCUMENTS	= 0x20,
        STORAGE_CARD_WRITE_ACCESS_DOWNLOADS	= 0x40,
        STORAGE_CARD_WRITE_ACCESS_BLINKDATA	= 0x80,
        STORAGE_CARD_WRITE_ACCESS_DONT_SET_DEFAULT	= 0x10000
    } 	STORAGE_CARD_ACCESS_FLAGS;

typedef 
enum _STORAGE_SETTING
    {
        STORAGE_SETTING_CARD_DISABLED	= 1,
        STORAGE_SETTING_WRITE_ACCESS	= ( STORAGE_SETTING_CARD_DISABLED + 1 ) ,
        STORAGE_SETTING_APP_PAIRING_STATUS	= ( STORAGE_SETTING_WRITE_ACCESS + 1 ) 
    } 	STORAGE_SETTING;

typedef 
enum _STORAGE_APP_PAIRING_STATUS
    {
        STORAGE_APP_PAIRING_DIFFERENT_DEVICE	= 0x1,
        STORAGE_APP_PAIRING_SAME_DEVICE	= 0x2,
        STORAGE_APP_PAIRING_NO_DEVICE	= 0x4
    } 	STORAGE_APP_PAIRING_STATUS;

typedef 
enum _STORAGE_SCAN_VOLUME_RESULT
    {
        STORAGE_SCAN_VOLUME_NO_ERRORS	= 0,
        STORAGE_SCAN_VOLUME_ERRORS_FIXED	= ( STORAGE_SCAN_VOLUME_NO_ERRORS + 1 ) ,
        STORAGE_SCAN_VOLUME_ERRORS_NOT_FIXED	= ( STORAGE_SCAN_VOLUME_ERRORS_FIXED + 1 ) 
    } 	STORAGE_SCAN_VOLUME_RESULT;

typedef 
enum _STORAGE_SCAN_VOLUME_FLAGS
    {
        STORAGE_SCAN_VOLUME_FLAG_CHECK_ONLY	= 0x1
    } 	STORAGE_SCAN_VOLUME_FLAGS;

typedef struct _STORAGE_SCAN_VOLUME_PARAMS
    {
    DWORD Size;
    DWORD ScanFlags;
    DWORD Timeout;
    STORAGE_SCAN_VOLUME_RESULT ScanResult;
    } 	STORAGE_SCAN_VOLUME_PARAMS;

typedef struct _STORAGE_SCAN_VOLUME_PARAMS *PSTORAGE_SCAN_VOLUME_PARAMS;

typedef 
enum _STORAGE_CLEANUP_LEVEL
    {
        STORAGE_CLEANUP_CRITICAL	= 0,
        STORAGE_CLEANUP_NORMAL	= ( STORAGE_CLEANUP_CRITICAL + 1 ) ,
        STORAGE_CLEANUP_MAX	= ( STORAGE_CLEANUP_NORMAL + 1 ) 
    } 	STORAGE_CLEANUP_LEVEL;

typedef struct _STORAGE_TRIGGER_CLEANUP_PARAMETERS
    {
    DWORD Size;
    STORAGE_DEVICE_TYPE StorageDeviceType;
    DWORD DeviceInstance;
    STORAGE_CLEANUP_LEVEL CleanupLevel;
    } 	STORAGE_TRIGGER_CLEANUP_PARAMETERS;

typedef struct _STORAGE_TRIGGER_CLEANUP_PARAMETERS *PSTORAGE_TRIGGER_CLEANUP_PARAMETERS;



extern RPC_IF_HANDLE Svc__MIDL_itf_storagetypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_storagetypes_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE Svc__MIDL_itf_storagetypes_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


