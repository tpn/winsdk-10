

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


#ifndef __storageusageapi_h__
#define __storageusageapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "StorageTypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __StorageUsageApi_INTERFACE_DEFINED__
#define __StorageUsageApi_INTERFACE_DEFINED__

/* interface StorageUsageApi */
/* [uuid] */ 

typedef /* [context_handle] */ void *PCONTEXT_HANDLE_TYPE;

typedef /* [ref] */  __RPC_ref_pointer PCONTEXT_HANDLE_TYPE *PPCONTEXT_HANDLE_TYPE;

typedef GUID PRODUCTID;

typedef 
enum _DATA_TYPE_NODE
    {
        DATA_TYPE_ROOT	= 0,
        DATA_TYPE_SYSTEMANDRESERVED	= ( DATA_TYPE_ROOT + 1 ) ,
        DATA_TYPE_MUSIC	= ( DATA_TYPE_SYSTEMANDRESERVED + 1 ) ,
        DATA_TYPE_PICTURES	= ( DATA_TYPE_MUSIC + 1 ) ,
        DATA_TYPE_VIDEOS	= ( DATA_TYPE_PICTURES + 1 ) ,
        DATA_TYPE_PODCASTS	= ( DATA_TYPE_VIDEOS + 1 ) ,
        DATA_TYPE_RINGTONES	= ( DATA_TYPE_PODCASTS + 1 ) ,
        DATA_TYPE_APPS	= ( DATA_TYPE_RINGTONES + 1 ) ,
        DATA_TYPE_MAPS	= ( DATA_TYPE_APPS + 1 ) ,
        DATA_TYPE_DOCS	= ( DATA_TYPE_MAPS + 1 ) ,
        DATA_TYPE_TEMP	= ( DATA_TYPE_DOCS + 1 ) ,
        DATA_TYPE_TELEMETRY	= ( DATA_TYPE_TEMP + 1 ) ,
        DATA_TYPE_PIM	= ( DATA_TYPE_TELEMETRY + 1 ) ,
        DATA_TYPE_BUILTINAPPS	= ( DATA_TYPE_PIM + 1 ) ,
        DATA_TYPE_SYSTEMSEMIPERM	= ( DATA_TYPE_BUILTINAPPS + 1 ) ,
        DATA_TYPE_TEST	= ( DATA_TYPE_SYSTEMSEMIPERM + 1 ) ,
        DATA_TYPE_DOWNLOADS	= ( DATA_TYPE_TEST + 1 ) ,
        DATA_TYPE_END	= ( DATA_TYPE_DOWNLOADS + 1 ) 
    } 	DATA_TYPE_NODE;

/* client and server prototype */
HRESULT SvcOpenStorageType( 
    /* [in] */ handle_t hBinding,
    /* [out] */ __RPC__deref_out_opt PPCONTEXT_HANDLE_TYPE pphContext);

typedef 
enum _STORAGE_SELECTVOL_FLAGS
    {
        STORAGE_SELECTVOL_FLAGS_NONE	= 0,
        STORAGE_SELECTVOL_FLAGS_SLOW_AND_ACCURATE	= 0x1
    } 	STORAGE_SELECTVOL_FLAGS;

typedef struct _APP_SIZES
    {
    DWORD Size;
    ULONGLONG InstallBytes;
    ULONGLONG DataBytes;
    } 	APP_SIZES;

typedef struct _APP_SIZES *PAPP_SIZES;

/* client and server prototype */
HRESULT SvcSelectStorageVolumeEx( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ STORAGE_DEVICE_TYPE Store,
    /* [in] */ DWORD DeviceInstance,
    /* [in] */ DATA_TYPE_NODE Node,
    /* [string][full][in] */ __RPC__in_opt_string LPCWSTR Path,
    /* [in] */ STORAGE_SELECTVOL_FLAGS Flags,
    /* [out] */ __RPC__out ULONGLONG *TotalSize,
    /* [out] */ __RPC__out ULONGLONG *Free);

/* client and server prototype */
HRESULT SvcSelectStorageVolume( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ STORAGE_DEVICE_TYPE Store,
    /* [in] */ DWORD DeviceInstance,
    /* [in] */ DATA_TYPE_NODE Node,
    /* [string][full][in] */ __RPC__in_opt_string LPCWSTR Path,
    /* [out] */ __RPC__out ULONGLONG *TotalSize,
    /* [out] */ __RPC__out ULONGLONG *Free);

/* client and server prototype */
HRESULT SvcFindNextStorageType( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [unique][out][in] */ __RPC__inout_opt DATA_TYPE_NODE *Node,
    /* [unique][string][out][in] */ __RPC__deref_opt_inout_opt_string LPWSTR *Path,
    /* [out] */ __RPC__out ULONGLONG *Size,
    /* [out] */ __RPC__out ULONGLONG *ItemCount);

/* client and server prototype */
HRESULT SvcFindNextStorageTypeEx( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ DATA_TYPE_NODE Node,
    /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR PathToQuery,
    /* [string][unique][out][in] */ __RPC__deref_opt_inout_opt_string LPWSTR *SubPath,
    /* [out] */ __RPC__out ULONGLONG *Size,
    /* [out] */ __RPC__out ULONGLONG *ItemCount);

/* client and server prototype */
HRESULT SvcGetAppSize( 
    /* [in] */ __RPC__in PCONTEXT_HANDLE_TYPE phContext,
    /* [in] */ __RPC__in PRODUCTID *ProductId,
    /* [in] */ DWORD Flags,
    /* [out][in] */ __RPC__inout PAPP_SIZES Sizes);

/* client and server prototype */
void SvcCloseFindStorage( 
    /* [out][in] */ __RPC__deref_inout_opt PPCONTEXT_HANDLE_TYPE pphContext);



extern RPC_IF_HANDLE SvcStorageUsageApi_v0_0_c_ifspec;
extern RPC_IF_HANDLE StorageUsageApi_v0_0_c_ifspec;
extern RPC_IF_HANDLE SvcStorageUsageApi_v0_0_s_ifspec;
#endif /* __StorageUsageApi_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

void __RPC_USER PCONTEXT_HANDLE_TYPE_rundown( __RPC__in PCONTEXT_HANDLE_TYPE );

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


