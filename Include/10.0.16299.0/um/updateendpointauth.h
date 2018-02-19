

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

#ifndef __updateendpointauth_h__
#define __updateendpointauth_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IUpdateEndpointAuthToken_FWD_DEFINED__
#define __IUpdateEndpointAuthToken_FWD_DEFINED__
typedef interface IUpdateEndpointAuthToken IUpdateEndpointAuthToken;

#endif 	/* __IUpdateEndpointAuthToken_FWD_DEFINED__ */


#ifndef __IUpdateEndpointAuthUserTicket_FWD_DEFINED__
#define __IUpdateEndpointAuthUserTicket_FWD_DEFINED__
typedef interface IUpdateEndpointAuthUserTicket IUpdateEndpointAuthUserTicket;

#endif 	/* __IUpdateEndpointAuthUserTicket_FWD_DEFINED__ */


#ifndef __IUpdateEndpointAuthProvider_FWD_DEFINED__
#define __IUpdateEndpointAuthProvider_FWD_DEFINED__
typedef interface IUpdateEndpointAuthProvider IUpdateEndpointAuthProvider;

#endif 	/* __IUpdateEndpointAuthProvider_FWD_DEFINED__ */


#ifndef __IADFSToken_FWD_DEFINED__
#define __IADFSToken_FWD_DEFINED__
typedef interface IADFSToken IADFSToken;

#endif 	/* __IADFSToken_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_updateendpointauth_0000_0000 */
/* [local] */ 

//=--------------------------------------------------------------------------=
// UpdateEndpointAuth.h
//=--------------------------------------------------------------------------=
// Copyright (C) Microsoft Corporation. All Rights Reserved.
//
// THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
// PARTICULAR PURPOSE.
//=--------------------------------------------------------------------------=


//---------------------------------------------------------------------------------
// Windows Update Agent authentication client plug-in interfaces.
// --------------------------------------------------------------------------------
// GUIDS
// --------------------------------------------------------------------------------
DEFINE_GUID(IID_UpdateEndpointAuthProvider,0xb18a7c5a,0x22cc,0x4390,0x8e,0x14,0xda,0x1a,0xb6,0x13,0x67,0xd6);
// {60214134-6c24-4b5d-9766-c03e6b0a82a9}
DEFINE_GUID(IID_UpdateEndpointAuthToken,0x60214134,0x6c24,0x4b5d,0x97,0x66,0xc0,0x3e,0x6b,0x0a,0x82,0xa9);
// {7B52C8E7-70DE-4F60-8561-77D6774F072B}
DEFINE_GUID(IID_UpdateEndpointAuthUserTicket,0x7B52C8E7,0x70DE,0x4F60,0x85,0x61,0x77,0xD6,0x77,0x4F,0x07,0x2B);
typedef /* [v1_enum][public] */ 
enum tagUpdateEndpointAuthTokenType
    {
        ueattInvalidTokenType	= 0,
        ueattSAML11Token	= 0x1
    } 	UpdateEndpointAuthTokenType;

typedef /* [v1_enum][public] */ 
enum tagEndpointType
    {
        uetClientServer	= 0,
        uetReporting	= ( uetClientServer + 1 ) ,
        uetRegulation	= ( uetReporting + 1 ) ,
        uetSimpleTargeting	= ( uetRegulation + 1 ) ,
        uetSecuredClientServer	= ( uetSimpleTargeting + 1 ) ,
        uetSecondaryServiceAuth	= ( uetSecuredClientServer + 1 ) ,
        uetEnhancedRegulation	= ( uetSecondaryServiceAuth + 1 ) ,
        ENDPOINTTYPE_COUNT	= ( uetEnhancedRegulation + 1 ) 
    } 	UpdateEndpointType;

typedef /* [public] */ struct tagUpdateEndpointProxySettings
    {
    /* [helpstring] */ BSTR szProxyAddr;
    /* [helpstring] */ BSTR szBypassList;
    /* [helpstring] */ BSTR szUsername;
    /* [helpstring] */ BSTR szPassword;
    } 	UpdateEndpointProxySettings;



extern RPC_IF_HANDLE __MIDL_itf_updateendpointauth_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_updateendpointauth_0000_0000_v0_0_s_ifspec;

#ifndef __IUpdateEndpointAuthToken_INTERFACE_DEFINED__
#define __IUpdateEndpointAuthToken_INTERFACE_DEFINED__

/* interface IUpdateEndpointAuthToken */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IUpdateEndpointAuthToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("60214134-6c24-4b5d-9766-c03e6b0a82a9")
    IUpdateEndpointAuthToken : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TokenData( 
            /* [out] */ BSTR *pszTokenData) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TokenType( 
            /* [out] */ UpdateEndpointAuthTokenType *pTokenType) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE ServiceID( 
            /* [out] */ GUID *pServiceID) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE SigningKey( 
            /* [size_is][unique][out][in] */ BYTE *pbKey,
            /* [out][in] */ ULONG *pcbKeySize) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TokenReferenceAttached( 
            /* [out] */ BSTR *pszTokenReference) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE TokenReferenceUnattached( 
            /* [out] */ BSTR *pszTokenReference) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateEndpointAuthTokenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateEndpointAuthToken * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateEndpointAuthToken * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateEndpointAuthToken * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TokenData )( 
            IUpdateEndpointAuthToken * This,
            /* [out] */ BSTR *pszTokenData);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TokenType )( 
            IUpdateEndpointAuthToken * This,
            /* [out] */ UpdateEndpointAuthTokenType *pTokenType);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *ServiceID )( 
            IUpdateEndpointAuthToken * This,
            /* [out] */ GUID *pServiceID);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *SigningKey )( 
            IUpdateEndpointAuthToken * This,
            /* [size_is][unique][out][in] */ BYTE *pbKey,
            /* [out][in] */ ULONG *pcbKeySize);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TokenReferenceAttached )( 
            IUpdateEndpointAuthToken * This,
            /* [out] */ BSTR *pszTokenReference);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *TokenReferenceUnattached )( 
            IUpdateEndpointAuthToken * This,
            /* [out] */ BSTR *pszTokenReference);
        
        END_INTERFACE
    } IUpdateEndpointAuthTokenVtbl;

    interface IUpdateEndpointAuthToken
    {
        CONST_VTBL struct IUpdateEndpointAuthTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateEndpointAuthToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateEndpointAuthToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateEndpointAuthToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateEndpointAuthToken_TokenData(This,pszTokenData)	\
    ( (This)->lpVtbl -> TokenData(This,pszTokenData) ) 

#define IUpdateEndpointAuthToken_TokenType(This,pTokenType)	\
    ( (This)->lpVtbl -> TokenType(This,pTokenType) ) 

#define IUpdateEndpointAuthToken_ServiceID(This,pServiceID)	\
    ( (This)->lpVtbl -> ServiceID(This,pServiceID) ) 

#define IUpdateEndpointAuthToken_SigningKey(This,pbKey,pcbKeySize)	\
    ( (This)->lpVtbl -> SigningKey(This,pbKey,pcbKeySize) ) 

#define IUpdateEndpointAuthToken_TokenReferenceAttached(This,pszTokenReference)	\
    ( (This)->lpVtbl -> TokenReferenceAttached(This,pszTokenReference) ) 

#define IUpdateEndpointAuthToken_TokenReferenceUnattached(This,pszTokenReference)	\
    ( (This)->lpVtbl -> TokenReferenceUnattached(This,pszTokenReference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateEndpointAuthToken_INTERFACE_DEFINED__ */


#ifndef __IUpdateEndpointAuthUserTicket_INTERFACE_DEFINED__
#define __IUpdateEndpointAuthUserTicket_INTERFACE_DEFINED__

/* interface IUpdateEndpointAuthUserTicket */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IUpdateEndpointAuthUserTicket;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B52C8E7-70DE-4F60-8561-77D6774F072B")
    IUpdateEndpointAuthUserTicket : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetHasUserTicket( 
            /* [out] */ BOOL *pfHasUserTicket) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateEndpointAuthUserTicketVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateEndpointAuthUserTicket * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateEndpointAuthUserTicket * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateEndpointAuthUserTicket * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetHasUserTicket )( 
            IUpdateEndpointAuthUserTicket * This,
            /* [out] */ BOOL *pfHasUserTicket);
        
        END_INTERFACE
    } IUpdateEndpointAuthUserTicketVtbl;

    interface IUpdateEndpointAuthUserTicket
    {
        CONST_VTBL struct IUpdateEndpointAuthUserTicketVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateEndpointAuthUserTicket_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateEndpointAuthUserTicket_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateEndpointAuthUserTicket_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateEndpointAuthUserTicket_GetHasUserTicket(This,pfHasUserTicket)	\
    ( (This)->lpVtbl -> GetHasUserTicket(This,pfHasUserTicket) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateEndpointAuthUserTicket_INTERFACE_DEFINED__ */


#ifndef __IUpdateEndpointAuthProvider_INTERFACE_DEFINED__
#define __IUpdateEndpointAuthProvider_INTERFACE_DEFINED__

/* interface IUpdateEndpointAuthProvider */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IUpdateEndpointAuthProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b18a7c5a-22cc-4390-8e14-da1ab61367d6")
    IUpdateEndpointAuthProvider : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ GUID serviceId,
            /* [in] */ BSTR bstrXml) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetPreferredEndpointTokenTypes( 
            /* [in] */ GUID serviceId,
            /* [in] */ UpdateEndpointType endpointType,
            /* [in] */ ULONG ulRequestedTypes,
            /* [out] */ ULONG *pulPreferredTokenTypes) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetEndpointToken( 
            /* [in] */ GUID serviceId,
            /* [in] */ UpdateEndpointType endpointType,
            /* [in] */ UpdateEndpointProxySettings proxySettings,
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ UpdateEndpointAuthTokenType tokenType,
            /* [in] */ BOOL fRefreshOnline,
            /* [in] */ UINT cContentCategoryIds,
            /* [size_is][in] */ const GUID *rgContentCategoryIds,
            /* [out] */ IUnknown **ppEndpointToken) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUpdateEndpointAuthProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUpdateEndpointAuthProvider * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUpdateEndpointAuthProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUpdateEndpointAuthProvider * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IUpdateEndpointAuthProvider * This,
            /* [in] */ GUID serviceId,
            /* [in] */ BSTR bstrXml);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPreferredEndpointTokenTypes )( 
            IUpdateEndpointAuthProvider * This,
            /* [in] */ GUID serviceId,
            /* [in] */ UpdateEndpointType endpointType,
            /* [in] */ ULONG ulRequestedTypes,
            /* [out] */ ULONG *pulPreferredTokenTypes);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetEndpointToken )( 
            IUpdateEndpointAuthProvider * This,
            /* [in] */ GUID serviceId,
            /* [in] */ UpdateEndpointType endpointType,
            /* [in] */ UpdateEndpointProxySettings proxySettings,
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ UpdateEndpointAuthTokenType tokenType,
            /* [in] */ BOOL fRefreshOnline,
            /* [in] */ UINT cContentCategoryIds,
            /* [size_is][in] */ const GUID *rgContentCategoryIds,
            /* [out] */ IUnknown **ppEndpointToken);
        
        END_INTERFACE
    } IUpdateEndpointAuthProviderVtbl;

    interface IUpdateEndpointAuthProvider
    {
        CONST_VTBL struct IUpdateEndpointAuthProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUpdateEndpointAuthProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUpdateEndpointAuthProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUpdateEndpointAuthProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUpdateEndpointAuthProvider_Initialize(This,serviceId,bstrXml)	\
    ( (This)->lpVtbl -> Initialize(This,serviceId,bstrXml) ) 

#define IUpdateEndpointAuthProvider_GetPreferredEndpointTokenTypes(This,serviceId,endpointType,ulRequestedTypes,pulPreferredTokenTypes)	\
    ( (This)->lpVtbl -> GetPreferredEndpointTokenTypes(This,serviceId,endpointType,ulRequestedTypes,pulPreferredTokenTypes) ) 

#define IUpdateEndpointAuthProvider_GetEndpointToken(This,serviceId,endpointType,proxySettings,hUserToken,tokenType,fRefreshOnline,cContentCategoryIds,rgContentCategoryIds,ppEndpointToken)	\
    ( (This)->lpVtbl -> GetEndpointToken(This,serviceId,endpointType,proxySettings,hUserToken,tokenType,fRefreshOnline,cContentCategoryIds,rgContentCategoryIds,ppEndpointToken) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUpdateEndpointAuthProvider_INTERFACE_DEFINED__ */


#ifndef __IADFSToken_INTERFACE_DEFINED__
#define __IADFSToken_INTERFACE_DEFINED__

/* interface IADFSToken */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IADFSToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2102F199-D308-43EC-A8BF-3206A3743069")
    IADFSToken : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetADFSToken( 
            /* [in] */ BSTR user,
            /* [in] */ BSTR pass,
            /* [in] */ BSTR realm,
            /* [retval][out] */ BSTR *token) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IADFSTokenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IADFSToken * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IADFSToken * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IADFSToken * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetADFSToken )( 
            IADFSToken * This,
            /* [in] */ BSTR user,
            /* [in] */ BSTR pass,
            /* [in] */ BSTR realm,
            /* [retval][out] */ BSTR *token);
        
        END_INTERFACE
    } IADFSTokenVtbl;

    interface IADFSToken
    {
        CONST_VTBL struct IADFSTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IADFSToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IADFSToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IADFSToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IADFSToken_GetADFSToken(This,user,pass,realm,token)	\
    ( (This)->lpVtbl -> GetADFSToken(This,user,pass,realm,token) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IADFSToken_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


