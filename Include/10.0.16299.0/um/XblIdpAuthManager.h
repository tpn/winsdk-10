

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

#ifndef __xblidpauthmanager_h__
#define __xblidpauthmanager_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IXblIdpAuthManager_FWD_DEFINED__
#define __IXblIdpAuthManager_FWD_DEFINED__
typedef interface IXblIdpAuthManager IXblIdpAuthManager;

#endif 	/* __IXblIdpAuthManager_FWD_DEFINED__ */


#ifndef __IXblIdpAuthTokenResult_FWD_DEFINED__
#define __IXblIdpAuthTokenResult_FWD_DEFINED__
typedef interface IXblIdpAuthTokenResult IXblIdpAuthTokenResult;

#endif 	/* __IXblIdpAuthTokenResult_FWD_DEFINED__ */


#ifndef __XblIdpAuthManager_FWD_DEFINED__
#define __XblIdpAuthManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class XblIdpAuthManager XblIdpAuthManager;
#else
typedef struct XblIdpAuthManager XblIdpAuthManager;
#endif /* __cplusplus */

#endif 	/* __XblIdpAuthManager_FWD_DEFINED__ */


#ifndef __XblIdpAuthTokenResult_FWD_DEFINED__
#define __XblIdpAuthTokenResult_FWD_DEFINED__

#ifdef __cplusplus
typedef class XblIdpAuthTokenResult XblIdpAuthTokenResult;
#else
typedef struct XblIdpAuthTokenResult XblIdpAuthTokenResult;
#endif /* __cplusplus */

#endif 	/* __XblIdpAuthTokenResult_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_xblidpauthmanager_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

typedef 
enum _XBL_IDP_AUTH_TOKEN_STATUS
    {
        XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS	= 0,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS	= ( XBL_IDP_AUTH_TOKEN_STATUS_SUCCESS + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET	= ( XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_SUCCESS + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED	= ( XBL_IDP_AUTH_TOKEN_STATUS_NO_ACCOUNT_SET + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO	= ( XBL_IDP_AUTH_TOKEN_STATUS_LOAD_MSA_ACCOUNT_FAILED + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT	= ( XBL_IDP_AUTH_TOKEN_STATUS_XBOX_VETO + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT	= ( XBL_IDP_AUTH_TOKEN_STATUS_MSA_INTERRUPT + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_VIEW_NOT_SET	= ( XBL_IDP_AUTH_TOKEN_STATUS_OFFLINE_NO_CONSENT + 1 ) ,
        XBL_IDP_AUTH_TOKEN_STATUS_UNKNOWN	= 0xffffffff
    } 	XBL_IDP_AUTH_TOKEN_STATUS;



extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0000_v0_0_s_ifspec;

#ifndef __IXblIdpAuthManager_INTERFACE_DEFINED__
#define __IXblIdpAuthManager_INTERFACE_DEFINED__

/* interface IXblIdpAuthManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IXblIdpAuthManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eb5ddb08-8bbf-449b-ac21-b02ddeb3b136")
    IXblIdpAuthManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetGamerAccount( 
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR msaAccountId,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR xuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGamerAccount( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *msaAccountId,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *xuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAppViewInitialized( 
            /* [string][in] */ __RPC__in_string LPCWSTR appSid,
            /* [string][in] */ __RPC__in_string LPCWSTR msaAccountId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnvironment( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *environment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSandbox( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *sandbox) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTokenAndSignatureWithTokenResult( 
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR msaAccountId,
            /* [string][in] */ __RPC__in_string LPCWSTR appSid,
            /* [string][in] */ __RPC__in_string LPCWSTR msaTarget,
            /* [string][in] */ __RPC__in_string LPCWSTR msaPolicy,
            /* [string][in] */ __RPC__in_string LPCWSTR httpMethod,
            /* [string][in] */ __RPC__in_string LPCWSTR uri,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR headers,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(bodySize) BYTE *body,
            /* [in] */ DWORD bodySize,
            /* [in] */ BOOL forceRefresh,
            /* [out] */ __RPC__deref_out_opt IXblIdpAuthTokenResult **result) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXblIdpAuthManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IXblIdpAuthManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IXblIdpAuthManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetGamerAccount )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR msaAccountId,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR xuid);
        
        HRESULT ( STDMETHODCALLTYPE *GetGamerAccount )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *msaAccountId,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *xuid);
        
        HRESULT ( STDMETHODCALLTYPE *SetAppViewInitialized )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [string][in] */ __RPC__in_string LPCWSTR appSid,
            /* [string][in] */ __RPC__in_string LPCWSTR msaAccountId);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnvironment )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *environment);
        
        HRESULT ( STDMETHODCALLTYPE *GetSandbox )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *sandbox);
        
        HRESULT ( STDMETHODCALLTYPE *GetTokenAndSignatureWithTokenResult )( 
            __RPC__in IXblIdpAuthManager * This,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR msaAccountId,
            /* [string][in] */ __RPC__in_string LPCWSTR appSid,
            /* [string][in] */ __RPC__in_string LPCWSTR msaTarget,
            /* [string][in] */ __RPC__in_string LPCWSTR msaPolicy,
            /* [string][in] */ __RPC__in_string LPCWSTR httpMethod,
            /* [string][in] */ __RPC__in_string LPCWSTR uri,
            /* [unique][string][in] */ __RPC__in_opt_string LPCWSTR headers,
            /* [size_is][unique][in] */ __RPC__in_ecount_full_opt(bodySize) BYTE *body,
            /* [in] */ DWORD bodySize,
            /* [in] */ BOOL forceRefresh,
            /* [out] */ __RPC__deref_out_opt IXblIdpAuthTokenResult **result);
        
        END_INTERFACE
    } IXblIdpAuthManagerVtbl;

    interface IXblIdpAuthManager
    {
        CONST_VTBL struct IXblIdpAuthManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXblIdpAuthManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXblIdpAuthManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXblIdpAuthManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXblIdpAuthManager_SetGamerAccount(This,msaAccountId,xuid)	\
    ( (This)->lpVtbl -> SetGamerAccount(This,msaAccountId,xuid) ) 

#define IXblIdpAuthManager_GetGamerAccount(This,msaAccountId,xuid)	\
    ( (This)->lpVtbl -> GetGamerAccount(This,msaAccountId,xuid) ) 

#define IXblIdpAuthManager_SetAppViewInitialized(This,appSid,msaAccountId)	\
    ( (This)->lpVtbl -> SetAppViewInitialized(This,appSid,msaAccountId) ) 

#define IXblIdpAuthManager_GetEnvironment(This,environment)	\
    ( (This)->lpVtbl -> GetEnvironment(This,environment) ) 

#define IXblIdpAuthManager_GetSandbox(This,sandbox)	\
    ( (This)->lpVtbl -> GetSandbox(This,sandbox) ) 

#define IXblIdpAuthManager_GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result)	\
    ( (This)->lpVtbl -> GetTokenAndSignatureWithTokenResult(This,msaAccountId,appSid,msaTarget,msaPolicy,httpMethod,uri,headers,body,bodySize,forceRefresh,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXblIdpAuthManager_INTERFACE_DEFINED__ */


#ifndef __IXblIdpAuthTokenResult_INTERFACE_DEFINED__
#define __IXblIdpAuthTokenResult_INTERFACE_DEFINED__

/* interface IXblIdpAuthTokenResult */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IXblIdpAuthTokenResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46ce0225-f267-4d68-b299-b2762552dec1")
    IXblIdpAuthTokenResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetStatus( 
            /* [out] */ __RPC__out XBL_IDP_AUTH_TOKEN_STATUS *status) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetErrorCode( 
            /* [out] */ __RPC__out HRESULT *errorCode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetToken( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *token) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSignature( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *signature) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSandbox( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *sandbox) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnvironment( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *environment) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMsaAccountId( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaAccountId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetXuid( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *xuid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetGamertag( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *gamertag) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAgeGroup( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *ageGroup) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPrivileges( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *privileges) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMsaTarget( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaTarget) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMsaPolicy( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaPolicy) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMsaAppId( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaAppId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRedirect( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *redirect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMessage( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *message) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHelpId( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *helpId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetEnforcementBans( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *enforcementBans) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRestrictions( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *restrictions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTitleRestrictions( 
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *titleRestrictions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IXblIdpAuthTokenResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IXblIdpAuthTokenResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IXblIdpAuthTokenResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [out] */ __RPC__out XBL_IDP_AUTH_TOKEN_STATUS *status);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorCode )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [out] */ __RPC__out HRESULT *errorCode);
        
        HRESULT ( STDMETHODCALLTYPE *GetToken )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *token);
        
        HRESULT ( STDMETHODCALLTYPE *GetSignature )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *signature);
        
        HRESULT ( STDMETHODCALLTYPE *GetSandbox )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *sandbox);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnvironment )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *environment);
        
        HRESULT ( STDMETHODCALLTYPE *GetMsaAccountId )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaAccountId);
        
        HRESULT ( STDMETHODCALLTYPE *GetXuid )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *xuid);
        
        HRESULT ( STDMETHODCALLTYPE *GetGamertag )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *gamertag);
        
        HRESULT ( STDMETHODCALLTYPE *GetAgeGroup )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *ageGroup);
        
        HRESULT ( STDMETHODCALLTYPE *GetPrivileges )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *privileges);
        
        HRESULT ( STDMETHODCALLTYPE *GetMsaTarget )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaTarget);
        
        HRESULT ( STDMETHODCALLTYPE *GetMsaPolicy )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaPolicy);
        
        HRESULT ( STDMETHODCALLTYPE *GetMsaAppId )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *msaAppId);
        
        HRESULT ( STDMETHODCALLTYPE *GetRedirect )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *redirect);
        
        HRESULT ( STDMETHODCALLTYPE *GetMessage )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *message);
        
        HRESULT ( STDMETHODCALLTYPE *GetHelpId )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *helpId);
        
        HRESULT ( STDMETHODCALLTYPE *GetEnforcementBans )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *enforcementBans);
        
        HRESULT ( STDMETHODCALLTYPE *GetRestrictions )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *restrictions);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitleRestrictions )( 
            __RPC__in IXblIdpAuthTokenResult * This,
            /* [string][retval][out] */ __RPC__deref_out_opt_string LPWSTR *titleRestrictions);
        
        END_INTERFACE
    } IXblIdpAuthTokenResultVtbl;

    interface IXblIdpAuthTokenResult
    {
        CONST_VTBL struct IXblIdpAuthTokenResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IXblIdpAuthTokenResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IXblIdpAuthTokenResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IXblIdpAuthTokenResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IXblIdpAuthTokenResult_GetStatus(This,status)	\
    ( (This)->lpVtbl -> GetStatus(This,status) ) 

#define IXblIdpAuthTokenResult_GetErrorCode(This,errorCode)	\
    ( (This)->lpVtbl -> GetErrorCode(This,errorCode) ) 

#define IXblIdpAuthTokenResult_GetToken(This,token)	\
    ( (This)->lpVtbl -> GetToken(This,token) ) 

#define IXblIdpAuthTokenResult_GetSignature(This,signature)	\
    ( (This)->lpVtbl -> GetSignature(This,signature) ) 

#define IXblIdpAuthTokenResult_GetSandbox(This,sandbox)	\
    ( (This)->lpVtbl -> GetSandbox(This,sandbox) ) 

#define IXblIdpAuthTokenResult_GetEnvironment(This,environment)	\
    ( (This)->lpVtbl -> GetEnvironment(This,environment) ) 

#define IXblIdpAuthTokenResult_GetMsaAccountId(This,msaAccountId)	\
    ( (This)->lpVtbl -> GetMsaAccountId(This,msaAccountId) ) 

#define IXblIdpAuthTokenResult_GetXuid(This,xuid)	\
    ( (This)->lpVtbl -> GetXuid(This,xuid) ) 

#define IXblIdpAuthTokenResult_GetGamertag(This,gamertag)	\
    ( (This)->lpVtbl -> GetGamertag(This,gamertag) ) 

#define IXblIdpAuthTokenResult_GetAgeGroup(This,ageGroup)	\
    ( (This)->lpVtbl -> GetAgeGroup(This,ageGroup) ) 

#define IXblIdpAuthTokenResult_GetPrivileges(This,privileges)	\
    ( (This)->lpVtbl -> GetPrivileges(This,privileges) ) 

#define IXblIdpAuthTokenResult_GetMsaTarget(This,msaTarget)	\
    ( (This)->lpVtbl -> GetMsaTarget(This,msaTarget) ) 

#define IXblIdpAuthTokenResult_GetMsaPolicy(This,msaPolicy)	\
    ( (This)->lpVtbl -> GetMsaPolicy(This,msaPolicy) ) 

#define IXblIdpAuthTokenResult_GetMsaAppId(This,msaAppId)	\
    ( (This)->lpVtbl -> GetMsaAppId(This,msaAppId) ) 

#define IXblIdpAuthTokenResult_GetRedirect(This,redirect)	\
    ( (This)->lpVtbl -> GetRedirect(This,redirect) ) 

#define IXblIdpAuthTokenResult_GetMessage(This,message)	\
    ( (This)->lpVtbl -> GetMessage(This,message) ) 

#define IXblIdpAuthTokenResult_GetHelpId(This,helpId)	\
    ( (This)->lpVtbl -> GetHelpId(This,helpId) ) 

#define IXblIdpAuthTokenResult_GetEnforcementBans(This,enforcementBans)	\
    ( (This)->lpVtbl -> GetEnforcementBans(This,enforcementBans) ) 

#define IXblIdpAuthTokenResult_GetRestrictions(This,restrictions)	\
    ( (This)->lpVtbl -> GetRestrictions(This,restrictions) ) 

#define IXblIdpAuthTokenResult_GetTitleRestrictions(This,titleRestrictions)	\
    ( (This)->lpVtbl -> GetTitleRestrictions(This,titleRestrictions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IXblIdpAuthTokenResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_xblidpauthmanager_0000_0002 */
/* [local] */ 

#ifdef __cplusplus

class DECLSPEC_UUID("ce23534b-56d8-4978-86a2-7ee570640468")
XblIdpAuthManager;
#endif


extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_xblidpauthmanager_0000_0003 */
/* [local] */ 

#ifdef __cplusplus

class DECLSPEC_UUID("9f493441-744a-410c-ae2b-9a22f7c7731f")
XblIdpAuthTokenResult;
#endif


extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_xblidpauthmanager_0000_0004 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xblidpauthmanager_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


