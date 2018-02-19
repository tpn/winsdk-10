

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __rdcentraldb_h__
#define __rdcentraldb_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRdPropertyBag_FWD_DEFINED__
#define __IRdPropertyBag_FWD_DEFINED__
typedef interface IRdPropertyBag IRdPropertyBag;

#endif 	/* __IRdPropertyBag_FWD_DEFINED__ */


#ifndef __IRdPool_FWD_DEFINED__
#define __IRdPool_FWD_DEFINED__
typedef interface IRdPool IRdPool;

#endif 	/* __IRdPool_FWD_DEFINED__ */


#ifndef __IRdVmProvisioningInfo_FWD_DEFINED__
#define __IRdVmProvisioningInfo_FWD_DEFINED__
typedef interface IRdVmProvisioningInfo IRdVmProvisioningInfo;

#endif 	/* __IRdVmProvisioningInfo_FWD_DEFINED__ */


#ifndef __IRdMasterVm_FWD_DEFINED__
#define __IRdMasterVm_FWD_DEFINED__
typedef interface IRdMasterVm IRdMasterVm;

#endif 	/* __IRdMasterVm_FWD_DEFINED__ */


#ifndef __IRdVm_FWD_DEFINED__
#define __IRdVm_FWD_DEFINED__
typedef interface IRdVm IRdVm;

#endif 	/* __IRdVm_FWD_DEFINED__ */


#ifndef __IRdVmTask_FWD_DEFINED__
#define __IRdVmTask_FWD_DEFINED__
typedef interface IRdVmTask IRdVmTask;

#endif 	/* __IRdVmTask_FWD_DEFINED__ */


#ifndef __IRdPdAssignment_FWD_DEFINED__
#define __IRdPdAssignment_FWD_DEFINED__
typedef interface IRdPdAssignment IRdPdAssignment;

#endif 	/* __IRdPdAssignment_FWD_DEFINED__ */


#ifndef __IRdDesktopAssignment_FWD_DEFINED__
#define __IRdDesktopAssignment_FWD_DEFINED__
typedef interface IRdDesktopAssignment IRdDesktopAssignment;

#endif 	/* __IRdDesktopAssignment_FWD_DEFINED__ */


#ifndef __IRdNodeOwnership_FWD_DEFINED__
#define __IRdNodeOwnership_FWD_DEFINED__
typedef interface IRdNodeOwnership IRdNodeOwnership;

#endif 	/* __IRdNodeOwnership_FWD_DEFINED__ */


#ifndef __IRdServer_FWD_DEFINED__
#define __IRdServer_FWD_DEFINED__
typedef interface IRdServer IRdServer;

#endif 	/* __IRdServer_FWD_DEFINED__ */


#ifndef __IRdRoleRdcb_FWD_DEFINED__
#define __IRdRoleRdcb_FWD_DEFINED__
typedef interface IRdRoleRdcb IRdRoleRdcb;

#endif 	/* __IRdRoleRdcb_FWD_DEFINED__ */


#ifndef __IRdRoleRdsh_FWD_DEFINED__
#define __IRdRoleRdsh_FWD_DEFINED__
typedef interface IRdRoleRdsh IRdRoleRdsh;

#endif 	/* __IRdRoleRdsh_FWD_DEFINED__ */


#ifndef __IRdRoleRdvh_FWD_DEFINED__
#define __IRdRoleRdvh_FWD_DEFINED__
typedef interface IRdRoleRdvh IRdRoleRdvh;

#endif 	/* __IRdRoleRdvh_FWD_DEFINED__ */


#ifndef __IRdRoleRdwa_FWD_DEFINED__
#define __IRdRoleRdwa_FWD_DEFINED__
typedef interface IRdRoleRdwa IRdRoleRdwa;

#endif 	/* __IRdRoleRdwa_FWD_DEFINED__ */


#ifndef __IRdwaFarm_FWD_DEFINED__
#define __IRdwaFarm_FWD_DEFINED__
typedef interface IRdwaFarm IRdwaFarm;

#endif 	/* __IRdwaFarm_FWD_DEFINED__ */


#ifndef __IRdwaVdir_FWD_DEFINED__
#define __IRdwaVdir_FWD_DEFINED__
typedef interface IRdwaVdir IRdwaVdir;

#endif 	/* __IRdwaVdir_FWD_DEFINED__ */


#ifndef __IRdpFileInfo_FWD_DEFINED__
#define __IRdpFileInfo_FWD_DEFINED__
typedef interface IRdpFileInfo IRdpFileInfo;

#endif 	/* __IRdpFileInfo_FWD_DEFINED__ */


#ifndef __IRdIcon_FWD_DEFINED__
#define __IRdIcon_FWD_DEFINED__
typedef interface IRdIcon IRdIcon;

#endif 	/* __IRdIcon_FWD_DEFINED__ */


#ifndef __IRdRemoteApp_FWD_DEFINED__
#define __IRdRemoteApp_FWD_DEFINED__
typedef interface IRdRemoteApp IRdRemoteApp;

#endif 	/* __IRdRemoteApp_FWD_DEFINED__ */


#ifndef __IRdRemoteDesktop_FWD_DEFINED__
#define __IRdRemoteDesktop_FWD_DEFINED__
typedef interface IRdRemoteDesktop IRdRemoteDesktop;

#endif 	/* __IRdRemoteDesktop_FWD_DEFINED__ */


#ifndef __IRdFileTypeAssoc_FWD_DEFINED__
#define __IRdFileTypeAssoc_FWD_DEFINED__
typedef interface IRdFileTypeAssoc IRdFileTypeAssoc;

#endif 	/* __IRdFileTypeAssoc_FWD_DEFINED__ */


#ifndef __IRdVmInfo_FWD_DEFINED__
#define __IRdVmInfo_FWD_DEFINED__
typedef interface IRdVmInfo IRdVmInfo;

#endif 	/* __IRdVmInfo_FWD_DEFINED__ */


#ifndef __IRdEnvironment_FWD_DEFINED__
#define __IRdEnvironment_FWD_DEFINED__
typedef interface IRdEnvironment IRdEnvironment;

#endif 	/* __IRdEnvironment_FWD_DEFINED__ */


#ifndef __IRdTargetIp_FWD_DEFINED__
#define __IRdTargetIp_FWD_DEFINED__
typedef interface IRdTargetIp IRdTargetIp;

#endif 	/* __IRdTargetIp_FWD_DEFINED__ */


#ifndef __IRdTarget_FWD_DEFINED__
#define __IRdTarget_FWD_DEFINED__
typedef interface IRdTarget IRdTarget;

#endif 	/* __IRdTarget_FWD_DEFINED__ */


#ifndef __IRdSession_FWD_DEFINED__
#define __IRdSession_FWD_DEFINED__
typedef interface IRdSession IRdSession;

#endif 	/* __IRdSession_FWD_DEFINED__ */


#ifndef __IRdUserConnection_FWD_DEFINED__
#define __IRdUserConnection_FWD_DEFINED__
typedef interface IRdUserConnection IRdUserConnection;

#endif 	/* __IRdUserConnection_FWD_DEFINED__ */


#ifndef __IRdBrokerNotification_FWD_DEFINED__
#define __IRdBrokerNotification_FWD_DEFINED__
typedef interface IRdBrokerNotification IRdBrokerNotification;

#endif 	/* __IRdBrokerNotification_FWD_DEFINED__ */


#ifndef __IRdMsDataHelper_FWD_DEFINED__
#define __IRdMsDataHelper_FWD_DEFINED__
typedef interface IRdMsDataHelper IRdMsDataHelper;

#endif 	/* __IRdMsDataHelper_FWD_DEFINED__ */


#ifndef __IRdMsDb_FWD_DEFINED__
#define __IRdMsDb_FWD_DEFINED__
typedef interface IRdMsDb IRdMsDb;

#endif 	/* __IRdMsDb_FWD_DEFINED__ */


#ifndef __IRdPropertyBag_FWD_DEFINED__
#define __IRdPropertyBag_FWD_DEFINED__
typedef interface IRdPropertyBag IRdPropertyBag;

#endif 	/* __IRdPropertyBag_FWD_DEFINED__ */


#ifndef __IRdPool_FWD_DEFINED__
#define __IRdPool_FWD_DEFINED__
typedef interface IRdPool IRdPool;

#endif 	/* __IRdPool_FWD_DEFINED__ */


#ifndef __IRdVmProvisioningInfo_FWD_DEFINED__
#define __IRdVmProvisioningInfo_FWD_DEFINED__
typedef interface IRdVmProvisioningInfo IRdVmProvisioningInfo;

#endif 	/* __IRdVmProvisioningInfo_FWD_DEFINED__ */


#ifndef __IRdMasterVm_FWD_DEFINED__
#define __IRdMasterVm_FWD_DEFINED__
typedef interface IRdMasterVm IRdMasterVm;

#endif 	/* __IRdMasterVm_FWD_DEFINED__ */


#ifndef __IRdVm_FWD_DEFINED__
#define __IRdVm_FWD_DEFINED__
typedef interface IRdVm IRdVm;

#endif 	/* __IRdVm_FWD_DEFINED__ */


#ifndef __IRdVmTask_FWD_DEFINED__
#define __IRdVmTask_FWD_DEFINED__
typedef interface IRdVmTask IRdVmTask;

#endif 	/* __IRdVmTask_FWD_DEFINED__ */


#ifndef __IRdPdAssignment_FWD_DEFINED__
#define __IRdPdAssignment_FWD_DEFINED__
typedef interface IRdPdAssignment IRdPdAssignment;

#endif 	/* __IRdPdAssignment_FWD_DEFINED__ */


#ifndef __IRdNodeOwnership_FWD_DEFINED__
#define __IRdNodeOwnership_FWD_DEFINED__
typedef interface IRdNodeOwnership IRdNodeOwnership;

#endif 	/* __IRdNodeOwnership_FWD_DEFINED__ */


#ifndef __IRdServer_FWD_DEFINED__
#define __IRdServer_FWD_DEFINED__
typedef interface IRdServer IRdServer;

#endif 	/* __IRdServer_FWD_DEFINED__ */


#ifndef __IRdRoleRdcb_FWD_DEFINED__
#define __IRdRoleRdcb_FWD_DEFINED__
typedef interface IRdRoleRdcb IRdRoleRdcb;

#endif 	/* __IRdRoleRdcb_FWD_DEFINED__ */


#ifndef __IRdRoleRdsh_FWD_DEFINED__
#define __IRdRoleRdsh_FWD_DEFINED__
typedef interface IRdRoleRdsh IRdRoleRdsh;

#endif 	/* __IRdRoleRdsh_FWD_DEFINED__ */


#ifndef __IRdRoleRdvh_FWD_DEFINED__
#define __IRdRoleRdvh_FWD_DEFINED__
typedef interface IRdRoleRdvh IRdRoleRdvh;

#endif 	/* __IRdRoleRdvh_FWD_DEFINED__ */


#ifndef __IRdRoleRdwa_FWD_DEFINED__
#define __IRdRoleRdwa_FWD_DEFINED__
typedef interface IRdRoleRdwa IRdRoleRdwa;

#endif 	/* __IRdRoleRdwa_FWD_DEFINED__ */


#ifndef __IRdwaFarm_FWD_DEFINED__
#define __IRdwaFarm_FWD_DEFINED__
typedef interface IRdwaFarm IRdwaFarm;

#endif 	/* __IRdwaFarm_FWD_DEFINED__ */


#ifndef __IRdwaVdir_FWD_DEFINED__
#define __IRdwaVdir_FWD_DEFINED__
typedef interface IRdwaVdir IRdwaVdir;

#endif 	/* __IRdwaVdir_FWD_DEFINED__ */


#ifndef __IRdpFileInfo_FWD_DEFINED__
#define __IRdpFileInfo_FWD_DEFINED__
typedef interface IRdpFileInfo IRdpFileInfo;

#endif 	/* __IRdpFileInfo_FWD_DEFINED__ */


#ifndef __IRdIcon_FWD_DEFINED__
#define __IRdIcon_FWD_DEFINED__
typedef interface IRdIcon IRdIcon;

#endif 	/* __IRdIcon_FWD_DEFINED__ */


#ifndef __IRdRemoteApp_FWD_DEFINED__
#define __IRdRemoteApp_FWD_DEFINED__
typedef interface IRdRemoteApp IRdRemoteApp;

#endif 	/* __IRdRemoteApp_FWD_DEFINED__ */


#ifndef __IRdRemoteDesktop_FWD_DEFINED__
#define __IRdRemoteDesktop_FWD_DEFINED__
typedef interface IRdRemoteDesktop IRdRemoteDesktop;

#endif 	/* __IRdRemoteDesktop_FWD_DEFINED__ */


#ifndef __IRdFileTypeAssoc_FWD_DEFINED__
#define __IRdFileTypeAssoc_FWD_DEFINED__
typedef interface IRdFileTypeAssoc IRdFileTypeAssoc;

#endif 	/* __IRdFileTypeAssoc_FWD_DEFINED__ */


#ifndef __IRdVmInfo_FWD_DEFINED__
#define __IRdVmInfo_FWD_DEFINED__
typedef interface IRdVmInfo IRdVmInfo;

#endif 	/* __IRdVmInfo_FWD_DEFINED__ */


#ifndef __IRdMsDataHelper_FWD_DEFINED__
#define __IRdMsDataHelper_FWD_DEFINED__
typedef interface IRdMsDataHelper IRdMsDataHelper;

#endif 	/* __IRdMsDataHelper_FWD_DEFINED__ */


#ifndef __IRdEnvironment_FWD_DEFINED__
#define __IRdEnvironment_FWD_DEFINED__
typedef interface IRdEnvironment IRdEnvironment;

#endif 	/* __IRdEnvironment_FWD_DEFINED__ */


#ifndef __IRdTargetIp_FWD_DEFINED__
#define __IRdTargetIp_FWD_DEFINED__
typedef interface IRdTargetIp IRdTargetIp;

#endif 	/* __IRdTargetIp_FWD_DEFINED__ */


#ifndef __IRdTarget_FWD_DEFINED__
#define __IRdTarget_FWD_DEFINED__
typedef interface IRdTarget IRdTarget;

#endif 	/* __IRdTarget_FWD_DEFINED__ */


#ifndef __IRdSession_FWD_DEFINED__
#define __IRdSession_FWD_DEFINED__
typedef interface IRdSession IRdSession;

#endif 	/* __IRdSession_FWD_DEFINED__ */


#ifndef __IRdUserConnection_FWD_DEFINED__
#define __IRdUserConnection_FWD_DEFINED__
typedef interface IRdUserConnection IRdUserConnection;

#endif 	/* __IRdUserConnection_FWD_DEFINED__ */


#ifndef __IRdBrokerNotification_FWD_DEFINED__
#define __IRdBrokerNotification_FWD_DEFINED__
typedef interface IRdBrokerNotification IRdBrokerNotification;

#endif 	/* __IRdBrokerNotification_FWD_DEFINED__ */


#ifndef __IRdMsDb_FWD_DEFINED__
#define __IRdMsDb_FWD_DEFINED__
typedef interface IRdMsDb IRdMsDb;

#endif 	/* __IRdMsDb_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "SessdirPublicTypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_rdcentraldb_0000_0000 */
/* [local] */ 

#pragma once
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef /* [v1_enum] */ 
enum _RD_ROLE
    {
        ROLE_NONE	= 0,
        ROLE_RDCB	= 0x1,
        ROLE_RDSH	= 0x2,
        ROLE_RDVH	= 0x4,
        ROLE_RDLS	= 0x8,
        ROLE_RDWA	= 0x10,
        ROLE_RDGW	= 0x20
    } 	RD_ROLE;

typedef /* [v1_enum] */ 
enum _RD_TARGET_SORT_BY
    {
        TARGET_SORT_BY_NONE	= 0,
        TARGET_SORT_BY_NAME	= 0x1,
        TARGET_SORT_BY_TARGET_PROP	= 0x2
    } 	RD_TARGET_SORT_BY;

typedef /* [v1_enum] */ 
enum _RD_ENV_SORT_BY
    {
        ENV_SORT_BY_NONE	= 0,
        ENV_SORT_BY_NAME	= 0x1,
        ENV_SORT_BY_ENV_PROP	= 0x2
    } 	RD_ENV_SORT_BY;


#define DEPLOYMENT_RDCMS_DB_VERSION     _T("RdcmsDbVersion")

#define RD_SQL_PLUGIN_KEY               L"SYSTEM\\CurrentControlSet\\services\\tssdis\\Parameters" 
#define RD_SQL_PLUGIN_CLSID             L"DbPluginClsid" 
#define RD_SQL_OBJECT_FACTORY_CLSID     L"DbObjectFactoryClsid" 


#define FACILITY_RDDB                        0x825
#define MAKE_RDDB_ERR(x)                     MAKE_HRESULT(SEVERITY_ERROR, FACILITY_RDDB, x)

// 
// User failed to logon to the DB.
// 
#define E_RDDB_LOGIN_FAILED                  MAKE_RDDB_ERR(1)
// 
// DB operation failed due to violation of data integrity constraint.
// 
#define E_RDDB_DATA_INTEGRITY_VIOLATION      MAKE_RDDB_ERR(2)
// 
// DB internal error.
// 
#define E_RDDB_FATAL_ERR                     MAKE_RDDB_ERR(3)
// 
// DB is offline.
// 
#define E_RDDB_DB_OFFLINE                    MAKE_RDDB_ERR(4)
// 
// Invalid argument was supplied.
// 
#define E_RDDB_INVALID_ARG                   MAKE_RDDB_ERR(5)
// 
// This error is returned to RD Connection Broker runtime, 
// when there is a synch conflict. 
// RD Connection Broker is expected to re-read the record from the DB 
// & call update with latest record. 
// 
#define E_RDDB_SYNCH_CONFLICT                MAKE_RDDB_ERR(6)
// 
// This VM is already assigned to a another user.
// 
#define E_RDDB_VM_ALREADY_ASSIGNED           MAKE_RDDB_ERR(7)
// 
// This user has already been assigned another VM.
// 
#define E_RDDB_USER_ALREADY_ASSIGNED         MAKE_RDDB_ERR(8)
// 
// This error is returned to RD Connection Broker runtime,
// when the same user connects to the same farm more than once simultaneously.
// 
#define E_RDDB_USER_CONN_PENDING             MAKE_RDDB_ERR(9)
// 
// Number of records in the DB exceeds the maximum limit allowed for.
// 
#define E_RDDB_TOO_MANY_RECORDS              MAKE_RDDB_ERR(10)
// 
// No more resource availabe in Pool for connection.
// 
#define E_RDDB_NO_RESOURCE_AVAILABLE         MAKE_RDDB_ERR(11)
// 
// Target endpoint is not running currently.
// 
#define E_RDDB_TARGET_ENDPOINT_DOWN          MAKE_RDDB_ERR(12)
// 
// Generic database operation error.
// 
#define E_RDDB_UNKNOWN_ERR                   MAKE_RDDB_ERR(13)
// 
// Value already exists.
// 
#define E_RDDB_ALREADY_EXISTS                MAKE_RDDB_ERR(14)
// 
// Value mismatched.
// 
#define E_RDDB_KEYVALUE_MISMATCH             MAKE_RDDB_ERR(15)































extern RPC_IF_HANDLE __MIDL_itf_rdcentraldb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdcentraldb_0000_0000_v0_0_s_ifspec;

#ifndef __IRdPropertyBag_INTERFACE_DEFINED__
#define __IRdPropertyBag_INTERFACE_DEFINED__

/* interface IRdPropertyBag */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdPropertyBag;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("84D46202-8559-11DF-95BD-59B5DFD72085")
    IRdPropertyBag : public IPropertyBag
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNext( 
            /* [out] */ __RPC__deref_out_opt BSTR *pPropertyName,
            /* [in] */ __RPC__in VARIANT *pValue,
            /* [in] */ __RPC__in BOOL *isDone) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNumProperties( 
            /* [out][in] */ __RPC__inout DWORD *pdwNumProperties) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SyncVersion( 
            /* [retval][out] */ __RPC__out hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SyncVersion( 
            /* [in] */ hyper syncVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdPropertyBagVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdPropertyBag * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdPropertyBag * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdPropertyBag * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Read )( 
            IRdPropertyBag * This,
            /* [in] */ LPCOLESTR pszPropName,
            /* [out][in] */ VARIANT *pVar,
            /* [unique][in] */ IErrorLog *pErrorLog);
        
        HRESULT ( STDMETHODCALLTYPE *Write )( 
            __RPC__in IRdPropertyBag * This,
            /* [in] */ __RPC__in LPCOLESTR pszPropName,
            /* [in] */ __RPC__in VARIANT *pVar);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IRdPropertyBag * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNext )( 
            __RPC__in IRdPropertyBag * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pPropertyName,
            /* [in] */ __RPC__in VARIANT *pValue,
            /* [in] */ __RPC__in BOOL *isDone);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNumProperties )( 
            __RPC__in IRdPropertyBag * This,
            /* [out][in] */ __RPC__inout DWORD *pdwNumProperties);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncVersion )( 
            __RPC__in IRdPropertyBag * This,
            /* [retval][out] */ __RPC__out hyper *pSyncVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncVersion )( 
            __RPC__in IRdPropertyBag * This,
            /* [in] */ hyper syncVersion);
        
        END_INTERFACE
    } IRdPropertyBagVtbl;

    interface IRdPropertyBag
    {
        CONST_VTBL struct IRdPropertyBagVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdPropertyBag_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdPropertyBag_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdPropertyBag_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdPropertyBag_Read(This,pszPropName,pVar,pErrorLog)	\
    ( (This)->lpVtbl -> Read(This,pszPropName,pVar,pErrorLog) ) 

#define IRdPropertyBag_Write(This,pszPropName,pVar)	\
    ( (This)->lpVtbl -> Write(This,pszPropName,pVar) ) 


#define IRdPropertyBag_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IRdPropertyBag_GetNext(This,pPropertyName,pValue,isDone)	\
    ( (This)->lpVtbl -> GetNext(This,pPropertyName,pValue,isDone) ) 

#define IRdPropertyBag_GetNumProperties(This,pdwNumProperties)	\
    ( (This)->lpVtbl -> GetNumProperties(This,pdwNumProperties) ) 

#define IRdPropertyBag_get_SyncVersion(This,pSyncVersion)	\
    ( (This)->lpVtbl -> get_SyncVersion(This,pSyncVersion) ) 

#define IRdPropertyBag_put_SyncVersion(This,syncVersion)	\
    ( (This)->lpVtbl -> put_SyncVersion(This,syncVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdPropertyBag_INTERFACE_DEFINED__ */


#ifndef __IRdPool_INTERFACE_DEFINED__
#define __IRdPool_INTERFACE_DEFINED__

/* interface IRdPool */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdPool;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9A7434C0-69C0-11DF-82C7-4730E0D72085")
    IRdPool : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayName( 
            /* [in] */ __RPC__in BSTR displayName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDescription) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ __RPC__in BSTR description) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out DWORD *pType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ DWORD type) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResourcePluginName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResourcePluginName( 
            /* [in] */ __RPC__in BSTR resourcePluginName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdPoolVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdPool * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdPool * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdPool * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdPool * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdPool * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in IRdPool * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayName )( 
            __RPC__in IRdPool * This,
            /* [in] */ __RPC__in BSTR displayName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            __RPC__in IRdPool * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDescription);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            __RPC__in IRdPool * This,
            /* [in] */ __RPC__in BSTR description);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IRdPool * This,
            /* [retval][out] */ __RPC__out DWORD *pType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            __RPC__in IRdPool * This,
            /* [in] */ DWORD type);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResourcePluginName )( 
            __RPC__in IRdPool * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResourcePluginName )( 
            __RPC__in IRdPool * This,
            /* [in] */ __RPC__in BSTR resourcePluginName);
        
        END_INTERFACE
    } IRdPoolVtbl;

    interface IRdPool
    {
        CONST_VTBL struct IRdPoolVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdPool_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdPool_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdPool_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdPool_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdPool_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdPool_get_DisplayName(This,pDisplayName)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pDisplayName) ) 

#define IRdPool_put_DisplayName(This,displayName)	\
    ( (This)->lpVtbl -> put_DisplayName(This,displayName) ) 

#define IRdPool_get_Description(This,pDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pDescription) ) 

#define IRdPool_put_Description(This,description)	\
    ( (This)->lpVtbl -> put_Description(This,description) ) 

#define IRdPool_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IRdPool_put_Type(This,type)	\
    ( (This)->lpVtbl -> put_Type(This,type) ) 

#define IRdPool_get_ResourcePluginName(This,pResourcePluginName)	\
    ( (This)->lpVtbl -> get_ResourcePluginName(This,pResourcePluginName) ) 

#define IRdPool_put_ResourcePluginName(This,resourcePluginName)	\
    ( (This)->lpVtbl -> put_ResourcePluginName(This,resourcePluginName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdPool_INTERFACE_DEFINED__ */


#ifndef __IRdVmProvisioningInfo_INTERFACE_DEFINED__
#define __IRdVmProvisioningInfo_INTERFACE_DEFINED__

/* interface IRdVmProvisioningInfo */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdVmProvisioningInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E26B20C4-6919-11DF-9CE3-A761DFD72085")
    IRdVmProvisioningInfo : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmCount( 
            /* [retval][out] */ __RPC__out DWORD *pVmCount) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmCount( 
            /* [in] */ DWORD vmCount) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmDomainName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmDomainName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmDomainName( 
            /* [in] */ __RPC__in BSTR vmDomainName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmNamePattern( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmNamePattern) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmNamePattern( 
            /* [in] */ __RPC__in BSTR vmNamePattern) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmProductKey( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmProductKey) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmProductKey( 
            /* [in] */ __RPC__in BSTR vmProductKey) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UnAttendXmlSnippet( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pXml) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UnAttendXmlSnippet( 
            /* [in] */ __RPC__in BSTR xml) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserGroup( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserGroup) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserGroup( 
            /* [in] */ __RPC__in BSTR userGroup) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsUserGroupAdmin( 
            /* [retval][out] */ __RPC__out BOOL *pIsAdmin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsUserGroupAdmin( 
            /* [in] */ BOOL isAdmin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JobId( 
            /* [retval][out] */ __RPC__out DWORD *pJobId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JobId( 
            /* [in] */ DWORD jobId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_JobStatus( 
            /* [retval][out] */ __RPC__out DWORD *pJobStatus) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_JobStatus( 
            /* [in] */ DWORD jobStatus) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSmbEnabled( 
            /* [retval][out] */ __RPC__out BOOL *pIsSmbEnabled) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsSmbEnabled( 
            /* [in] */ BOOL isSmbEnabled) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SmbSharePath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pSmbSharePath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SmbSharePath( 
            /* [in] */ __RPC__in BSTR smbSharePath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalPathForVms( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLocalPathForVms) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LocalPathForVms( 
            /* [in] */ __RPC__in BSTR localPathForVms) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LocalPathForGoldVm( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLocalPathForGoldVm) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LocalPathForGoldVm( 
            /* [in] */ __RPC__in BSTR localPathForGoldVm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdVmProvisioningInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdVmProvisioningInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdVmProvisioningInfo * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmCount )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pVmCount);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmCount )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ DWORD vmCount);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmDomainName )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmDomainName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmDomainName )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR vmDomainName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmNamePattern )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmNamePattern);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmNamePattern )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR vmNamePattern);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmProductKey )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmProductKey);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmProductKey )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR vmProductKey);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UnAttendXmlSnippet )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pXml);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UnAttendXmlSnippet )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR xml);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserGroup )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserGroup);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserGroup )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR userGroup);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsUserGroupAdmin )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pIsAdmin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsUserGroupAdmin )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ BOOL isAdmin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JobId )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pJobId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JobId )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ DWORD jobId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_JobStatus )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pJobStatus);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_JobStatus )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ DWORD jobStatus);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSmbEnabled )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pIsSmbEnabled);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSmbEnabled )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ BOOL isSmbEnabled);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SmbSharePath )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pSmbSharePath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SmbSharePath )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR smbSharePath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalPathForVms )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLocalPathForVms);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocalPathForVms )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR localPathForVms);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LocalPathForGoldVm )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLocalPathForGoldVm);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LocalPathForGoldVm )( 
            __RPC__in IRdVmProvisioningInfo * This,
            /* [in] */ __RPC__in BSTR localPathForGoldVm);
        
        END_INTERFACE
    } IRdVmProvisioningInfoVtbl;

    interface IRdVmProvisioningInfo
    {
        CONST_VTBL struct IRdVmProvisioningInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdVmProvisioningInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdVmProvisioningInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdVmProvisioningInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdVmProvisioningInfo_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdVmProvisioningInfo_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdVmProvisioningInfo_get_VmCount(This,pVmCount)	\
    ( (This)->lpVtbl -> get_VmCount(This,pVmCount) ) 

#define IRdVmProvisioningInfo_put_VmCount(This,vmCount)	\
    ( (This)->lpVtbl -> put_VmCount(This,vmCount) ) 

#define IRdVmProvisioningInfo_get_VmDomainName(This,pVmDomainName)	\
    ( (This)->lpVtbl -> get_VmDomainName(This,pVmDomainName) ) 

#define IRdVmProvisioningInfo_put_VmDomainName(This,vmDomainName)	\
    ( (This)->lpVtbl -> put_VmDomainName(This,vmDomainName) ) 

#define IRdVmProvisioningInfo_get_VmNamePattern(This,pVmNamePattern)	\
    ( (This)->lpVtbl -> get_VmNamePattern(This,pVmNamePattern) ) 

#define IRdVmProvisioningInfo_put_VmNamePattern(This,vmNamePattern)	\
    ( (This)->lpVtbl -> put_VmNamePattern(This,vmNamePattern) ) 

#define IRdVmProvisioningInfo_get_VmProductKey(This,pVmProductKey)	\
    ( (This)->lpVtbl -> get_VmProductKey(This,pVmProductKey) ) 

#define IRdVmProvisioningInfo_put_VmProductKey(This,vmProductKey)	\
    ( (This)->lpVtbl -> put_VmProductKey(This,vmProductKey) ) 

#define IRdVmProvisioningInfo_get_UnAttendXmlSnippet(This,pXml)	\
    ( (This)->lpVtbl -> get_UnAttendXmlSnippet(This,pXml) ) 

#define IRdVmProvisioningInfo_put_UnAttendXmlSnippet(This,xml)	\
    ( (This)->lpVtbl -> put_UnAttendXmlSnippet(This,xml) ) 

#define IRdVmProvisioningInfo_get_UserGroup(This,pUserGroup)	\
    ( (This)->lpVtbl -> get_UserGroup(This,pUserGroup) ) 

#define IRdVmProvisioningInfo_put_UserGroup(This,userGroup)	\
    ( (This)->lpVtbl -> put_UserGroup(This,userGroup) ) 

#define IRdVmProvisioningInfo_get_IsUserGroupAdmin(This,pIsAdmin)	\
    ( (This)->lpVtbl -> get_IsUserGroupAdmin(This,pIsAdmin) ) 

#define IRdVmProvisioningInfo_put_IsUserGroupAdmin(This,isAdmin)	\
    ( (This)->lpVtbl -> put_IsUserGroupAdmin(This,isAdmin) ) 

#define IRdVmProvisioningInfo_get_JobId(This,pJobId)	\
    ( (This)->lpVtbl -> get_JobId(This,pJobId) ) 

#define IRdVmProvisioningInfo_put_JobId(This,jobId)	\
    ( (This)->lpVtbl -> put_JobId(This,jobId) ) 

#define IRdVmProvisioningInfo_get_JobStatus(This,pJobStatus)	\
    ( (This)->lpVtbl -> get_JobStatus(This,pJobStatus) ) 

#define IRdVmProvisioningInfo_put_JobStatus(This,jobStatus)	\
    ( (This)->lpVtbl -> put_JobStatus(This,jobStatus) ) 

#define IRdVmProvisioningInfo_get_IsSmbEnabled(This,pIsSmbEnabled)	\
    ( (This)->lpVtbl -> get_IsSmbEnabled(This,pIsSmbEnabled) ) 

#define IRdVmProvisioningInfo_put_IsSmbEnabled(This,isSmbEnabled)	\
    ( (This)->lpVtbl -> put_IsSmbEnabled(This,isSmbEnabled) ) 

#define IRdVmProvisioningInfo_get_SmbSharePath(This,pSmbSharePath)	\
    ( (This)->lpVtbl -> get_SmbSharePath(This,pSmbSharePath) ) 

#define IRdVmProvisioningInfo_put_SmbSharePath(This,smbSharePath)	\
    ( (This)->lpVtbl -> put_SmbSharePath(This,smbSharePath) ) 

#define IRdVmProvisioningInfo_get_LocalPathForVms(This,pLocalPathForVms)	\
    ( (This)->lpVtbl -> get_LocalPathForVms(This,pLocalPathForVms) ) 

#define IRdVmProvisioningInfo_put_LocalPathForVms(This,localPathForVms)	\
    ( (This)->lpVtbl -> put_LocalPathForVms(This,localPathForVms) ) 

#define IRdVmProvisioningInfo_get_LocalPathForGoldVm(This,pLocalPathForGoldVm)	\
    ( (This)->lpVtbl -> get_LocalPathForGoldVm(This,pLocalPathForGoldVm) ) 

#define IRdVmProvisioningInfo_put_LocalPathForGoldVm(This,localPathForGoldVm)	\
    ( (This)->lpVtbl -> put_LocalPathForGoldVm(This,localPathForGoldVm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdVmProvisioningInfo_INTERFACE_DEFINED__ */


#ifndef __IRdMasterVm_INTERFACE_DEFINED__
#define __IRdMasterVm_INTERFACE_DEFINED__

/* interface IRdMasterVm */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdMasterVm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("067F843C-69BF-11DF-B2CF-752EE0D72085")
    IRdMasterVm : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MasterVmGUID( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pMasterVmGUID) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MasterVmGUID( 
            /* [in] */ __RPC__in BSTR MasterVmGUID) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostFqdnOfMasterVm( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostFqdnOfMasterVm) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostFqdnOfMasterVm( 
            /* [in] */ __RPC__in BSTR hostFqdnOfMasterVm) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OsVersion( 
            /* [retval][out] */ __RPC__out DWORD *pOsVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OsVersion( 
            /* [in] */ DWORD osVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RamSizeInMB( 
            /* [retval][out] */ __RPC__out DWORD *pRamSizeInMB) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RamSizeInMB( 
            /* [in] */ DWORD ramSizeInMB) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsRemoteFxEnabled( 
            /* [retval][out] */ __RPC__out BOOL *pIsRemoteFxEnabled) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsRemoteFxEnabled( 
            /* [in] */ BOOL isRemoteFxEnabled) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdMasterVmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdMasterVm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdMasterVm * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MasterVmGUID )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pMasterVmGUID);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MasterVmGUID )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ __RPC__in BSTR MasterVmGUID);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostFqdnOfMasterVm )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostFqdnOfMasterVm);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostFqdnOfMasterVm )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ __RPC__in BSTR hostFqdnOfMasterVm);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__out DWORD *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ DWORD osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RamSizeInMB )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__out DWORD *pRamSizeInMB);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RamSizeInMB )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ DWORD ramSizeInMB);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsRemoteFxEnabled )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__out BOOL *pIsRemoteFxEnabled);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsRemoteFxEnabled )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ BOOL isRemoteFxEnabled);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdMasterVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdMasterVm * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        END_INTERFACE
    } IRdMasterVmVtbl;

    interface IRdMasterVm
    {
        CONST_VTBL struct IRdMasterVmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdMasterVm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdMasterVm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdMasterVm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdMasterVm_get_MasterVmGUID(This,pMasterVmGUID)	\
    ( (This)->lpVtbl -> get_MasterVmGUID(This,pMasterVmGUID) ) 

#define IRdMasterVm_put_MasterVmGUID(This,MasterVmGUID)	\
    ( (This)->lpVtbl -> put_MasterVmGUID(This,MasterVmGUID) ) 

#define IRdMasterVm_get_HostFqdnOfMasterVm(This,pHostFqdnOfMasterVm)	\
    ( (This)->lpVtbl -> get_HostFqdnOfMasterVm(This,pHostFqdnOfMasterVm) ) 

#define IRdMasterVm_put_HostFqdnOfMasterVm(This,hostFqdnOfMasterVm)	\
    ( (This)->lpVtbl -> put_HostFqdnOfMasterVm(This,hostFqdnOfMasterVm) ) 

#define IRdMasterVm_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdMasterVm_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdMasterVm_get_RamSizeInMB(This,pRamSizeInMB)	\
    ( (This)->lpVtbl -> get_RamSizeInMB(This,pRamSizeInMB) ) 

#define IRdMasterVm_put_RamSizeInMB(This,ramSizeInMB)	\
    ( (This)->lpVtbl -> put_RamSizeInMB(This,ramSizeInMB) ) 

#define IRdMasterVm_get_IsRemoteFxEnabled(This,pIsRemoteFxEnabled)	\
    ( (This)->lpVtbl -> get_IsRemoteFxEnabled(This,pIsRemoteFxEnabled) ) 

#define IRdMasterVm_put_IsRemoteFxEnabled(This,isRemoteFxEnabled)	\
    ( (This)->lpVtbl -> put_IsRemoteFxEnabled(This,isRemoteFxEnabled) ) 

#define IRdMasterVm_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdMasterVm_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdMasterVm_INTERFACE_DEFINED__ */


#ifndef __IRdVm_INTERFACE_DEFINED__
#define __IRdVm_INTERFACE_DEFINED__

/* interface IRdVm */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdVm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2CB00AD2-69CE-11DF-BD2B-9540E0D72085")
    IRdVm : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostName( 
            /* [in] */ __RPC__in BSTR hostName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CreationStatus( 
            /* [retval][out] */ __RPC__out DWORD *pCreationStatus) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CreationStatus( 
            /* [in] */ DWORD creationStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdVmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdVm * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdVm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdVm * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdVm * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdVm * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
            __RPC__in IRdVm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
            __RPC__in IRdVm * This,
            /* [in] */ __RPC__in BSTR hostName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreationStatus )( 
            __RPC__in IRdVm * This,
            /* [retval][out] */ __RPC__out DWORD *pCreationStatus);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CreationStatus )( 
            __RPC__in IRdVm * This,
            /* [in] */ DWORD creationStatus);
        
        END_INTERFACE
    } IRdVmVtbl;

    interface IRdVm
    {
        CONST_VTBL struct IRdVmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdVm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdVm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdVm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdVm_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdVm_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdVm_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdVm_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdVm_get_HostName(This,pHostName)	\
    ( (This)->lpVtbl -> get_HostName(This,pHostName) ) 

#define IRdVm_put_HostName(This,hostName)	\
    ( (This)->lpVtbl -> put_HostName(This,hostName) ) 

#define IRdVm_get_CreationStatus(This,pCreationStatus)	\
    ( (This)->lpVtbl -> get_CreationStatus(This,pCreationStatus) ) 

#define IRdVm_put_CreationStatus(This,creationStatus)	\
    ( (This)->lpVtbl -> put_CreationStatus(This,creationStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdVm_INTERFACE_DEFINED__ */


#ifndef __IRdVmTask_INTERFACE_DEFINED__
#define __IRdVmTask_INTERFACE_DEFINED__

/* interface IRdVmTask */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdVmTask;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B66A2CE-C427-11DF-9A1A-ABF4DED72085")
    IRdVmTask : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskId( 
            /* [in] */ __RPC__in BSTR taskId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmName( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskStartTime( 
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskStartTime( 
            /* [in] */ __RPC__in SYSTEMTIME *pTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskEndTime( 
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskEndTime( 
            /* [in] */ __RPC__in SYSTEMTIME *pTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskDeadline( 
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskDeadline( 
            /* [in] */ __RPC__in SYSTEMTIME *pTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskLabel( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskLabel) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskLabel( 
            /* [in] */ __RPC__in BSTR taskLabel) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskPlugin( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskPlugin) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskPlugin( 
            /* [in] */ __RPC__in BSTR taskPlugin) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TaskStatus( 
            /* [retval][out] */ __RPC__out DWORD *pTaskStatus) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TaskStatus( 
            /* [in] */ DWORD taskStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_TaskContext( 
            /* [out] */ __RPC__out DWORD *pContextLen,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pContextLen) BYTE **pContext) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_TaskContext( 
            /* [in] */ DWORD contextLen,
            /* [size_is][in] */ __RPC__in_ecount_full(contextLen) BYTE *context) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdVmTaskVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdVmTask * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdVmTask * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskId )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskId )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in BSTR taskId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmName )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmName )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskStartTime )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskStartTime )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in SYSTEMTIME *pTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskEndTime )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskEndTime )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in SYSTEMTIME *pTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskDeadline )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskDeadline )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in SYSTEMTIME *pTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskLabel )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskLabel);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskLabel )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in BSTR taskLabel);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskPlugin )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pTaskPlugin);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskPlugin )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ __RPC__in BSTR taskPlugin);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TaskStatus )( 
            __RPC__in IRdVmTask * This,
            /* [retval][out] */ __RPC__out DWORD *pTaskStatus);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TaskStatus )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ DWORD taskStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_TaskContext )( 
            __RPC__in IRdVmTask * This,
            /* [out] */ __RPC__out DWORD *pContextLen,
            /* [retval][size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pContextLen) BYTE **pContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_TaskContext )( 
            __RPC__in IRdVmTask * This,
            /* [in] */ DWORD contextLen,
            /* [size_is][in] */ __RPC__in_ecount_full(contextLen) BYTE *context);
        
        END_INTERFACE
    } IRdVmTaskVtbl;

    interface IRdVmTask
    {
        CONST_VTBL struct IRdVmTaskVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdVmTask_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdVmTask_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdVmTask_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdVmTask_get_TaskId(This,pTaskId)	\
    ( (This)->lpVtbl -> get_TaskId(This,pTaskId) ) 

#define IRdVmTask_put_TaskId(This,taskId)	\
    ( (This)->lpVtbl -> put_TaskId(This,taskId) ) 

#define IRdVmTask_get_VmName(This,pName)	\
    ( (This)->lpVtbl -> get_VmName(This,pName) ) 

#define IRdVmTask_put_VmName(This,name)	\
    ( (This)->lpVtbl -> put_VmName(This,name) ) 

#define IRdVmTask_get_TaskStartTime(This,ppTime)	\
    ( (This)->lpVtbl -> get_TaskStartTime(This,ppTime) ) 

#define IRdVmTask_put_TaskStartTime(This,pTime)	\
    ( (This)->lpVtbl -> put_TaskStartTime(This,pTime) ) 

#define IRdVmTask_get_TaskEndTime(This,ppTime)	\
    ( (This)->lpVtbl -> get_TaskEndTime(This,ppTime) ) 

#define IRdVmTask_put_TaskEndTime(This,pTime)	\
    ( (This)->lpVtbl -> put_TaskEndTime(This,pTime) ) 

#define IRdVmTask_get_TaskDeadline(This,ppTime)	\
    ( (This)->lpVtbl -> get_TaskDeadline(This,ppTime) ) 

#define IRdVmTask_put_TaskDeadline(This,pTime)	\
    ( (This)->lpVtbl -> put_TaskDeadline(This,pTime) ) 

#define IRdVmTask_get_TaskLabel(This,pTaskLabel)	\
    ( (This)->lpVtbl -> get_TaskLabel(This,pTaskLabel) ) 

#define IRdVmTask_put_TaskLabel(This,taskLabel)	\
    ( (This)->lpVtbl -> put_TaskLabel(This,taskLabel) ) 

#define IRdVmTask_get_TaskPlugin(This,pTaskPlugin)	\
    ( (This)->lpVtbl -> get_TaskPlugin(This,pTaskPlugin) ) 

#define IRdVmTask_put_TaskPlugin(This,taskPlugin)	\
    ( (This)->lpVtbl -> put_TaskPlugin(This,taskPlugin) ) 

#define IRdVmTask_get_TaskStatus(This,pTaskStatus)	\
    ( (This)->lpVtbl -> get_TaskStatus(This,pTaskStatus) ) 

#define IRdVmTask_put_TaskStatus(This,taskStatus)	\
    ( (This)->lpVtbl -> put_TaskStatus(This,taskStatus) ) 

#define IRdVmTask_get_TaskContext(This,pContextLen,pContext)	\
    ( (This)->lpVtbl -> get_TaskContext(This,pContextLen,pContext) ) 

#define IRdVmTask_put_TaskContext(This,contextLen,context)	\
    ( (This)->lpVtbl -> put_TaskContext(This,contextLen,context) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdVmTask_INTERFACE_DEFINED__ */


#ifndef __IRdPdAssignment_INTERFACE_DEFINED__
#define __IRdPdAssignment_INTERFACE_DEFINED__

/* interface IRdPdAssignment */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdPdAssignment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C5C69DE2-46DA-4fc4-ABD3-9F13631553C9")
    IRdPdAssignment : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserSid( 
            /* [in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VmName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VmName( 
            /* [in] */ __RPC__in BSTR vmName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdPdAssignmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdPdAssignment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdPdAssignment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdPdAssignment * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            __RPC__in IRdPdAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserSid )( 
            __RPC__in IRdPdAssignment * This,
            /* [in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdPdAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdPdAssignment * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VmName )( 
            __RPC__in IRdPdAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVmName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VmName )( 
            __RPC__in IRdPdAssignment * This,
            /* [in] */ __RPC__in BSTR vmName);
        
        END_INTERFACE
    } IRdPdAssignmentVtbl;

    interface IRdPdAssignment
    {
        CONST_VTBL struct IRdPdAssignmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdPdAssignment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdPdAssignment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdPdAssignment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdPdAssignment_get_UserSid(This,pUserSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,pUserSid) ) 

#define IRdPdAssignment_put_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> put_UserSid(This,userSid) ) 

#define IRdPdAssignment_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdPdAssignment_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdPdAssignment_get_VmName(This,pVmName)	\
    ( (This)->lpVtbl -> get_VmName(This,pVmName) ) 

#define IRdPdAssignment_put_VmName(This,vmName)	\
    ( (This)->lpVtbl -> put_VmName(This,vmName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdPdAssignment_INTERFACE_DEFINED__ */


#ifndef __IRdDesktopAssignment_INTERFACE_DEFINED__
#define __IRdDesktopAssignment_INTERFACE_DEFINED__

/* interface IRdDesktopAssignment */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdDesktopAssignment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9efb0111-1e27-4069-9b97-289b9ff21592")
    IRdDesktopAssignment : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserSid( 
            /* [in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DesktopName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDesktopName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DesktopName( 
            /* [in] */ __RPC__in BSTR DesktopName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserDomainName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *UserDomainName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdDesktopAssignmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdDesktopAssignment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdDesktopAssignment * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserSid )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DesktopName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDesktopName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DesktopName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [in] */ __RPC__in BSTR DesktopName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserDomainName )( 
            __RPC__in IRdDesktopAssignment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *UserDomainName);
        
        END_INTERFACE
    } IRdDesktopAssignmentVtbl;

    interface IRdDesktopAssignment
    {
        CONST_VTBL struct IRdDesktopAssignmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdDesktopAssignment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdDesktopAssignment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdDesktopAssignment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdDesktopAssignment_get_UserSid(This,pUserSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,pUserSid) ) 

#define IRdDesktopAssignment_put_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> put_UserSid(This,userSid) ) 

#define IRdDesktopAssignment_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdDesktopAssignment_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdDesktopAssignment_get_DesktopName(This,pDesktopName)	\
    ( (This)->lpVtbl -> get_DesktopName(This,pDesktopName) ) 

#define IRdDesktopAssignment_put_DesktopName(This,DesktopName)	\
    ( (This)->lpVtbl -> put_DesktopName(This,DesktopName) ) 

#define IRdDesktopAssignment_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IRdDesktopAssignment_get_UserDomainName(This,UserDomainName)	\
    ( (This)->lpVtbl -> get_UserDomainName(This,UserDomainName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdDesktopAssignment_INTERFACE_DEFINED__ */


#ifndef __IRdNodeOwnership_INTERFACE_DEFINED__
#define __IRdNodeOwnership_INTERFACE_DEFINED__

/* interface IRdNodeOwnership */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdNodeOwnership;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("44338F1A-3F95-11E0-A792-F6E3DED72085")
    IRdNodeOwnership : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NodeName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pNodeName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NodeName( 
            /* [in] */ __RPC__in BSTR nodeName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ __RPC__out DWORD *pStatus) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Status( 
            /* [in] */ DWORD status) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LatestTimestamp( 
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LatestTimestamp( 
            /* [in] */ __RPC__in SYSTEMTIME *pTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SyncVersion( 
            /* [retval][out] */ __RPC__out hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SyncVersion( 
            /* [in] */ hyper syncVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdNodeOwnershipVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdNodeOwnership * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdNodeOwnership * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdNodeOwnership * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NodeName )( 
            __RPC__in IRdNodeOwnership * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pNodeName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NodeName )( 
            __RPC__in IRdNodeOwnership * This,
            /* [in] */ __RPC__in BSTR nodeName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            __RPC__in IRdNodeOwnership * This,
            /* [retval][out] */ __RPC__out DWORD *pStatus);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Status )( 
            __RPC__in IRdNodeOwnership * This,
            /* [in] */ DWORD status);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LatestTimestamp )( 
            __RPC__in IRdNodeOwnership * This,
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LatestTimestamp )( 
            __RPC__in IRdNodeOwnership * This,
            /* [in] */ __RPC__in SYSTEMTIME *pTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncVersion )( 
            __RPC__in IRdNodeOwnership * This,
            /* [retval][out] */ __RPC__out hyper *pSyncVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncVersion )( 
            __RPC__in IRdNodeOwnership * This,
            /* [in] */ hyper syncVersion);
        
        END_INTERFACE
    } IRdNodeOwnershipVtbl;

    interface IRdNodeOwnership
    {
        CONST_VTBL struct IRdNodeOwnershipVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdNodeOwnership_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdNodeOwnership_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdNodeOwnership_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdNodeOwnership_get_NodeName(This,pNodeName)	\
    ( (This)->lpVtbl -> get_NodeName(This,pNodeName) ) 

#define IRdNodeOwnership_put_NodeName(This,nodeName)	\
    ( (This)->lpVtbl -> put_NodeName(This,nodeName) ) 

#define IRdNodeOwnership_get_Status(This,pStatus)	\
    ( (This)->lpVtbl -> get_Status(This,pStatus) ) 

#define IRdNodeOwnership_put_Status(This,status)	\
    ( (This)->lpVtbl -> put_Status(This,status) ) 

#define IRdNodeOwnership_get_LatestTimestamp(This,ppTime)	\
    ( (This)->lpVtbl -> get_LatestTimestamp(This,ppTime) ) 

#define IRdNodeOwnership_put_LatestTimestamp(This,pTime)	\
    ( (This)->lpVtbl -> put_LatestTimestamp(This,pTime) ) 

#define IRdNodeOwnership_get_SyncVersion(This,pSyncVersion)	\
    ( (This)->lpVtbl -> get_SyncVersion(This,pSyncVersion) ) 

#define IRdNodeOwnership_put_SyncVersion(This,syncVersion)	\
    ( (This)->lpVtbl -> put_SyncVersion(This,syncVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdNodeOwnership_INTERFACE_DEFINED__ */


#ifndef __IRdServer_INTERFACE_DEFINED__
#define __IRdServer_INTERFACE_DEFINED__

/* interface IRdServer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("652B6900-82DE-11DF-8901-09B0DFD72085")
    IRdServer : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR Name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OsVersion( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_OsVersion( 
            /* [in] */ __RPC__in BSTR osVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ClusterName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ClusterName( 
            /* [in] */ __RPC__in BSTR clusterName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InstalledRoles( 
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InstalledRoles( 
            /* [in] */ RD_ROLE installedRoles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdServer * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdServer * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdServer * This,
            /* [in] */ __RPC__in BSTR Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdServer * This,
            /* [in] */ __RPC__in BSTR osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
            __RPC__in IRdServer * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
            __RPC__in IRdServer * This,
            /* [in] */ __RPC__in BSTR clusterName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledRoles )( 
            __RPC__in IRdServer * This,
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InstalledRoles )( 
            __RPC__in IRdServer * This,
            /* [in] */ RD_ROLE installedRoles);
        
        END_INTERFACE
    } IRdServerVtbl;

    interface IRdServer
    {
        CONST_VTBL struct IRdServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdServer_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdServer_put_Name(This,Name)	\
    ( (This)->lpVtbl -> put_Name(This,Name) ) 

#define IRdServer_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdServer_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdServer_get_ClusterName(This,pClusterName)	\
    ( (This)->lpVtbl -> get_ClusterName(This,pClusterName) ) 

#define IRdServer_put_ClusterName(This,clusterName)	\
    ( (This)->lpVtbl -> put_ClusterName(This,clusterName) ) 

#define IRdServer_get_InstalledRoles(This,pInstalledRoles)	\
    ( (This)->lpVtbl -> get_InstalledRoles(This,pInstalledRoles) ) 

#define IRdServer_put_InstalledRoles(This,installedRoles)	\
    ( (This)->lpVtbl -> put_InstalledRoles(This,installedRoles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdServer_INTERFACE_DEFINED__ */


#ifndef __IRdRoleRdcb_INTERFACE_DEFINED__
#define __IRdRoleRdcb_INTERFACE_DEFINED__

/* interface IRdRoleRdcb */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRoleRdcb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F16E3162-8BB8-11DF-A3F3-A420E0D72085")
    IRdRoleRdcb : public IRdServer
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Cap( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pCap) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Cap( 
            /* [in] */ __RPC__in BSTR cap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRoleRdcbVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRoleRdcb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRoleRdcb * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdRoleRdcb * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ __RPC__in BSTR Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdRoleRdcb * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ __RPC__in BSTR osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
            __RPC__in IRdRoleRdcb * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ __RPC__in BSTR clusterName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledRoles )( 
            __RPC__in IRdRoleRdcb * This,
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InstalledRoles )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ RD_ROLE installedRoles);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Cap )( 
            __RPC__in IRdRoleRdcb * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pCap);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Cap )( 
            __RPC__in IRdRoleRdcb * This,
            /* [in] */ __RPC__in BSTR cap);
        
        END_INTERFACE
    } IRdRoleRdcbVtbl;

    interface IRdRoleRdcb
    {
        CONST_VTBL struct IRdRoleRdcbVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRoleRdcb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRoleRdcb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRoleRdcb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRoleRdcb_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdRoleRdcb_put_Name(This,Name)	\
    ( (This)->lpVtbl -> put_Name(This,Name) ) 

#define IRdRoleRdcb_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdRoleRdcb_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdRoleRdcb_get_ClusterName(This,pClusterName)	\
    ( (This)->lpVtbl -> get_ClusterName(This,pClusterName) ) 

#define IRdRoleRdcb_put_ClusterName(This,clusterName)	\
    ( (This)->lpVtbl -> put_ClusterName(This,clusterName) ) 

#define IRdRoleRdcb_get_InstalledRoles(This,pInstalledRoles)	\
    ( (This)->lpVtbl -> get_InstalledRoles(This,pInstalledRoles) ) 

#define IRdRoleRdcb_put_InstalledRoles(This,installedRoles)	\
    ( (This)->lpVtbl -> put_InstalledRoles(This,installedRoles) ) 


#define IRdRoleRdcb_get_Cap(This,pCap)	\
    ( (This)->lpVtbl -> get_Cap(This,pCap) ) 

#define IRdRoleRdcb_put_Cap(This,cap)	\
    ( (This)->lpVtbl -> put_Cap(This,cap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRoleRdcb_INTERFACE_DEFINED__ */


#ifndef __IRdRoleRdsh_INTERFACE_DEFINED__
#define __IRdRoleRdsh_INTERFACE_DEFINED__

/* interface IRdRoleRdsh */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRoleRdsh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53498180-8BB8-11DF-B3EB-FF1FE0D72085")
    IRdRoleRdsh : public IRdServer
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BrokerCap( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerCap) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BrokerCap( 
            /* [in] */ __RPC__in BSTR brokerCap) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ServerState( 
            /* [retval][out] */ __RPC__out TARGET_STATE *pState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ServerState( 
            /* [in] */ TARGET_STATE State) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRoleRdshVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRoleRdsh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRoleRdsh * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in BSTR Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in BSTR osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in BSTR clusterName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledRoles )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InstalledRoles )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ RD_ROLE installedRoles);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BrokerCap )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerCap);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BrokerCap )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in BSTR brokerCap);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ServerState )( 
            __RPC__in IRdRoleRdsh * This,
            /* [retval][out] */ __RPC__out TARGET_STATE *pState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ServerState )( 
            __RPC__in IRdRoleRdsh * This,
            /* [in] */ TARGET_STATE State);
        
        END_INTERFACE
    } IRdRoleRdshVtbl;

    interface IRdRoleRdsh
    {
        CONST_VTBL struct IRdRoleRdshVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRoleRdsh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRoleRdsh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRoleRdsh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRoleRdsh_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdRoleRdsh_put_Name(This,Name)	\
    ( (This)->lpVtbl -> put_Name(This,Name) ) 

#define IRdRoleRdsh_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdRoleRdsh_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdRoleRdsh_get_ClusterName(This,pClusterName)	\
    ( (This)->lpVtbl -> get_ClusterName(This,pClusterName) ) 

#define IRdRoleRdsh_put_ClusterName(This,clusterName)	\
    ( (This)->lpVtbl -> put_ClusterName(This,clusterName) ) 

#define IRdRoleRdsh_get_InstalledRoles(This,pInstalledRoles)	\
    ( (This)->lpVtbl -> get_InstalledRoles(This,pInstalledRoles) ) 

#define IRdRoleRdsh_put_InstalledRoles(This,installedRoles)	\
    ( (This)->lpVtbl -> put_InstalledRoles(This,installedRoles) ) 


#define IRdRoleRdsh_get_BrokerCap(This,pBrokerCap)	\
    ( (This)->lpVtbl -> get_BrokerCap(This,pBrokerCap) ) 

#define IRdRoleRdsh_put_BrokerCap(This,brokerCap)	\
    ( (This)->lpVtbl -> put_BrokerCap(This,brokerCap) ) 

#define IRdRoleRdsh_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdRoleRdsh_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdRoleRdsh_get_ServerState(This,pState)	\
    ( (This)->lpVtbl -> get_ServerState(This,pState) ) 

#define IRdRoleRdsh_put_ServerState(This,State)	\
    ( (This)->lpVtbl -> put_ServerState(This,State) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRoleRdsh_INTERFACE_DEFINED__ */


#ifndef __IRdRoleRdvh_INTERFACE_DEFINED__
#define __IRdRoleRdvh_INTERFACE_DEFINED__

/* interface IRdRoleRdvh */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRoleRdvh;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8B2B0BF0-8BB8-11DF-BBAB-2420E0D72085")
    IRdRoleRdvh : public IRdServer
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BrokerCap( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerCap) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BrokerCap( 
            /* [in] */ __RPC__in BSTR brokerCap) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRoleRdvhVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRoleRdvh * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRoleRdvh * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdRoleRdvh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ __RPC__in BSTR Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdRoleRdvh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ __RPC__in BSTR osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
            __RPC__in IRdRoleRdvh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ __RPC__in BSTR clusterName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledRoles )( 
            __RPC__in IRdRoleRdvh * This,
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InstalledRoles )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ RD_ROLE installedRoles);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BrokerCap )( 
            __RPC__in IRdRoleRdvh * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerCap);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BrokerCap )( 
            __RPC__in IRdRoleRdvh * This,
            /* [in] */ __RPC__in BSTR brokerCap);
        
        END_INTERFACE
    } IRdRoleRdvhVtbl;

    interface IRdRoleRdvh
    {
        CONST_VTBL struct IRdRoleRdvhVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRoleRdvh_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRoleRdvh_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRoleRdvh_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRoleRdvh_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdRoleRdvh_put_Name(This,Name)	\
    ( (This)->lpVtbl -> put_Name(This,Name) ) 

#define IRdRoleRdvh_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdRoleRdvh_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdRoleRdvh_get_ClusterName(This,pClusterName)	\
    ( (This)->lpVtbl -> get_ClusterName(This,pClusterName) ) 

#define IRdRoleRdvh_put_ClusterName(This,clusterName)	\
    ( (This)->lpVtbl -> put_ClusterName(This,clusterName) ) 

#define IRdRoleRdvh_get_InstalledRoles(This,pInstalledRoles)	\
    ( (This)->lpVtbl -> get_InstalledRoles(This,pInstalledRoles) ) 

#define IRdRoleRdvh_put_InstalledRoles(This,installedRoles)	\
    ( (This)->lpVtbl -> put_InstalledRoles(This,installedRoles) ) 


#define IRdRoleRdvh_get_BrokerCap(This,pBrokerCap)	\
    ( (This)->lpVtbl -> get_BrokerCap(This,pBrokerCap) ) 

#define IRdRoleRdvh_put_BrokerCap(This,brokerCap)	\
    ( (This)->lpVtbl -> put_BrokerCap(This,brokerCap) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRoleRdvh_INTERFACE_DEFINED__ */


#ifndef __IRdRoleRdwa_INTERFACE_DEFINED__
#define __IRdRoleRdwa_INTERFACE_DEFINED__

/* interface IRdRoleRdwa */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRoleRdwa;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5B60F034-C50F-11DF-9E86-4B1AE0D72085")
    IRdRoleRdwa : public IRdServer
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FarmName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFarmName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FarmName( 
            /* [in] */ __RPC__in BSTR farmName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRoleRdwaVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRoleRdwa * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRoleRdwa * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdRoleRdwa * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ __RPC__in BSTR Name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OsVersion )( 
            __RPC__in IRdRoleRdwa * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_OsVersion )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ __RPC__in BSTR osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ClusterName )( 
            __RPC__in IRdRoleRdwa * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pClusterName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ClusterName )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ __RPC__in BSTR clusterName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InstalledRoles )( 
            __RPC__in IRdRoleRdwa * This,
            /* [retval][out] */ __RPC__out RD_ROLE *pInstalledRoles);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InstalledRoles )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ RD_ROLE installedRoles);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FarmName )( 
            __RPC__in IRdRoleRdwa * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFarmName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FarmName )( 
            __RPC__in IRdRoleRdwa * This,
            /* [in] */ __RPC__in BSTR farmName);
        
        END_INTERFACE
    } IRdRoleRdwaVtbl;

    interface IRdRoleRdwa
    {
        CONST_VTBL struct IRdRoleRdwaVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRoleRdwa_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRoleRdwa_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRoleRdwa_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRoleRdwa_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdRoleRdwa_put_Name(This,Name)	\
    ( (This)->lpVtbl -> put_Name(This,Name) ) 

#define IRdRoleRdwa_get_OsVersion(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_OsVersion(This,pOsVersion) ) 

#define IRdRoleRdwa_put_OsVersion(This,osVersion)	\
    ( (This)->lpVtbl -> put_OsVersion(This,osVersion) ) 

#define IRdRoleRdwa_get_ClusterName(This,pClusterName)	\
    ( (This)->lpVtbl -> get_ClusterName(This,pClusterName) ) 

#define IRdRoleRdwa_put_ClusterName(This,clusterName)	\
    ( (This)->lpVtbl -> put_ClusterName(This,clusterName) ) 

#define IRdRoleRdwa_get_InstalledRoles(This,pInstalledRoles)	\
    ( (This)->lpVtbl -> get_InstalledRoles(This,pInstalledRoles) ) 

#define IRdRoleRdwa_put_InstalledRoles(This,installedRoles)	\
    ( (This)->lpVtbl -> put_InstalledRoles(This,installedRoles) ) 


#define IRdRoleRdwa_get_FarmName(This,pFarmName)	\
    ( (This)->lpVtbl -> get_FarmName(This,pFarmName) ) 

#define IRdRoleRdwa_put_FarmName(This,farmName)	\
    ( (This)->lpVtbl -> put_FarmName(This,farmName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRoleRdwa_INTERFACE_DEFINED__ */


#ifndef __IRdwaFarm_INTERFACE_DEFINED__
#define __IRdwaFarm_INTERFACE_DEFINED__

/* interface IRdwaFarm */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdwaFarm;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("49C368CC-C5B7-11DF-9060-6F6FDFD72085")
    IRdwaFarm : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Cert( 
            /* [out][in] */ __RPC__inout DWORD *pCertLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pCertLen) BYTE **pCert) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Cert( 
            /* [in] */ DWORD certLen,
            /* [size_is][in] */ __RPC__in_ecount_full(certLen) BYTE *cert) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdwaFarmVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdwaFarm * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdwaFarm * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdwaFarm * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdwaFarm * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdwaFarm * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Cert )( 
            __RPC__in IRdwaFarm * This,
            /* [out][in] */ __RPC__inout DWORD *pCertLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pCertLen) BYTE **pCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Cert )( 
            __RPC__in IRdwaFarm * This,
            /* [in] */ DWORD certLen,
            /* [size_is][in] */ __RPC__in_ecount_full(certLen) BYTE *cert);
        
        END_INTERFACE
    } IRdwaFarmVtbl;

    interface IRdwaFarm
    {
        CONST_VTBL struct IRdwaFarmVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdwaFarm_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdwaFarm_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdwaFarm_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdwaFarm_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdwaFarm_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdwaFarm_get_Cert(This,pCertLen,pCert)	\
    ( (This)->lpVtbl -> get_Cert(This,pCertLen,pCert) ) 

#define IRdwaFarm_put_Cert(This,certLen,cert)	\
    ( (This)->lpVtbl -> put_Cert(This,certLen,cert) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdwaFarm_INTERFACE_DEFINED__ */


#ifndef __IRdwaVdir_INTERFACE_DEFINED__
#define __IRdwaVdir_INTERFACE_DEFINED__

/* interface IRdwaVdir */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdwaVdir;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BEBECC4E-C688-11DF-A83D-2EF5DED72085")
    IRdwaVdir : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FarmName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FarmName( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RelativeUrl( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUrl) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RelativeUrl( 
            /* [in] */ __RPC__in BSTR url) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsSslReqd( 
            /* [retval][out] */ __RPC__out BOOL *pSslReqd) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsSslReqd( 
            /* [in] */ BOOL sslReqd) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdwaVdirVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdwaVdir * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdwaVdir * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdwaVdir * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FarmName )( 
            __RPC__in IRdwaVdir * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FarmName )( 
            __RPC__in IRdwaVdir * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RelativeUrl )( 
            __RPC__in IRdwaVdir * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUrl);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RelativeUrl )( 
            __RPC__in IRdwaVdir * This,
            /* [in] */ __RPC__in BSTR url);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsSslReqd )( 
            __RPC__in IRdwaVdir * This,
            /* [retval][out] */ __RPC__out BOOL *pSslReqd);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsSslReqd )( 
            __RPC__in IRdwaVdir * This,
            /* [in] */ BOOL sslReqd);
        
        END_INTERFACE
    } IRdwaVdirVtbl;

    interface IRdwaVdir
    {
        CONST_VTBL struct IRdwaVdirVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdwaVdir_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdwaVdir_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdwaVdir_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdwaVdir_get_FarmName(This,pName)	\
    ( (This)->lpVtbl -> get_FarmName(This,pName) ) 

#define IRdwaVdir_put_FarmName(This,name)	\
    ( (This)->lpVtbl -> put_FarmName(This,name) ) 

#define IRdwaVdir_get_RelativeUrl(This,pUrl)	\
    ( (This)->lpVtbl -> get_RelativeUrl(This,pUrl) ) 

#define IRdwaVdir_put_RelativeUrl(This,url)	\
    ( (This)->lpVtbl -> put_RelativeUrl(This,url) ) 

#define IRdwaVdir_get_IsSslReqd(This,pSslReqd)	\
    ( (This)->lpVtbl -> get_IsSslReqd(This,pSslReqd) ) 

#define IRdwaVdir_put_IsSslReqd(This,sslReqd)	\
    ( (This)->lpVtbl -> put_IsSslReqd(This,sslReqd) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdwaVdir_INTERFACE_DEFINED__ */


#ifndef __IRdpFileInfo_INTERFACE_DEFINED__
#define __IRdpFileInfo_INTERFACE_DEFINED__

/* interface IRdpFileInfo */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdpFileInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F95344E-895F-11DF-8C37-5932E0D72085")
    IRdpFileInfo : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ __RPC__out DWORD *pOsVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Port( 
            /* [in] */ DWORD osVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HasCert( 
            /* [retval][out] */ __RPC__out BOOL *pHasCert) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HasCert( 
            /* [in] */ BOOL hasCert) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_CertHash( 
            /* [out][in] */ __RPC__inout DWORD *pCertHashLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pCertHashLen) BYTE **pCertHash) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_CertHash( 
            /* [in] */ DWORD certHashLen,
            /* [size_is][in] */ __RPC__in_ecount_full(certHashLen) BYTE *certHash) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorBitDepth( 
            /* [retval][out] */ __RPC__out DWORD *pColorBitDepth) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorBitDepth( 
            /* [in] */ DWORD colorBitDepth) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AllowFontSmoothing( 
            /* [retval][out] */ __RPC__out BOOL *pAllowFontSmoothing) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AllowFontSmoothing( 
            /* [in] */ BOOL allowFontSmoothing) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UseMultimon( 
            /* [retval][out] */ __RPC__out BOOL *pUseMultimon) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UseMultimon( 
            /* [in] */ BOOL useMultimon) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirectionOption( 
            /* [retval][out] */ __RPC__out DWORD *pRedirectionOption) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirectionOption( 
            /* [in] */ DWORD redirectionOption) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CustomRdpSettings( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pCustomRdpSettings) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CustomRdpSettings( 
            /* [in] */ __RPC__in BSTR customRdpSettings) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DeploymentRdpSettings( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDeploymentRdpSettings) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DeploymentRdpSettings( 
            /* [in] */ __RPC__in BSTR deploymentRdpSettings) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pWorkspaceId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WorkspaceId( 
            /* [in] */ __RPC__in BSTR workspaceId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_WorkspaceDisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pWorkspaceDisplayName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_WorkspaceDisplayName( 
            /* [in] */ __RPC__in BSTR workspaceDisplayName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RdgFqdn( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pRdgFqdn) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RdgFqdn( 
            /* [in] */ __RPC__in BSTR rdgFqdn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RdgUsage( 
            /* [retval][out] */ __RPC__out DWORD *pRdgUsage) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RdgUsage( 
            /* [in] */ DWORD rdgUsage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RdgAuthMode( 
            /* [retval][out] */ __RPC__out DWORD *pRdgAuthMode) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RdgAuthMode( 
            /* [in] */ DWORD rdgAuthMode) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RdgUseCachedCreds( 
            /* [retval][out] */ __RPC__out BOOL *pRdgUseCachedCreds) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RdgUseCachedCreds( 
            /* [in] */ BOOL rdgUseCachedCreds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdpFileInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdpFileInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdpFileInfo * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pOsVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Port )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD osVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCert )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pHasCert);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HasCert )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ BOOL hasCert);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_CertHash )( 
            __RPC__in IRdpFileInfo * This,
            /* [out][in] */ __RPC__inout DWORD *pCertHashLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pCertHashLen) BYTE **pCertHash);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_CertHash )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD certHashLen,
            /* [size_is][in] */ __RPC__in_ecount_full(certHashLen) BYTE *certHash);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorBitDepth )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pColorBitDepth);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorBitDepth )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD colorBitDepth);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AllowFontSmoothing )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pAllowFontSmoothing);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AllowFontSmoothing )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ BOOL allowFontSmoothing);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UseMultimon )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pUseMultimon);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UseMultimon )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ BOOL useMultimon);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirectionOption )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pRedirectionOption);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirectionOption )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD redirectionOption);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CustomRdpSettings )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pCustomRdpSettings);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CustomRdpSettings )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR customRdpSettings);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DeploymentRdpSettings )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDeploymentRdpSettings);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DeploymentRdpSettings )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR deploymentRdpSettings);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceId )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pWorkspaceId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkspaceId )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR workspaceId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_WorkspaceDisplayName )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pWorkspaceDisplayName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_WorkspaceDisplayName )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR workspaceDisplayName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdgFqdn )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pRdgFqdn);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdgFqdn )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ __RPC__in BSTR rdgFqdn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdgUsage )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pRdgUsage);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdgUsage )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD rdgUsage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdgAuthMode )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pRdgAuthMode);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdgAuthMode )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ DWORD rdgAuthMode);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RdgUseCachedCreds )( 
            __RPC__in IRdpFileInfo * This,
            /* [retval][out] */ __RPC__out BOOL *pRdgUseCachedCreds);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RdgUseCachedCreds )( 
            __RPC__in IRdpFileInfo * This,
            /* [in] */ BOOL rdgUseCachedCreds);
        
        END_INTERFACE
    } IRdpFileInfoVtbl;

    interface IRdpFileInfo
    {
        CONST_VTBL struct IRdpFileInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdpFileInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdpFileInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdpFileInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdpFileInfo_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdpFileInfo_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdpFileInfo_get_Port(This,pOsVersion)	\
    ( (This)->lpVtbl -> get_Port(This,pOsVersion) ) 

#define IRdpFileInfo_put_Port(This,osVersion)	\
    ( (This)->lpVtbl -> put_Port(This,osVersion) ) 

#define IRdpFileInfo_get_HasCert(This,pHasCert)	\
    ( (This)->lpVtbl -> get_HasCert(This,pHasCert) ) 

#define IRdpFileInfo_put_HasCert(This,hasCert)	\
    ( (This)->lpVtbl -> put_HasCert(This,hasCert) ) 

#define IRdpFileInfo_get_CertHash(This,pCertHashLen,pCertHash)	\
    ( (This)->lpVtbl -> get_CertHash(This,pCertHashLen,pCertHash) ) 

#define IRdpFileInfo_put_CertHash(This,certHashLen,certHash)	\
    ( (This)->lpVtbl -> put_CertHash(This,certHashLen,certHash) ) 

#define IRdpFileInfo_get_ColorBitDepth(This,pColorBitDepth)	\
    ( (This)->lpVtbl -> get_ColorBitDepth(This,pColorBitDepth) ) 

#define IRdpFileInfo_put_ColorBitDepth(This,colorBitDepth)	\
    ( (This)->lpVtbl -> put_ColorBitDepth(This,colorBitDepth) ) 

#define IRdpFileInfo_get_AllowFontSmoothing(This,pAllowFontSmoothing)	\
    ( (This)->lpVtbl -> get_AllowFontSmoothing(This,pAllowFontSmoothing) ) 

#define IRdpFileInfo_put_AllowFontSmoothing(This,allowFontSmoothing)	\
    ( (This)->lpVtbl -> put_AllowFontSmoothing(This,allowFontSmoothing) ) 

#define IRdpFileInfo_get_UseMultimon(This,pUseMultimon)	\
    ( (This)->lpVtbl -> get_UseMultimon(This,pUseMultimon) ) 

#define IRdpFileInfo_put_UseMultimon(This,useMultimon)	\
    ( (This)->lpVtbl -> put_UseMultimon(This,useMultimon) ) 

#define IRdpFileInfo_get_RedirectionOption(This,pRedirectionOption)	\
    ( (This)->lpVtbl -> get_RedirectionOption(This,pRedirectionOption) ) 

#define IRdpFileInfo_put_RedirectionOption(This,redirectionOption)	\
    ( (This)->lpVtbl -> put_RedirectionOption(This,redirectionOption) ) 

#define IRdpFileInfo_get_CustomRdpSettings(This,pCustomRdpSettings)	\
    ( (This)->lpVtbl -> get_CustomRdpSettings(This,pCustomRdpSettings) ) 

#define IRdpFileInfo_put_CustomRdpSettings(This,customRdpSettings)	\
    ( (This)->lpVtbl -> put_CustomRdpSettings(This,customRdpSettings) ) 

#define IRdpFileInfo_get_DeploymentRdpSettings(This,pDeploymentRdpSettings)	\
    ( (This)->lpVtbl -> get_DeploymentRdpSettings(This,pDeploymentRdpSettings) ) 

#define IRdpFileInfo_put_DeploymentRdpSettings(This,deploymentRdpSettings)	\
    ( (This)->lpVtbl -> put_DeploymentRdpSettings(This,deploymentRdpSettings) ) 

#define IRdpFileInfo_get_WorkspaceId(This,pWorkspaceId)	\
    ( (This)->lpVtbl -> get_WorkspaceId(This,pWorkspaceId) ) 

#define IRdpFileInfo_put_WorkspaceId(This,workspaceId)	\
    ( (This)->lpVtbl -> put_WorkspaceId(This,workspaceId) ) 

#define IRdpFileInfo_get_WorkspaceDisplayName(This,pWorkspaceDisplayName)	\
    ( (This)->lpVtbl -> get_WorkspaceDisplayName(This,pWorkspaceDisplayName) ) 

#define IRdpFileInfo_put_WorkspaceDisplayName(This,workspaceDisplayName)	\
    ( (This)->lpVtbl -> put_WorkspaceDisplayName(This,workspaceDisplayName) ) 

#define IRdpFileInfo_get_RdgFqdn(This,pRdgFqdn)	\
    ( (This)->lpVtbl -> get_RdgFqdn(This,pRdgFqdn) ) 

#define IRdpFileInfo_put_RdgFqdn(This,rdgFqdn)	\
    ( (This)->lpVtbl -> put_RdgFqdn(This,rdgFqdn) ) 

#define IRdpFileInfo_get_RdgUsage(This,pRdgUsage)	\
    ( (This)->lpVtbl -> get_RdgUsage(This,pRdgUsage) ) 

#define IRdpFileInfo_put_RdgUsage(This,rdgUsage)	\
    ( (This)->lpVtbl -> put_RdgUsage(This,rdgUsage) ) 

#define IRdpFileInfo_get_RdgAuthMode(This,pRdgAuthMode)	\
    ( (This)->lpVtbl -> get_RdgAuthMode(This,pRdgAuthMode) ) 

#define IRdpFileInfo_put_RdgAuthMode(This,rdgAuthMode)	\
    ( (This)->lpVtbl -> put_RdgAuthMode(This,rdgAuthMode) ) 

#define IRdpFileInfo_get_RdgUseCachedCreds(This,pRdgUseCachedCreds)	\
    ( (This)->lpVtbl -> get_RdgUseCachedCreds(This,pRdgUseCachedCreds) ) 

#define IRdpFileInfo_put_RdgUseCachedCreds(This,rdgUseCachedCreds)	\
    ( (This)->lpVtbl -> put_RdgUseCachedCreds(This,rdgUseCachedCreds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdpFileInfo_INTERFACE_DEFINED__ */


#ifndef __IRdIcon_INTERFACE_DEFINED__
#define __IRdIcon_INTERFACE_DEFINED__

/* interface IRdIcon */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdIcon;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DEE0FC90-8961-11DF-A38B-1735E0D72085")
    IRdIcon : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Path( 
            /* [in] */ __RPC__in BSTR path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Contents( 
            /* [out][in] */ __RPC__inout DWORD *pContentsLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pContentsLen) BYTE **pContents) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Contents( 
            /* [in] */ DWORD contentsLen,
            /* [size_is][in] */ __RPC__in_ecount_full(contentsLen) BYTE *contents) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ __RPC__out INT *pIndex) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Index( 
            /* [in] */ INT index) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdIconVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdIcon * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdIcon * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdIcon * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            __RPC__in IRdIcon * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Path )( 
            __RPC__in IRdIcon * This,
            /* [in] */ __RPC__in BSTR path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Contents )( 
            __RPC__in IRdIcon * This,
            /* [out][in] */ __RPC__inout DWORD *pContentsLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pContentsLen) BYTE **pContents);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Contents )( 
            __RPC__in IRdIcon * This,
            /* [in] */ DWORD contentsLen,
            /* [size_is][in] */ __RPC__in_ecount_full(contentsLen) BYTE *contents);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            __RPC__in IRdIcon * This,
            /* [retval][out] */ __RPC__out INT *pIndex);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Index )( 
            __RPC__in IRdIcon * This,
            /* [in] */ INT index);
        
        END_INTERFACE
    } IRdIconVtbl;

    interface IRdIcon
    {
        CONST_VTBL struct IRdIconVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdIcon_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdIcon_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdIcon_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdIcon_get_Path(This,pPath)	\
    ( (This)->lpVtbl -> get_Path(This,pPath) ) 

#define IRdIcon_put_Path(This,path)	\
    ( (This)->lpVtbl -> put_Path(This,path) ) 

#define IRdIcon_get_Contents(This,pContentsLen,pContents)	\
    ( (This)->lpVtbl -> get_Contents(This,pContentsLen,pContents) ) 

#define IRdIcon_put_Contents(This,contentsLen,contents)	\
    ( (This)->lpVtbl -> put_Contents(This,contentsLen,contents) ) 

#define IRdIcon_get_Index(This,pIndex)	\
    ( (This)->lpVtbl -> get_Index(This,pIndex) ) 

#define IRdIcon_put_Index(This,index)	\
    ( (This)->lpVtbl -> put_Index(This,index) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdIcon_INTERFACE_DEFINED__ */


#ifndef __IRdRemoteApp_INTERFACE_DEFINED__
#define __IRdRemoteApp_INTERFACE_DEFINED__

/* interface IRdRemoteApp */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRemoteApp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D87BA1E4-8960-11DF-BCC4-F633E0D72085")
    IRdRemoteApp : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alias( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alias( 
            /* [in] */ __RPC__in BSTR alias) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayName( 
            /* [in] */ __RPC__in BSTR displayName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibleInWA( 
            /* [retval][out] */ __RPC__out BOOL *pVisibleInWA) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibleInWA( 
            /* [in] */ BOOL visibleInWA) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SecDesc( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pSecDesc) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SecDesc( 
            /* [in] */ __RPC__in BSTR secDesc) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_AppPath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAppPath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_AppPath( 
            /* [in] */ __RPC__in BSTR appPath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VirtualPath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVirtualPath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VirtualPath( 
            /* [in] */ __RPC__in BSTR virtualPath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CmdLineSetting( 
            /* [retval][out] */ __RPC__out DWORD *pCmdLineSetting) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CmdLineSetting( 
            /* [in] */ DWORD cmdLineSetting) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ReqdCmdLine( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pReqdCmdLine) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ReqdCmdLine( 
            /* [in] */ __RPC__in BSTR reqdCmdLine) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Folder( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFolder) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Folder( 
            /* [in] */ __RPC__in BSTR folder) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Icon( 
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Icon( 
            /* [in] */ __RPC__in_opt IRdIcon *pIcon) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRemoteAppVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRemoteApp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRemoteApp * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alias )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alias )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR alias);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayName )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR displayName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisibleInWA )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__out BOOL *pVisibleInWA);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisibleInWA )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ BOOL visibleInWA);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SecDesc )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pSecDesc);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SecDesc )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR secDesc);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_AppPath )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAppPath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_AppPath )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR appPath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VirtualPath )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVirtualPath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VirtualPath )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR virtualPath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CmdLineSetting )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__out DWORD *pCmdLineSetting);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CmdLineSetting )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ DWORD cmdLineSetting);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ReqdCmdLine )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pReqdCmdLine);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ReqdCmdLine )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR reqdCmdLine);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Folder )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFolder);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Folder )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in BSTR folder);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Icon )( 
            __RPC__in IRdRemoteApp * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Icon )( 
            __RPC__in IRdRemoteApp * This,
            /* [in] */ __RPC__in_opt IRdIcon *pIcon);
        
        END_INTERFACE
    } IRdRemoteAppVtbl;

    interface IRdRemoteApp
    {
        CONST_VTBL struct IRdRemoteAppVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRemoteApp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRemoteApp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRemoteApp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRemoteApp_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdRemoteApp_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdRemoteApp_get_Alias(This,pAlias)	\
    ( (This)->lpVtbl -> get_Alias(This,pAlias) ) 

#define IRdRemoteApp_put_Alias(This,alias)	\
    ( (This)->lpVtbl -> put_Alias(This,alias) ) 

#define IRdRemoteApp_get_DisplayName(This,pDisplayName)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pDisplayName) ) 

#define IRdRemoteApp_put_DisplayName(This,displayName)	\
    ( (This)->lpVtbl -> put_DisplayName(This,displayName) ) 

#define IRdRemoteApp_get_VisibleInWA(This,pVisibleInWA)	\
    ( (This)->lpVtbl -> get_VisibleInWA(This,pVisibleInWA) ) 

#define IRdRemoteApp_put_VisibleInWA(This,visibleInWA)	\
    ( (This)->lpVtbl -> put_VisibleInWA(This,visibleInWA) ) 

#define IRdRemoteApp_get_SecDesc(This,pSecDesc)	\
    ( (This)->lpVtbl -> get_SecDesc(This,pSecDesc) ) 

#define IRdRemoteApp_put_SecDesc(This,secDesc)	\
    ( (This)->lpVtbl -> put_SecDesc(This,secDesc) ) 

#define IRdRemoteApp_get_AppPath(This,pAppPath)	\
    ( (This)->lpVtbl -> get_AppPath(This,pAppPath) ) 

#define IRdRemoteApp_put_AppPath(This,appPath)	\
    ( (This)->lpVtbl -> put_AppPath(This,appPath) ) 

#define IRdRemoteApp_get_VirtualPath(This,pVirtualPath)	\
    ( (This)->lpVtbl -> get_VirtualPath(This,pVirtualPath) ) 

#define IRdRemoteApp_put_VirtualPath(This,virtualPath)	\
    ( (This)->lpVtbl -> put_VirtualPath(This,virtualPath) ) 

#define IRdRemoteApp_get_CmdLineSetting(This,pCmdLineSetting)	\
    ( (This)->lpVtbl -> get_CmdLineSetting(This,pCmdLineSetting) ) 

#define IRdRemoteApp_put_CmdLineSetting(This,cmdLineSetting)	\
    ( (This)->lpVtbl -> put_CmdLineSetting(This,cmdLineSetting) ) 

#define IRdRemoteApp_get_ReqdCmdLine(This,pReqdCmdLine)	\
    ( (This)->lpVtbl -> get_ReqdCmdLine(This,pReqdCmdLine) ) 

#define IRdRemoteApp_put_ReqdCmdLine(This,reqdCmdLine)	\
    ( (This)->lpVtbl -> put_ReqdCmdLine(This,reqdCmdLine) ) 

#define IRdRemoteApp_get_Folder(This,pFolder)	\
    ( (This)->lpVtbl -> get_Folder(This,pFolder) ) 

#define IRdRemoteApp_put_Folder(This,folder)	\
    ( (This)->lpVtbl -> put_Folder(This,folder) ) 

#define IRdRemoteApp_get_Icon(This,ppIcon)	\
    ( (This)->lpVtbl -> get_Icon(This,ppIcon) ) 

#define IRdRemoteApp_put_Icon(This,pIcon)	\
    ( (This)->lpVtbl -> put_Icon(This,pIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRemoteApp_INTERFACE_DEFINED__ */


#ifndef __IRdRemoteDesktop_INTERFACE_DEFINED__
#define __IRdRemoteDesktop_INTERFACE_DEFINED__

/* interface IRdRemoteDesktop */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdRemoteDesktop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63B4B650-8962-11DF-B97A-CE35E0D72085")
    IRdRemoteDesktop : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Alias( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Alias( 
            /* [in] */ __RPC__in BSTR alias) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisplayName( 
            /* [in] */ __RPC__in BSTR displayName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_VisibleInWA( 
            /* [retval][out] */ __RPC__out BOOL *pVisibleInWA) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_VisibleInWA( 
            /* [in] */ BOOL visibleInWA) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Icon( 
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Icon( 
            /* [in] */ __RPC__in_opt IRdIcon *pIcon) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdRemoteDesktopVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdRemoteDesktop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdRemoteDesktop * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Alias )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Alias )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ __RPC__in BSTR alias);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pDisplayName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisplayName )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ __RPC__in BSTR displayName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_VisibleInWA )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [retval][out] */ __RPC__out BOOL *pVisibleInWA);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_VisibleInWA )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ BOOL visibleInWA);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Icon )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Icon )( 
            __RPC__in IRdRemoteDesktop * This,
            /* [in] */ __RPC__in_opt IRdIcon *pIcon);
        
        END_INTERFACE
    } IRdRemoteDesktopVtbl;

    interface IRdRemoteDesktop
    {
        CONST_VTBL struct IRdRemoteDesktopVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdRemoteDesktop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdRemoteDesktop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdRemoteDesktop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdRemoteDesktop_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdRemoteDesktop_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdRemoteDesktop_get_Alias(This,pAlias)	\
    ( (This)->lpVtbl -> get_Alias(This,pAlias) ) 

#define IRdRemoteDesktop_put_Alias(This,alias)	\
    ( (This)->lpVtbl -> put_Alias(This,alias) ) 

#define IRdRemoteDesktop_get_DisplayName(This,pDisplayName)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pDisplayName) ) 

#define IRdRemoteDesktop_put_DisplayName(This,displayName)	\
    ( (This)->lpVtbl -> put_DisplayName(This,displayName) ) 

#define IRdRemoteDesktop_get_VisibleInWA(This,pVisibleInWA)	\
    ( (This)->lpVtbl -> get_VisibleInWA(This,pVisibleInWA) ) 

#define IRdRemoteDesktop_put_VisibleInWA(This,visibleInWA)	\
    ( (This)->lpVtbl -> put_VisibleInWA(This,visibleInWA) ) 

#define IRdRemoteDesktop_get_Icon(This,ppIcon)	\
    ( (This)->lpVtbl -> get_Icon(This,ppIcon) ) 

#define IRdRemoteDesktop_put_Icon(This,pIcon)	\
    ( (This)->lpVtbl -> put_Icon(This,pIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdRemoteDesktop_INTERFACE_DEFINED__ */


#ifndef __IRdFileTypeAssoc_INTERFACE_DEFINED__
#define __IRdFileTypeAssoc_INTERFACE_DEFINED__

/* interface IRdFileTypeAssoc */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdFileTypeAssoc;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A9344740-8962-11DF-94FF-0F36E0D72085")
    IRdFileTypeAssoc : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ExtensionName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pExtensionName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ExtensionName( 
            /* [in] */ __RPC__in BSTR extensionName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RemoteAppAlias( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RemoteAppAlias( 
            /* [in] */ __RPC__in BSTR alias) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsPublished( 
            /* [retval][out] */ __RPC__out BOOL *pIsPublished) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsPublished( 
            /* [in] */ BOOL isPublished) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProgId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pProgId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProgId( 
            /* [in] */ __RPC__in BSTR progId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsPrimaryHandler( 
            /* [retval][out] */ __RPC__out BOOL *pIsPrimaryHandler) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsPrimaryHandler( 
            /* [in] */ BOOL isPrimaryHandler) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Icon( 
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Icon( 
            /* [in] */ __RPC__in_opt IRdIcon *pIcon) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdFileTypeAssocVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdFileTypeAssoc * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdFileTypeAssoc * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ExtensionName )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pExtensionName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ExtensionName )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in BSTR extensionName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemoteAppAlias )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pAlias);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RemoteAppAlias )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in BSTR alias);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPublished )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__out BOOL *pIsPublished);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsPublished )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ BOOL isPublished);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProgId )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pProgId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProgId )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in BSTR progId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryHandler )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__out BOOL *pIsPrimaryHandler);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsPrimaryHandler )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ BOOL isPrimaryHandler);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Icon )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdIcon **ppIcon);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Icon )( 
            __RPC__in IRdFileTypeAssoc * This,
            /* [in] */ __RPC__in_opt IRdIcon *pIcon);
        
        END_INTERFACE
    } IRdFileTypeAssocVtbl;

    interface IRdFileTypeAssoc
    {
        CONST_VTBL struct IRdFileTypeAssocVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdFileTypeAssoc_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdFileTypeAssoc_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdFileTypeAssoc_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdFileTypeAssoc_get_ExtensionName(This,pExtensionName)	\
    ( (This)->lpVtbl -> get_ExtensionName(This,pExtensionName) ) 

#define IRdFileTypeAssoc_put_ExtensionName(This,extensionName)	\
    ( (This)->lpVtbl -> put_ExtensionName(This,extensionName) ) 

#define IRdFileTypeAssoc_get_RemoteAppAlias(This,pAlias)	\
    ( (This)->lpVtbl -> get_RemoteAppAlias(This,pAlias) ) 

#define IRdFileTypeAssoc_put_RemoteAppAlias(This,alias)	\
    ( (This)->lpVtbl -> put_RemoteAppAlias(This,alias) ) 

#define IRdFileTypeAssoc_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdFileTypeAssoc_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdFileTypeAssoc_get_IsPublished(This,pIsPublished)	\
    ( (This)->lpVtbl -> get_IsPublished(This,pIsPublished) ) 

#define IRdFileTypeAssoc_put_IsPublished(This,isPublished)	\
    ( (This)->lpVtbl -> put_IsPublished(This,isPublished) ) 

#define IRdFileTypeAssoc_get_ProgId(This,pProgId)	\
    ( (This)->lpVtbl -> get_ProgId(This,pProgId) ) 

#define IRdFileTypeAssoc_put_ProgId(This,progId)	\
    ( (This)->lpVtbl -> put_ProgId(This,progId) ) 

#define IRdFileTypeAssoc_get_IsPrimaryHandler(This,pIsPrimaryHandler)	\
    ( (This)->lpVtbl -> get_IsPrimaryHandler(This,pIsPrimaryHandler) ) 

#define IRdFileTypeAssoc_put_IsPrimaryHandler(This,isPrimaryHandler)	\
    ( (This)->lpVtbl -> put_IsPrimaryHandler(This,isPrimaryHandler) ) 

#define IRdFileTypeAssoc_get_Icon(This,ppIcon)	\
    ( (This)->lpVtbl -> get_Icon(This,ppIcon) ) 

#define IRdFileTypeAssoc_put_Icon(This,pIcon)	\
    ( (This)->lpVtbl -> put_Icon(This,pIcon) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdFileTypeAssoc_INTERFACE_DEFINED__ */


#ifndef __IRdVmInfo_INTERFACE_DEFINED__
#define __IRdVmInfo_INTERFACE_DEFINED__

/* interface IRdVmInfo */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdVmInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fcfa7f43-a760-412f-9b8d-155156bd9eee")
    IRdVmInfo : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_HostName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_HostName( 
            /* [in] */ __RPC__in BSTR hostName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ __RPC__out DWORD *pState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ DWORD state) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserDomain( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserDomain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserSid( 
            /* [in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CreationStatus( 
            /* [retval][out] */ __RPC__out DWORD *pCreationStatus) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CreationStatus( 
            /* [in] */ DWORD creationStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdVmInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdVmInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdVmInfo * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_HostName )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pHostName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_HostName )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ __RPC__in BSTR hostName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ DWORD state);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserDomain )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserDomain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserSid )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreationStatus )( 
            __RPC__in IRdVmInfo * This,
            /* [retval][out] */ __RPC__out DWORD *pCreationStatus);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CreationStatus )( 
            __RPC__in IRdVmInfo * This,
            /* [in] */ DWORD creationStatus);
        
        END_INTERFACE
    } IRdVmInfoVtbl;

    interface IRdVmInfo
    {
        CONST_VTBL struct IRdVmInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdVmInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdVmInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdVmInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdVmInfo_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdVmInfo_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdVmInfo_get_HostName(This,pHostName)	\
    ( (This)->lpVtbl -> get_HostName(This,pHostName) ) 

#define IRdVmInfo_put_HostName(This,hostName)	\
    ( (This)->lpVtbl -> put_HostName(This,hostName) ) 

#define IRdVmInfo_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdVmInfo_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdVmInfo_get_State(This,pState)	\
    ( (This)->lpVtbl -> get_State(This,pState) ) 

#define IRdVmInfo_put_State(This,state)	\
    ( (This)->lpVtbl -> put_State(This,state) ) 

#define IRdVmInfo_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IRdVmInfo_get_UserDomain(This,pUserDomain)	\
    ( (This)->lpVtbl -> get_UserDomain(This,pUserDomain) ) 

#define IRdVmInfo_get_UserSid(This,pUserSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,pUserSid) ) 

#define IRdVmInfo_put_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> put_UserSid(This,userSid) ) 

#define IRdVmInfo_get_CreationStatus(This,pCreationStatus)	\
    ( (This)->lpVtbl -> get_CreationStatus(This,pCreationStatus) ) 

#define IRdVmInfo_put_CreationStatus(This,creationStatus)	\
    ( (This)->lpVtbl -> put_CreationStatus(This,creationStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdVmInfo_INTERFACE_DEFINED__ */


#ifndef __IRdEnvironment_INTERFACE_DEFINED__
#define __IRdEnvironment_INTERFACE_DEFINED__

/* interface IRdEnvironment */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdEnvironment;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C676DB46-CB5D-11DF-84DC-9B8ADFD72085")
    IRdEnvironment : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BrokerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BrokerName( 
            /* [in] */ __RPC__in BSTR brokerName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResourcePluginName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResourcePluginName( 
            /* [in] */ __RPC__in BSTR resourcePluginName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyBag( 
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PropertyBag( 
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SyncVersion( 
            /* [retval][out] */ __RPC__out hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SyncVersion( 
            /* [in] */ hyper syncVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdEnvironmentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdEnvironment * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdEnvironment * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdEnvironment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BrokerName )( 
            __RPC__in IRdEnvironment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BrokerName )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ __RPC__in BSTR brokerName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResourcePluginName )( 
            __RPC__in IRdEnvironment * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResourcePluginName )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ __RPC__in BSTR resourcePluginName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyBag )( 
            __RPC__in IRdEnvironment * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyBag )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncVersion )( 
            __RPC__in IRdEnvironment * This,
            /* [retval][out] */ __RPC__out hyper *pSyncVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncVersion )( 
            __RPC__in IRdEnvironment * This,
            /* [in] */ hyper syncVersion);
        
        END_INTERFACE
    } IRdEnvironmentVtbl;

    interface IRdEnvironment
    {
        CONST_VTBL struct IRdEnvironmentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdEnvironment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdEnvironment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdEnvironment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdEnvironment_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdEnvironment_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdEnvironment_get_BrokerName(This,pBrokerName)	\
    ( (This)->lpVtbl -> get_BrokerName(This,pBrokerName) ) 

#define IRdEnvironment_put_BrokerName(This,brokerName)	\
    ( (This)->lpVtbl -> put_BrokerName(This,brokerName) ) 

#define IRdEnvironment_get_ResourcePluginName(This,pResourcePluginName)	\
    ( (This)->lpVtbl -> get_ResourcePluginName(This,pResourcePluginName) ) 

#define IRdEnvironment_put_ResourcePluginName(This,resourcePluginName)	\
    ( (This)->lpVtbl -> put_ResourcePluginName(This,resourcePluginName) ) 

#define IRdEnvironment_get_PropertyBag(This,ppRdPropertyBag)	\
    ( (This)->lpVtbl -> get_PropertyBag(This,ppRdPropertyBag) ) 

#define IRdEnvironment_put_PropertyBag(This,pRdPropertyBag)	\
    ( (This)->lpVtbl -> put_PropertyBag(This,pRdPropertyBag) ) 

#define IRdEnvironment_get_SyncVersion(This,pSyncVersion)	\
    ( (This)->lpVtbl -> get_SyncVersion(This,pSyncVersion) ) 

#define IRdEnvironment_put_SyncVersion(This,syncVersion)	\
    ( (This)->lpVtbl -> put_SyncVersion(This,syncVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdEnvironment_INTERFACE_DEFINED__ */


#ifndef __IRdTargetIp_INTERFACE_DEFINED__
#define __IRdTargetIp_INTERFACE_DEFINED__

/* interface IRdTargetIp */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdTargetIp;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3A00D320-CB61-11DF-971C-918EDFD72085")
    IRdTargetIp : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IpAddress( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pIpAddress) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IpAddress( 
            /* [in] */ __RPC__in BSTR ipAddress) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IpType( 
            /* [retval][out] */ __RPC__out DWORD *pIpType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IpType( 
            /* [in] */ DWORD ipType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdTargetIpVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdTargetIp * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdTargetIp * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdTargetIp * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IpAddress )( 
            __RPC__in IRdTargetIp * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pIpAddress);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IpAddress )( 
            __RPC__in IRdTargetIp * This,
            /* [in] */ __RPC__in BSTR ipAddress);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IpType )( 
            __RPC__in IRdTargetIp * This,
            /* [retval][out] */ __RPC__out DWORD *pIpType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IpType )( 
            __RPC__in IRdTargetIp * This,
            /* [in] */ DWORD ipType);
        
        END_INTERFACE
    } IRdTargetIpVtbl;

    interface IRdTargetIp
    {
        CONST_VTBL struct IRdTargetIpVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdTargetIp_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdTargetIp_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdTargetIp_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdTargetIp_get_IpAddress(This,pIpAddress)	\
    ( (This)->lpVtbl -> get_IpAddress(This,pIpAddress) ) 

#define IRdTargetIp_put_IpAddress(This,ipAddress)	\
    ( (This)->lpVtbl -> put_IpAddress(This,ipAddress) ) 

#define IRdTargetIp_get_IpType(This,pIpType)	\
    ( (This)->lpVtbl -> get_IpType(This,pIpType) ) 

#define IRdTargetIp_put_IpType(This,ipType)	\
    ( (This)->lpVtbl -> put_IpType(This,ipType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdTargetIp_INTERFACE_DEFINED__ */


#ifndef __IRdTarget_INTERFACE_DEFINED__
#define __IRdTarget_INTERFACE_DEFINED__

/* interface IRdTarget */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdTarget;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECD3C6E6-CB62-11DF-A91E-BF90DFD72085")
    IRdTarget : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_EnvironmentName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pEnvironmentName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_EnvironmentName( 
            /* [in] */ __RPC__in BSTR environmentName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResourcePluginName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResourcePluginName( 
            /* [in] */ __RPC__in BSTR resourcePluginName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PoolName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PoolName( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Fqdn( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFqdn) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Fqdn( 
            /* [in] */ __RPC__in BSTR fqdn) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Netbios( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pNetbios) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Netbios( 
            /* [in] */ __RPC__in BSTR netbios) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ __RPC__out DWORD *pState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ DWORD state) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SyncVersion( 
            /* [retval][out] */ __RPC__out hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SyncVersion( 
            /* [in] */ hyper syncVersion) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyBag( 
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PropertyBag( 
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_IpAddresses( 
            /* [out][in] */ __RPC__inout DWORD *pNumIps,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumIps) IRdTargetIp **ppRdTargetIp[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_IpAddresses( 
            /* [in] */ DWORD numIps,
            /* [size_is][in] */ __RPC__in_ecount_full(numIps) IRdTargetIp *pRdTargetIp[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddIpAddress( 
            /* [in] */ __RPC__in_opt IRdTargetIp *pRdTargetIp) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumSessions( 
            /* [retval][out] */ __RPC__out DWORD *pNumSessions) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumSessions( 
            /* [in] */ DWORD numSessions) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_NumPendingConnections( 
            /* [retval][out] */ __RPC__out DWORD *pNumPendingConnections) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_NumPendingConnections( 
            /* [in] */ DWORD numPendingConnections) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdTargetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdTarget * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdTarget * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnvironmentName )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pEnvironmentName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnvironmentName )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR environmentName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResourcePluginName )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pResourcePluginName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResourcePluginName )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR resourcePluginName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PoolName )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPoolName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PoolName )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Fqdn )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pFqdn);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Fqdn )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR fqdn);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Netbios )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pNetbios);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Netbios )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in BSTR netbios);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__out DWORD *pState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            __RPC__in IRdTarget * This,
            /* [in] */ DWORD state);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SyncVersion )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__out hyper *pSyncVersion);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SyncVersion )( 
            __RPC__in IRdTarget * This,
            /* [in] */ hyper syncVersion);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyBag )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyBag )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_IpAddresses )( 
            __RPC__in IRdTarget * This,
            /* [out][in] */ __RPC__inout DWORD *pNumIps,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumIps) IRdTargetIp **ppRdTargetIp[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_IpAddresses )( 
            __RPC__in IRdTarget * This,
            /* [in] */ DWORD numIps,
            /* [size_is][in] */ __RPC__in_ecount_full(numIps) IRdTargetIp *pRdTargetIp[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddIpAddress )( 
            __RPC__in IRdTarget * This,
            /* [in] */ __RPC__in_opt IRdTargetIp *pRdTargetIp);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumSessions )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__out DWORD *pNumSessions);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumSessions )( 
            __RPC__in IRdTarget * This,
            /* [in] */ DWORD numSessions);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumPendingConnections )( 
            __RPC__in IRdTarget * This,
            /* [retval][out] */ __RPC__out DWORD *pNumPendingConnections);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumPendingConnections )( 
            __RPC__in IRdTarget * This,
            /* [in] */ DWORD numPendingConnections);
        
        END_INTERFACE
    } IRdTargetVtbl;

    interface IRdTarget
    {
        CONST_VTBL struct IRdTargetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdTarget_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdTarget_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdTarget_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdTarget_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IRdTarget_put_Name(This,name)	\
    ( (This)->lpVtbl -> put_Name(This,name) ) 

#define IRdTarget_get_EnvironmentName(This,pEnvironmentName)	\
    ( (This)->lpVtbl -> get_EnvironmentName(This,pEnvironmentName) ) 

#define IRdTarget_put_EnvironmentName(This,environmentName)	\
    ( (This)->lpVtbl -> put_EnvironmentName(This,environmentName) ) 

#define IRdTarget_get_ResourcePluginName(This,pResourcePluginName)	\
    ( (This)->lpVtbl -> get_ResourcePluginName(This,pResourcePluginName) ) 

#define IRdTarget_put_ResourcePluginName(This,resourcePluginName)	\
    ( (This)->lpVtbl -> put_ResourcePluginName(This,resourcePluginName) ) 

#define IRdTarget_get_PoolName(This,pPoolName)	\
    ( (This)->lpVtbl -> get_PoolName(This,pPoolName) ) 

#define IRdTarget_put_PoolName(This,poolName)	\
    ( (This)->lpVtbl -> put_PoolName(This,poolName) ) 

#define IRdTarget_get_Fqdn(This,pFqdn)	\
    ( (This)->lpVtbl -> get_Fqdn(This,pFqdn) ) 

#define IRdTarget_put_Fqdn(This,fqdn)	\
    ( (This)->lpVtbl -> put_Fqdn(This,fqdn) ) 

#define IRdTarget_get_Netbios(This,pNetbios)	\
    ( (This)->lpVtbl -> get_Netbios(This,pNetbios) ) 

#define IRdTarget_put_Netbios(This,netbios)	\
    ( (This)->lpVtbl -> put_Netbios(This,netbios) ) 

#define IRdTarget_get_State(This,pState)	\
    ( (This)->lpVtbl -> get_State(This,pState) ) 

#define IRdTarget_put_State(This,state)	\
    ( (This)->lpVtbl -> put_State(This,state) ) 

#define IRdTarget_get_SyncVersion(This,pSyncVersion)	\
    ( (This)->lpVtbl -> get_SyncVersion(This,pSyncVersion) ) 

#define IRdTarget_put_SyncVersion(This,syncVersion)	\
    ( (This)->lpVtbl -> put_SyncVersion(This,syncVersion) ) 

#define IRdTarget_get_PropertyBag(This,ppRdPropertyBag)	\
    ( (This)->lpVtbl -> get_PropertyBag(This,ppRdPropertyBag) ) 

#define IRdTarget_put_PropertyBag(This,pRdPropertyBag)	\
    ( (This)->lpVtbl -> put_PropertyBag(This,pRdPropertyBag) ) 

#define IRdTarget_get_IpAddresses(This,pNumIps,ppRdTargetIp)	\
    ( (This)->lpVtbl -> get_IpAddresses(This,pNumIps,ppRdTargetIp) ) 

#define IRdTarget_put_IpAddresses(This,numIps,pRdTargetIp)	\
    ( (This)->lpVtbl -> put_IpAddresses(This,numIps,pRdTargetIp) ) 

#define IRdTarget_AddIpAddress(This,pRdTargetIp)	\
    ( (This)->lpVtbl -> AddIpAddress(This,pRdTargetIp) ) 

#define IRdTarget_get_NumSessions(This,pNumSessions)	\
    ( (This)->lpVtbl -> get_NumSessions(This,pNumSessions) ) 

#define IRdTarget_put_NumSessions(This,numSessions)	\
    ( (This)->lpVtbl -> put_NumSessions(This,numSessions) ) 

#define IRdTarget_get_NumPendingConnections(This,pNumPendingConnections)	\
    ( (This)->lpVtbl -> get_NumPendingConnections(This,pNumPendingConnections) ) 

#define IRdTarget_put_NumPendingConnections(This,numPendingConnections)	\
    ( (This)->lpVtbl -> put_NumPendingConnections(This,numPendingConnections) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdTarget_INTERFACE_DEFINED__ */


#ifndef __IRdSession_INTERFACE_DEFINED__
#define __IRdSession_INTERFACE_DEFINED__

/* interface IRdSession */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F522F22-D176-11DF-96D1-2B4ADFD72085")
    IRdSession : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_TargetName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_TargetName( 
            /* [in] */ __RPC__in BSTR name) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserSid( 
            /* [in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SessionId( 
            /* [retval][out] */ __RPC__out DWORD *pSessionId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_SessionId( 
            /* [in] */ DWORD sessionId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_CreateTime( 
            /* [retval][out] */ __RPC__out hyper *pCreateTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_CreateTime( 
            /* [in] */ hyper createTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DisconnectTime( 
            /* [retval][out] */ __RPC__out hyper *pDisconnectTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DisconnectTime( 
            /* [in] */ hyper disconnectTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InitialProgram( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitialProgram) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InitialProgram( 
            /* [in] */ __RPC__in BSTR initialProgram) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProtocolType( 
            /* [retval][out] */ __RPC__out DWORD *pProtocolType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ProtocolType( 
            /* [in] */ DWORD protocolType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ __RPC__out DWORD *pState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ DWORD state) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserName( 
            /* [in] */ __RPC__in BSTR userName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserDomain( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserDomain) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserDomain( 
            /* [in] */ __RPC__in BSTR userDomain) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionWidth( 
            /* [retval][out] */ __RPC__out DWORD *pResolutionWidth) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionWidth( 
            /* [in] */ DWORD ResolutionWidth) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ResolutionHeight( 
            /* [retval][out] */ __RPC__out DWORD *pResolutionHeight) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ResolutionHeight( 
            /* [in] */ DWORD ResolutionHeight) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ColorDepth( 
            /* [retval][out] */ __RPC__out DWORD *pColorDepth) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ColorDepth( 
            /* [in] */ DWORD ColorDepth) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdSession * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_TargetName )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_TargetName )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in BSTR name);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserSid )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SessionId )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pSessionId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_SessionId )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD sessionId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_CreateTime )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out hyper *pCreateTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_CreateTime )( 
            __RPC__in IRdSession * This,
            /* [in] */ hyper createTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DisconnectTime )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out hyper *pDisconnectTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DisconnectTime )( 
            __RPC__in IRdSession * This,
            /* [in] */ hyper disconnectTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InitialProgram )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitialProgram);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InitialProgram )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in BSTR initialProgram);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProtocolType )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pProtocolType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ProtocolType )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD protocolType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD state);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserName )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserName )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in BSTR userName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserDomain )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserDomain);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserDomain )( 
            __RPC__in IRdSession * This,
            /* [in] */ __RPC__in BSTR userDomain);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionWidth )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pResolutionWidth);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionWidth )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD ResolutionWidth);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolutionHeight )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pResolutionHeight);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ResolutionHeight )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD ResolutionHeight);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )( 
            __RPC__in IRdSession * This,
            /* [retval][out] */ __RPC__out DWORD *pColorDepth);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )( 
            __RPC__in IRdSession * This,
            /* [in] */ DWORD ColorDepth);
        
        END_INTERFACE
    } IRdSessionVtbl;

    interface IRdSession
    {
        CONST_VTBL struct IRdSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdSession_get_TargetName(This,pName)	\
    ( (This)->lpVtbl -> get_TargetName(This,pName) ) 

#define IRdSession_put_TargetName(This,name)	\
    ( (This)->lpVtbl -> put_TargetName(This,name) ) 

#define IRdSession_get_UserSid(This,pUserSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,pUserSid) ) 

#define IRdSession_put_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> put_UserSid(This,userSid) ) 

#define IRdSession_get_SessionId(This,pSessionId)	\
    ( (This)->lpVtbl -> get_SessionId(This,pSessionId) ) 

#define IRdSession_put_SessionId(This,sessionId)	\
    ( (This)->lpVtbl -> put_SessionId(This,sessionId) ) 

#define IRdSession_get_CreateTime(This,pCreateTime)	\
    ( (This)->lpVtbl -> get_CreateTime(This,pCreateTime) ) 

#define IRdSession_put_CreateTime(This,createTime)	\
    ( (This)->lpVtbl -> put_CreateTime(This,createTime) ) 

#define IRdSession_get_DisconnectTime(This,pDisconnectTime)	\
    ( (This)->lpVtbl -> get_DisconnectTime(This,pDisconnectTime) ) 

#define IRdSession_put_DisconnectTime(This,disconnectTime)	\
    ( (This)->lpVtbl -> put_DisconnectTime(This,disconnectTime) ) 

#define IRdSession_get_InitialProgram(This,pInitialProgram)	\
    ( (This)->lpVtbl -> get_InitialProgram(This,pInitialProgram) ) 

#define IRdSession_put_InitialProgram(This,initialProgram)	\
    ( (This)->lpVtbl -> put_InitialProgram(This,initialProgram) ) 

#define IRdSession_get_ProtocolType(This,pProtocolType)	\
    ( (This)->lpVtbl -> get_ProtocolType(This,pProtocolType) ) 

#define IRdSession_put_ProtocolType(This,protocolType)	\
    ( (This)->lpVtbl -> put_ProtocolType(This,protocolType) ) 

#define IRdSession_get_State(This,pState)	\
    ( (This)->lpVtbl -> get_State(This,pState) ) 

#define IRdSession_put_State(This,state)	\
    ( (This)->lpVtbl -> put_State(This,state) ) 

#define IRdSession_get_UserName(This,pUserName)	\
    ( (This)->lpVtbl -> get_UserName(This,pUserName) ) 

#define IRdSession_put_UserName(This,userName)	\
    ( (This)->lpVtbl -> put_UserName(This,userName) ) 

#define IRdSession_get_UserDomain(This,pUserDomain)	\
    ( (This)->lpVtbl -> get_UserDomain(This,pUserDomain) ) 

#define IRdSession_put_UserDomain(This,userDomain)	\
    ( (This)->lpVtbl -> put_UserDomain(This,userDomain) ) 

#define IRdSession_get_ResolutionWidth(This,pResolutionWidth)	\
    ( (This)->lpVtbl -> get_ResolutionWidth(This,pResolutionWidth) ) 

#define IRdSession_put_ResolutionWidth(This,ResolutionWidth)	\
    ( (This)->lpVtbl -> put_ResolutionWidth(This,ResolutionWidth) ) 

#define IRdSession_get_ResolutionHeight(This,pResolutionHeight)	\
    ( (This)->lpVtbl -> get_ResolutionHeight(This,pResolutionHeight) ) 

#define IRdSession_put_ResolutionHeight(This,ResolutionHeight)	\
    ( (This)->lpVtbl -> put_ResolutionHeight(This,ResolutionHeight) ) 

#define IRdSession_get_ColorDepth(This,pColorDepth)	\
    ( (This)->lpVtbl -> get_ColorDepth(This,pColorDepth) ) 

#define IRdSession_put_ColorDepth(This,ColorDepth)	\
    ( (This)->lpVtbl -> put_ColorDepth(This,ColorDepth) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdSession_INTERFACE_DEFINED__ */


#ifndef __IRdUserConnection_INTERFACE_DEFINED__
#define __IRdUserConnection_INTERFACE_DEFINED__

/* interface IRdUserConnection */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdUserConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("37A17B3A-DAF6-11DF-AFD1-EAF0DFD72085")
    IRdUserConnection : public IUnknown
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ConnectionId( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pConnectionId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ConnectionId( 
            /* [in] */ __RPC__in BSTR connectionId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_UserSid( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_UserSid( 
            /* [in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_InitialProgram( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitialProgram) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_InitialProgram( 
            /* [in] */ __RPC__in BSTR initialProgram) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LatestTimeStamp( 
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LatestTimeStamp( 
            /* [in] */ __RPC__in SYSTEMTIME *pTime) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PolicyEndPoint( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPolicyEndPoint) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PolicyEndPoint( 
            /* [in] */ __RPC__in BSTR policyEndPoint) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PolicyRpName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPolicyRpName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PolicyRpName( 
            /* [in] */ __RPC__in BSTR policyRpName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PolicyTargetType( 
            /* [retval][out] */ __RPC__out DWORD *pPolicyTargetType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PolicyTargetType( 
            /* [in] */ DWORD policyTargetType) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ __RPC__out DWORD *pState) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_State( 
            /* [in] */ DWORD state) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_FailureStage( 
            /* [retval][out] */ __RPC__out DWORD *pFailureStage) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_FailureStage( 
            /* [in] */ DWORD failureStage) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsDisconnSessionFound( 
            /* [retval][out] */ __RPC__out BOOL *pIsDisconnSessionFound) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsDisconnSessionFound( 
            /* [in] */ BOOL isDisconnSessionFound) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFirstAssignment( 
            /* [retval][out] */ __RPC__out BOOL *pIsFirstAssignment) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_IsFirstAssignment( 
            /* [in] */ BOOL isFirstAssignment) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ErrorMsgId( 
            /* [retval][out] */ __RPC__out DWORD *pErrorMsgId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_ErrorMsgId( 
            /* [in] */ DWORD errorMsgId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Error( 
            /* [retval][out] */ __RPC__out hyper *pError) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Error( 
            /* [in] */ hyper error) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LbResultTargetName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLbResultTargetName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LbResultTargetName( 
            /* [in] */ __RPC__in BSTR lbResultTargetName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PlEnvName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPlEnvName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PlEnvName( 
            /* [in] */ __RPC__in BSTR plEnvName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirTargetName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pRedirTargetName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirTargetName( 
            /* [in] */ __RPC__in BSTR redirTargetName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RedirDisconnSessionId( 
            /* [retval][out] */ __RPC__out DWORD *pRedirDisconnSessionId) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_RedirDisconnSessionId( 
            /* [in] */ DWORD redirDisconnSessionId) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_PropertyBag( 
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_PropertyBag( 
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_BrokerName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerName) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_BrokerName( 
            /* [in] */ __RPC__in BSTR brokerName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_DurationSinceLastUpdate( 
            /* [retval][out] */ __RPC__out DWORD *pDurationSinceLastUpdate) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_DurationSinceLastUpdate( 
            /* [in] */ DWORD durationSinceLastUpdate) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdUserConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdUserConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdUserConnection * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ConnectionId )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pConnectionId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ConnectionId )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR connectionId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_UserSid )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pUserSid);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_UserSid )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_InitialProgram )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pInitialProgram);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_InitialProgram )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR initialProgram);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LatestTimeStamp )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt SYSTEMTIME **ppTime);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LatestTimeStamp )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in SYSTEMTIME *pTime);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyEndPoint )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPolicyEndPoint);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PolicyEndPoint )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR policyEndPoint);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyRpName )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPolicyRpName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PolicyRpName )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR policyRpName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PolicyTargetType )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pPolicyTargetType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PolicyTargetType )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD policyTargetType);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pState);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_State )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD state);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_FailureStage )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pFailureStage);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_FailureStage )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD failureStage);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsDisconnSessionFound )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out BOOL *pIsDisconnSessionFound);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsDisconnSessionFound )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ BOOL isDisconnSessionFound);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFirstAssignment )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out BOOL *pIsFirstAssignment);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsFirstAssignment )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ BOOL isFirstAssignment);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ErrorMsgId )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pErrorMsgId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_ErrorMsgId )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD errorMsgId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Error )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out hyper *pError);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Error )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ hyper error);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LbResultTargetName )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pLbResultTargetName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LbResultTargetName )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR lbResultTargetName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PlEnvName )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pPlEnvName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PlEnvName )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR plEnvName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirTargetName )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pRedirTargetName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirTargetName )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR redirTargetName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RedirDisconnSessionId )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pRedirDisconnSessionId);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_RedirDisconnSessionId )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD redirDisconnSessionId);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_PropertyBag )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_PropertyBag )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pRdPropertyBag);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_BrokerName )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pBrokerName);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_BrokerName )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ __RPC__in BSTR brokerName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_DurationSinceLastUpdate )( 
            __RPC__in IRdUserConnection * This,
            /* [retval][out] */ __RPC__out DWORD *pDurationSinceLastUpdate);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_DurationSinceLastUpdate )( 
            __RPC__in IRdUserConnection * This,
            /* [in] */ DWORD durationSinceLastUpdate);
        
        END_INTERFACE
    } IRdUserConnectionVtbl;

    interface IRdUserConnection
    {
        CONST_VTBL struct IRdUserConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdUserConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdUserConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdUserConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdUserConnection_get_ConnectionId(This,pConnectionId)	\
    ( (This)->lpVtbl -> get_ConnectionId(This,pConnectionId) ) 

#define IRdUserConnection_put_ConnectionId(This,connectionId)	\
    ( (This)->lpVtbl -> put_ConnectionId(This,connectionId) ) 

#define IRdUserConnection_get_UserSid(This,pUserSid)	\
    ( (This)->lpVtbl -> get_UserSid(This,pUserSid) ) 

#define IRdUserConnection_put_UserSid(This,userSid)	\
    ( (This)->lpVtbl -> put_UserSid(This,userSid) ) 

#define IRdUserConnection_get_InitialProgram(This,pInitialProgram)	\
    ( (This)->lpVtbl -> get_InitialProgram(This,pInitialProgram) ) 

#define IRdUserConnection_put_InitialProgram(This,initialProgram)	\
    ( (This)->lpVtbl -> put_InitialProgram(This,initialProgram) ) 

#define IRdUserConnection_get_LatestTimeStamp(This,ppTime)	\
    ( (This)->lpVtbl -> get_LatestTimeStamp(This,ppTime) ) 

#define IRdUserConnection_put_LatestTimeStamp(This,pTime)	\
    ( (This)->lpVtbl -> put_LatestTimeStamp(This,pTime) ) 

#define IRdUserConnection_get_PolicyEndPoint(This,pPolicyEndPoint)	\
    ( (This)->lpVtbl -> get_PolicyEndPoint(This,pPolicyEndPoint) ) 

#define IRdUserConnection_put_PolicyEndPoint(This,policyEndPoint)	\
    ( (This)->lpVtbl -> put_PolicyEndPoint(This,policyEndPoint) ) 

#define IRdUserConnection_get_PolicyRpName(This,pPolicyRpName)	\
    ( (This)->lpVtbl -> get_PolicyRpName(This,pPolicyRpName) ) 

#define IRdUserConnection_put_PolicyRpName(This,policyRpName)	\
    ( (This)->lpVtbl -> put_PolicyRpName(This,policyRpName) ) 

#define IRdUserConnection_get_PolicyTargetType(This,pPolicyTargetType)	\
    ( (This)->lpVtbl -> get_PolicyTargetType(This,pPolicyTargetType) ) 

#define IRdUserConnection_put_PolicyTargetType(This,policyTargetType)	\
    ( (This)->lpVtbl -> put_PolicyTargetType(This,policyTargetType) ) 

#define IRdUserConnection_get_State(This,pState)	\
    ( (This)->lpVtbl -> get_State(This,pState) ) 

#define IRdUserConnection_put_State(This,state)	\
    ( (This)->lpVtbl -> put_State(This,state) ) 

#define IRdUserConnection_get_FailureStage(This,pFailureStage)	\
    ( (This)->lpVtbl -> get_FailureStage(This,pFailureStage) ) 

#define IRdUserConnection_put_FailureStage(This,failureStage)	\
    ( (This)->lpVtbl -> put_FailureStage(This,failureStage) ) 

#define IRdUserConnection_get_IsDisconnSessionFound(This,pIsDisconnSessionFound)	\
    ( (This)->lpVtbl -> get_IsDisconnSessionFound(This,pIsDisconnSessionFound) ) 

#define IRdUserConnection_put_IsDisconnSessionFound(This,isDisconnSessionFound)	\
    ( (This)->lpVtbl -> put_IsDisconnSessionFound(This,isDisconnSessionFound) ) 

#define IRdUserConnection_get_IsFirstAssignment(This,pIsFirstAssignment)	\
    ( (This)->lpVtbl -> get_IsFirstAssignment(This,pIsFirstAssignment) ) 

#define IRdUserConnection_put_IsFirstAssignment(This,isFirstAssignment)	\
    ( (This)->lpVtbl -> put_IsFirstAssignment(This,isFirstAssignment) ) 

#define IRdUserConnection_get_ErrorMsgId(This,pErrorMsgId)	\
    ( (This)->lpVtbl -> get_ErrorMsgId(This,pErrorMsgId) ) 

#define IRdUserConnection_put_ErrorMsgId(This,errorMsgId)	\
    ( (This)->lpVtbl -> put_ErrorMsgId(This,errorMsgId) ) 

#define IRdUserConnection_get_Error(This,pError)	\
    ( (This)->lpVtbl -> get_Error(This,pError) ) 

#define IRdUserConnection_put_Error(This,error)	\
    ( (This)->lpVtbl -> put_Error(This,error) ) 

#define IRdUserConnection_get_LbResultTargetName(This,pLbResultTargetName)	\
    ( (This)->lpVtbl -> get_LbResultTargetName(This,pLbResultTargetName) ) 

#define IRdUserConnection_put_LbResultTargetName(This,lbResultTargetName)	\
    ( (This)->lpVtbl -> put_LbResultTargetName(This,lbResultTargetName) ) 

#define IRdUserConnection_get_PlEnvName(This,pPlEnvName)	\
    ( (This)->lpVtbl -> get_PlEnvName(This,pPlEnvName) ) 

#define IRdUserConnection_put_PlEnvName(This,plEnvName)	\
    ( (This)->lpVtbl -> put_PlEnvName(This,plEnvName) ) 

#define IRdUserConnection_get_RedirTargetName(This,pRedirTargetName)	\
    ( (This)->lpVtbl -> get_RedirTargetName(This,pRedirTargetName) ) 

#define IRdUserConnection_put_RedirTargetName(This,redirTargetName)	\
    ( (This)->lpVtbl -> put_RedirTargetName(This,redirTargetName) ) 

#define IRdUserConnection_get_RedirDisconnSessionId(This,pRedirDisconnSessionId)	\
    ( (This)->lpVtbl -> get_RedirDisconnSessionId(This,pRedirDisconnSessionId) ) 

#define IRdUserConnection_put_RedirDisconnSessionId(This,redirDisconnSessionId)	\
    ( (This)->lpVtbl -> put_RedirDisconnSessionId(This,redirDisconnSessionId) ) 

#define IRdUserConnection_get_PropertyBag(This,ppRdPropertyBag)	\
    ( (This)->lpVtbl -> get_PropertyBag(This,ppRdPropertyBag) ) 

#define IRdUserConnection_put_PropertyBag(This,pRdPropertyBag)	\
    ( (This)->lpVtbl -> put_PropertyBag(This,pRdPropertyBag) ) 

#define IRdUserConnection_get_BrokerName(This,pBrokerName)	\
    ( (This)->lpVtbl -> get_BrokerName(This,pBrokerName) ) 

#define IRdUserConnection_put_BrokerName(This,brokerName)	\
    ( (This)->lpVtbl -> put_BrokerName(This,brokerName) ) 

#define IRdUserConnection_get_DurationSinceLastUpdate(This,pDurationSinceLastUpdate)	\
    ( (This)->lpVtbl -> get_DurationSinceLastUpdate(This,pDurationSinceLastUpdate) ) 

#define IRdUserConnection_put_DurationSinceLastUpdate(This,durationSinceLastUpdate)	\
    ( (This)->lpVtbl -> put_DurationSinceLastUpdate(This,durationSinceLastUpdate) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdUserConnection_INTERFACE_DEFINED__ */


#ifndef __IRdBrokerNotification_INTERFACE_DEFINED__
#define __IRdBrokerNotification_INTERFACE_DEFINED__

/* interface IRdBrokerNotification */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdBrokerNotification;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88F0B17E-609B-11E0-85DD-D9F1DFD72085")
    IRdBrokerNotification : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_Data( 
            /* [out][in] */ __RPC__inout DWORD *pDataLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pDataLen) BYTE **pData) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE put_Data( 
            /* [in] */ DWORD dataLen,
            /* [size_is][in] */ __RPC__in_ecount_full(dataLen) BYTE *data) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ __RPC__out DWORD *pType) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_Type( 
            /* [in] */ DWORD type) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdBrokerNotificationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdBrokerNotification * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdBrokerNotification * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdBrokerNotification * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_Data )( 
            __RPC__in IRdBrokerNotification * This,
            /* [out][in] */ __RPC__inout DWORD *pDataLen,
            /* [retval][size_is][out] */ __RPC__out_ecount_full(*pDataLen) BYTE **pData);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *put_Data )( 
            __RPC__in IRdBrokerNotification * This,
            /* [in] */ DWORD dataLen,
            /* [size_is][in] */ __RPC__in_ecount_full(dataLen) BYTE *data);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            __RPC__in IRdBrokerNotification * This,
            /* [retval][out] */ __RPC__out DWORD *pType);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_Type )( 
            __RPC__in IRdBrokerNotification * This,
            /* [in] */ DWORD type);
        
        END_INTERFACE
    } IRdBrokerNotificationVtbl;

    interface IRdBrokerNotification
    {
        CONST_VTBL struct IRdBrokerNotificationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdBrokerNotification_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdBrokerNotification_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdBrokerNotification_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdBrokerNotification_get_Data(This,pDataLen,pData)	\
    ( (This)->lpVtbl -> get_Data(This,pDataLen,pData) ) 

#define IRdBrokerNotification_put_Data(This,dataLen,data)	\
    ( (This)->lpVtbl -> put_Data(This,dataLen,data) ) 

#define IRdBrokerNotification_get_Type(This,pType)	\
    ( (This)->lpVtbl -> get_Type(This,pType) ) 

#define IRdBrokerNotification_put_Type(This,type)	\
    ( (This)->lpVtbl -> put_Type(This,type) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdBrokerNotification_INTERFACE_DEFINED__ */


#ifndef __IRdMsDataHelper_INTERFACE_DEFINED__
#define __IRdMsDataHelper_INTERFACE_DEFINED__

/* interface IRdMsDataHelper */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdMsDataHelper;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F418D86C-691D-11DF-A19E-7E66DFD72085")
    IRdMsDataHelper : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePool( 
            /* [out] */ __RPC__deref_out_opt IRdPool **pRdPool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVmProvisioningInfo( 
            /* [out] */ __RPC__deref_out_opt IRdVmProvisioningInfo **pRdVmProvisioningInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateMasterVm( 
            /* [out] */ __RPC__deref_out_opt IRdMasterVm **pRdMasterVm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVm( 
            /* [out] */ __RPC__deref_out_opt IRdVm **pRdVm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePersonalDesktopAssignment( 
            /* [out] */ __RPC__deref_out_opt IRdPdAssignment **pRdPdAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateServer( 
            /* [out] */ __RPC__deref_out_opt IRdServer **pRdServer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRoleRdcb( 
            /* [out] */ __RPC__deref_out_opt IRdRoleRdcb **ppRdRoleRdcb) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRoleRdsh( 
            /* [out] */ __RPC__deref_out_opt IRdRoleRdsh **ppRdRoleRdsh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRoleRdvh( 
            /* [out] */ __RPC__deref_out_opt IRdRoleRdvh **ppRdRoleRdvh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRoleRdwa( 
            /* [out] */ __RPC__deref_out_opt IRdRoleRdwa **ppRdRoleRdwa) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreatePropertyBag( 
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRdpFileInfo( 
            /* [out] */ __RPC__deref_out_opt IRdpFileInfo **ppRdpFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateIcon( 
            /* [out] */ __RPC__deref_out_opt IRdIcon **ppRdIcon) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRemoteApp( 
            /* [out] */ __RPC__deref_out_opt IRdRemoteApp **ppRdRemoteApp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRemoteDesktop( 
            /* [out] */ __RPC__deref_out_opt IRdRemoteDesktop **ppRdRemoteDesktop) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateFileTypeAssoc( 
            /* [out] */ __RPC__deref_out_opt IRdFileTypeAssoc **ppRdFTA) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVmTask( 
            /* [out] */ __RPC__deref_out_opt IRdVmTask **ppRdVmTask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRdwaFarm( 
            /* [out] */ __RPC__deref_out_opt IRdwaFarm **ppRdwaFarm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateRdwaVdir( 
            /* [out] */ __RPC__deref_out_opt IRdwaVdir **ppRdwaVdir) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateNodeOwnership( 
            /* [out] */ __RPC__deref_out_opt IRdNodeOwnership **ppRdNodeOwnership) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateEnvironment( 
            /* [out] */ __RPC__deref_out_opt IRdEnvironment **ppRdEnvironment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTarget( 
            /* [out] */ __RPC__deref_out_opt IRdTarget **ppRdTarget) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateTargetIpAddress( 
            /* [out] */ __RPC__deref_out_opt IRdTargetIp **ppRdTargetIp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE FreeTargetIpAddresses( 
            /* [in] */ DWORD numIps,
            /* [size_is][in] */ __RPC__in_ecount_full(numIps) IRdTargetIp *pRdTargetIp[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateSession( 
            /* [out] */ __RPC__deref_out_opt IRdSession **ppRdSession) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateUserConnection( 
            /* [out] */ __RPC__deref_out_opt IRdUserConnection **ppRdUserConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateBrokerNotification( 
            /* [out] */ __RPC__deref_out_opt IRdBrokerNotification **ppRdBrokerNotification) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateVmInfo( 
            /* [out] */ __RPC__deref_out_opt IRdVmInfo **ppRdVmInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateDesktopAssignment( 
            /* [out] */ __RPC__deref_out_opt IRdDesktopAssignment **pRdPdAssignment) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdMsDataHelperVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdMsDataHelper * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdMsDataHelper * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdMsDataHelper * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePool )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdPool **pRdPool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVmProvisioningInfo )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdVmProvisioningInfo **pRdVmProvisioningInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateMasterVm )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdMasterVm **pRdMasterVm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVm )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdVm **pRdVm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePersonalDesktopAssignment )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdPdAssignment **pRdPdAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateServer )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdServer **pRdServer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRoleRdcb )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRoleRdcb **ppRdRoleRdcb);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRoleRdsh )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRoleRdsh **ppRdRoleRdsh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRoleRdvh )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRoleRdvh **ppRdRoleRdvh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRoleRdwa )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRoleRdwa **ppRdRoleRdwa);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreatePropertyBag )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppRdPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRdpFileInfo )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdpFileInfo **ppRdpFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateIcon )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdIcon **ppRdIcon);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRemoteApp )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRemoteApp **ppRdRemoteApp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRemoteDesktop )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdRemoteDesktop **ppRdRemoteDesktop);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateFileTypeAssoc )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdFileTypeAssoc **ppRdFTA);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVmTask )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdVmTask **ppRdVmTask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRdwaFarm )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdwaFarm **ppRdwaFarm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateRdwaVdir )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdwaVdir **ppRdwaVdir);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateNodeOwnership )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdNodeOwnership **ppRdNodeOwnership);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEnvironment )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdEnvironment **ppRdEnvironment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTarget )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdTarget **ppRdTarget);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateTargetIpAddress )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdTargetIp **ppRdTargetIp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *FreeTargetIpAddresses )( 
            __RPC__in IRdMsDataHelper * This,
            /* [in] */ DWORD numIps,
            /* [size_is][in] */ __RPC__in_ecount_full(numIps) IRdTargetIp *pRdTargetIp[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateSession )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdSession **ppRdSession);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateUserConnection )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdUserConnection **ppRdUserConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateBrokerNotification )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdBrokerNotification **ppRdBrokerNotification);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateVmInfo )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdVmInfo **ppRdVmInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateDesktopAssignment )( 
            __RPC__in IRdMsDataHelper * This,
            /* [out] */ __RPC__deref_out_opt IRdDesktopAssignment **pRdPdAssignment);
        
        END_INTERFACE
    } IRdMsDataHelperVtbl;

    interface IRdMsDataHelper
    {
        CONST_VTBL struct IRdMsDataHelperVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdMsDataHelper_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdMsDataHelper_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdMsDataHelper_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdMsDataHelper_CreatePool(This,pRdPool)	\
    ( (This)->lpVtbl -> CreatePool(This,pRdPool) ) 

#define IRdMsDataHelper_CreateVmProvisioningInfo(This,pRdVmProvisioningInfo)	\
    ( (This)->lpVtbl -> CreateVmProvisioningInfo(This,pRdVmProvisioningInfo) ) 

#define IRdMsDataHelper_CreateMasterVm(This,pRdMasterVm)	\
    ( (This)->lpVtbl -> CreateMasterVm(This,pRdMasterVm) ) 

#define IRdMsDataHelper_CreateVm(This,pRdVm)	\
    ( (This)->lpVtbl -> CreateVm(This,pRdVm) ) 

#define IRdMsDataHelper_CreatePersonalDesktopAssignment(This,pRdPdAssignment)	\
    ( (This)->lpVtbl -> CreatePersonalDesktopAssignment(This,pRdPdAssignment) ) 

#define IRdMsDataHelper_CreateServer(This,pRdServer)	\
    ( (This)->lpVtbl -> CreateServer(This,pRdServer) ) 

#define IRdMsDataHelper_CreateRoleRdcb(This,ppRdRoleRdcb)	\
    ( (This)->lpVtbl -> CreateRoleRdcb(This,ppRdRoleRdcb) ) 

#define IRdMsDataHelper_CreateRoleRdsh(This,ppRdRoleRdsh)	\
    ( (This)->lpVtbl -> CreateRoleRdsh(This,ppRdRoleRdsh) ) 

#define IRdMsDataHelper_CreateRoleRdvh(This,ppRdRoleRdvh)	\
    ( (This)->lpVtbl -> CreateRoleRdvh(This,ppRdRoleRdvh) ) 

#define IRdMsDataHelper_CreateRoleRdwa(This,ppRdRoleRdwa)	\
    ( (This)->lpVtbl -> CreateRoleRdwa(This,ppRdRoleRdwa) ) 

#define IRdMsDataHelper_CreatePropertyBag(This,ppRdPropertyBag)	\
    ( (This)->lpVtbl -> CreatePropertyBag(This,ppRdPropertyBag) ) 

#define IRdMsDataHelper_CreateRdpFileInfo(This,ppRdpFile)	\
    ( (This)->lpVtbl -> CreateRdpFileInfo(This,ppRdpFile) ) 

#define IRdMsDataHelper_CreateIcon(This,ppRdIcon)	\
    ( (This)->lpVtbl -> CreateIcon(This,ppRdIcon) ) 

#define IRdMsDataHelper_CreateRemoteApp(This,ppRdRemoteApp)	\
    ( (This)->lpVtbl -> CreateRemoteApp(This,ppRdRemoteApp) ) 

#define IRdMsDataHelper_CreateRemoteDesktop(This,ppRdRemoteDesktop)	\
    ( (This)->lpVtbl -> CreateRemoteDesktop(This,ppRdRemoteDesktop) ) 

#define IRdMsDataHelper_CreateFileTypeAssoc(This,ppRdFTA)	\
    ( (This)->lpVtbl -> CreateFileTypeAssoc(This,ppRdFTA) ) 

#define IRdMsDataHelper_CreateVmTask(This,ppRdVmTask)	\
    ( (This)->lpVtbl -> CreateVmTask(This,ppRdVmTask) ) 

#define IRdMsDataHelper_CreateRdwaFarm(This,ppRdwaFarm)	\
    ( (This)->lpVtbl -> CreateRdwaFarm(This,ppRdwaFarm) ) 

#define IRdMsDataHelper_CreateRdwaVdir(This,ppRdwaVdir)	\
    ( (This)->lpVtbl -> CreateRdwaVdir(This,ppRdwaVdir) ) 

#define IRdMsDataHelper_CreateNodeOwnership(This,ppRdNodeOwnership)	\
    ( (This)->lpVtbl -> CreateNodeOwnership(This,ppRdNodeOwnership) ) 

#define IRdMsDataHelper_CreateEnvironment(This,ppRdEnvironment)	\
    ( (This)->lpVtbl -> CreateEnvironment(This,ppRdEnvironment) ) 

#define IRdMsDataHelper_CreateTarget(This,ppRdTarget)	\
    ( (This)->lpVtbl -> CreateTarget(This,ppRdTarget) ) 

#define IRdMsDataHelper_CreateTargetIpAddress(This,ppRdTargetIp)	\
    ( (This)->lpVtbl -> CreateTargetIpAddress(This,ppRdTargetIp) ) 

#define IRdMsDataHelper_FreeTargetIpAddresses(This,numIps,pRdTargetIp)	\
    ( (This)->lpVtbl -> FreeTargetIpAddresses(This,numIps,pRdTargetIp) ) 

#define IRdMsDataHelper_CreateSession(This,ppRdSession)	\
    ( (This)->lpVtbl -> CreateSession(This,ppRdSession) ) 

#define IRdMsDataHelper_CreateUserConnection(This,ppRdUserConnection)	\
    ( (This)->lpVtbl -> CreateUserConnection(This,ppRdUserConnection) ) 

#define IRdMsDataHelper_CreateBrokerNotification(This,ppRdBrokerNotification)	\
    ( (This)->lpVtbl -> CreateBrokerNotification(This,ppRdBrokerNotification) ) 

#define IRdMsDataHelper_CreateVmInfo(This,ppRdVmInfo)	\
    ( (This)->lpVtbl -> CreateVmInfo(This,ppRdVmInfo) ) 

#define IRdMsDataHelper_CreateDesktopAssignment(This,pRdPdAssignment)	\
    ( (This)->lpVtbl -> CreateDesktopAssignment(This,pRdPdAssignment) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdMsDataHelper_INTERFACE_DEFINED__ */


#ifndef __IRdMsDb_INTERFACE_DEFINED__
#define __IRdMsDb_INTERFACE_DEFINED__

/* interface IRdMsDb */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IRdMsDb;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6AA29A7C-6919-11DF-A9F9-EB60DFD72085")
    IRdMsDb : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetRdmsDataHelper( 
            /* [in] */ __RPC__in_opt IRdMsDataHelper *pRdmsDataHelper) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveVmProvisioningInfo( 
            /* [in] */ __RPC__in_opt IRdVmProvisioningInfo *pRdVmProvisioningInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVmProvisioningInfo( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdVmProvisioningInfo **ppRdVmProvisioningInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveMasterVmInfo( 
            /* [in] */ __RPC__in_opt IRdMasterVm *pRdMasterVm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMasterVmInfo( 
            /* [in] */ __RPC__in BSTR masterVmGuid,
            /* [out] */ __RPC__deref_out_opt IRdMasterVm **ppRdMasterVm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SavePool( 
            /* [in] */ __RPC__in_opt IRdPool *pRdPool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPool( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdPool **ppRdPool) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumeratePools( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [out][in] */ __RPC__inout DWORD *pNumPools,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumPools) IRdPool **ppRdPool[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePool( 
            /* [in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveVm( 
            /* [in] */ __RPC__in_opt IRdVm *pRdVm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkSaveVms( 
            /* [in] */ DWORD numVms,
            /* [size_is][in] */ __RPC__in_ecount_full(numVms) IRdVm *pRdVm[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateVms( 
            /* [in] */ __RPC__in_opt IRdVm *pRdVmKey,
            /* [out][in] */ __RPC__inout DWORD *pNumVms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVms) IRdVm **ppRdVm[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteVm( 
            /* [in] */ __RPC__in BSTR vmName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResolvePdAssignment( 
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment,
            /* [out][in] */ __RPC__inout BOOL *preExistingAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SavePdAssignment( 
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePdAssignment( 
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumeratePdAssignment( 
            /* [out][in] */ __RPC__inout DWORD *pNumPdAssignments,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumPdAssignments) IRdPdAssignment **ppRdPdAssignment[  ],
            /* [optional][in] */ __RPC__in BSTR userSid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveServer( 
            /* [in] */ __RPC__in_opt IRdServer *pRdServer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServer( 
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ DWORD serverRoles,
            /* [out] */ __RPC__deref_out_opt IRdServer **ppRdServer) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateServers( 
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [in] */ DWORD serverRoles,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdServer **ppRdServer[  ],
            /* [optional][in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteServer( 
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRdshProperty( 
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkSaveRdshProperties( 
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRdshProperty( 
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRdshProperties( 
            /* [in] */ __RPC__in BSTR serverName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRdshProperty( 
            /* [optional][in] */ __RPC__in BSTR serverName,
            /* [optional][in] */ __RPC__in BSTR propertyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SavePoolProperty( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkSavePoolProperties( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPoolProperty( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumeratePoolProperties( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeletePoolProperty( 
            /* [optional][in] */ __RPC__in BSTR poolName,
            /* [optional][in] */ __RPC__in BSTR propertyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRoleRdcb( 
            /* [in] */ __RPC__in_opt IRdRoleRdcb *pRdRoleRdcb) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRoleRdcb( 
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdcb **ppRdRoleRdcb[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRoleRdcb( 
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRoleRdsh( 
            /* [in] */ __RPC__in_opt IRdRoleRdsh *pRdRoleRdsh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRoleRdsh( 
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdsh **ppRdRoleRdsh[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRoleRdsh( 
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRoleRdvh( 
            /* [in] */ __RPC__in_opt IRdRoleRdvh *pRdRoleRdvh) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRoleRdvh( 
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdvh **ppRdRoleRdvh[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRoleRdvh( 
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRoleRdwa( 
            /* [in] */ __RPC__in_opt IRdRoleRdwa *pRdRoleRdwa) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRoleRdwa( 
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdwa **ppRdRoleRdwa[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRoleRdwa( 
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRemoteApp( 
            /* [in] */ __RPC__in_opt IRdRemoteApp *pRemoteApp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRemoteApp( 
            /* [in] */ __RPC__in BSTR appAlias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdRemoteApp **ppRdRemoteApp) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRemoteApps( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumRemoteApps,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRemoteApps) IRdRemoteApp **ppRdRemoteAppArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRemoteApp( 
            /* [optional][in] */ __RPC__in BSTR appAlias,
            /* [optional][in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRemoteDesktop( 
            /* [in] */ __RPC__in_opt IRdRemoteDesktop *pRemoteDesktop) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRemoteDesktop( 
            /* [in] */ __RPC__in BSTR alias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdRemoteDesktop **ppRdRemoteDesktop) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRemoteDesktops( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumRemoteDesktops,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRemoteDesktops) IRdRemoteDesktop **ppRdRemoteDesktopArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRemoteDesktop( 
            /* [optional][in] */ __RPC__in BSTR alias,
            /* [optional][in] */ __RPC__in BSTR poolName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveFTA( 
            /* [in] */ __RPC__in_opt IRdFileTypeAssoc *pFTA) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateFTAs( 
            /* [in] */ __RPC__in BSTR appAlias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumFTAs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumFTAs) IRdFileTypeAssoc **ppRdFTAArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteFTA( 
            /* [optional][in] */ __RPC__in BSTR appAlias,
            /* [optional][in] */ __RPC__in BSTR poolName,
            /* [optional][in] */ __RPC__in BSTR extensionName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRdpFileInfo( 
            /* [in] */ __RPC__in_opt IRdpFileInfo *pRdpFileInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRdpFileInfo( 
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdpFileInfo **ppRdpFileInfo) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRdpFileInfo( 
            /* [out][in] */ __RPC__inout DWORD *pNumRdpFiles,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRdpFiles) IRdpFileInfo **ppRdpFileInfoArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveVmTask( 
            /* [in] */ __RPC__in_opt IRdVmTask *pRdVmTask,
            /* [in] */ DWORD maxSchedulesPerVM) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVmTask( 
            /* [in] */ __RPC__in BSTR taskId,
            /* [out] */ __RPC__deref_out_opt IRdVmTask **ppRdVmTask) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateVmTask( 
            /* [in] */ __RPC__in_opt IRdVm *pRdVmKey,
            /* [out][in] */ __RPC__inout DWORD *pNumVmms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVmms) IRdVmTask **ppRdVmTaskArr[  ],
            /* [optional][in] */ __RPC__in BSTR taskId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteVmTask( 
            /* [in] */ __RPC__in BSTR taskId,
            /* [in] */ __RPC__in BSTR vmName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRdwaFarm( 
            /* [in] */ __RPC__in_opt IRdwaFarm *pRdwaFarm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetRdwaFarm( 
            /* [in] */ __RPC__in BSTR farmName,
            /* [out] */ __RPC__deref_out_opt IRdwaFarm **ppRdwaFarm) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRdwaFarm( 
            /* [in] */ __RPC__in BSTR farmName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveRdwaVdir( 
            /* [in] */ __RPC__in_opt IRdwaVdir *pRdwaVdir) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateRdwaVdir( 
            /* [in] */ __RPC__in BSTR farmName,
            /* [in] */ __RPC__in BSTR relativeUrl,
            /* [out][in] */ __RPC__inout DWORD *pNumVdirs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVdirs) IRdwaVdir **ppRdwaVdir[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteRdwaVdir( 
            /* [in] */ __RPC__in BSTR farmName,
            /* [in] */ __RPC__in BSTR relativeUrl) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveDeploymentSetting( 
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ BOOL SaveEncryptedPswdInRegistry) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDeploymentSetting( 
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteDeploymentSetting( 
            /* [in] */ __RPC__in BSTR propertyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkSaveNodeOwnership( 
            /* [in] */ DWORD numRecords,
            /* [size_is][in] */ __RPC__in_ecount_full(numRecords) IRdNodeOwnership *pRdNodeOwnershipArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateNodeOwnerships( 
            /* [in] */ __RPC__in BSTR nodeName,
            /* [out][in] */ __RPC__inout DWORD *pNumRecords,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRecords) IRdNodeOwnership **ppRdNodeOwnershipArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteNodeOwnership( 
            /* [in] */ __RPC__in BSTR nodeName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveEnvironment( 
            /* [in] */ __RPC__in_opt IRdEnvironment *pRdEnvironment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEnvironment( 
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [out] */ __RPC__deref_out_opt IRdEnvironment **ppRdEnvironment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateEnvironment( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ RD_ENV_SORT_BY sortByFieldId,
            /* [in] */ __RPC__in BSTR sortyByFieldName,
            /* [out][in] */ __RPC__inout DWORD *pNumEnvs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumEnvs) IRdEnvironment **ppRdEnvArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteEnvironment( 
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveEnvironmentProperty( 
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ hyper syncVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEnvironmentProperty( 
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [out][in] */ __RPC__inout hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveTarget( 
            /* [in] */ __RPC__in_opt IRdTarget *pRdTarget) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTarget( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdTarget **ppRdTarget) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateTarget( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ RD_TARGET_SORT_BY sortByFieldId,
            /* [in] */ __RPC__in BSTR sortyByFieldName,
            /* [out][in] */ __RPC__inout DWORD *pNumTargets,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumTargets) IRdTarget **ppRdTargetArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteTarget( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveTargetProperty( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ hyper syncVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTargetProperty( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [out][in] */ __RPC__inout hyper *pSyncVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveSession( 
            /* [in] */ __RPC__in_opt IRdSession *pRdSession) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetSession( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD sessionId,
            /* [out] */ __RPC__deref_out_opt IRdSession **ppRdSession) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateSession( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR userName,
            /* [in] */ __RPC__in BSTR userDomain,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in DWORD *pSessionState,
            /* [out][in] */ __RPC__inout DWORD *pNumSessions,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumSessions) IRdSession **ppRdSessionArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteSession( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD sessionId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveUserConnection( 
            /* [in] */ __RPC__in_opt IRdUserConnection *pRdUserConnection,
            /* [in] */ BOOL bCheckPendingConnection,
            /* [in] */ DWORD pendingConnectionMaxState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserConnection( 
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR cbName,
            /* [out] */ __RPC__deref_out_opt IRdUserConnection **ppRdUserConnection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateUserConnection( 
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in BSTR policyEndpoint,
            /* [in] */ __RPC__in DWORD *pConnectionState,
            /* [in] */ __RPC__in BSTR lbTargetName,
            /* [in] */ __RPC__in BSTR cbName,
            /* [out][in] */ __RPC__inout DWORD *pNumConns,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumConns) IRdUserConnection **ppRdConnArr[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteUserConnection( 
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in BSTR policyEndpoint,
            /* [in] */ __RPC__in DWORD *pConnectionState,
            /* [in] */ __RPC__in BSTR lbTargetName,
            /* [in] */ __RPC__in BSTR cbName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveUserConnectionProperty( 
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUserConnectionProperty( 
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveBrokerNotification( 
            /* [in] */ __RPC__in_opt IRdBrokerNotification *pRdBrokerNotification) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateBrokerNotifications( 
            /* [out][in] */ __RPC__inout hyper *pLatestSyncVersion,
            /* [out][in] */ __RPC__inout DWORD *pNumNotifs,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pNumNotifs) IRdBrokerNotification ***ppRdBrokerNotifArr) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE BulkSaveFilterPluginProperties( 
            /* [in] */ __RPC__in BSTR fpName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateFilterPluginProperties( 
            /* [in] */ __RPC__in BSTR fpName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteFilterPluginProperty( 
            /* [optional][in] */ __RPC__in BSTR fpName,
            /* [optional][in] */ __RPC__in BSTR propertyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InstallRdcmsDatabase( 
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR dbFilePath,
            /* [in] */ __RPC__in BSTR connString,
            /* [in] */ __RPC__in BSTR dbLogin) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UnInstallRdcmsDatabase( 
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR connString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsRdcmsDatabaseInstalled( 
            /* [in] */ __RPC__in BSTR connString,
            /* [out] */ __RPC__out INT *pDbVersion) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsRdcmsDatabaseReachable( 
            /* [out] */ __RPC__out DWORD *dwConnError) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MigrateRdcmsData( 
            /* [in] */ __RPC__in BSTR connStringToOldDb,
            /* [in] */ __RPC__in BSTR connStringToNewDb) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsDatabaseReachable( 
            /* [in] */ __RPC__in BSTR connString) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateVmInfo( 
            /* [in] */ __RPC__in BSTR pluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR vmName,
            /* [out][in] */ __RPC__inout DWORD *pNumVms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVms) IRdVmInfo **ppRdVmInfo[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVmTargetWithLBChecks( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ BOOL bCheckTargetState,
            /* [in] */ BOOL bCheckVmLastConnectionSucceeded,
            /* [in] */ BOOL bCheckTargetPatchState,
            /* [in] */ BOOL bRandomSelect,
            /* [out] */ __RPC__out DWORD *pNumTargets,
            /* [out] */ __RPC__deref_out_opt LPTSTR *ppTargetName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVmTargetByVmId( 
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ ULONG vmId,
            /* [out] */ __RPC__out DWORD *pNumTargets,
            /* [out] */ __RPC__deref_out_opt LPTSTR *ppTargetName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AttachWidDatabase( 
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR dbFilePath,
            /* [in] */ __RPC__in BSTR dbLogin) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DetachWidDatabase( 
            /* [in] */ __RPC__in BSTR dbName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ResolveDesktopAssignmentEx( 
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment,
            /* [in] */ BOOL bAutoAssign,
            /* [out] */ __RPC__out DWORD *pVmState,
            /* [out] */ __RPC__out BOOL *pbPreExistingAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveDesktopAssignment( 
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DeleteDesktopAssignment( 
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateDesktopAssignment( 
            /* [out][in] */ __RPC__inout DWORD *pNumAssignments,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumAssignments) IRdDesktopAssignment **pAssignment[  ],
            /* [optional][in] */ __RPC__in BSTR PoolName,
            /* [optional][in] */ __RPC__in BSTR DesktopName,
            /* [optional][in] */ __RPC__in BSTR UserSid) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerCount( 
            /* [in] */ DWORD serverRoles,
            /* [out] */ __RPC__out DWORD *pCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AcquireTargetLock( 
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppContext) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ReleaseTargetLock( 
            /* [in] */ __RPC__in_opt IUnknown *pContext) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE TestAndSetServerState( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR ServerFQDN,
            /* [in] */ TARGET_STATE NewState,
            /* [in] */ TARGET_STATE TestState,
            /* [out] */ __RPC__out TARGET_STATE *pInitState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetServerState( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR ServerFQDN,
            /* [out] */ __RPC__out TARGET_STATE *pState) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetResetServerWaitingToStart( 
            /* [in] */ DWORD numberServers,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdsh **ppRdRoleRdsh[  ]) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetServerWaitingToStart( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR serverName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CollectionKeyValueCompareAndSet( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [in] */ __RPC__in BSTR NewKeyValue,
            /* [in] */ __RPC__in BSTR Comparand,
            /* [out] */ __RPC__deref_out_opt BSTR *pInitialValue,
            /* [out] */ __RPC__out BOOL *pValueMatched) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CollectionKeyValueGet( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [in] */ __RPC__deref_in_opt BSTR *pVarValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CollectionKeyValueDelete( 
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [out] */ __RPC__out DWORD *pNumDeleted) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SaveDbConnectionString( 
            /* [in] */ __RPC__in BSTR pwszSbDbPasswordTag,
            /* [in] */ BOOL isSecondaryConnectionString,
            /* [in] */ __RPC__in BSTR pwszConnectionString,
            /* [in] */ BOOL SaveEncryptedPswdInRegistry,
            /* [out] */ __RPC__deref_out_opt BSTR *pqszConnectionStringWithoutPassword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE QueryDbConnectionString( 
            /* [in] */ __RPC__in BSTR pwszDescription,
            /* [in] */ __RPC__in BSTR pwszSbDbPasswordTag,
            /* [in] */ __RPC__in BSTR pwszConnectionStringFromRegistry,
            /* [out] */ __RPC__deref_out_opt BSTR *pwszConnectionStringWithPassword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemovePassword( 
            /* [in] */ __RPC__in BSTR pwszSBDbConnString,
            /* [out] */ __RPC__deref_out_opt BSTR *pwszConnectionStringWithoutPassword) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StartSQLPerfCounter( 
            /* [in] */ DWORD instanceId,
            /* [in] */ __RPC__in BSTR instanceName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE StopSQLPerfCounter( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsDbSchemaUpgradeRequired( 
            /* [out] */ __RPC__out INT *pDbSchemaVersion,
            /* [out] */ __RPC__out INT *pDbPluginVersion,
            /* [out] */ __RPC__out BOOL *pbDbSchemaUpgradeRequired) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE UpgradeDatabaseSchema( 
            /* [out] */ __RPC__out INT *pDbVersionAfterUpgrade) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckDBReachable( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdMsDbVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRdMsDb * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRdMsDb * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetRdmsDataHelper )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdMsDataHelper *pRdmsDataHelper);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveVmProvisioningInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdVmProvisioningInfo *pRdVmProvisioningInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVmProvisioningInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdVmProvisioningInfo **ppRdVmProvisioningInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveMasterVmInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdMasterVm *pRdMasterVm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMasterVmInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR masterVmGuid,
            /* [out] */ __RPC__deref_out_opt IRdMasterVm **ppRdMasterVm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SavePool )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdPool *pRdPool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPool )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdPool **ppRdPool);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumeratePools )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [out][in] */ __RPC__inout DWORD *pNumPools,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumPools) IRdPool **ppRdPool[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePool )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveVm )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdVm *pRdVm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkSaveVms )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ DWORD numVms,
            /* [size_is][in] */ __RPC__in_ecount_full(numVms) IRdVm *pRdVm[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateVms )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdVm *pRdVmKey,
            /* [out][in] */ __RPC__inout DWORD *pNumVms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVms) IRdVm **ppRdVm[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteVm )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR vmName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResolvePdAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment,
            /* [out][in] */ __RPC__inout BOOL *preExistingAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SavePdAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePdAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdPdAssignment *pRdPdAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumeratePdAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumPdAssignments,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumPdAssignments) IRdPdAssignment **ppRdPdAssignment[  ],
            /* [optional][in] */ __RPC__in BSTR userSid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveServer )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdServer *pRdServer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServer )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ DWORD serverRoles,
            /* [out] */ __RPC__deref_out_opt IRdServer **ppRdServer);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateServers )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [in] */ DWORD serverRoles,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdServer **ppRdServer[  ],
            /* [optional][in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteServer )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRdshProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkSaveRdshProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRdshProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRdshProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRdshProperty )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR serverName,
            /* [optional][in] */ __RPC__in BSTR propertyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SavePoolProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkSavePoolProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPoolProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumeratePoolProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeletePoolProperty )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR poolName,
            /* [optional][in] */ __RPC__in BSTR propertyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRoleRdcb )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRoleRdcb *pRdRoleRdcb);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRoleRdcb )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdcb **ppRdRoleRdcb[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRoleRdcb )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRoleRdsh )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRoleRdsh *pRdRoleRdsh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRoleRdsh )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdsh **ppRdRoleRdsh[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRoleRdsh )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRoleRdvh )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRoleRdvh *pRdRoleRdvh);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRoleRdvh )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdvh **ppRdRoleRdvh[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRoleRdvh )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRoleRdwa )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRoleRdwa *pRdRoleRdwa);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRoleRdwa )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdwa **ppRdRoleRdwa[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRoleRdwa )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRemoteApp )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRemoteApp *pRemoteApp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRemoteApp )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR appAlias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdRemoteApp **ppRdRemoteApp);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRemoteApps )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumRemoteApps,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRemoteApps) IRdRemoteApp **ppRdRemoteAppArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRemoteApp )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR appAlias,
            /* [optional][in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRemoteDesktop )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdRemoteDesktop *pRemoteDesktop);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRemoteDesktop )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR alias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdRemoteDesktop **ppRdRemoteDesktop);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRemoteDesktops )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumRemoteDesktops,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRemoteDesktops) IRdRemoteDesktop **ppRdRemoteDesktopArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRemoteDesktop )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR alias,
            /* [optional][in] */ __RPC__in BSTR poolName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveFTA )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdFileTypeAssoc *pFTA);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateFTAs )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR appAlias,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out][in] */ __RPC__inout DWORD *pNumFTAs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumFTAs) IRdFileTypeAssoc **ppRdFTAArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteFTA )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR appAlias,
            /* [optional][in] */ __RPC__in BSTR poolName,
            /* [optional][in] */ __RPC__in BSTR extensionName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRdpFileInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdpFileInfo *pRdpFileInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRdpFileInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdpFileInfo **ppRdpFileInfo);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRdpFileInfo )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumRdpFiles,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRdpFiles) IRdpFileInfo **ppRdpFileInfoArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveVmTask )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdVmTask *pRdVmTask,
            /* [in] */ DWORD maxSchedulesPerVM);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVmTask )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR taskId,
            /* [out] */ __RPC__deref_out_opt IRdVmTask **ppRdVmTask);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateVmTask )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdVm *pRdVmKey,
            /* [out][in] */ __RPC__inout DWORD *pNumVmms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVmms) IRdVmTask **ppRdVmTaskArr[  ],
            /* [optional][in] */ __RPC__in BSTR taskId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteVmTask )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR taskId,
            /* [in] */ __RPC__in BSTR vmName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRdwaFarm )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdwaFarm *pRdwaFarm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetRdwaFarm )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR farmName,
            /* [out] */ __RPC__deref_out_opt IRdwaFarm **ppRdwaFarm);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRdwaFarm )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR farmName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveRdwaVdir )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdwaVdir *pRdwaVdir);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateRdwaVdir )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR farmName,
            /* [in] */ __RPC__in BSTR relativeUrl,
            /* [out][in] */ __RPC__inout DWORD *pNumVdirs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVdirs) IRdwaVdir **ppRdwaVdir[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteRdwaVdir )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR farmName,
            /* [in] */ __RPC__in BSTR relativeUrl);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveDeploymentSetting )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ BOOL SaveEncryptedPswdInRegistry);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDeploymentSetting )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteDeploymentSetting )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR propertyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkSaveNodeOwnership )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ DWORD numRecords,
            /* [size_is][in] */ __RPC__in_ecount_full(numRecords) IRdNodeOwnership *pRdNodeOwnershipArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateNodeOwnerships )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR nodeName,
            /* [out][in] */ __RPC__inout DWORD *pNumRecords,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumRecords) IRdNodeOwnership **ppRdNodeOwnershipArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteNodeOwnership )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR nodeName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveEnvironment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdEnvironment *pRdEnvironment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEnvironment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [out] */ __RPC__deref_out_opt IRdEnvironment **ppRdEnvironment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateEnvironment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ RD_ENV_SORT_BY sortByFieldId,
            /* [in] */ __RPC__in BSTR sortyByFieldName,
            /* [out][in] */ __RPC__inout DWORD *pNumEnvs,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumEnvs) IRdEnvironment **ppRdEnvArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteEnvironment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveEnvironmentProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ hyper syncVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEnvironmentProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR environmentName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [out][in] */ __RPC__inout hyper *pSyncVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveTarget )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdTarget *pRdTarget);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTarget )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [out] */ __RPC__deref_out_opt IRdTarget **ppRdTarget);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateTarget )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ RD_TARGET_SORT_BY sortByFieldId,
            /* [in] */ __RPC__in BSTR sortyByFieldName,
            /* [out][in] */ __RPC__inout DWORD *pNumTargets,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumTargets) IRdTarget **ppRdTargetArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteTarget )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ __RPC__in BSTR brokerName,
            /* [in] */ __RPC__in BSTR resourcePluginName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveTargetProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [in] */ hyper syncVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue,
            /* [out][in] */ __RPC__inout hyper *pSyncVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveSession )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdSession *pRdSession);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetSession )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD sessionId,
            /* [out] */ __RPC__deref_out_opt IRdSession **ppRdSession);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateSession )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR userName,
            /* [in] */ __RPC__in BSTR userDomain,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in DWORD *pSessionState,
            /* [out][in] */ __RPC__inout DWORD *pNumSessions,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumSessions) IRdSession **ppRdSessionArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteSession )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD sessionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveUserConnection )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdUserConnection *pRdUserConnection,
            /* [in] */ BOOL bCheckPendingConnection,
            /* [in] */ DWORD pendingConnectionMaxState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserConnection )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR cbName,
            /* [out] */ __RPC__deref_out_opt IRdUserConnection **ppRdUserConnection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateUserConnection )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in BSTR policyEndpoint,
            /* [in] */ __RPC__in DWORD *pConnectionState,
            /* [in] */ __RPC__in BSTR lbTargetName,
            /* [in] */ __RPC__in BSTR cbName,
            /* [out][in] */ __RPC__inout DWORD *pNumConns,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumConns) IRdUserConnection **ppRdConnArr[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteUserConnection )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR userSid,
            /* [in] */ __RPC__in BSTR initialProgram,
            /* [in] */ __RPC__in BSTR policyEndpoint,
            /* [in] */ __RPC__in DWORD *pConnectionState,
            /* [in] */ __RPC__in BSTR lbTargetName,
            /* [in] */ __RPC__in BSTR cbName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveUserConnectionProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUserConnectionProperty )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connectionId,
            /* [in] */ __RPC__in BSTR propertyName,
            /* [in] */ __RPC__in VARIANT *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveBrokerNotification )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdBrokerNotification *pRdBrokerNotification);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateBrokerNotifications )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout hyper *pLatestSyncVersion,
            /* [out][in] */ __RPC__inout DWORD *pNumNotifs,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pNumNotifs) IRdBrokerNotification ***ppRdBrokerNotifArr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *BulkSaveFilterPluginProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR fpName,
            /* [in] */ __RPC__in_opt IRdPropertyBag *pPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateFilterPluginProperties )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR fpName,
            /* [out] */ __RPC__deref_out_opt IRdPropertyBag **ppPropertyBag);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteFilterPluginProperty )( 
            __RPC__in IRdMsDb * This,
            /* [optional][in] */ __RPC__in BSTR fpName,
            /* [optional][in] */ __RPC__in BSTR propertyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallRdcmsDatabase )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR dbFilePath,
            /* [in] */ __RPC__in BSTR connString,
            /* [in] */ __RPC__in BSTR dbLogin);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UnInstallRdcmsDatabase )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR connString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsRdcmsDatabaseInstalled )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connString,
            /* [out] */ __RPC__out INT *pDbVersion);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsRdcmsDatabaseReachable )( 
            __RPC__in IRdMsDb * This,
            /* [out] */ __RPC__out DWORD *dwConnError);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MigrateRdcmsData )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connStringToOldDb,
            /* [in] */ __RPC__in BSTR connStringToNewDb);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsDatabaseReachable )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR connString);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateVmInfo )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR pluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ __RPC__in BSTR vmName,
            /* [out][in] */ __RPC__inout DWORD *pNumVms,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumVms) IRdVmInfo **ppRdVmInfo[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVmTargetWithLBChecks )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR poolName,
            /* [in] */ BOOL bCheckTargetState,
            /* [in] */ BOOL bCheckVmLastConnectionSucceeded,
            /* [in] */ BOOL bCheckTargetPatchState,
            /* [in] */ BOOL bRandomSelect,
            /* [out] */ __RPC__out DWORD *pNumTargets,
            /* [out] */ __RPC__deref_out_opt LPTSTR *ppTargetName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVmTargetByVmId )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR resourcePluginName,
            /* [in] */ __RPC__in BSTR envName,
            /* [in] */ ULONG vmId,
            /* [out] */ __RPC__out DWORD *pNumTargets,
            /* [out] */ __RPC__deref_out_opt LPTSTR *ppTargetName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AttachWidDatabase )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR dbName,
            /* [in] */ __RPC__in BSTR dbFilePath,
            /* [in] */ __RPC__in BSTR dbLogin);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DetachWidDatabase )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR dbName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ResolveDesktopAssignmentEx )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment,
            /* [in] */ BOOL bAutoAssign,
            /* [out] */ __RPC__out DWORD *pVmState,
            /* [out] */ __RPC__out BOOL *pbPreExistingAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveDesktopAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DeleteDesktopAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IRdDesktopAssignment *pAssignment);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateDesktopAssignment )( 
            __RPC__in IRdMsDb * This,
            /* [out][in] */ __RPC__inout DWORD *pNumAssignments,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumAssignments) IRdDesktopAssignment **pAssignment[  ],
            /* [optional][in] */ __RPC__in BSTR PoolName,
            /* [optional][in] */ __RPC__in BSTR DesktopName,
            /* [optional][in] */ __RPC__in BSTR UserSid);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerCount )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ DWORD serverRoles,
            /* [out] */ __RPC__out DWORD *pCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AcquireTargetLock )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR targetName,
            /* [in] */ DWORD dwTimeout,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ReleaseTargetLock )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in_opt IUnknown *pContext);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *TestAndSetServerState )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR ServerFQDN,
            /* [in] */ TARGET_STATE NewState,
            /* [in] */ TARGET_STATE TestState,
            /* [out] */ __RPC__out TARGET_STATE *pInitState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetServerState )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR ServerFQDN,
            /* [out] */ __RPC__out TARGET_STATE *pState);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetResetServerWaitingToStart )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ DWORD numberServers,
            /* [out][in] */ __RPC__inout DWORD *pNumServers,
            /* [size_is][out] */ __RPC__out_ecount_full(*pNumServers) IRdRoleRdsh **ppRdRoleRdsh[  ]);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetServerWaitingToStart )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR serverName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CollectionKeyValueCompareAndSet )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [in] */ __RPC__in BSTR NewKeyValue,
            /* [in] */ __RPC__in BSTR Comparand,
            /* [out] */ __RPC__deref_out_opt BSTR *pInitialValue,
            /* [out] */ __RPC__out BOOL *pValueMatched);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CollectionKeyValueGet )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [in] */ __RPC__deref_in_opt BSTR *pVarValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CollectionKeyValueDelete )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR PoolName,
            /* [in] */ __RPC__in BSTR KeyName,
            /* [out] */ __RPC__out DWORD *pNumDeleted);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SaveDbConnectionString )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR pwszSbDbPasswordTag,
            /* [in] */ BOOL isSecondaryConnectionString,
            /* [in] */ __RPC__in BSTR pwszConnectionString,
            /* [in] */ BOOL SaveEncryptedPswdInRegistry,
            /* [out] */ __RPC__deref_out_opt BSTR *pqszConnectionStringWithoutPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *QueryDbConnectionString )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR pwszDescription,
            /* [in] */ __RPC__in BSTR pwszSbDbPasswordTag,
            /* [in] */ __RPC__in BSTR pwszConnectionStringFromRegistry,
            /* [out] */ __RPC__deref_out_opt BSTR *pwszConnectionStringWithPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemovePassword )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ __RPC__in BSTR pwszSBDbConnString,
            /* [out] */ __RPC__deref_out_opt BSTR *pwszConnectionStringWithoutPassword);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StartSQLPerfCounter )( 
            __RPC__in IRdMsDb * This,
            /* [in] */ DWORD instanceId,
            /* [in] */ __RPC__in BSTR instanceName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *StopSQLPerfCounter )( 
            __RPC__in IRdMsDb * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsDbSchemaUpgradeRequired )( 
            __RPC__in IRdMsDb * This,
            /* [out] */ __RPC__out INT *pDbSchemaVersion,
            /* [out] */ __RPC__out INT *pDbPluginVersion,
            /* [out] */ __RPC__out BOOL *pbDbSchemaUpgradeRequired);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *UpgradeDatabaseSchema )( 
            __RPC__in IRdMsDb * This,
            /* [out] */ __RPC__out INT *pDbVersionAfterUpgrade);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckDBReachable )( 
            __RPC__in IRdMsDb * This);
        
        END_INTERFACE
    } IRdMsDbVtbl;

    interface IRdMsDb
    {
        CONST_VTBL struct IRdMsDbVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdMsDb_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdMsDb_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdMsDb_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdMsDb_SetRdmsDataHelper(This,pRdmsDataHelper)	\
    ( (This)->lpVtbl -> SetRdmsDataHelper(This,pRdmsDataHelper) ) 

#define IRdMsDb_SaveVmProvisioningInfo(This,pRdVmProvisioningInfo)	\
    ( (This)->lpVtbl -> SaveVmProvisioningInfo(This,pRdVmProvisioningInfo) ) 

#define IRdMsDb_GetVmProvisioningInfo(This,poolName,ppRdVmProvisioningInfo)	\
    ( (This)->lpVtbl -> GetVmProvisioningInfo(This,poolName,ppRdVmProvisioningInfo) ) 

#define IRdMsDb_SaveMasterVmInfo(This,pRdMasterVm)	\
    ( (This)->lpVtbl -> SaveMasterVmInfo(This,pRdMasterVm) ) 

#define IRdMsDb_GetMasterVmInfo(This,masterVmGuid,ppRdMasterVm)	\
    ( (This)->lpVtbl -> GetMasterVmInfo(This,masterVmGuid,ppRdMasterVm) ) 

#define IRdMsDb_SavePool(This,pRdPool)	\
    ( (This)->lpVtbl -> SavePool(This,pRdPool) ) 

#define IRdMsDb_GetPool(This,poolName,ppRdPool)	\
    ( (This)->lpVtbl -> GetPool(This,poolName,ppRdPool) ) 

#define IRdMsDb_EnumeratePools(This,resourcePluginName,pNumPools,ppRdPool)	\
    ( (This)->lpVtbl -> EnumeratePools(This,resourcePluginName,pNumPools,ppRdPool) ) 

#define IRdMsDb_DeletePool(This,poolName)	\
    ( (This)->lpVtbl -> DeletePool(This,poolName) ) 

#define IRdMsDb_SaveVm(This,pRdVm)	\
    ( (This)->lpVtbl -> SaveVm(This,pRdVm) ) 

#define IRdMsDb_BulkSaveVms(This,numVms,pRdVm)	\
    ( (This)->lpVtbl -> BulkSaveVms(This,numVms,pRdVm) ) 

#define IRdMsDb_EnumerateVms(This,pRdVmKey,pNumVms,ppRdVm)	\
    ( (This)->lpVtbl -> EnumerateVms(This,pRdVmKey,pNumVms,ppRdVm) ) 

#define IRdMsDb_DeleteVm(This,vmName)	\
    ( (This)->lpVtbl -> DeleteVm(This,vmName) ) 

#define IRdMsDb_ResolvePdAssignment(This,pRdPdAssignment,preExistingAssignment)	\
    ( (This)->lpVtbl -> ResolvePdAssignment(This,pRdPdAssignment,preExistingAssignment) ) 

#define IRdMsDb_SavePdAssignment(This,pRdPdAssignment)	\
    ( (This)->lpVtbl -> SavePdAssignment(This,pRdPdAssignment) ) 

#define IRdMsDb_DeletePdAssignment(This,pRdPdAssignment)	\
    ( (This)->lpVtbl -> DeletePdAssignment(This,pRdPdAssignment) ) 

#define IRdMsDb_EnumeratePdAssignment(This,pNumPdAssignments,ppRdPdAssignment,userSid)	\
    ( (This)->lpVtbl -> EnumeratePdAssignment(This,pNumPdAssignments,ppRdPdAssignment,userSid) ) 

#define IRdMsDb_SaveServer(This,pRdServer)	\
    ( (This)->lpVtbl -> SaveServer(This,pRdServer) ) 

#define IRdMsDb_GetServer(This,serverName,serverRoles,ppRdServer)	\
    ( (This)->lpVtbl -> GetServer(This,serverName,serverRoles,ppRdServer) ) 

#define IRdMsDb_EnumerateServers(This,pNumServers,serverRoles,ppRdServer,serverName)	\
    ( (This)->lpVtbl -> EnumerateServers(This,pNumServers,serverRoles,ppRdServer,serverName) ) 

#define IRdMsDb_DeleteServer(This,serverName)	\
    ( (This)->lpVtbl -> DeleteServer(This,serverName) ) 

#define IRdMsDb_SaveRdshProperty(This,serverName,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> SaveRdshProperty(This,serverName,propertyName,pVarValue) ) 

#define IRdMsDb_BulkSaveRdshProperties(This,serverName,pPropertyBag)	\
    ( (This)->lpVtbl -> BulkSaveRdshProperties(This,serverName,pPropertyBag) ) 

#define IRdMsDb_GetRdshProperty(This,serverName,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> GetRdshProperty(This,serverName,propertyName,pVarValue) ) 

#define IRdMsDb_EnumerateRdshProperties(This,serverName,ppPropertyBag)	\
    ( (This)->lpVtbl -> EnumerateRdshProperties(This,serverName,ppPropertyBag) ) 

#define IRdMsDb_DeleteRdshProperty(This,serverName,propertyName)	\
    ( (This)->lpVtbl -> DeleteRdshProperty(This,serverName,propertyName) ) 

#define IRdMsDb_SavePoolProperty(This,poolName,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> SavePoolProperty(This,poolName,propertyName,pVarValue) ) 

#define IRdMsDb_BulkSavePoolProperties(This,poolName,pPropertyBag)	\
    ( (This)->lpVtbl -> BulkSavePoolProperties(This,poolName,pPropertyBag) ) 

#define IRdMsDb_GetPoolProperty(This,poolName,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> GetPoolProperty(This,poolName,propertyName,pVarValue) ) 

#define IRdMsDb_EnumeratePoolProperties(This,poolName,ppPropertyBag)	\
    ( (This)->lpVtbl -> EnumeratePoolProperties(This,poolName,ppPropertyBag) ) 

#define IRdMsDb_DeletePoolProperty(This,poolName,propertyName)	\
    ( (This)->lpVtbl -> DeletePoolProperty(This,poolName,propertyName) ) 

#define IRdMsDb_SaveRoleRdcb(This,pRdRoleRdcb)	\
    ( (This)->lpVtbl -> SaveRoleRdcb(This,pRdRoleRdcb) ) 

#define IRdMsDb_EnumerateRoleRdcb(This,pNumServers,ppRdRoleRdcb)	\
    ( (This)->lpVtbl -> EnumerateRoleRdcb(This,pNumServers,ppRdRoleRdcb) ) 

#define IRdMsDb_DeleteRoleRdcb(This,serverName)	\
    ( (This)->lpVtbl -> DeleteRoleRdcb(This,serverName) ) 

#define IRdMsDb_SaveRoleRdsh(This,pRdRoleRdsh)	\
    ( (This)->lpVtbl -> SaveRoleRdsh(This,pRdRoleRdsh) ) 

#define IRdMsDb_EnumerateRoleRdsh(This,pNumServers,ppRdRoleRdsh)	\
    ( (This)->lpVtbl -> EnumerateRoleRdsh(This,pNumServers,ppRdRoleRdsh) ) 

#define IRdMsDb_DeleteRoleRdsh(This,serverName)	\
    ( (This)->lpVtbl -> DeleteRoleRdsh(This,serverName) ) 

#define IRdMsDb_SaveRoleRdvh(This,pRdRoleRdvh)	\
    ( (This)->lpVtbl -> SaveRoleRdvh(This,pRdRoleRdvh) ) 

#define IRdMsDb_EnumerateRoleRdvh(This,pNumServers,ppRdRoleRdvh)	\
    ( (This)->lpVtbl -> EnumerateRoleRdvh(This,pNumServers,ppRdRoleRdvh) ) 

#define IRdMsDb_DeleteRoleRdvh(This,serverName)	\
    ( (This)->lpVtbl -> DeleteRoleRdvh(This,serverName) ) 

#define IRdMsDb_SaveRoleRdwa(This,pRdRoleRdwa)	\
    ( (This)->lpVtbl -> SaveRoleRdwa(This,pRdRoleRdwa) ) 

#define IRdMsDb_EnumerateRoleRdwa(This,pNumServers,ppRdRoleRdwa)	\
    ( (This)->lpVtbl -> EnumerateRoleRdwa(This,pNumServers,ppRdRoleRdwa) ) 

#define IRdMsDb_DeleteRoleRdwa(This,serverName)	\
    ( (This)->lpVtbl -> DeleteRoleRdwa(This,serverName) ) 

#define IRdMsDb_SaveRemoteApp(This,pRemoteApp)	\
    ( (This)->lpVtbl -> SaveRemoteApp(This,pRemoteApp) ) 

#define IRdMsDb_GetRemoteApp(This,appAlias,poolName,ppRdRemoteApp)	\
    ( (This)->lpVtbl -> GetRemoteApp(This,appAlias,poolName,ppRdRemoteApp) ) 

#define IRdMsDb_EnumerateRemoteApps(This,poolName,pNumRemoteApps,ppRdRemoteAppArr)	\
    ( (This)->lpVtbl -> EnumerateRemoteApps(This,poolName,pNumRemoteApps,ppRdRemoteAppArr) ) 

#define IRdMsDb_DeleteRemoteApp(This,appAlias,poolName)	\
    ( (This)->lpVtbl -> DeleteRemoteApp(This,appAlias,poolName) ) 

#define IRdMsDb_SaveRemoteDesktop(This,pRemoteDesktop)	\
    ( (This)->lpVtbl -> SaveRemoteDesktop(This,pRemoteDesktop) ) 

#define IRdMsDb_GetRemoteDesktop(This,alias,poolName,ppRdRemoteDesktop)	\
    ( (This)->lpVtbl -> GetRemoteDesktop(This,alias,poolName,ppRdRemoteDesktop) ) 

#define IRdMsDb_EnumerateRemoteDesktops(This,poolName,pNumRemoteDesktops,ppRdRemoteDesktopArr)	\
    ( (This)->lpVtbl -> EnumerateRemoteDesktops(This,poolName,pNumRemoteDesktops,ppRdRemoteDesktopArr) ) 

#define IRdMsDb_DeleteRemoteDesktop(This,alias,poolName)	\
    ( (This)->lpVtbl -> DeleteRemoteDesktop(This,alias,poolName) ) 

#define IRdMsDb_SaveFTA(This,pFTA)	\
    ( (This)->lpVtbl -> SaveFTA(This,pFTA) ) 

#define IRdMsDb_EnumerateFTAs(This,appAlias,poolName,pNumFTAs,ppRdFTAArr)	\
    ( (This)->lpVtbl -> EnumerateFTAs(This,appAlias,poolName,pNumFTAs,ppRdFTAArr) ) 

#define IRdMsDb_DeleteFTA(This,appAlias,poolName,extensionName)	\
    ( (This)->lpVtbl -> DeleteFTA(This,appAlias,poolName,extensionName) ) 

#define IRdMsDb_SaveRdpFileInfo(This,pRdpFileInfo)	\
    ( (This)->lpVtbl -> SaveRdpFileInfo(This,pRdpFileInfo) ) 

#define IRdMsDb_GetRdpFileInfo(This,poolName,ppRdpFileInfo)	\
    ( (This)->lpVtbl -> GetRdpFileInfo(This,poolName,ppRdpFileInfo) ) 

#define IRdMsDb_EnumerateRdpFileInfo(This,pNumRdpFiles,ppRdpFileInfoArr)	\
    ( (This)->lpVtbl -> EnumerateRdpFileInfo(This,pNumRdpFiles,ppRdpFileInfoArr) ) 

#define IRdMsDb_SaveVmTask(This,pRdVmTask,maxSchedulesPerVM)	\
    ( (This)->lpVtbl -> SaveVmTask(This,pRdVmTask,maxSchedulesPerVM) ) 

#define IRdMsDb_GetVmTask(This,taskId,ppRdVmTask)	\
    ( (This)->lpVtbl -> GetVmTask(This,taskId,ppRdVmTask) ) 

#define IRdMsDb_EnumerateVmTask(This,pRdVmKey,pNumVmms,ppRdVmTaskArr,taskId)	\
    ( (This)->lpVtbl -> EnumerateVmTask(This,pRdVmKey,pNumVmms,ppRdVmTaskArr,taskId) ) 

#define IRdMsDb_DeleteVmTask(This,taskId,vmName)	\
    ( (This)->lpVtbl -> DeleteVmTask(This,taskId,vmName) ) 

#define IRdMsDb_SaveRdwaFarm(This,pRdwaFarm)	\
    ( (This)->lpVtbl -> SaveRdwaFarm(This,pRdwaFarm) ) 

#define IRdMsDb_GetRdwaFarm(This,farmName,ppRdwaFarm)	\
    ( (This)->lpVtbl -> GetRdwaFarm(This,farmName,ppRdwaFarm) ) 

#define IRdMsDb_DeleteRdwaFarm(This,farmName)	\
    ( (This)->lpVtbl -> DeleteRdwaFarm(This,farmName) ) 

#define IRdMsDb_SaveRdwaVdir(This,pRdwaVdir)	\
    ( (This)->lpVtbl -> SaveRdwaVdir(This,pRdwaVdir) ) 

#define IRdMsDb_EnumerateRdwaVdir(This,farmName,relativeUrl,pNumVdirs,ppRdwaVdir)	\
    ( (This)->lpVtbl -> EnumerateRdwaVdir(This,farmName,relativeUrl,pNumVdirs,ppRdwaVdir) ) 

#define IRdMsDb_DeleteRdwaVdir(This,farmName,relativeUrl)	\
    ( (This)->lpVtbl -> DeleteRdwaVdir(This,farmName,relativeUrl) ) 

#define IRdMsDb_SaveDeploymentSetting(This,propertyName,pVarValue,SaveEncryptedPswdInRegistry)	\
    ( (This)->lpVtbl -> SaveDeploymentSetting(This,propertyName,pVarValue,SaveEncryptedPswdInRegistry) ) 

#define IRdMsDb_GetDeploymentSetting(This,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> GetDeploymentSetting(This,propertyName,pVarValue) ) 

#define IRdMsDb_DeleteDeploymentSetting(This,propertyName)	\
    ( (This)->lpVtbl -> DeleteDeploymentSetting(This,propertyName) ) 

#define IRdMsDb_BulkSaveNodeOwnership(This,numRecords,pRdNodeOwnershipArr)	\
    ( (This)->lpVtbl -> BulkSaveNodeOwnership(This,numRecords,pRdNodeOwnershipArr) ) 

#define IRdMsDb_EnumerateNodeOwnerships(This,nodeName,pNumRecords,ppRdNodeOwnershipArr)	\
    ( (This)->lpVtbl -> EnumerateNodeOwnerships(This,nodeName,pNumRecords,ppRdNodeOwnershipArr) ) 

#define IRdMsDb_DeleteNodeOwnership(This,nodeName)	\
    ( (This)->lpVtbl -> DeleteNodeOwnership(This,nodeName) ) 

#define IRdMsDb_SaveEnvironment(This,pRdEnvironment)	\
    ( (This)->lpVtbl -> SaveEnvironment(This,pRdEnvironment) ) 

#define IRdMsDb_GetEnvironment(This,environmentName,brokerName,resourcePluginName,ppRdEnvironment)	\
    ( (This)->lpVtbl -> GetEnvironment(This,environmentName,brokerName,resourcePluginName,ppRdEnvironment) ) 

#define IRdMsDb_EnumerateEnvironment(This,resourcePluginName,sortByFieldId,sortyByFieldName,pNumEnvs,ppRdEnvArr)	\
    ( (This)->lpVtbl -> EnumerateEnvironment(This,resourcePluginName,sortByFieldId,sortyByFieldName,pNumEnvs,ppRdEnvArr) ) 

#define IRdMsDb_DeleteEnvironment(This,environmentName,brokerName,resourcePluginName)	\
    ( (This)->lpVtbl -> DeleteEnvironment(This,environmentName,brokerName,resourcePluginName) ) 

#define IRdMsDb_SaveEnvironmentProperty(This,environmentName,resourcePluginName,propertyName,pVarValue,syncVersion)	\
    ( (This)->lpVtbl -> SaveEnvironmentProperty(This,environmentName,resourcePluginName,propertyName,pVarValue,syncVersion) ) 

#define IRdMsDb_GetEnvironmentProperty(This,environmentName,resourcePluginName,propertyName,pVarValue,pSyncVersion)	\
    ( (This)->lpVtbl -> GetEnvironmentProperty(This,environmentName,resourcePluginName,propertyName,pVarValue,pSyncVersion) ) 

#define IRdMsDb_SaveTarget(This,pRdTarget)	\
    ( (This)->lpVtbl -> SaveTarget(This,pRdTarget) ) 

#define IRdMsDb_GetTarget(This,targetName,resourcePluginName,poolName,ppRdTarget)	\
    ( (This)->lpVtbl -> GetTarget(This,targetName,resourcePluginName,poolName,ppRdTarget) ) 

#define IRdMsDb_EnumerateTarget(This,resourcePluginName,poolName,envName,sortByFieldId,sortyByFieldName,pNumTargets,ppRdTargetArr)	\
    ( (This)->lpVtbl -> EnumerateTarget(This,resourcePluginName,poolName,envName,sortByFieldId,sortyByFieldName,pNumTargets,ppRdTargetArr) ) 

#define IRdMsDb_DeleteTarget(This,targetName,envName,brokerName,resourcePluginName)	\
    ( (This)->lpVtbl -> DeleteTarget(This,targetName,envName,brokerName,resourcePluginName) ) 

#define IRdMsDb_SaveTargetProperty(This,targetName,propertyName,pVarValue,syncVersion)	\
    ( (This)->lpVtbl -> SaveTargetProperty(This,targetName,propertyName,pVarValue,syncVersion) ) 

#define IRdMsDb_GetTargetProperty(This,targetName,propertyName,pVarValue,pSyncVersion)	\
    ( (This)->lpVtbl -> GetTargetProperty(This,targetName,propertyName,pVarValue,pSyncVersion) ) 

#define IRdMsDb_SaveSession(This,pRdSession)	\
    ( (This)->lpVtbl -> SaveSession(This,pRdSession) ) 

#define IRdMsDb_GetSession(This,targetName,sessionId,ppRdSession)	\
    ( (This)->lpVtbl -> GetSession(This,targetName,sessionId,ppRdSession) ) 

#define IRdMsDb_EnumerateSession(This,resourcePluginName,targetName,userSid,userName,userDomain,poolName,initialProgram,pSessionState,pNumSessions,ppRdSessionArr)	\
    ( (This)->lpVtbl -> EnumerateSession(This,resourcePluginName,targetName,userSid,userName,userDomain,poolName,initialProgram,pSessionState,pNumSessions,ppRdSessionArr) ) 

#define IRdMsDb_DeleteSession(This,targetName,sessionId)	\
    ( (This)->lpVtbl -> DeleteSession(This,targetName,sessionId) ) 

#define IRdMsDb_SaveUserConnection(This,pRdUserConnection,bCheckPendingConnection,pendingConnectionMaxState)	\
    ( (This)->lpVtbl -> SaveUserConnection(This,pRdUserConnection,bCheckPendingConnection,pendingConnectionMaxState) ) 

#define IRdMsDb_GetUserConnection(This,connectionId,cbName,ppRdUserConnection)	\
    ( (This)->lpVtbl -> GetUserConnection(This,connectionId,cbName,ppRdUserConnection) ) 

#define IRdMsDb_EnumerateUserConnection(This,userSid,initialProgram,policyEndpoint,pConnectionState,lbTargetName,cbName,pNumConns,ppRdConnArr)	\
    ( (This)->lpVtbl -> EnumerateUserConnection(This,userSid,initialProgram,policyEndpoint,pConnectionState,lbTargetName,cbName,pNumConns,ppRdConnArr) ) 

#define IRdMsDb_DeleteUserConnection(This,connectionId,userSid,initialProgram,policyEndpoint,pConnectionState,lbTargetName,cbName)	\
    ( (This)->lpVtbl -> DeleteUserConnection(This,connectionId,userSid,initialProgram,policyEndpoint,pConnectionState,lbTargetName,cbName) ) 

#define IRdMsDb_SaveUserConnectionProperty(This,connectionId,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> SaveUserConnectionProperty(This,connectionId,propertyName,pVarValue) ) 

#define IRdMsDb_GetUserConnectionProperty(This,connectionId,propertyName,pVarValue)	\
    ( (This)->lpVtbl -> GetUserConnectionProperty(This,connectionId,propertyName,pVarValue) ) 

#define IRdMsDb_SaveBrokerNotification(This,pRdBrokerNotification)	\
    ( (This)->lpVtbl -> SaveBrokerNotification(This,pRdBrokerNotification) ) 

#define IRdMsDb_EnumerateBrokerNotifications(This,pLatestSyncVersion,pNumNotifs,ppRdBrokerNotifArr)	\
    ( (This)->lpVtbl -> EnumerateBrokerNotifications(This,pLatestSyncVersion,pNumNotifs,ppRdBrokerNotifArr) ) 

#define IRdMsDb_BulkSaveFilterPluginProperties(This,fpName,pPropertyBag)	\
    ( (This)->lpVtbl -> BulkSaveFilterPluginProperties(This,fpName,pPropertyBag) ) 

#define IRdMsDb_EnumerateFilterPluginProperties(This,fpName,ppPropertyBag)	\
    ( (This)->lpVtbl -> EnumerateFilterPluginProperties(This,fpName,ppPropertyBag) ) 

#define IRdMsDb_DeleteFilterPluginProperty(This,fpName,propertyName)	\
    ( (This)->lpVtbl -> DeleteFilterPluginProperty(This,fpName,propertyName) ) 

#define IRdMsDb_InstallRdcmsDatabase(This,dbName,dbFilePath,connString,dbLogin)	\
    ( (This)->lpVtbl -> InstallRdcmsDatabase(This,dbName,dbFilePath,connString,dbLogin) ) 

#define IRdMsDb_UnInstallRdcmsDatabase(This,dbName,connString)	\
    ( (This)->lpVtbl -> UnInstallRdcmsDatabase(This,dbName,connString) ) 

#define IRdMsDb_IsRdcmsDatabaseInstalled(This,connString,pDbVersion)	\
    ( (This)->lpVtbl -> IsRdcmsDatabaseInstalled(This,connString,pDbVersion) ) 

#define IRdMsDb_IsRdcmsDatabaseReachable(This,dwConnError)	\
    ( (This)->lpVtbl -> IsRdcmsDatabaseReachable(This,dwConnError) ) 

#define IRdMsDb_MigrateRdcmsData(This,connStringToOldDb,connStringToNewDb)	\
    ( (This)->lpVtbl -> MigrateRdcmsData(This,connStringToOldDb,connStringToNewDb) ) 

#define IRdMsDb_IsDatabaseReachable(This,connString)	\
    ( (This)->lpVtbl -> IsDatabaseReachable(This,connString) ) 

#define IRdMsDb_EnumerateVmInfo(This,pluginName,poolName,vmName,pNumVms,ppRdVmInfo)	\
    ( (This)->lpVtbl -> EnumerateVmInfo(This,pluginName,poolName,vmName,pNumVms,ppRdVmInfo) ) 

#define IRdMsDb_GetVmTargetWithLBChecks(This,resourcePluginName,poolName,bCheckTargetState,bCheckVmLastConnectionSucceeded,bCheckTargetPatchState,bRandomSelect,pNumTargets,ppTargetName)	\
    ( (This)->lpVtbl -> GetVmTargetWithLBChecks(This,resourcePluginName,poolName,bCheckTargetState,bCheckVmLastConnectionSucceeded,bCheckTargetPatchState,bRandomSelect,pNumTargets,ppTargetName) ) 

#define IRdMsDb_GetVmTargetByVmId(This,resourcePluginName,envName,vmId,pNumTargets,ppTargetName)	\
    ( (This)->lpVtbl -> GetVmTargetByVmId(This,resourcePluginName,envName,vmId,pNumTargets,ppTargetName) ) 

#define IRdMsDb_AttachWidDatabase(This,dbName,dbFilePath,dbLogin)	\
    ( (This)->lpVtbl -> AttachWidDatabase(This,dbName,dbFilePath,dbLogin) ) 

#define IRdMsDb_DetachWidDatabase(This,dbName)	\
    ( (This)->lpVtbl -> DetachWidDatabase(This,dbName) ) 

#define IRdMsDb_ResolveDesktopAssignmentEx(This,pAssignment,bAutoAssign,pVmState,pbPreExistingAssignment)	\
    ( (This)->lpVtbl -> ResolveDesktopAssignmentEx(This,pAssignment,bAutoAssign,pVmState,pbPreExistingAssignment) ) 

#define IRdMsDb_SaveDesktopAssignment(This,pAssignment)	\
    ( (This)->lpVtbl -> SaveDesktopAssignment(This,pAssignment) ) 

#define IRdMsDb_DeleteDesktopAssignment(This,pAssignment)	\
    ( (This)->lpVtbl -> DeleteDesktopAssignment(This,pAssignment) ) 

#define IRdMsDb_EnumerateDesktopAssignment(This,pNumAssignments,pAssignment,PoolName,DesktopName,UserSid)	\
    ( (This)->lpVtbl -> EnumerateDesktopAssignment(This,pNumAssignments,pAssignment,PoolName,DesktopName,UserSid) ) 

#define IRdMsDb_GetServerCount(This,serverRoles,pCount)	\
    ( (This)->lpVtbl -> GetServerCount(This,serverRoles,pCount) ) 

#define IRdMsDb_AcquireTargetLock(This,targetName,dwTimeout,ppContext)	\
    ( (This)->lpVtbl -> AcquireTargetLock(This,targetName,dwTimeout,ppContext) ) 

#define IRdMsDb_ReleaseTargetLock(This,pContext)	\
    ( (This)->lpVtbl -> ReleaseTargetLock(This,pContext) ) 

#define IRdMsDb_TestAndSetServerState(This,PoolName,ServerFQDN,NewState,TestState,pInitState)	\
    ( (This)->lpVtbl -> TestAndSetServerState(This,PoolName,ServerFQDN,NewState,TestState,pInitState) ) 

#define IRdMsDb_GetServerState(This,PoolName,ServerFQDN,pState)	\
    ( (This)->lpVtbl -> GetServerState(This,PoolName,ServerFQDN,pState) ) 

#define IRdMsDb_GetResetServerWaitingToStart(This,numberServers,pNumServers,ppRdRoleRdsh)	\
    ( (This)->lpVtbl -> GetResetServerWaitingToStart(This,numberServers,pNumServers,ppRdRoleRdsh) ) 

#define IRdMsDb_SetServerWaitingToStart(This,PoolName,serverName)	\
    ( (This)->lpVtbl -> SetServerWaitingToStart(This,PoolName,serverName) ) 

#define IRdMsDb_CollectionKeyValueCompareAndSet(This,PoolName,KeyName,NewKeyValue,Comparand,pInitialValue,pValueMatched)	\
    ( (This)->lpVtbl -> CollectionKeyValueCompareAndSet(This,PoolName,KeyName,NewKeyValue,Comparand,pInitialValue,pValueMatched) ) 

#define IRdMsDb_CollectionKeyValueGet(This,PoolName,KeyName,pVarValue)	\
    ( (This)->lpVtbl -> CollectionKeyValueGet(This,PoolName,KeyName,pVarValue) ) 

#define IRdMsDb_CollectionKeyValueDelete(This,PoolName,KeyName,pNumDeleted)	\
    ( (This)->lpVtbl -> CollectionKeyValueDelete(This,PoolName,KeyName,pNumDeleted) ) 

#define IRdMsDb_SaveDbConnectionString(This,pwszSbDbPasswordTag,isSecondaryConnectionString,pwszConnectionString,SaveEncryptedPswdInRegistry,pqszConnectionStringWithoutPassword)	\
    ( (This)->lpVtbl -> SaveDbConnectionString(This,pwszSbDbPasswordTag,isSecondaryConnectionString,pwszConnectionString,SaveEncryptedPswdInRegistry,pqszConnectionStringWithoutPassword) ) 

#define IRdMsDb_QueryDbConnectionString(This,pwszDescription,pwszSbDbPasswordTag,pwszConnectionStringFromRegistry,pwszConnectionStringWithPassword)	\
    ( (This)->lpVtbl -> QueryDbConnectionString(This,pwszDescription,pwszSbDbPasswordTag,pwszConnectionStringFromRegistry,pwszConnectionStringWithPassword) ) 

#define IRdMsDb_RemovePassword(This,pwszSBDbConnString,pwszConnectionStringWithoutPassword)	\
    ( (This)->lpVtbl -> RemovePassword(This,pwszSBDbConnString,pwszConnectionStringWithoutPassword) ) 

#define IRdMsDb_StartSQLPerfCounter(This,instanceId,instanceName)	\
    ( (This)->lpVtbl -> StartSQLPerfCounter(This,instanceId,instanceName) ) 

#define IRdMsDb_StopSQLPerfCounter(This)	\
    ( (This)->lpVtbl -> StopSQLPerfCounter(This) ) 

#define IRdMsDb_IsDbSchemaUpgradeRequired(This,pDbSchemaVersion,pDbPluginVersion,pbDbSchemaUpgradeRequired)	\
    ( (This)->lpVtbl -> IsDbSchemaUpgradeRequired(This,pDbSchemaVersion,pDbPluginVersion,pbDbSchemaUpgradeRequired) ) 

#define IRdMsDb_UpgradeDatabaseSchema(This,pDbVersionAfterUpgrade)	\
    ( (This)->lpVtbl -> UpgradeDatabaseSchema(This,pDbVersionAfterUpgrade) ) 

#define IRdMsDb_CheckDBReachable(This)	\
    ( (This)->lpVtbl -> CheckDBReachable(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdMsDb_INTERFACE_DEFINED__ */



#ifndef __RdCentralDbLib_LIBRARY_DEFINED__
#define __RdCentralDbLib_LIBRARY_DEFINED__

/* library RdCentralDbLib */
/* [helpstring][version][uuid] */ 































EXTERN_C const IID LIBID_RdCentralDbLib;
#endif /* __RdCentralDbLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_rdcentraldb_0000_0031 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_rdcentraldb_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdcentraldb_0000_0031_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     __RPC__in unsigned long *, __RPC__in VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


