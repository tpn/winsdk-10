

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

#ifndef __applicationactivationclient_h__
#define __applicationactivationclient_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplicationActivationClient_FWD_DEFINED__
#define __IApplicationActivationClient_FWD_DEFINED__
typedef interface IApplicationActivationClient IApplicationActivationClient;

#endif 	/* __IApplicationActivationClient_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "unknwn.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_applicationactivationclient_0000_0000 */
/* [local] */ 

//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
DEFINE_GUID(CLSID_ApplicationActivationClient, 0x79ceeebe, 0xbde0, 0x4c05, 0x9d, 0x92, 0x15, 0x5f, 0x78, 0xbb, 0x7d, 0x2b);

// ActivationType values
DEFINE_GUID(ActivationType_Launch, 0x9985cd86, 0x1c8e, 0x4ff3, 0x8f, 0x9a, 0x80, 0x6a, 0xd6, 0xa2, 0xdd, 0x23);
DEFINE_GUID(ActivationType_LaunchWithTile, 0x8b63380, 0x6bef, 0x4663, 0xa8, 0x50, 0x7f, 0x1a, 0xb3, 0x79, 0x3d, 0x8b);
DEFINE_GUID(ActivationType_LaunchChild, 0xcf860827, 0xa572, 0x4024, 0x82, 0x92, 0x71, 0xaa, 0xdd, 0x46, 0xb7, 0xde);

DEFINE_GUID(IID_IApplicationActivationClient, 0xf7dd9e5a, 0x4aaa, 0x4898, 0xab, 0xb4, 0x27, 0xe4, 0x4, 0x7d, 0x61, 0xb6);


extern RPC_IF_HANDLE __MIDL_itf_applicationactivationclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_applicationactivationclient_0000_0000_v0_0_s_ifspec;

#ifndef __IApplicationActivationClient_INTERFACE_DEFINED__
#define __IApplicationActivationClient_INTERFACE_DEFINED__

/* interface IApplicationActivationClient */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationActivationClient;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F7DD9E5A-4AAA-4898-ABB4-27E4047D61B6")
    IApplicationActivationClient : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetActivationInfo( 
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  GUID activationType) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetActivationInfoEx( 
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  GUID activationType,
            /* [annotation][in] */ 
            _In_z_count_(dwNumArguments)  LPCWSTR *ppszArguments,
            /* [annotation][in] */ 
            _In_  DWORD dwNumArguments) = 0;
        
        virtual /* [propget][local] */ HRESULT STDMETHODCALLTYPE get_CompletedEvent( 
            /* [retval][out] */ HANDLE *hValue) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE GetReturnData( 
            /* [annotation][out] */ 
            _Out_  HRESULT *phrResult,
            /* [annotation][out] */ 
            _Outptr_result_bytebuffer_(*pdwSize)  BYTE **ppbData,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwSize) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE ActivateApplicationAsync( 
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppUserModelId,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR pszArguments,
            /* [annotation][in] */ 
            _In_  ACTIVATEOPTIONS options) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IApplicationActivationClientVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationActivationClient * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationActivationClient * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationActivationClient * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetActivationInfo )( 
            IApplicationActivationClient * This,
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  GUID activationType);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetActivationInfoEx )( 
            IApplicationActivationClient * This,
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  GUID activationType,
            /* [annotation][in] */ 
            _In_z_count_(dwNumArguments)  LPCWSTR *ppszArguments,
            /* [annotation][in] */ 
            _In_  DWORD dwNumArguments);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_CompletedEvent )( 
            IApplicationActivationClient * This,
            /* [retval][out] */ HANDLE *hValue);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetReturnData )( 
            IApplicationActivationClient * This,
            /* [annotation][out] */ 
            _Out_  HRESULT *phrResult,
            /* [annotation][out] */ 
            _Outptr_result_bytebuffer_(*pdwSize)  BYTE **ppbData,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ActivateApplicationAsync )( 
            IApplicationActivationClient * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppUserModelId,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR pszArguments,
            /* [annotation][in] */ 
            _In_  ACTIVATEOPTIONS options);
        
        END_INTERFACE
    } IApplicationActivationClientVtbl;

    interface IApplicationActivationClient
    {
        CONST_VTBL struct IApplicationActivationClientVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationActivationClient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationActivationClient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationActivationClient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationActivationClient_SetActivationInfo(This,dwWindowId,activationType)	\
    ( (This)->lpVtbl -> SetActivationInfo(This,dwWindowId,activationType) ) 

#define IApplicationActivationClient_SetActivationInfoEx(This,dwWindowId,activationType,ppszArguments,dwNumArguments)	\
    ( (This)->lpVtbl -> SetActivationInfoEx(This,dwWindowId,activationType,ppszArguments,dwNumArguments) ) 

#define IApplicationActivationClient_get_CompletedEvent(This,hValue)	\
    ( (This)->lpVtbl -> get_CompletedEvent(This,hValue) ) 

#define IApplicationActivationClient_GetReturnData(This,phrResult,ppbData,pdwSize)	\
    ( (This)->lpVtbl -> GetReturnData(This,phrResult,ppbData,pdwSize) ) 

#define IApplicationActivationClient_ActivateApplicationAsync(This,pszAppUserModelId,pszArguments,options)	\
    ( (This)->lpVtbl -> ActivateApplicationAsync(This,pszAppUserModelId,pszArguments,options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationActivationClient_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


