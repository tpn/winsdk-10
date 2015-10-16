

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

#ifndef __cfgmgr2_h__
#define __cfgmgr2_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IConfigManager2_FWD_DEFINED__
#define __IConfigManager2_FWD_DEFINED__
typedef interface IConfigManager2 IConfigManager2;

#endif 	/* __IConfigManager2_FWD_DEFINED__ */


#ifndef __IConfigNode_FWD_DEFINED__
#define __IConfigNode_FWD_DEFINED__
typedef interface IConfigNode IConfigNode;

#endif 	/* __IConfigNode_FWD_DEFINED__ */


#ifndef __IEnumConfigNodeProperties_FWD_DEFINED__
#define __IEnumConfigNodeProperties_FWD_DEFINED__
typedef interface IEnumConfigNodeProperties IEnumConfigNodeProperties;

#endif 	/* __IEnumConfigNodeProperties_FWD_DEFINED__ */


#ifndef __IEnumConfigNodes_FWD_DEFINED__
#define __IEnumConfigNodes_FWD_DEFINED__
typedef interface IEnumConfigNodes IEnumConfigNodes;

#endif 	/* __IEnumConfigNodes_FWD_DEFINED__ */


#ifndef __IEnumCommandStates_FWD_DEFINED__
#define __IEnumCommandStates_FWD_DEFINED__
typedef interface IEnumCommandStates IEnumCommandStates;

#endif 	/* __IEnumCommandStates_FWD_DEFINED__ */


#ifndef __ConfigManager2_FWD_DEFINED__
#define __ConfigManager2_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConfigManager2 ConfigManager2;
#else
typedef struct ConfigManager2 ConfigManager2;
#endif /* __cplusplus */

#endif 	/* __ConfigManager2_FWD_DEFINED__ */


#ifndef __ConfigManager2URI_FWD_DEFINED__
#define __ConfigManager2URI_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConfigManager2URI ConfigManager2URI;
#else
typedef struct ConfigManager2URI ConfigManager2URI;
#endif /* __cplusplus */

#endif 	/* __ConfigManager2URI_FWD_DEFINED__ */


#ifndef __ConfigManager2MutableURI_FWD_DEFINED__
#define __ConfigManager2MutableURI_FWD_DEFINED__

#ifdef __cplusplus
typedef class ConfigManager2MutableURI ConfigManager2MutableURI;
#else
typedef struct ConfigManager2MutableURI ConfigManager2MutableURI;
#endif /* __cplusplus */

#endif 	/* __ConfigManager2MutableURI_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "oaidl.h"
#include "cfgdata.h"
#include "cmgruri.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cfgmgr2_0000_0000 */
/* [local] */ 

#include "CfgMgr2Prop.h"
#include "CfgMgr2Err.h"






extern RPC_IF_HANDLE __MIDL_itf_cfgmgr2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cfgmgr2_0000_0000_v0_0_s_ifspec;

#ifndef __IConfigManager2_INTERFACE_DEFINED__
#define __IConfigManager2_INTERFACE_DEFINED__

/* interface IConfigManager2 */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("56A4BDD5-835A-4dd5-95B5-44805CA37DB0")
    IConfigManager2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Execute( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Cancel( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Load( 
            /* [in] */ __RPC__in BSTR bstrFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Save( 
            /* [in] */ __RPC__in BSTR bstrFileName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginTransaction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CommitTransaction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelCurrentTransaction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNode( 
            /* [in] */ __RPC__in BSTR bstrLocURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNodeFromURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHost( 
            /* [in] */ __RPC__in_opt IUnknown *pHost) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetSessionVariable( 
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ VARIANT varValue) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Cancel )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Load )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in BSTR bstrFileName);
        
        HRESULT ( STDMETHODCALLTYPE *Save )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in BSTR bstrFileName);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTransaction )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CommitTransaction )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CancelCurrentTransaction )( 
            __RPC__in IConfigManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNode )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in BSTR bstrLocURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetNodeFromURI )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *pURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNode);
        
        HRESULT ( STDMETHODCALLTYPE *SetHost )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in_opt IUnknown *pHost);
        
        HRESULT ( STDMETHODCALLTYPE *SetSessionVariable )( 
            __RPC__in IConfigManager2 * This,
            /* [in] */ __RPC__in BSTR bstrName,
            /* [in] */ VARIANT varValue);
        
        END_INTERFACE
    } IConfigManager2Vtbl;

    interface IConfigManager2
    {
        CONST_VTBL struct IConfigManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigManager2_Execute(This)	\
    ( (This)->lpVtbl -> Execute(This) ) 

#define IConfigManager2_Cancel(This)	\
    ( (This)->lpVtbl -> Cancel(This) ) 

#define IConfigManager2_Load(This,bstrFileName)	\
    ( (This)->lpVtbl -> Load(This,bstrFileName) ) 

#define IConfigManager2_Save(This,bstrFileName)	\
    ( (This)->lpVtbl -> Save(This,bstrFileName) ) 

#define IConfigManager2_BeginTransaction(This)	\
    ( (This)->lpVtbl -> BeginTransaction(This) ) 

#define IConfigManager2_CommitTransaction(This)	\
    ( (This)->lpVtbl -> CommitTransaction(This) ) 

#define IConfigManager2_CancelCurrentTransaction(This)	\
    ( (This)->lpVtbl -> CancelCurrentTransaction(This) ) 

#define IConfigManager2_GetNode(This,bstrLocURI,ppNode)	\
    ( (This)->lpVtbl -> GetNode(This,bstrLocURI,ppNode) ) 

#define IConfigManager2_GetNodeFromURI(This,pURI,ppNode)	\
    ( (This)->lpVtbl -> GetNodeFromURI(This,pURI,ppNode) ) 

#define IConfigManager2_SetHost(This,pHost)	\
    ( (This)->lpVtbl -> SetHost(This,pHost) ) 

#define IConfigManager2_SetSessionVariable(This,bstrName,varValue)	\
    ( (This)->lpVtbl -> SetSessionVariable(This,bstrName,varValue) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigManager2_INTERFACE_DEFINED__ */


#ifndef __IConfigNode_INTERFACE_DEFINED__
#define __IConfigNode_INTERFACE_DEFINED__

/* interface IConfigNode */
/* [object][uuid] */ 


EXTERN_C const IID IID_IConfigNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D2A685BF-868F-473b-8D37-6DA07DB041BE")
    IConfigNode : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ __RPC__in BSTR bstrChildName,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AddURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Copy( 
            /* [in] */ __RPC__in BSTR bstrDestinationLocURI,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CopyURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Move( 
            /* [in] */ __RPC__in BSTR bstrDestinationLocURI,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Delete( 
            /* [in] */ __RPC__in BSTR bstrChildName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Execute( 
            /* [in] */ VARIANT varUserData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ VARIANT varValue,
            /* [in] */ CFG_DATATYPE DataType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [out][in] */ __RPC__inout VARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocationURI( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrLocURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetURI( 
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DidCommandsFail( 
            /* [out] */ __RPC__out BOOL *pfCmdsFailed) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetActiveCommandCount( 
            /* [out] */ __RPC__out ULONG *pcActiveCommands) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumCommandStates( 
            /* [out] */ __RPC__deref_out_opt IEnumCommandStates **ppEnumCommands) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteProperty( 
            /* [in] */ __RPC__in REFGUID guidProperty) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumProperties( 
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodeProperties **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumChildren( 
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodes **ppEnum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNodeParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNode( 
            /* [in] */ __RPC__in BSTR bstrChildLocURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppChildNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNodeFromURI( 
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppChildNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Exists( 
            /* [out] */ __RPC__out BOOL *pfNodeExists) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IConfigNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IConfigNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IConfigNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *Add )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in BSTR bstrChildName,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *AddURI )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [in] */ CFG_DATATYPE DataType,
            /* [in] */ VARIANT varValue,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *Copy )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in BSTR bstrDestinationLocURI,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *CopyURI )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *Move )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in BSTR bstrDestinationLocURI,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *MoveURI )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriDestination,
            /* [in] */ BOOL fOverwrite,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNewNode);
        
        HRESULT ( STDMETHODCALLTYPE *Delete )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in BSTR bstrChildName);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteURI )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild);
        
        HRESULT ( STDMETHODCALLTYPE *Execute )( 
            __RPC__in IConfigNode * This,
            /* [in] */ VARIANT varUserData);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in IConfigNode * This,
            /* [in] */ VARIANT varValue,
            /* [in] */ CFG_DATATYPE DataType);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in IConfigNode * This,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocationURI )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrLocURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetURI )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt IConfigManager2URI **ppURI);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt BSTR *pbstrName);
        
        HRESULT ( STDMETHODCALLTYPE *DidCommandsFail )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__out BOOL *pfCmdsFailed);
        
        HRESULT ( STDMETHODCALLTYPE *GetActiveCommandCount )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__out ULONG *pcActiveCommands);
        
        HRESULT ( STDMETHODCALLTYPE *EnumCommandStates )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt IEnumCommandStates **ppEnumCommands);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [out][in] */ __RPC__inout VARIANT *pvarValue);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty,
            /* [in] */ VARIANT varValue);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteProperty )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in REFGUID guidProperty);
        
        HRESULT ( STDMETHODCALLTYPE *EnumProperties )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodeProperties **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *EnumChildren )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodes **ppEnum);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppNodeParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetNode )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in BSTR bstrChildLocURI,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppChildNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetNodeFromURI )( 
            __RPC__in IConfigNode * This,
            /* [in] */ __RPC__in_opt IConfigManager2URI *puriChild,
            /* [out] */ __RPC__deref_out_opt IConfigNode **ppChildNode);
        
        HRESULT ( STDMETHODCALLTYPE *Exists )( 
            __RPC__in IConfigNode * This,
            /* [out] */ __RPC__out BOOL *pfNodeExists);
        
        END_INTERFACE
    } IConfigNodeVtbl;

    interface IConfigNode
    {
        CONST_VTBL struct IConfigNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IConfigNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IConfigNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IConfigNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IConfigNode_Add(This,bstrChildName,DataType,varValue,ppNewNode)	\
    ( (This)->lpVtbl -> Add(This,bstrChildName,DataType,varValue,ppNewNode) ) 

#define IConfigNode_AddURI(This,puriChild,DataType,varValue,ppNewNode)	\
    ( (This)->lpVtbl -> AddURI(This,puriChild,DataType,varValue,ppNewNode) ) 

#define IConfigNode_Copy(This,bstrDestinationLocURI,fOverwrite,ppNewNode)	\
    ( (This)->lpVtbl -> Copy(This,bstrDestinationLocURI,fOverwrite,ppNewNode) ) 

#define IConfigNode_CopyURI(This,puriDestination,fOverwrite,ppNewNode)	\
    ( (This)->lpVtbl -> CopyURI(This,puriDestination,fOverwrite,ppNewNode) ) 

#define IConfigNode_Move(This,bstrDestinationLocURI,fOverwrite,ppNewNode)	\
    ( (This)->lpVtbl -> Move(This,bstrDestinationLocURI,fOverwrite,ppNewNode) ) 

#define IConfigNode_MoveURI(This,puriDestination,fOverwrite,ppNewNode)	\
    ( (This)->lpVtbl -> MoveURI(This,puriDestination,fOverwrite,ppNewNode) ) 

#define IConfigNode_Delete(This,bstrChildName)	\
    ( (This)->lpVtbl -> Delete(This,bstrChildName) ) 

#define IConfigNode_DeleteURI(This,puriChild)	\
    ( (This)->lpVtbl -> DeleteURI(This,puriChild) ) 

#define IConfigNode_Execute(This,varUserData)	\
    ( (This)->lpVtbl -> Execute(This,varUserData) ) 

#define IConfigNode_SetValue(This,varValue,DataType)	\
    ( (This)->lpVtbl -> SetValue(This,varValue,DataType) ) 

#define IConfigNode_GetValue(This,pvarValue)	\
    ( (This)->lpVtbl -> GetValue(This,pvarValue) ) 

#define IConfigNode_GetLocationURI(This,pbstrLocURI)	\
    ( (This)->lpVtbl -> GetLocationURI(This,pbstrLocURI) ) 

#define IConfigNode_GetURI(This,ppURI)	\
    ( (This)->lpVtbl -> GetURI(This,ppURI) ) 

#define IConfigNode_GetName(This,pbstrName)	\
    ( (This)->lpVtbl -> GetName(This,pbstrName) ) 

#define IConfigNode_DidCommandsFail(This,pfCmdsFailed)	\
    ( (This)->lpVtbl -> DidCommandsFail(This,pfCmdsFailed) ) 

#define IConfigNode_GetActiveCommandCount(This,pcActiveCommands)	\
    ( (This)->lpVtbl -> GetActiveCommandCount(This,pcActiveCommands) ) 

#define IConfigNode_EnumCommandStates(This,ppEnumCommands)	\
    ( (This)->lpVtbl -> EnumCommandStates(This,ppEnumCommands) ) 

#define IConfigNode_GetProperty(This,guidProperty,pvarValue)	\
    ( (This)->lpVtbl -> GetProperty(This,guidProperty,pvarValue) ) 

#define IConfigNode_SetProperty(This,guidProperty,varValue)	\
    ( (This)->lpVtbl -> SetProperty(This,guidProperty,varValue) ) 

#define IConfigNode_DeleteProperty(This,guidProperty)	\
    ( (This)->lpVtbl -> DeleteProperty(This,guidProperty) ) 

#define IConfigNode_EnumProperties(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumProperties(This,ppEnum) ) 

#define IConfigNode_EnumChildren(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumChildren(This,ppEnum) ) 

#define IConfigNode_GetParent(This,ppNodeParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppNodeParent) ) 

#define IConfigNode_GetNode(This,bstrChildLocURI,ppChildNode)	\
    ( (This)->lpVtbl -> GetNode(This,bstrChildLocURI,ppChildNode) ) 

#define IConfigNode_GetNodeFromURI(This,puriChild,ppChildNode)	\
    ( (This)->lpVtbl -> GetNodeFromURI(This,puriChild,ppChildNode) ) 

#define IConfigNode_Exists(This,pfNodeExists)	\
    ( (This)->lpVtbl -> Exists(This,pfNodeExists) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IConfigNode_INTERFACE_DEFINED__ */


#ifndef __IEnumConfigNodeProperties_INTERFACE_DEFINED__
#define __IEnumConfigNodeProperties_INTERFACE_DEFINED__

/* interface IEnumConfigNodeProperties */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumConfigNodeProperties;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FEB429FE-5AC4-4a63-A8B6-847FB2103C8C")
    IEnumConfigNodeProperties : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cProperties,
            /* [size_is][out] */ __RPC__out_ecount_full(cProperties) GUID *pProperty,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodeProperties **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumConfigNodePropertiesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumConfigNodeProperties * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumConfigNodeProperties * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumConfigNodeProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumConfigNodeProperties * This,
            /* [in] */ ULONG cProperties,
            /* [size_is][out] */ __RPC__out_ecount_full(cProperties) GUID *pProperty,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumConfigNodeProperties * This,
            /* [in] */ ULONG cProperties);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumConfigNodeProperties * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumConfigNodeProperties * This,
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodeProperties **ppEnum);
        
        END_INTERFACE
    } IEnumConfigNodePropertiesVtbl;

    interface IEnumConfigNodeProperties
    {
        CONST_VTBL struct IEnumConfigNodePropertiesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumConfigNodeProperties_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumConfigNodeProperties_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumConfigNodeProperties_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumConfigNodeProperties_Next(This,cProperties,pProperty,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,cProperties,pProperty,pcFetched) ) 

#define IEnumConfigNodeProperties_Skip(This,cProperties)	\
    ( (This)->lpVtbl -> Skip(This,cProperties) ) 

#define IEnumConfigNodeProperties_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumConfigNodeProperties_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumConfigNodeProperties_INTERFACE_DEFINED__ */


#ifndef __IEnumConfigNodes_INTERFACE_DEFINED__
#define __IEnumConfigNodes_INTERFACE_DEFINED__

/* interface IEnumConfigNodes */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumConfigNodes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF860911-3CDA-4f76-B7F3-85376FBD2068")
    IEnumConfigNodes : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cNodes,
            /* [size_is][out] */ __RPC__out_ecount_full(cNodes) IConfigNode **ppNodes,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cNodes) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodes **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumConfigNodesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumConfigNodes * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumConfigNodes * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumConfigNodes * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumConfigNodes * This,
            /* [in] */ ULONG cNodes,
            /* [size_is][out] */ __RPC__out_ecount_full(cNodes) IConfigNode **ppNodes,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumConfigNodes * This,
            /* [in] */ ULONG cNodes);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumConfigNodes * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumConfigNodes * This,
            /* [out] */ __RPC__deref_out_opt IEnumConfigNodes **ppEnum);
        
        END_INTERFACE
    } IEnumConfigNodesVtbl;

    interface IEnumConfigNodes
    {
        CONST_VTBL struct IEnumConfigNodesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumConfigNodes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumConfigNodes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumConfigNodes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumConfigNodes_Next(This,cNodes,ppNodes,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,cNodes,ppNodes,pcFetched) ) 

#define IEnumConfigNodes_Skip(This,cNodes)	\
    ( (This)->lpVtbl -> Skip(This,cNodes) ) 

#define IEnumConfigNodes_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumConfigNodes_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumConfigNodes_INTERFACE_DEFINED__ */


#ifndef __IEnumCommandStates_INTERFACE_DEFINED__
#define __IEnumCommandStates_INTERFACE_DEFINED__

/* interface IEnumCommandStates */
/* [object][uuid] */ 


EXTERN_C const IID IID_IEnumCommandStates;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AEE9A36B-8F63-4e93-AAC2-F9BE3335B9F5")
    IEnumCommandStates : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cCommandStates,
            /* [size_is][out] */ __RPC__out_ecount_full(cCommandStates) HRESULT *phrCommandStates,
            /* [out] */ __RPC__out ULONG *pcFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cCommandStates) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ __RPC__deref_out_opt IEnumCommandStates **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumCommandStatesVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IEnumCommandStates * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IEnumCommandStates * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IEnumCommandStates * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            __RPC__in IEnumCommandStates * This,
            /* [in] */ ULONG cCommandStates,
            /* [size_is][out] */ __RPC__out_ecount_full(cCommandStates) HRESULT *phrCommandStates,
            /* [out] */ __RPC__out ULONG *pcFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            __RPC__in IEnumCommandStates * This,
            /* [in] */ ULONG cCommandStates);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in IEnumCommandStates * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            __RPC__in IEnumCommandStates * This,
            /* [out] */ __RPC__deref_out_opt IEnumCommandStates **ppEnum);
        
        END_INTERFACE
    } IEnumCommandStatesVtbl;

    interface IEnumCommandStates
    {
        CONST_VTBL struct IEnumCommandStatesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumCommandStates_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumCommandStates_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumCommandStates_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumCommandStates_Next(This,cCommandStates,phrCommandStates,pcFetched)	\
    ( (This)->lpVtbl -> Next(This,cCommandStates,phrCommandStates,pcFetched) ) 

#define IEnumCommandStates_Skip(This,cCommandStates)	\
    ( (This)->lpVtbl -> Skip(This,cCommandStates) ) 

#define IEnumCommandStates_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumCommandStates_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumCommandStates_INTERFACE_DEFINED__ */



#ifndef __ConfigManager2_LIBRARY_DEFINED__
#define __ConfigManager2_LIBRARY_DEFINED__

/* library ConfigManager2 */
/* [helpstring][uuid] */ 


EXTERN_C const IID LIBID_ConfigManager2;

EXTERN_C const CLSID CLSID_ConfigManager2;

#ifdef __cplusplus

class DECLSPEC_UUID("66D0DB14-5638-475f-A386-629522D8C461")
ConfigManager2;
#endif

EXTERN_C const CLSID CLSID_ConfigManager2URI;

#ifdef __cplusplus

class DECLSPEC_UUID("50A41EF1-6BFA-4b7e-973E-798EA0BEBAD4")
ConfigManager2URI;
#endif

EXTERN_C const CLSID CLSID_ConfigManager2MutableURI;

#ifdef __cplusplus

class DECLSPEC_UUID("C196B2BE-BA06-4049-8518-322E1E04282B")
ConfigManager2MutableURI;
#endif
#endif /* __ConfigManager2_LIBRARY_DEFINED__ */

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


