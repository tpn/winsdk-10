

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
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

#ifndef __cmgrcsp_h__
#define __cmgrcsp_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConfigNodeState_FWD_DEFINED__
#define __IConfigNodeState_FWD_DEFINED__
typedef interface IConfigNodeState IConfigNodeState;

#endif 	/* __IConfigNodeState_FWD_DEFINED__ */


#ifndef __IConfigSession2_FWD_DEFINED__
#define __IConfigSession2_FWD_DEFINED__
typedef interface IConfigSession2 IConfigSession2;

#endif 	/* __IConfigSession2_FWD_DEFINED__ */


#ifndef __IConfigServiceProvider2_FWD_DEFINED__
#define __IConfigServiceProvider2_FWD_DEFINED__
typedef interface IConfigServiceProvider2 IConfigServiceProvider2;

#endif 	/* __IConfigServiceProvider2_FWD_DEFINED__ */


#ifndef __ICSPNode_FWD_DEFINED__
#define __ICSPNode_FWD_DEFINED__
typedef interface ICSPNode ICSPNode;

#endif 	/* __ICSPNode_FWD_DEFINED__ */


#ifndef __ICSPValidate_FWD_DEFINED__
#define __ICSPValidate_FWD_DEFINED__
typedef interface ICSPValidate ICSPValidate;

#endif 	/* __ICSPValidate_FWD_DEFINED__ */


#ifndef __ICSPNodeTransactioning_FWD_DEFINED__
#define __ICSPNodeTransactioning_FWD_DEFINED__
typedef interface ICSPNodeTransactioning ICSPNodeTransactioning;

#endif 	/* __ICSPNodeTransactioning_FWD_DEFINED__ */


/* header files for imported files */
#include "cfgmgr2.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cmgrcsp_0000_0000 */
/* [local] */ 

typedef 
enum _CSP_NAMESPACE_PREFIX
    {
        CSP_NAMESPACE_DEVICE	= 0,
        CSP_NAMESPACE_USER	= 1
    } 	CSP_NAMESPACE;

typedef enum _CSP_NAMESPACE_PREFIX *PCSP_NAMESPACE;

typedef struct _CSP_NOTIFICATION_LOAD_DATA
    {
    DWORD grfCspOptions;
    CSP_NAMESPACE cspNamespace;
    LPCWSTR pszContextId;
    } 	CSP_NOTIFICATION_LOAD_DATA;

typedef struct _CSP_NOTIFICATION_LOAD_DATA *PCSP_NOTIFICATION_LOAD_DATA;

#define CSP_OPTION_NATIVETHREADSAFETY        0x01
#define CSPNODE_OPTION_NATIVESECURITY        0x01
#define CSPNODE_OPTION_INTERNALTRANSACTION   0x02
#define CSPNODE_OPTION_HANDLEALLPROPERTIES   0x04
#define CSPNODE_OPTION_SECRETDATA            0x08





typedef 
enum ConfigManager2Notification
    {
        CFGMGR_NOTIFICATION_LOAD	= 0,
        CFGMGR_NOTIFICATION_BEGINCOMMANDPROCESSING	= ( CFGMGR_NOTIFICATION_LOAD + 1 ) ,
        CFGMGR_NOTIFICATION_ENDCOMMANDPROCESSING	= ( CFGMGR_NOTIFICATION_BEGINCOMMANDPROCESSING + 1 ) ,
        CFGMGR_NOTIFICATION_UNLOAD	= ( CFGMGR_NOTIFICATION_ENDCOMMANDPROCESSING + 1 ) ,
        CFGMGR_NOTIFICATION_SETSESSIONOBJ	= ( CFGMGR_NOTIFICATION_UNLOAD + 1 ) ,
        CFGMGR_NOTIFICATION_BEGINCOMMIT	= ( CFGMGR_NOTIFICATION_SETSESSIONOBJ + 1 ) ,
        CFGMGR_NOTIFICATION_ENDCOMMIT	= ( CFGMGR_NOTIFICATION_BEGINCOMMIT + 1 ) ,
        CFGMGR_NOTIFICATION_BEGINROLLBACK	= ( CFGMGR_NOTIFICATION_ENDCOMMIT + 1 ) ,
        CFGMGR_NOTIFICATION_ENDROLLBACK	= ( CFGMGR_NOTIFICATION_BEGINROLLBACK + 1 ) ,
        CFGMGR_NOTIFICATION_BEGINTRANSACTIONING	= ( CFGMGR_NOTIFICATION_ENDROLLBACK + 1 ) ,
        CFGMGR_NOTIFICATION_ENDTRANSACTIONING	= ( CFGMGR_NOTIFICATION_BEGINTRANSACTIONING + 1 ) ,
        CFGMGR_NOTIFICATION_LAST	= CFGMGR_NOTIFICATION_ENDTRANSACTIONING
    } 	CFGMGR_NOTIFICATION;



extern RPC_IF_HANDLE __MIDL_itf_cmgrcsp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmgrcsp_0000_0000_v0_0_s_ifspec;

#ifndef __IConfigNodeState_INTERFACE_DEFINED__
#define __IConfigNodeState_INTERFACE_DEFINED__

/* interface IConfigNodeState */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigNodeState;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D18B9F92-A955-478b-9038-08B849C2B514")
    IConfigNodeState : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLocationURI( 
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTreeDepth( 
            /* [out][in] */ __RPC__inout ULONG *pulTreeDepth) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigNodeStateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigNodeState * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigNodeState * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigNodeState * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocationURI )( 
            __RPC__in IConfigNodeState * This,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IConfigNodeState * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *GetTreeDepth )( 
            __RPC__in IConfigNodeState * This,
            /* [out][in] */ __RPC__inout ULONG *pulTreeDepth);
        
        END_INTERFACE
    } IConfigNodeStateVtbl;

    interface IConfigNodeState
    {
        CONST_VTBL struct IConfigNodeStateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigNodeState_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigNodeState_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigNodeState_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigNodeState_GetLocationURI(This,ppURI)	\
    ( (This)->lpVtbl -> GetLocationURI(This,ppURI) ) 

#define IConfigNodeState_GetName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetName(This,pbstrName) ) 

#define IConfigNodeState_GetTreeDepth(This,pulTreeDepth)	\
    ( (This)->lpVtbl -> GetTreeDepth(This,pulTreeDepth) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigNodeState_INTERFACE_DEFINED__ */


#ifndef __IConfigSession2_INTERFACE_DEFINED__
#define __IConfigSession2_INTERFACE_DEFINED__

/* interface IConfigSession2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigSession2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8D31FC7E-B285-49a2-B38C-6E0EF9D99CDB")
    IConfigSession2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHost( 
            /* [out] */ __RPC__deref_out_opt IUnknown **ppHost) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSessionVariable( 
            /* [in] */ __RPC__in BSTR bstrName,
            /* [out] */ __RPC__out VARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ImpersonateTargetedUser( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ImpersonateTargetedUserRevert( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigSession2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigSession2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigSession2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigSession2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHost )( 
            __RPC__in IConfigSession2 * This,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppHost);
        
        HRESULT ( STDMETHODCALLTYPE *GetSessionVariable )( 
            __RPC__in IConfigSession2 * This,
            /* [in] */ __RPC__in BSTR bstrName,
            /* [out] */ __RPC__out VARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *ImpersonateTargetedUser )( 
            __RPC__in IConfigSession2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ImpersonateTargetedUserRevert )( 
            __RPC__in IConfigSession2 * This);
        
        END_INTERFACE
    } IConfigSession2Vtbl;

    interface IConfigSession2
    {
        CONST_VTBL struct IConfigSession2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigSession2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigSession2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigSession2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigSession2_GetHost(This,ppHost)	\
    ( (This)->lpVtbl -> GetHost(This,ppHost) ) 

#define IConfigSession2_GetSessionVariable(This,bstrName,pvarValue)	\
    ( (This)->lpVtbl -> GetSessionVariable(This,bstrName,pvarValue) ) 

#define IConfigSession2_ImpersonateTargetedUser(This)	\
    ( (This)->lpVtbl -> ImpersonateTargetedUser(This) ) 

#define IConfigSession2_ImpersonateTargetedUserRevert(This)	\
    ( (This)->lpVtbl -> ImpersonateTargetedUserRevert(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigSession2_INTERFACE_DEFINED__ */


#ifndef __IConfigServiceProvider2_INTERFACE_DEFINED__
#define __IConfigServiceProvider2_INTERFACE_DEFINED__

/* interface IConfigServiceProvider2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigServiceProvider2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F35E39DC-E18A-48c2-88CB-B3CF48CA6E83")
    IConfigServiceProvider2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNode( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [out] */ __RPC__deref_out_opt ICSPNode **ppNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConfigManagerNotification( 
            /* [in] */ CFGMGR_NOTIFICATION cmnfyState,
            /* [in] */ LPARAM lpParam) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigServiceProvider2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigServiceProvider2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigServiceProvider2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigServiceProvider2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNode )( 
            __RPC__in IConfigServiceProvider2 * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [out] */ __RPC__deref_out_opt ICSPNode **ppNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions);
        
        HRESULT ( STDMETHODCALLTYPE *ConfigManagerNotification )( 
            __RPC__in IConfigServiceProvider2 * This,
            /* [in] */ CFGMGR_NOTIFICATION cmnfyState,
            /* [in] */ LPARAM lpParam);
        
        END_INTERFACE
    } IConfigServiceProvider2Vtbl;

    interface IConfigServiceProvider2
    {
        CONST_VTBL struct IConfigServiceProvider2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigServiceProvider2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigServiceProvider2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigServiceProvider2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigServiceProvider2_GetNode(This,pURI,ppNode,pgrfNodeOptions)	\
    ( (This)->lpVtbl -> GetNode(This,pURI,ppNode,pgrfNodeOptions) ) 

#define IConfigServiceProvider2_ConfigManagerNotification(This,cmnfyState,lpParam)	\
    ( (This)->lpVtbl -> ConfigManagerNotification(This,cmnfyState,lpParam) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigServiceProvider2_INTERFACE_DEFINED__ */


#ifndef __ICSPNode_INTERFACE_DEFINED__
#define __ICSPNode_INTERFACE_DEFINED__

/* interface ICSPNode */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICSPNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8A13633C-797D-46e9-B602-D982B8EC9847")
    ICSPNode : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetChildNodeNames( 
            /* [out] */ __RPC__out ULONG *pulCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulCount) BSTR **pbstrNodeNames) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pChildName,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out][in] */ __RPC__deref_inout_opt ICSPNode **ppNewNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [out][in] */ __RPC__deref_inout_opt ICSPNode **ppNewNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteChild( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChildToDelete) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clear( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ VARIANT varUserData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [out][in] */ __RPC__inout VARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPropertyIdentifiers( 
            /* [out] */ __RPC__out ULONG *pulCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulCount) GUID **pguidProperties) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSPNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICSPNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICSPNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildNodeNames )( 
            __RPC__in ICSPNode * This,
            /* [out] */ __RPC__out ULONG *pulCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulCount) BSTR **pbstrNodeNames);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pChildName,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out][in] */ __RPC__deref_inout_opt ICSPNode **ppNewNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [out][in] */ __RPC__deref_inout_opt ICSPNode **ppNewNode,
            /* [out][in] */ __RPC__inout DWORD *pgrfNodeOptions);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteChild )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChildToDelete);
        
        HRESULT ( STDMETHODCALLTYPE *Clear )( 
            __RPC__in ICSPNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            __RPC__in ICSPNode * This,
            /* [in] */ VARIANT varUserData);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in ICSPNode * This,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in ICSPNode * This,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteProperty )( 
            __RPC__in ICSPNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty);
        
        HRESULT ( STDMETHODCALLTYPE *GetPropertyIdentifiers )( 
            __RPC__in ICSPNode * This,
            /* [out] */ __RPC__out ULONG *pulCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulCount) GUID **pguidProperties);
        
        END_INTERFACE
    } ICSPNodeVtbl;

    interface ICSPNode
    {
        CONST_VTBL struct ICSPNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSPNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSPNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSPNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSPNode_GetChildNodeNames(This,pulCount,pbstrNodeNames)	\
    ( (This)->lpVtbl -> GetChildNodeNames(This,pulCount,pbstrNodeNames) ) 

#define ICSPNode_Add(This,pChildName,DataType,varValue,ppNewNode,pgrfNodeOptions)	\
    ( (This)->lpVtbl -> Add(This,pChildName,DataType,varValue,ppNewNode,pgrfNodeOptions) ) 

#define ICSPNode_Copy(This,puriDestination,ppNewNode,pgrfNodeOptions)	\
    ( (This)->lpVtbl -> Copy(This,puriDestination,ppNewNode,pgrfNodeOptions) ) 

#define ICSPNode_DeleteChild(This,puriChildToDelete)	\
    ( (This)->lpVtbl -> DeleteChild(This,puriChildToDelete) ) 

#define ICSPNode_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define ICSPNode_Execute(This,varUserData)	\
    ( (This)->lpVtbl -> Execute(This,varUserData) ) 

#define ICSPNode_Move(This,puriDestination)	\
    ( (This)->lpVtbl -> Move(This,puriDestination) ) 

#define ICSPNode_GetValue(This,pvarValue)	\
    ( (This)->lpVtbl -> GetValue(This,pvarValue) ) 

#define ICSPNode_SetValue(This,varValue)	\
    ( (This)->lpVtbl -> SetValue(This,varValue) ) 

#define ICSPNode_GetProperty(This,guidProperty,pvarValue)	\
    ( (This)->lpVtbl -> GetProperty(This,guidProperty,pvarValue) ) 

#define ICSPNode_SetProperty(This,guidProperty,varValue)	\
    ( (This)->lpVtbl -> SetProperty(This,guidProperty,varValue) ) 

#define ICSPNode_DeleteProperty(This,guidProperty)	\
    ( (This)->lpVtbl -> DeleteProperty(This,guidProperty) ) 

#define ICSPNode_GetPropertyIdentifiers(This,pulCount,pguidProperties)	\
    ( (This)->lpVtbl -> GetPropertyIdentifiers(This,pulCount,pguidProperties) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSPNode_INTERFACE_DEFINED__ */


#ifndef __ICSPValidate_INTERFACE_DEFINED__
#define __ICSPValidate_INTERFACE_DEFINED__

/* interface ICSPValidate */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICSPValidate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B3A813D0-2E93-48df-AA22-E46A19F91DBC")
    ICSPValidate : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ValidateAdd( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateCopy( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateDeleteChild( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateClear( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateExecute( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ VARIANT varUserData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateMove( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateSetValue( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateSetProperty( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ValidateDeleteProperty( 
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in REFGUID guidProperty) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSPValidateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICSPValidate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICSPValidate * This);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateAdd )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateCopy )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateDeleteChild )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateClear )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateExecute )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ VARIANT varUserData);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateMove )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateSetValue )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateSetProperty )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *ValidateDeleteProperty )( 
            __RPC__in ICSPValidate * This,
            /* [in] */ __RPC__in_opt IConfigNodeState *pNodeState,
            /* [in] */ __RPC__in REFGUID guidProperty);
        
        END_INTERFACE
    } ICSPValidateVtbl;

    interface ICSPValidate
    {
        CONST_VTBL struct ICSPValidateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSPValidate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSPValidate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSPValidate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSPValidate_ValidateAdd(This,pNodeState,puriChild,DataType,varValue)	\
    ( (This)->lpVtbl -> ValidateAdd(This,pNodeState,puriChild,DataType,varValue) ) 

#define ICSPValidate_ValidateCopy(This,pNodeState,puriDestination)	\
    ( (This)->lpVtbl -> ValidateCopy(This,pNodeState,puriDestination) ) 

#define ICSPValidate_ValidateDeleteChild(This,pNodeState,puriChild)	\
    ( (This)->lpVtbl -> ValidateDeleteChild(This,pNodeState,puriChild) ) 

#define ICSPValidate_ValidateClear(This,pNodeState)	\
    ( (This)->lpVtbl -> ValidateClear(This,pNodeState) ) 

#define ICSPValidate_ValidateExecute(This,pNodeState,varUserData)	\
    ( (This)->lpVtbl -> ValidateExecute(This,pNodeState,varUserData) ) 

#define ICSPValidate_ValidateMove(This,pNodeState,puriDestination)	\
    ( (This)->lpVtbl -> ValidateMove(This,pNodeState,puriDestination) ) 

#define ICSPValidate_ValidateSetValue(This,pNodeState,varValue)	\
    ( (This)->lpVtbl -> ValidateSetValue(This,pNodeState,varValue) ) 

#define ICSPValidate_ValidateSetProperty(This,pNodeState,guidProperty,varValue)	\
    ( (This)->lpVtbl -> ValidateSetProperty(This,pNodeState,guidProperty,varValue) ) 

#define ICSPValidate_ValidateDeleteProperty(This,pNodeState,guidProperty)	\
    ( (This)->lpVtbl -> ValidateDeleteProperty(This,pNodeState,guidProperty) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSPValidate_INTERFACE_DEFINED__ */


#ifndef __ICSPNodeTransactioning_INTERFACE_DEFINED__
#define __ICSPNodeTransactioning_INTERFACE_DEFINED__

/* interface ICSPNodeTransactioning */
/* [object][uuid] */ 


EXTERN_C const IID IID_ICSPNodeTransactioning;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("55261A46-0F96-4f7f-95A5-A73A978B047B")
    ICSPNodeTransactioning : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackAddState( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackCopyState( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackDeleteChildState( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackClearState( 
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackExecuteState( 
            /* [in] */ VARIANT varUserData,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackMoveState( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackSetValueState( 
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackSetPropertyState( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PersistRollbackDeletePropertyState( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackAdd( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackCopy( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackDeleteChild( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackClear( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackExecute( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackMove( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackSetValue( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackSetProperty( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RollbackDeleteProperty( 
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Commit( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICSPNodeTransactioningVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICSPNodeTransactioning * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICSPNodeTransactioning * This);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackAddState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackCopyState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackDeleteChildState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackClearState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackExecuteState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ VARIANT varUserData,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackMoveState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackSetValueState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackSetPropertyState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *PersistRollbackDeletePropertyState )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ __RPC__in_opt ISequentialStream *pRollbackStream,
            /* [in] */ __RPC__in_opt ISequentialStream *pUninstallStream);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackAdd )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackCopy )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackDeleteChild )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackClear )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackExecute )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackMove )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackSetValue )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackSetProperty )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *RollbackDeleteProperty )( 
            __RPC__in ICSPNodeTransactioning * This,
            /* [in] */ __RPC__in_opt ISequentialStream *pUndoStream,
            /* [in] */ BOOL fRecoveryRollback);
        
        HRESULT ( STDMETHODCALLTYPE *Commit )( 
            __RPC__in ICSPNodeTransactioning * This);
        
        END_INTERFACE
    } ICSPNodeTransactioningVtbl;

    interface ICSPNodeTransactioning
    {
        CONST_VTBL struct ICSPNodeTransactioningVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICSPNodeTransactioning_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICSPNodeTransactioning_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICSPNodeTransactioning_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICSPNodeTransactioning_PersistRollbackAddState(This,puriChild,DataType,varValue,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackAddState(This,puriChild,DataType,varValue,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackCopyState(This,puriDestination,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackCopyState(This,puriDestination,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackDeleteChildState(This,puriChild,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackDeleteChildState(This,puriChild,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackClearState(This,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackClearState(This,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackExecuteState(This,varUserData,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackExecuteState(This,varUserData,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackMoveState(This,puriDestination,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackMoveState(This,puriDestination,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackSetValueState(This,varValue,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackSetValueState(This,varValue,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackSetPropertyState(This,guidProperty,varValue,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackSetPropertyState(This,guidProperty,varValue,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_PersistRollbackDeletePropertyState(This,guidProperty,pRollbackStream,pUninstallStream)	\
    ( (This)->lpVtbl -> PersistRollbackDeletePropertyState(This,guidProperty,pRollbackStream,pUninstallStream) ) 

#define ICSPNodeTransactioning_RollbackAdd(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackAdd(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackCopy(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackCopy(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackDeleteChild(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackDeleteChild(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackClear(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackClear(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackExecute(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackExecute(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackMove(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackMove(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackSetValue(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackSetValue(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackSetProperty(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackSetProperty(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_RollbackDeleteProperty(This,pUndoStream,fRecoveryRollback)	\
    ( (This)->lpVtbl -> RollbackDeleteProperty(This,pUndoStream,fRecoveryRollback) ) 

#define ICSPNodeTransactioning_Commit(This)	\
    ( (This)->lpVtbl -> Commit(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICSPNodeTransactioning_INTERFACE_DEFINED__ */


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


