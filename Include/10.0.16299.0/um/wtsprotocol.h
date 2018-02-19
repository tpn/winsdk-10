

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

#ifndef __wtsprotocol_h__
#define __wtsprotocol_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWTSProtocolManager_FWD_DEFINED__
#define __IWTSProtocolManager_FWD_DEFINED__
typedef interface IWTSProtocolManager IWTSProtocolManager;

#endif 	/* __IWTSProtocolManager_FWD_DEFINED__ */


#ifndef __IWTSProtocolListener_FWD_DEFINED__
#define __IWTSProtocolListener_FWD_DEFINED__
typedef interface IWTSProtocolListener IWTSProtocolListener;

#endif 	/* __IWTSProtocolListener_FWD_DEFINED__ */


#ifndef __IWTSProtocolListenerCallback_FWD_DEFINED__
#define __IWTSProtocolListenerCallback_FWD_DEFINED__
typedef interface IWTSProtocolListenerCallback IWTSProtocolListenerCallback;

#endif 	/* __IWTSProtocolListenerCallback_FWD_DEFINED__ */


#ifndef __IWTSProtocolConnection_FWD_DEFINED__
#define __IWTSProtocolConnection_FWD_DEFINED__
typedef interface IWTSProtocolConnection IWTSProtocolConnection;

#endif 	/* __IWTSProtocolConnection_FWD_DEFINED__ */


#ifndef __IWTSProtocolConnectionCallback_FWD_DEFINED__
#define __IWTSProtocolConnectionCallback_FWD_DEFINED__
typedef interface IWTSProtocolConnectionCallback IWTSProtocolConnectionCallback;

#endif 	/* __IWTSProtocolConnectionCallback_FWD_DEFINED__ */


#ifndef __IWTSProtocolShadowConnection_FWD_DEFINED__
#define __IWTSProtocolShadowConnection_FWD_DEFINED__
typedef interface IWTSProtocolShadowConnection IWTSProtocolShadowConnection;

#endif 	/* __IWTSProtocolShadowConnection_FWD_DEFINED__ */


#ifndef __IWTSProtocolShadowCallback_FWD_DEFINED__
#define __IWTSProtocolShadowCallback_FWD_DEFINED__
typedef interface IWTSProtocolShadowCallback IWTSProtocolShadowCallback;

#endif 	/* __IWTSProtocolShadowCallback_FWD_DEFINED__ */


#ifndef __IWTSProtocolLicenseConnection_FWD_DEFINED__
#define __IWTSProtocolLicenseConnection_FWD_DEFINED__
typedef interface IWTSProtocolLicenseConnection IWTSProtocolLicenseConnection;

#endif 	/* __IWTSProtocolLicenseConnection_FWD_DEFINED__ */


#ifndef __IWTSProtocolLogonErrorRedirector_FWD_DEFINED__
#define __IWTSProtocolLogonErrorRedirector_FWD_DEFINED__
typedef interface IWTSProtocolLogonErrorRedirector IWTSProtocolLogonErrorRedirector;

#endif 	/* __IWTSProtocolLogonErrorRedirector_FWD_DEFINED__ */


#ifndef __IWRdsRemoteFXGraphicsConnection_FWD_DEFINED__
#define __IWRdsRemoteFXGraphicsConnection_FWD_DEFINED__
typedef interface IWRdsRemoteFXGraphicsConnection IWRdsRemoteFXGraphicsConnection;

#endif 	/* __IWRdsRemoteFXGraphicsConnection_FWD_DEFINED__ */


#ifndef __IWRdsProtocolSettings_FWD_DEFINED__
#define __IWRdsProtocolSettings_FWD_DEFINED__
typedef interface IWRdsProtocolSettings IWRdsProtocolSettings;

#endif 	/* __IWRdsProtocolSettings_FWD_DEFINED__ */


#ifndef __IWRdsProtocolManager_FWD_DEFINED__
#define __IWRdsProtocolManager_FWD_DEFINED__
typedef interface IWRdsProtocolManager IWRdsProtocolManager;

#endif 	/* __IWRdsProtocolManager_FWD_DEFINED__ */


#ifndef __IWRdsProtocolListener_FWD_DEFINED__
#define __IWRdsProtocolListener_FWD_DEFINED__
typedef interface IWRdsProtocolListener IWRdsProtocolListener;

#endif 	/* __IWRdsProtocolListener_FWD_DEFINED__ */


#ifndef __IWRdsProtocolListenerCallback_FWD_DEFINED__
#define __IWRdsProtocolListenerCallback_FWD_DEFINED__
typedef interface IWRdsProtocolListenerCallback IWRdsProtocolListenerCallback;

#endif 	/* __IWRdsProtocolListenerCallback_FWD_DEFINED__ */


#ifndef __IWRdsProtocolConnection_FWD_DEFINED__
#define __IWRdsProtocolConnection_FWD_DEFINED__
typedef interface IWRdsProtocolConnection IWRdsProtocolConnection;

#endif 	/* __IWRdsProtocolConnection_FWD_DEFINED__ */


#ifndef __IWRdsProtocolConnectionCallback_FWD_DEFINED__
#define __IWRdsProtocolConnectionCallback_FWD_DEFINED__
typedef interface IWRdsProtocolConnectionCallback IWRdsProtocolConnectionCallback;

#endif 	/* __IWRdsProtocolConnectionCallback_FWD_DEFINED__ */


#ifndef __IWRdsProtocolShadowConnection_FWD_DEFINED__
#define __IWRdsProtocolShadowConnection_FWD_DEFINED__
typedef interface IWRdsProtocolShadowConnection IWRdsProtocolShadowConnection;

#endif 	/* __IWRdsProtocolShadowConnection_FWD_DEFINED__ */


#ifndef __IWRdsProtocolShadowCallback_FWD_DEFINED__
#define __IWRdsProtocolShadowCallback_FWD_DEFINED__
typedef interface IWRdsProtocolShadowCallback IWRdsProtocolShadowCallback;

#endif 	/* __IWRdsProtocolShadowCallback_FWD_DEFINED__ */


#ifndef __IWRdsProtocolLicenseConnection_FWD_DEFINED__
#define __IWRdsProtocolLicenseConnection_FWD_DEFINED__
typedef interface IWRdsProtocolLicenseConnection IWRdsProtocolLicenseConnection;

#endif 	/* __IWRdsProtocolLicenseConnection_FWD_DEFINED__ */


#ifndef __IWRdsProtocolLogonErrorRedirector_FWD_DEFINED__
#define __IWRdsProtocolLogonErrorRedirector_FWD_DEFINED__
typedef interface IWRdsProtocolLogonErrorRedirector IWRdsProtocolLogonErrorRedirector;

#endif 	/* __IWRdsProtocolLogonErrorRedirector_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "wtsdefs.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_wtsprotocol_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)










extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0000_v0_0_s_ifspec;

#ifndef __IWTSProtocolManager_INTERFACE_DEFINED__
#define __IWTSProtocolManager_INTERFACE_DEFINED__

/* interface IWTSProtocolManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F9EAF6CC-ED79-4f01-821D-1F881B9F66CC")
    IWTSProtocolManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateListener( 
            /* [string][in] */ __RPC__in_string WCHAR *wszListenerName,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolListener **pProtocolListener) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyServiceStateChange( 
            /* [in] */ __RPC__in WTS_SERVICE_STATE *pTSServiceStateChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStart( 
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStop( 
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionStateChange( 
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateListener )( 
            __RPC__in IWTSProtocolManager * This,
            /* [string][in] */ __RPC__in_string WCHAR *wszListenerName,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolListener **pProtocolListener);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyServiceStateChange )( 
            __RPC__in IWTSProtocolManager * This,
            /* [in] */ __RPC__in WTS_SERVICE_STATE *pTSServiceStateChange);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStart )( 
            __RPC__in IWTSProtocolManager * This,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStop )( 
            __RPC__in IWTSProtocolManager * This,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionStateChange )( 
            __RPC__in IWTSProtocolManager * This,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId);
        
        END_INTERFACE
    } IWTSProtocolManagerVtbl;

    interface IWTSProtocolManager
    {
        CONST_VTBL struct IWTSProtocolManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolManager_CreateListener(This,wszListenerName,pProtocolListener)	\
    ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) ) 

#define IWTSProtocolManager_NotifyServiceStateChange(This,pTSServiceStateChange)	\
    ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) ) 

#define IWTSProtocolManager_NotifySessionOfServiceStart(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) ) 

#define IWTSProtocolManager_NotifySessionOfServiceStop(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) ) 

#define IWTSProtocolManager_NotifySessionStateChange(This,SessionId,EventId)	\
    ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolManager_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolListener_INTERFACE_DEFINED__
#define __IWTSProtocolListener_INTERFACE_DEFINED__

/* interface IWTSProtocolListener */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23083765-45f0-4394-8f69-32b2bc0ef4ca")
    IWTSProtocolListener : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartListen( 
            /* [in] */ __RPC__in_opt IWTSProtocolListenerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopListen( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolListener * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartListen )( 
            __RPC__in IWTSProtocolListener * This,
            /* [in] */ __RPC__in_opt IWTSProtocolListenerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *StopListen )( 
            __RPC__in IWTSProtocolListener * This);
        
        END_INTERFACE
    } IWTSProtocolListenerVtbl;

    interface IWTSProtocolListener
    {
        CONST_VTBL struct IWTSProtocolListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolListener_StartListen(This,pCallback)	\
    ( (This)->lpVtbl -> StartListen(This,pCallback) ) 

#define IWTSProtocolListener_StopListen(This)	\
    ( (This)->lpVtbl -> StopListen(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolListener_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolListenerCallback_INTERFACE_DEFINED__
#define __IWTSProtocolListenerCallback_INTERFACE_DEFINED__

/* interface IWTSProtocolListenerCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolListenerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23083765-1a2d-4de2-97de-4a35f260f0b3")
    IWTSProtocolListenerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnected( 
            /* [in] */ __RPC__in_opt IWTSProtocolConnection *pConnection,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolConnectionCallback **pCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolListenerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolListenerCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolListenerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolListenerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnConnected )( 
            __RPC__in IWTSProtocolListenerCallback * This,
            /* [in] */ __RPC__in_opt IWTSProtocolConnection *pConnection,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolConnectionCallback **pCallback);
        
        END_INTERFACE
    } IWTSProtocolListenerCallbackVtbl;

    interface IWTSProtocolListenerCallback
    {
        CONST_VTBL struct IWTSProtocolListenerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolListenerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolListenerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolListenerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolListenerCallback_OnConnected(This,pConnection,pCallback)	\
    ( (This)->lpVtbl -> OnConnected(This,pConnection,pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolListenerCallback_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolConnection_INTERFACE_DEFINED__
#define __IWTSProtocolConnection_INTERFACE_DEFINED__

/* interface IWTSProtocolConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23083765-9095-4648-98bf-ef81c914032d")
    IWTSProtocolConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLogonErrorRedirector( 
            /* [out] */ __RPC__deref_out_opt IWTSProtocolLogonErrorRedirector **ppLogonErrorRedir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendPolicyData( 
            /* [in] */ __RPC__in WTS_POLICY_DATA *pPolicyData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AcceptConnection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClientData( 
            /* [out] */ __RPC__out WTS_CLIENT_DATA *pClientData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserCredentials( 
            /* [out] */ __RPC__out WTS_USER_CREDENTIAL *pUserCreds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLicenseConnection( 
            /* [out] */ __RPC__deref_out_opt IWTSProtocolLicenseConnection **ppLicenseConnection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AuthenticateClientToSession( 
            /* [out] */ __RPC__out WTS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionId( 
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProtocolHandles( 
            /* [out] */ __RPC__out HANDLE_PTR *pKeyboardHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pMouseHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pBeepHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pVideoHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectNotify( 
            /* [in] */ ULONG SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUserAllowedToLogon( 
            /* [in] */ ULONG SessionId,
            /* [in] */ HANDLE_PTR UserToken,
            /* [string][in] */ __RPC__in_string WCHAR *pDomainName,
            /* [string][in] */ __RPC__in_string WCHAR *pUserName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SessionArbitrationEnumeration( 
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ BOOL bSingleSessionPerUserEnabled,
            /* [size_is][out] */ __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
            /* [out][in] */ __RPC__inout ULONG *pdwSessionIdentifierCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogonNotify( 
            /* [in] */ HANDLE_PTR hClientToken,
            /* [string][in] */ __RPC__in_string WCHAR *wszUserName,
            /* [string][in] */ __RPC__in_string WCHAR *wszDomainName,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserData( 
            /* [in] */ __RPC__in WTS_POLICY_DATA *pPolicyData,
            /* [out][in] */ __RPC__inout WTS_USER_DATA *pClientData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectNotify( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProtocolStatus( 
            /* [out] */ __RPC__out WTS_PROTOCOL_STATUS *pProtocolStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastInputTime( 
            /* [out] */ __RPC__out ULONG64 *pLastInputTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetErrorInfo( 
            /* [in] */ ULONG ulError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendBeep( 
            /* [in] */ ULONG Frequency,
            /* [in] */ ULONG Duration) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateVirtualChannel( 
            /* [string][in] */ __RPC__in_string CHAR *szEndpointName,
            /* [in] */ BOOL bStatic,
            /* [in] */ ULONG RequestedPriority,
            /* [out] */ __RPC__out ULONG_PTR *phChannel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryProperty( 
            /* [in] */ GUID QueryType,
            /* [in] */ ULONG ulNumEntriesIn,
            /* [in] */ ULONG ulNumEntriesOut,
            /* [size_is][optional][in] */ __RPC__in_ecount_full(ulNumEntriesIn) PWTS_PROPERTY_VALUE pPropertyEntriesIn,
            /* [size_is][optional][out] */ __RPC__out_ecount_full(ulNumEntriesOut) PWTS_PROPERTY_VALUE pPropertyEntriesOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShadowConnection( 
            /* [out] */ __RPC__deref_out_opt IWTSProtocolShadowConnection **ppShadowConnection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogonErrorRedirector )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolLogonErrorRedirector **ppLogonErrorRedir);
        
        HRESULT ( STDMETHODCALLTYPE *SendPolicyData )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ __RPC__in WTS_POLICY_DATA *pPolicyData);
        
        HRESULT ( STDMETHODCALLTYPE *AcceptConnection )( 
            __RPC__in IWTSProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClientData )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out WTS_CLIENT_DATA *pClientData);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserCredentials )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out WTS_USER_CREDENTIAL *pUserCreds);
        
        HRESULT ( STDMETHODCALLTYPE *GetLicenseConnection )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolLicenseConnection **ppLicenseConnection);
        
        HRESULT ( STDMETHODCALLTYPE *AuthenticateClientToSession )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out WTS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionId )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetProtocolHandles )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out HANDLE_PTR *pKeyboardHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pMouseHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pBeepHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pVideoHandle);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectNotify )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ ULONG SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *IsUserAllowedToLogon )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ ULONG SessionId,
            /* [in] */ HANDLE_PTR UserToken,
            /* [string][in] */ __RPC__in_string WCHAR *pDomainName,
            /* [string][in] */ __RPC__in_string WCHAR *pUserName);
        
        HRESULT ( STDMETHODCALLTYPE *SessionArbitrationEnumeration )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ BOOL bSingleSessionPerUserEnabled,
            /* [size_is][out] */ __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
            /* [out][in] */ __RPC__inout ULONG *pdwSessionIdentifierCount);
        
        HRESULT ( STDMETHODCALLTYPE *LogonNotify )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ HANDLE_PTR hClientToken,
            /* [string][in] */ __RPC__in_string WCHAR *wszUserName,
            /* [string][in] */ __RPC__in_string WCHAR *wszDomainName,
            /* [in] */ __RPC__in WTS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserData )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ __RPC__in WTS_POLICY_DATA *pPolicyData,
            /* [out][in] */ __RPC__inout WTS_USER_DATA *pClientData);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectNotify )( 
            __RPC__in IWTSProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IWTSProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProtocolStatus )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out WTS_PROTOCOL_STATUS *pProtocolStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastInputTime )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__out ULONG64 *pLastInputTime);
        
        HRESULT ( STDMETHODCALLTYPE *SetErrorInfo )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ ULONG ulError);
        
        HRESULT ( STDMETHODCALLTYPE *SendBeep )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ ULONG Frequency,
            /* [in] */ ULONG Duration);
        
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannel )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [string][in] */ __RPC__in_string CHAR *szEndpointName,
            /* [in] */ BOOL bStatic,
            /* [in] */ ULONG RequestedPriority,
            /* [out] */ __RPC__out ULONG_PTR *phChannel);
        
        HRESULT ( STDMETHODCALLTYPE *QueryProperty )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [in] */ GUID QueryType,
            /* [in] */ ULONG ulNumEntriesIn,
            /* [in] */ ULONG ulNumEntriesOut,
            /* [size_is][optional][in] */ __RPC__in_ecount_full(ulNumEntriesIn) PWTS_PROPERTY_VALUE pPropertyEntriesIn,
            /* [size_is][optional][out] */ __RPC__out_ecount_full(ulNumEntriesOut) PWTS_PROPERTY_VALUE pPropertyEntriesOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetShadowConnection )( 
            __RPC__in IWTSProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWTSProtocolShadowConnection **ppShadowConnection);
        
        END_INTERFACE
    } IWTSProtocolConnectionVtbl;

    interface IWTSProtocolConnection
    {
        CONST_VTBL struct IWTSProtocolConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolConnection_GetLogonErrorRedirector(This,ppLogonErrorRedir)	\
    ( (This)->lpVtbl -> GetLogonErrorRedirector(This,ppLogonErrorRedir) ) 

#define IWTSProtocolConnection_SendPolicyData(This,pPolicyData)	\
    ( (This)->lpVtbl -> SendPolicyData(This,pPolicyData) ) 

#define IWTSProtocolConnection_AcceptConnection(This)	\
    ( (This)->lpVtbl -> AcceptConnection(This) ) 

#define IWTSProtocolConnection_GetClientData(This,pClientData)	\
    ( (This)->lpVtbl -> GetClientData(This,pClientData) ) 

#define IWTSProtocolConnection_GetUserCredentials(This,pUserCreds)	\
    ( (This)->lpVtbl -> GetUserCredentials(This,pUserCreds) ) 

#define IWTSProtocolConnection_GetLicenseConnection(This,ppLicenseConnection)	\
    ( (This)->lpVtbl -> GetLicenseConnection(This,ppLicenseConnection) ) 

#define IWTSProtocolConnection_AuthenticateClientToSession(This,SessionId)	\
    ( (This)->lpVtbl -> AuthenticateClientToSession(This,SessionId) ) 

#define IWTSProtocolConnection_NotifySessionId(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionId(This,SessionId) ) 

#define IWTSProtocolConnection_GetProtocolHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle,pVideoHandle)	\
    ( (This)->lpVtbl -> GetProtocolHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle,pVideoHandle) ) 

#define IWTSProtocolConnection_ConnectNotify(This,SessionId)	\
    ( (This)->lpVtbl -> ConnectNotify(This,SessionId) ) 

#define IWTSProtocolConnection_IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName)	\
    ( (This)->lpVtbl -> IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) ) 

#define IWTSProtocolConnection_SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount)	\
    ( (This)->lpVtbl -> SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) ) 

#define IWTSProtocolConnection_LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId)	\
    ( (This)->lpVtbl -> LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId) ) 

#define IWTSProtocolConnection_GetUserData(This,pPolicyData,pClientData)	\
    ( (This)->lpVtbl -> GetUserData(This,pPolicyData,pClientData) ) 

#define IWTSProtocolConnection_DisconnectNotify(This)	\
    ( (This)->lpVtbl -> DisconnectNotify(This) ) 

#define IWTSProtocolConnection_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IWTSProtocolConnection_GetProtocolStatus(This,pProtocolStatus)	\
    ( (This)->lpVtbl -> GetProtocolStatus(This,pProtocolStatus) ) 

#define IWTSProtocolConnection_GetLastInputTime(This,pLastInputTime)	\
    ( (This)->lpVtbl -> GetLastInputTime(This,pLastInputTime) ) 

#define IWTSProtocolConnection_SetErrorInfo(This,ulError)	\
    ( (This)->lpVtbl -> SetErrorInfo(This,ulError) ) 

#define IWTSProtocolConnection_SendBeep(This,Frequency,Duration)	\
    ( (This)->lpVtbl -> SendBeep(This,Frequency,Duration) ) 

#define IWTSProtocolConnection_CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel)	\
    ( (This)->lpVtbl -> CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) ) 

#define IWTSProtocolConnection_QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut)	\
    ( (This)->lpVtbl -> QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) ) 

#define IWTSProtocolConnection_GetShadowConnection(This,ppShadowConnection)	\
    ( (This)->lpVtbl -> GetShadowConnection(This,ppShadowConnection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolConnection_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolConnectionCallback_INTERFACE_DEFINED__
#define __IWTSProtocolConnectionCallback_INTERFACE_DEFINED__

/* interface IWTSProtocolConnectionCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolConnectionCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23083765-75eb-41fe-b4fb-e086242afa0f")
    IWTSProtocolConnectionCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnReady( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrokenConnection( 
            /* [in] */ ULONG Reason,
            /* [in] */ ULONG Source) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopScreenUpdates( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedrawWindow( 
            /* [optional][in] */ __RPC__in WTS_SMALL_RECT *rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisplayIOCtl( 
            /* [in] */ __RPC__in WTS_DISPLAY_IOCTL *DisplayIOCtl) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolConnectionCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolConnectionCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolConnectionCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnReady )( 
            __RPC__in IWTSProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *BrokenConnection )( 
            __RPC__in IWTSProtocolConnectionCallback * This,
            /* [in] */ ULONG Reason,
            /* [in] */ ULONG Source);
        
        HRESULT ( STDMETHODCALLTYPE *StopScreenUpdates )( 
            __RPC__in IWTSProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RedrawWindow )( 
            __RPC__in IWTSProtocolConnectionCallback * This,
            /* [optional][in] */ __RPC__in WTS_SMALL_RECT *rect);
        
        HRESULT ( STDMETHODCALLTYPE *DisplayIOCtl )( 
            __RPC__in IWTSProtocolConnectionCallback * This,
            /* [in] */ __RPC__in WTS_DISPLAY_IOCTL *DisplayIOCtl);
        
        END_INTERFACE
    } IWTSProtocolConnectionCallbackVtbl;

    interface IWTSProtocolConnectionCallback
    {
        CONST_VTBL struct IWTSProtocolConnectionCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolConnectionCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolConnectionCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolConnectionCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolConnectionCallback_OnReady(This)	\
    ( (This)->lpVtbl -> OnReady(This) ) 

#define IWTSProtocolConnectionCallback_BrokenConnection(This,Reason,Source)	\
    ( (This)->lpVtbl -> BrokenConnection(This,Reason,Source) ) 

#define IWTSProtocolConnectionCallback_StopScreenUpdates(This)	\
    ( (This)->lpVtbl -> StopScreenUpdates(This) ) 

#define IWTSProtocolConnectionCallback_RedrawWindow(This,rect)	\
    ( (This)->lpVtbl -> RedrawWindow(This,rect) ) 

#define IWTSProtocolConnectionCallback_DisplayIOCtl(This,DisplayIOCtl)	\
    ( (This)->lpVtbl -> DisplayIOCtl(This,DisplayIOCtl) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolConnectionCallback_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolShadowConnection_INTERFACE_DEFINED__
#define __IWTSProtocolShadowConnection_INTERFACE_DEFINED__

/* interface IWTSProtocolShadowConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolShadowConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ee3b0c14-37fb-456b-bab3-6d6cd51e13bf")
    IWTSProtocolShadowConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( 
            /* [string][in] */ __RPC__in_string WCHAR *pTargetServerName,
            /* [in] */ DWORD TargetSessionId,
            /* [in] */ BYTE HotKeyVk,
            /* [in] */ USHORT HotkeyModifiers,
            /* [in] */ __RPC__in_opt IWTSProtocolShadowCallback *pShadowCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoTarget( 
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolShadowConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolShadowConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolShadowConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolShadowConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            __RPC__in IWTSProtocolShadowConnection * This,
            /* [string][in] */ __RPC__in_string WCHAR *pTargetServerName,
            /* [in] */ DWORD TargetSessionId,
            /* [in] */ BYTE HotKeyVk,
            /* [in] */ USHORT HotkeyModifiers,
            /* [in] */ __RPC__in_opt IWTSProtocolShadowCallback *pShadowCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            __RPC__in IWTSProtocolShadowConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoTarget )( 
            __RPC__in IWTSProtocolShadowConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName);
        
        END_INTERFACE
    } IWTSProtocolShadowConnectionVtbl;

    interface IWTSProtocolShadowConnection
    {
        CONST_VTBL struct IWTSProtocolShadowConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolShadowConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolShadowConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolShadowConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolShadowConnection_Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback)	\
    ( (This)->lpVtbl -> Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) ) 

#define IWTSProtocolShadowConnection_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IWTSProtocolShadowConnection_DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName)	\
    ( (This)->lpVtbl -> DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolShadowConnection_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolShadowCallback_INTERFACE_DEFINED__
#define __IWTSProtocolShadowCallback_INTERFACE_DEFINED__

/* interface IWTSProtocolShadowCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolShadowCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("503a2504-aae5-4ab1-93e0-6d1c4bc6f71a")
    IWTSProtocolShadowCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StopShadow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeTargetShadow( 
            /* [string][full][in] */ __RPC__in_opt_string WCHAR *pTargetServerName,
            /* [in] */ ULONG TargetSessionId,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolShadowCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolShadowCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolShadowCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolShadowCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *StopShadow )( 
            __RPC__in IWTSProtocolShadowCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeTargetShadow )( 
            __RPC__in IWTSProtocolShadowCallback * This,
            /* [string][full][in] */ __RPC__in_opt_string WCHAR *pTargetServerName,
            /* [in] */ ULONG TargetSessionId,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName);
        
        END_INTERFACE
    } IWTSProtocolShadowCallbackVtbl;

    interface IWTSProtocolShadowCallback
    {
        CONST_VTBL struct IWTSProtocolShadowCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolShadowCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolShadowCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolShadowCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolShadowCallback_StopShadow(This)	\
    ( (This)->lpVtbl -> StopShadow(This) ) 

#define IWTSProtocolShadowCallback_InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName)	\
    ( (This)->lpVtbl -> InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolShadowCallback_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolLicenseConnection_INTERFACE_DEFINED__
#define __IWTSProtocolLicenseConnection_INTERFACE_DEFINED__

/* interface IWTSProtocolLicenseConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolLicenseConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("23083765-178c-4079-8e4a-fea6496a4d70")
    IWTSProtocolLicenseConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RequestLicensingCapabilities( 
            /* [out] */ __RPC__out PWTS_LICENSE_CAPABILITIES ppLicenseCapabilities,
            /* [out][in] */ __RPC__inout ULONG *pcbLicenseCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendClientLicense( 
            /* [size_is][in] */ __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
            /* [in] */ ULONG cbClientLicense) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestClientLicense( 
            /* [size_is][in] */ __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
            /* [in] */ ULONG Reserve2,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
            /* [out][in] */ __RPC__inout ULONG *pcbClientLicense) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProtocolComplete( 
            /* [in] */ ULONG ulComplete) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolLicenseConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolLicenseConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolLicenseConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolLicenseConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *RequestLicensingCapabilities )( 
            __RPC__in IWTSProtocolLicenseConnection * This,
            /* [out] */ __RPC__out PWTS_LICENSE_CAPABILITIES ppLicenseCapabilities,
            /* [out][in] */ __RPC__inout ULONG *pcbLicenseCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *SendClientLicense )( 
            __RPC__in IWTSProtocolLicenseConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
            /* [in] */ ULONG cbClientLicense);
        
        HRESULT ( STDMETHODCALLTYPE *RequestClientLicense )( 
            __RPC__in IWTSProtocolLicenseConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
            /* [in] */ ULONG Reserve2,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
            /* [out][in] */ __RPC__inout ULONG *pcbClientLicense);
        
        HRESULT ( STDMETHODCALLTYPE *ProtocolComplete )( 
            __RPC__in IWTSProtocolLicenseConnection * This,
            /* [in] */ ULONG ulComplete);
        
        END_INTERFACE
    } IWTSProtocolLicenseConnectionVtbl;

    interface IWTSProtocolLicenseConnection
    {
        CONST_VTBL struct IWTSProtocolLicenseConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolLicenseConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolLicenseConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolLicenseConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolLicenseConnection_RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities)	\
    ( (This)->lpVtbl -> RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) ) 

#define IWTSProtocolLicenseConnection_SendClientLicense(This,pClientLicense,cbClientLicense)	\
    ( (This)->lpVtbl -> SendClientLicense(This,pClientLicense,cbClientLicense) ) 

#define IWTSProtocolLicenseConnection_RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense)	\
    ( (This)->lpVtbl -> RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) ) 

#define IWTSProtocolLicenseConnection_ProtocolComplete(This,ulComplete)	\
    ( (This)->lpVtbl -> ProtocolComplete(This,ulComplete) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolLicenseConnection_INTERFACE_DEFINED__ */


#ifndef __IWTSProtocolLogonErrorRedirector_INTERFACE_DEFINED__
#define __IWTSProtocolLogonErrorRedirector_INTERFACE_DEFINED__

/* interface IWTSProtocolLogonErrorRedirector */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWTSProtocolLogonErrorRedirector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD9B61A7-2916-4627-8DEE-4328711AD6CB")
    IWTSProtocolLogonErrorRedirector : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeginPainting( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectStatus( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectMessage( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectLogonError( 
            /* [in] */ LONG ntsStatus,
            /* [in] */ LONG ntsSubstatus,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWTSProtocolLogonErrorRedirectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeginPainting )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectStatus )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectMessage )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectLogonError )( 
            __RPC__in IWTSProtocolLogonErrorRedirector * This,
            /* [in] */ LONG ntsStatus,
            /* [in] */ LONG ntsSubstatus,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WTS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        END_INTERFACE
    } IWTSProtocolLogonErrorRedirectorVtbl;

    interface IWTSProtocolLogonErrorRedirector
    {
        CONST_VTBL struct IWTSProtocolLogonErrorRedirectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWTSProtocolLogonErrorRedirector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWTSProtocolLogonErrorRedirector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWTSProtocolLogonErrorRedirector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWTSProtocolLogonErrorRedirector_OnBeginPainting(This)	\
    ( (This)->lpVtbl -> OnBeginPainting(This) ) 

#define IWTSProtocolLogonErrorRedirector_RedirectStatus(This,pszMessage,pResponse)	\
    ( (This)->lpVtbl -> RedirectStatus(This,pszMessage,pResponse) ) 

#define IWTSProtocolLogonErrorRedirector_RedirectMessage(This,pszCaption,pszMessage,uType,pResponse)	\
    ( (This)->lpVtbl -> RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) ) 

#define IWTSProtocolLogonErrorRedirector_RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse)	\
    ( (This)->lpVtbl -> RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWTSProtocolLogonErrorRedirector_INTERFACE_DEFINED__ */


#ifndef __IWRdsRemoteFXGraphicsConnection_INTERFACE_DEFINED__
#define __IWRdsRemoteFXGraphicsConnection_INTERFACE_DEFINED__

/* interface IWRdsRemoteFXGraphicsConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsRemoteFXGraphicsConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0FAD5DCF-C6D3-423c-B097-163D6A676151")
    IWRdsRemoteFXGraphicsConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableRemoteFXGraphics( 
            /* [out] */ __RPC__out BOOL *pEnableRemoteFXGraphics) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVirtualChannelTransport( 
            /* [out] */ __RPC__deref_out_opt IUnknown **ppTransport) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsRemoteFXGraphicsConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsRemoteFXGraphicsConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsRemoteFXGraphicsConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableRemoteFXGraphics )( 
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
            /* [out] */ __RPC__out BOOL *pEnableRemoteFXGraphics);
        
        HRESULT ( STDMETHODCALLTYPE *GetVirtualChannelTransport )( 
            __RPC__in IWRdsRemoteFXGraphicsConnection * This,
            /* [out] */ __RPC__deref_out_opt IUnknown **ppTransport);
        
        END_INTERFACE
    } IWRdsRemoteFXGraphicsConnectionVtbl;

    interface IWRdsRemoteFXGraphicsConnection
    {
        CONST_VTBL struct IWRdsRemoteFXGraphicsConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsRemoteFXGraphicsConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsRemoteFXGraphicsConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsRemoteFXGraphicsConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsRemoteFXGraphicsConnection_EnableRemoteFXGraphics(This,pEnableRemoteFXGraphics)	\
    ( (This)->lpVtbl -> EnableRemoteFXGraphics(This,pEnableRemoteFXGraphics) ) 

#define IWRdsRemoteFXGraphicsConnection_GetVirtualChannelTransport(This,ppTransport)	\
    ( (This)->lpVtbl -> GetVirtualChannelTransport(This,ppTransport) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsRemoteFXGraphicsConnection_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wtsprotocol_0000_0010 */
/* [local] */ 













extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0010_v0_0_s_ifspec;

#ifndef __IWRdsProtocolSettings_INTERFACE_DEFINED__
#define __IWRdsProtocolSettings_INTERFACE_DEFINED__

/* interface IWRdsProtocolSettings */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("654A5A6A-2550-47EB-B6F7-EBD637475265")
    IWRdsProtocolSettings : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSettings( 
            /* [in] */ WRDS_SETTING_TYPE WRdsSettingType,
            /* [in] */ WRDS_SETTING_LEVEL WRdsSettingLevel,
            /* [ref][out] */ __RPC__out PWRDS_SETTINGS pWRdsSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MergeSettings( 
            /* [ref][in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings,
            /* [in] */ WRDS_CONNECTION_SETTING_LEVEL WRdsConnectionSettingLevel,
            /* [ref][out][in] */ __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolSettings * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSettings )( 
            __RPC__in IWRdsProtocolSettings * This,
            /* [in] */ WRDS_SETTING_TYPE WRdsSettingType,
            /* [in] */ WRDS_SETTING_LEVEL WRdsSettingLevel,
            /* [ref][out] */ __RPC__out PWRDS_SETTINGS pWRdsSettings);
        
        HRESULT ( STDMETHODCALLTYPE *MergeSettings )( 
            __RPC__in IWRdsProtocolSettings * This,
            /* [ref][in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings,
            /* [in] */ WRDS_CONNECTION_SETTING_LEVEL WRdsConnectionSettingLevel,
            /* [ref][out][in] */ __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings);
        
        END_INTERFACE
    } IWRdsProtocolSettingsVtbl;

    interface IWRdsProtocolSettings
    {
        CONST_VTBL struct IWRdsProtocolSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolSettings_GetSettings(This,WRdsSettingType,WRdsSettingLevel,pWRdsSettings)	\
    ( (This)->lpVtbl -> GetSettings(This,WRdsSettingType,WRdsSettingLevel,pWRdsSettings) ) 

#define IWRdsProtocolSettings_MergeSettings(This,pWRdsSettings,WRdsConnectionSettingLevel,pWRdsConnectionSettings)	\
    ( (This)->lpVtbl -> MergeSettings(This,pWRdsSettings,WRdsConnectionSettingLevel,pWRdsConnectionSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolSettings_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolManager_INTERFACE_DEFINED__
#define __IWRdsProtocolManager_INTERFACE_DEFINED__

/* interface IWRdsProtocolManager */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DC796967-3ABB-40CD-A446-105276B58950")
    IWRdsProtocolManager : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IWRdsProtocolSettings *pIWRdsSettings,
            /* [in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateListener( 
            /* [string][in] */ __RPC__in_string WCHAR *wszListenerName,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolListener **pProtocolListener) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyServiceStateChange( 
            /* [in] */ __RPC__in WRDS_SERVICE_STATE *pTSServiceStateChange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStart( 
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionOfServiceStop( 
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionStateChange( 
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySettingsChange( 
            /* [in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in_opt IWRdsProtocolSettings *pIWRdsSettings,
            /* [in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings);
        
        HRESULT ( STDMETHODCALLTYPE *CreateListener )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [string][in] */ __RPC__in_string WCHAR *wszListenerName,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolListener **pProtocolListener);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyServiceStateChange )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in WRDS_SERVICE_STATE *pTSServiceStateChange);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStart )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionOfServiceStop )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionStateChange )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [in] */ ULONG EventId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySettingsChange )( 
            __RPC__in IWRdsProtocolManager * This,
            /* [in] */ __RPC__in PWRDS_SETTINGS pWRdsSettings);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __RPC__in IWRdsProtocolManager * This);
        
        END_INTERFACE
    } IWRdsProtocolManagerVtbl;

    interface IWRdsProtocolManager
    {
        CONST_VTBL struct IWRdsProtocolManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolManager_Initialize(This,pIWRdsSettings,pWRdsSettings)	\
    ( (This)->lpVtbl -> Initialize(This,pIWRdsSettings,pWRdsSettings) ) 

#define IWRdsProtocolManager_CreateListener(This,wszListenerName,pProtocolListener)	\
    ( (This)->lpVtbl -> CreateListener(This,wszListenerName,pProtocolListener) ) 

#define IWRdsProtocolManager_NotifyServiceStateChange(This,pTSServiceStateChange)	\
    ( (This)->lpVtbl -> NotifyServiceStateChange(This,pTSServiceStateChange) ) 

#define IWRdsProtocolManager_NotifySessionOfServiceStart(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStart(This,SessionId) ) 

#define IWRdsProtocolManager_NotifySessionOfServiceStop(This,SessionId)	\
    ( (This)->lpVtbl -> NotifySessionOfServiceStop(This,SessionId) ) 

#define IWRdsProtocolManager_NotifySessionStateChange(This,SessionId,EventId)	\
    ( (This)->lpVtbl -> NotifySessionStateChange(This,SessionId,EventId) ) 

#define IWRdsProtocolManager_NotifySettingsChange(This,pWRdsSettings)	\
    ( (This)->lpVtbl -> NotifySettingsChange(This,pWRdsSettings) ) 

#define IWRdsProtocolManager_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolManager_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolListener_INTERFACE_DEFINED__
#define __IWRdsProtocolListener_INTERFACE_DEFINED__

/* interface IWRdsProtocolListener */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FCBC131B-C686-451D-A773-E279E230F540")
    IWRdsProtocolListener : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetSettings( 
            /* [in] */ WRDS_LISTENER_SETTING_LEVEL WRdsListenerSettingLevel,
            /* [ref][out] */ __RPC__out PWRDS_LISTENER_SETTINGS pWRdsListenerSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StartListen( 
            /* [in] */ __RPC__in_opt IWRdsProtocolListenerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopListen( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolListener * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetSettings )( 
            __RPC__in IWRdsProtocolListener * This,
            /* [in] */ WRDS_LISTENER_SETTING_LEVEL WRdsListenerSettingLevel,
            /* [ref][out] */ __RPC__out PWRDS_LISTENER_SETTINGS pWRdsListenerSettings);
        
        HRESULT ( STDMETHODCALLTYPE *StartListen )( 
            __RPC__in IWRdsProtocolListener * This,
            /* [in] */ __RPC__in_opt IWRdsProtocolListenerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *StopListen )( 
            __RPC__in IWRdsProtocolListener * This);
        
        END_INTERFACE
    } IWRdsProtocolListenerVtbl;

    interface IWRdsProtocolListener
    {
        CONST_VTBL struct IWRdsProtocolListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolListener_GetSettings(This,WRdsListenerSettingLevel,pWRdsListenerSettings)	\
    ( (This)->lpVtbl -> GetSettings(This,WRdsListenerSettingLevel,pWRdsListenerSettings) ) 

#define IWRdsProtocolListener_StartListen(This,pCallback)	\
    ( (This)->lpVtbl -> StartListen(This,pCallback) ) 

#define IWRdsProtocolListener_StopListen(This)	\
    ( (This)->lpVtbl -> StopListen(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolListener_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolListenerCallback_INTERFACE_DEFINED__
#define __IWRdsProtocolListenerCallback_INTERFACE_DEFINED__

/* interface IWRdsProtocolListenerCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolListenerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3AB27E5B-4449-4DC1-B74A-91621D4FE984")
    IWRdsProtocolListenerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnConnected( 
            /* [in] */ __RPC__in_opt IWRdsProtocolConnection *pConnection,
            /* [in] */ __RPC__in PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolConnectionCallback **pCallback) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolListenerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolListenerCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolListenerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolListenerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnConnected )( 
            __RPC__in IWRdsProtocolListenerCallback * This,
            /* [in] */ __RPC__in_opt IWRdsProtocolConnection *pConnection,
            /* [in] */ __RPC__in PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolConnectionCallback **pCallback);
        
        END_INTERFACE
    } IWRdsProtocolListenerCallbackVtbl;

    interface IWRdsProtocolListenerCallback
    {
        CONST_VTBL struct IWRdsProtocolListenerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolListenerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolListenerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolListenerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolListenerCallback_OnConnected(This,pConnection,pWRdsConnectionSettings,pCallback)	\
    ( (This)->lpVtbl -> OnConnected(This,pConnection,pWRdsConnectionSettings,pCallback) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolListenerCallback_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolConnection_INTERFACE_DEFINED__
#define __IWRdsProtocolConnection_INTERFACE_DEFINED__

/* interface IWRdsProtocolConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("324ED94F-FDAF-4FF6-81A8-42ABE755830B")
    IWRdsProtocolConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLogonErrorRedirector( 
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolLogonErrorRedirector **ppLogonErrorRedir) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AcceptConnection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClientData( 
            /* [out] */ __RPC__out WRDS_CLIENT_DATA *pClientData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetClientMonitorData( 
            /* [out] */ __RPC__out UINT *pNumMonitors,
            /* [out] */ __RPC__out UINT *pPrimaryMonitor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetUserCredentials( 
            /* [out] */ __RPC__out WRDS_USER_CREDENTIAL *pUserCreds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLicenseConnection( 
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolLicenseConnection **ppLicenseConnection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AuthenticateClientToSession( 
            /* [out] */ __RPC__out WRDS_SESSION_ID *SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifySessionId( 
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [in] */ HANDLE_PTR SessionHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetInputHandles( 
            /* [out] */ __RPC__out HANDLE_PTR *pKeyboardHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pMouseHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pBeepHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVideoHandle( 
            /* [out] */ __RPC__out HANDLE_PTR *pVideoHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectNotify( 
            /* [in] */ ULONG SessionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsUserAllowedToLogon( 
            /* [in] */ ULONG SessionId,
            /* [in] */ HANDLE_PTR UserToken,
            /* [string][in] */ __RPC__in_string WCHAR *pDomainName,
            /* [string][in] */ __RPC__in_string WCHAR *pUserName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SessionArbitrationEnumeration( 
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ BOOL bSingleSessionPerUserEnabled,
            /* [size_is][out] */ __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
            /* [out][in] */ __RPC__inout ULONG *pdwSessionIdentifierCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE LogonNotify( 
            /* [in] */ HANDLE_PTR hClientToken,
            /* [string][in] */ __RPC__in_string WCHAR *wszUserName,
            /* [string][in] */ __RPC__in_string WCHAR *wszDomainName,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [out][in] */ __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PreDisconnect( 
            /* [in] */ ULONG DisconnectReason) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectNotify( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProtocolStatus( 
            /* [out] */ __RPC__out WRDS_PROTOCOL_STATUS *pProtocolStatus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLastInputTime( 
            /* [out] */ __RPC__out ULONG64 *pLastInputTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetErrorInfo( 
            /* [in] */ ULONG ulError) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateVirtualChannel( 
            /* [string][in] */ __RPC__in_string CHAR *szEndpointName,
            /* [in] */ BOOL bStatic,
            /* [in] */ ULONG RequestedPriority,
            /* [out] */ __RPC__out ULONG_PTR *phChannel) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE QueryProperty( 
            /* [in] */ GUID QueryType,
            /* [in] */ ULONG ulNumEntriesIn,
            /* [in] */ ULONG ulNumEntriesOut,
            /* [size_is][optional][in] */ __RPC__in_ecount_full(ulNumEntriesIn) PWRDS_PROPERTY_VALUE pPropertyEntriesIn,
            /* [size_is][optional][out] */ __RPC__out_ecount_full(ulNumEntriesOut) PWRDS_PROPERTY_VALUE pPropertyEntriesOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetShadowConnection( 
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolShadowConnection **ppShadowConnection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyCommandProcessCreated( 
            /* [in] */ ULONG SessionId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLogonErrorRedirector )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolLogonErrorRedirector **ppLogonErrorRedir);
        
        HRESULT ( STDMETHODCALLTYPE *AcceptConnection )( 
            __RPC__in IWRdsProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetClientData )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out WRDS_CLIENT_DATA *pClientData);
        
        HRESULT ( STDMETHODCALLTYPE *GetClientMonitorData )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out UINT *pNumMonitors,
            /* [out] */ __RPC__out UINT *pPrimaryMonitor);
        
        HRESULT ( STDMETHODCALLTYPE *GetUserCredentials )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out WRDS_USER_CREDENTIAL *pUserCreds);
        
        HRESULT ( STDMETHODCALLTYPE *GetLicenseConnection )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolLicenseConnection **ppLicenseConnection);
        
        HRESULT ( STDMETHODCALLTYPE *AuthenticateClientToSession )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out WRDS_SESSION_ID *SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *NotifySessionId )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [in] */ HANDLE_PTR SessionHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GetInputHandles )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out HANDLE_PTR *pKeyboardHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pMouseHandle,
            /* [out] */ __RPC__out HANDLE_PTR *pBeepHandle);
        
        HRESULT ( STDMETHODCALLTYPE *GetVideoHandle )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out HANDLE_PTR *pVideoHandle);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectNotify )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ ULONG SessionId);
        
        HRESULT ( STDMETHODCALLTYPE *IsUserAllowedToLogon )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ ULONG SessionId,
            /* [in] */ HANDLE_PTR UserToken,
            /* [string][in] */ __RPC__in_string WCHAR *pDomainName,
            /* [string][in] */ __RPC__in_string WCHAR *pUserName);
        
        HRESULT ( STDMETHODCALLTYPE *SessionArbitrationEnumeration )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ HANDLE_PTR hUserToken,
            /* [in] */ BOOL bSingleSessionPerUserEnabled,
            /* [size_is][out] */ __RPC__out_ecount_full(*pdwSessionIdentifierCount) ULONG *pSessionIdArray,
            /* [out][in] */ __RPC__inout ULONG *pdwSessionIdentifierCount);
        
        HRESULT ( STDMETHODCALLTYPE *LogonNotify )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ HANDLE_PTR hClientToken,
            /* [string][in] */ __RPC__in_string WCHAR *wszUserName,
            /* [string][in] */ __RPC__in_string WCHAR *wszDomainName,
            /* [in] */ __RPC__in WRDS_SESSION_ID *SessionId,
            /* [out][in] */ __RPC__inout PWRDS_CONNECTION_SETTINGS pWRdsConnectionSettings);
        
        HRESULT ( STDMETHODCALLTYPE *PreDisconnect )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ ULONG DisconnectReason);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectNotify )( 
            __RPC__in IWRdsProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *Close )( 
            __RPC__in IWRdsProtocolConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetProtocolStatus )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out WRDS_PROTOCOL_STATUS *pProtocolStatus);
        
        HRESULT ( STDMETHODCALLTYPE *GetLastInputTime )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__out ULONG64 *pLastInputTime);
        
        HRESULT ( STDMETHODCALLTYPE *SetErrorInfo )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ ULONG ulError);
        
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannel )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [string][in] */ __RPC__in_string CHAR *szEndpointName,
            /* [in] */ BOOL bStatic,
            /* [in] */ ULONG RequestedPriority,
            /* [out] */ __RPC__out ULONG_PTR *phChannel);
        
        HRESULT ( STDMETHODCALLTYPE *QueryProperty )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ GUID QueryType,
            /* [in] */ ULONG ulNumEntriesIn,
            /* [in] */ ULONG ulNumEntriesOut,
            /* [size_is][optional][in] */ __RPC__in_ecount_full(ulNumEntriesIn) PWRDS_PROPERTY_VALUE pPropertyEntriesIn,
            /* [size_is][optional][out] */ __RPC__out_ecount_full(ulNumEntriesOut) PWRDS_PROPERTY_VALUE pPropertyEntriesOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetShadowConnection )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [out] */ __RPC__deref_out_opt IWRdsProtocolShadowConnection **ppShadowConnection);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyCommandProcessCreated )( 
            __RPC__in IWRdsProtocolConnection * This,
            /* [in] */ ULONG SessionId);
        
        END_INTERFACE
    } IWRdsProtocolConnectionVtbl;

    interface IWRdsProtocolConnection
    {
        CONST_VTBL struct IWRdsProtocolConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolConnection_GetLogonErrorRedirector(This,ppLogonErrorRedir)	\
    ( (This)->lpVtbl -> GetLogonErrorRedirector(This,ppLogonErrorRedir) ) 

#define IWRdsProtocolConnection_AcceptConnection(This)	\
    ( (This)->lpVtbl -> AcceptConnection(This) ) 

#define IWRdsProtocolConnection_GetClientData(This,pClientData)	\
    ( (This)->lpVtbl -> GetClientData(This,pClientData) ) 

#define IWRdsProtocolConnection_GetClientMonitorData(This,pNumMonitors,pPrimaryMonitor)	\
    ( (This)->lpVtbl -> GetClientMonitorData(This,pNumMonitors,pPrimaryMonitor) ) 

#define IWRdsProtocolConnection_GetUserCredentials(This,pUserCreds)	\
    ( (This)->lpVtbl -> GetUserCredentials(This,pUserCreds) ) 

#define IWRdsProtocolConnection_GetLicenseConnection(This,ppLicenseConnection)	\
    ( (This)->lpVtbl -> GetLicenseConnection(This,ppLicenseConnection) ) 

#define IWRdsProtocolConnection_AuthenticateClientToSession(This,SessionId)	\
    ( (This)->lpVtbl -> AuthenticateClientToSession(This,SessionId) ) 

#define IWRdsProtocolConnection_NotifySessionId(This,SessionId,SessionHandle)	\
    ( (This)->lpVtbl -> NotifySessionId(This,SessionId,SessionHandle) ) 

#define IWRdsProtocolConnection_GetInputHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle)	\
    ( (This)->lpVtbl -> GetInputHandles(This,pKeyboardHandle,pMouseHandle,pBeepHandle) ) 

#define IWRdsProtocolConnection_GetVideoHandle(This,pVideoHandle)	\
    ( (This)->lpVtbl -> GetVideoHandle(This,pVideoHandle) ) 

#define IWRdsProtocolConnection_ConnectNotify(This,SessionId)	\
    ( (This)->lpVtbl -> ConnectNotify(This,SessionId) ) 

#define IWRdsProtocolConnection_IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName)	\
    ( (This)->lpVtbl -> IsUserAllowedToLogon(This,SessionId,UserToken,pDomainName,pUserName) ) 

#define IWRdsProtocolConnection_SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount)	\
    ( (This)->lpVtbl -> SessionArbitrationEnumeration(This,hUserToken,bSingleSessionPerUserEnabled,pSessionIdArray,pdwSessionIdentifierCount) ) 

#define IWRdsProtocolConnection_LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId,pWRdsConnectionSettings)	\
    ( (This)->lpVtbl -> LogonNotify(This,hClientToken,wszUserName,wszDomainName,SessionId,pWRdsConnectionSettings) ) 

#define IWRdsProtocolConnection_PreDisconnect(This,DisconnectReason)	\
    ( (This)->lpVtbl -> PreDisconnect(This,DisconnectReason) ) 

#define IWRdsProtocolConnection_DisconnectNotify(This)	\
    ( (This)->lpVtbl -> DisconnectNotify(This) ) 

#define IWRdsProtocolConnection_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IWRdsProtocolConnection_GetProtocolStatus(This,pProtocolStatus)	\
    ( (This)->lpVtbl -> GetProtocolStatus(This,pProtocolStatus) ) 

#define IWRdsProtocolConnection_GetLastInputTime(This,pLastInputTime)	\
    ( (This)->lpVtbl -> GetLastInputTime(This,pLastInputTime) ) 

#define IWRdsProtocolConnection_SetErrorInfo(This,ulError)	\
    ( (This)->lpVtbl -> SetErrorInfo(This,ulError) ) 

#define IWRdsProtocolConnection_CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel)	\
    ( (This)->lpVtbl -> CreateVirtualChannel(This,szEndpointName,bStatic,RequestedPriority,phChannel) ) 

#define IWRdsProtocolConnection_QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut)	\
    ( (This)->lpVtbl -> QueryProperty(This,QueryType,ulNumEntriesIn,ulNumEntriesOut,pPropertyEntriesIn,pPropertyEntriesOut) ) 

#define IWRdsProtocolConnection_GetShadowConnection(This,ppShadowConnection)	\
    ( (This)->lpVtbl -> GetShadowConnection(This,ppShadowConnection) ) 

#define IWRdsProtocolConnection_NotifyCommandProcessCreated(This,SessionId)	\
    ( (This)->lpVtbl -> NotifyCommandProcessCreated(This,SessionId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolConnection_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolConnectionCallback_INTERFACE_DEFINED__
#define __IWRdsProtocolConnectionCallback_INTERFACE_DEFINED__

/* interface IWRdsProtocolConnectionCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolConnectionCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F1D70332-D070-4EF1-A088-78313536C2D6")
    IWRdsProtocolConnectionCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnReady( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BrokenConnection( 
            /* [in] */ ULONG Reason,
            /* [in] */ ULONG Source) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopScreenUpdates( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedrawWindow( 
            /* [optional][in] */ __RPC__in WRDS_SMALL_RECT *rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetConnectionId( 
            /* [out] */ __RPC__out ULONG *pConnectionId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolConnectionCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolConnectionCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolConnectionCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnReady )( 
            __RPC__in IWRdsProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *BrokenConnection )( 
            __RPC__in IWRdsProtocolConnectionCallback * This,
            /* [in] */ ULONG Reason,
            /* [in] */ ULONG Source);
        
        HRESULT ( STDMETHODCALLTYPE *StopScreenUpdates )( 
            __RPC__in IWRdsProtocolConnectionCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RedrawWindow )( 
            __RPC__in IWRdsProtocolConnectionCallback * This,
            /* [optional][in] */ __RPC__in WRDS_SMALL_RECT *rect);
        
        HRESULT ( STDMETHODCALLTYPE *GetConnectionId )( 
            __RPC__in IWRdsProtocolConnectionCallback * This,
            /* [out] */ __RPC__out ULONG *pConnectionId);
        
        END_INTERFACE
    } IWRdsProtocolConnectionCallbackVtbl;

    interface IWRdsProtocolConnectionCallback
    {
        CONST_VTBL struct IWRdsProtocolConnectionCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolConnectionCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolConnectionCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolConnectionCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolConnectionCallback_OnReady(This)	\
    ( (This)->lpVtbl -> OnReady(This) ) 

#define IWRdsProtocolConnectionCallback_BrokenConnection(This,Reason,Source)	\
    ( (This)->lpVtbl -> BrokenConnection(This,Reason,Source) ) 

#define IWRdsProtocolConnectionCallback_StopScreenUpdates(This)	\
    ( (This)->lpVtbl -> StopScreenUpdates(This) ) 

#define IWRdsProtocolConnectionCallback_RedrawWindow(This,rect)	\
    ( (This)->lpVtbl -> RedrawWindow(This,rect) ) 

#define IWRdsProtocolConnectionCallback_GetConnectionId(This,pConnectionId)	\
    ( (This)->lpVtbl -> GetConnectionId(This,pConnectionId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolConnectionCallback_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolShadowConnection_INTERFACE_DEFINED__
#define __IWRdsProtocolShadowConnection_INTERFACE_DEFINED__

/* interface IWRdsProtocolShadowConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolShadowConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9AE85CE6-CADE-4548-8FEB-99016597F60A")
    IWRdsProtocolShadowConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Start( 
            /* [string][in] */ __RPC__in_string WCHAR *pTargetServerName,
            /* [in] */ DWORD TargetSessionId,
            /* [in] */ BYTE HotKeyVk,
            /* [in] */ USHORT HotkeyModifiers,
            /* [in] */ __RPC__in_opt IWRdsProtocolShadowCallback *pShadowCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Stop( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoTarget( 
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolShadowConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolShadowConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolShadowConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolShadowConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *Start )( 
            __RPC__in IWRdsProtocolShadowConnection * This,
            /* [string][in] */ __RPC__in_string WCHAR *pTargetServerName,
            /* [in] */ DWORD TargetSessionId,
            /* [in] */ BYTE HotKeyVk,
            /* [in] */ USHORT HotkeyModifiers,
            /* [in] */ __RPC__in_opt IWRdsProtocolShadowCallback *pShadowCallback);
        
        HRESULT ( STDMETHODCALLTYPE *Stop )( 
            __RPC__in IWRdsProtocolShadowConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *DoTarget )( 
            __RPC__in IWRdsProtocolShadowConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName);
        
        END_INTERFACE
    } IWRdsProtocolShadowConnectionVtbl;

    interface IWRdsProtocolShadowConnection
    {
        CONST_VTBL struct IWRdsProtocolShadowConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolShadowConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolShadowConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolShadowConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolShadowConnection_Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback)	\
    ( (This)->lpVtbl -> Start(This,pTargetServerName,TargetSessionId,HotKeyVk,HotkeyModifiers,pShadowCallback) ) 

#define IWRdsProtocolShadowConnection_Stop(This)	\
    ( (This)->lpVtbl -> Stop(This) ) 

#define IWRdsProtocolShadowConnection_DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName)	\
    ( (This)->lpVtbl -> DoTarget(This,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolShadowConnection_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolShadowCallback_INTERFACE_DEFINED__
#define __IWRdsProtocolShadowCallback_INTERFACE_DEFINED__

/* interface IWRdsProtocolShadowCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolShadowCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E0667CE0-0372-40D6-ADB2-A0F3322674D6")
    IWRdsProtocolShadowCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StopShadow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InvokeTargetShadow( 
            /* [string][full][in] */ __RPC__in_opt_string WCHAR *pTargetServerName,
            /* [in] */ ULONG TargetSessionId,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolShadowCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolShadowCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolShadowCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolShadowCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *StopShadow )( 
            __RPC__in IWRdsProtocolShadowCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *InvokeTargetShadow )( 
            __RPC__in IWRdsProtocolShadowCallback * This,
            /* [string][full][in] */ __RPC__in_opt_string WCHAR *pTargetServerName,
            /* [in] */ ULONG TargetSessionId,
            /* [size_is][in] */ __RPC__in_ecount_full(Param1Size) PBYTE pParam1,
            /* [in] */ DWORD Param1Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param2Size) PBYTE pParam2,
            /* [in] */ DWORD Param2Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param3Size) PBYTE pParam3,
            /* [in] */ DWORD Param3Size,
            /* [size_is][in] */ __RPC__in_ecount_full(Param4Size) PBYTE pParam4,
            /* [in] */ DWORD Param4Size,
            /* [string][in] */ __RPC__in_string WCHAR *pClientName);
        
        END_INTERFACE
    } IWRdsProtocolShadowCallbackVtbl;

    interface IWRdsProtocolShadowCallback
    {
        CONST_VTBL struct IWRdsProtocolShadowCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolShadowCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolShadowCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolShadowCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolShadowCallback_StopShadow(This)	\
    ( (This)->lpVtbl -> StopShadow(This) ) 

#define IWRdsProtocolShadowCallback_InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName)	\
    ( (This)->lpVtbl -> InvokeTargetShadow(This,pTargetServerName,TargetSessionId,pParam1,Param1Size,pParam2,Param2Size,pParam3,Param3Size,pParam4,Param4Size,pClientName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolShadowCallback_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolLicenseConnection_INTERFACE_DEFINED__
#define __IWRdsProtocolLicenseConnection_INTERFACE_DEFINED__

/* interface IWRdsProtocolLicenseConnection */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolLicenseConnection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1D6A145F-D095-4424-957A-407FAE822D84")
    IWRdsProtocolLicenseConnection : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RequestLicensingCapabilities( 
            /* [out] */ __RPC__out PWRDS_LICENSE_CAPABILITIES ppLicenseCapabilities,
            /* [out][in] */ __RPC__inout ULONG *pcbLicenseCapabilities) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SendClientLicense( 
            /* [size_is][in] */ __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
            /* [in] */ ULONG cbClientLicense) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestClientLicense( 
            /* [size_is][in] */ __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
            /* [in] */ ULONG Reserve2,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
            /* [out][in] */ __RPC__inout ULONG *pcbClientLicense) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProtocolComplete( 
            /* [in] */ ULONG ulComplete) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolLicenseConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolLicenseConnection * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolLicenseConnection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolLicenseConnection * This);
        
        HRESULT ( STDMETHODCALLTYPE *RequestLicensingCapabilities )( 
            __RPC__in IWRdsProtocolLicenseConnection * This,
            /* [out] */ __RPC__out PWRDS_LICENSE_CAPABILITIES ppLicenseCapabilities,
            /* [out][in] */ __RPC__inout ULONG *pcbLicenseCapabilities);
        
        HRESULT ( STDMETHODCALLTYPE *SendClientLicense )( 
            __RPC__in IWRdsProtocolLicenseConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cbClientLicense) PBYTE pClientLicense,
            /* [in] */ ULONG cbClientLicense);
        
        HRESULT ( STDMETHODCALLTYPE *RequestClientLicense )( 
            __RPC__in IWRdsProtocolLicenseConnection * This,
            /* [size_is][in] */ __RPC__in_ecount_full(Reserve2) PBYTE Reserve1,
            /* [in] */ ULONG Reserve2,
            /* [size_is][out] */ __RPC__out_ecount_full(*pcbClientLicense) PBYTE ppClientLicense,
            /* [out][in] */ __RPC__inout ULONG *pcbClientLicense);
        
        HRESULT ( STDMETHODCALLTYPE *ProtocolComplete )( 
            __RPC__in IWRdsProtocolLicenseConnection * This,
            /* [in] */ ULONG ulComplete);
        
        END_INTERFACE
    } IWRdsProtocolLicenseConnectionVtbl;

    interface IWRdsProtocolLicenseConnection
    {
        CONST_VTBL struct IWRdsProtocolLicenseConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolLicenseConnection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolLicenseConnection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolLicenseConnection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolLicenseConnection_RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities)	\
    ( (This)->lpVtbl -> RequestLicensingCapabilities(This,ppLicenseCapabilities,pcbLicenseCapabilities) ) 

#define IWRdsProtocolLicenseConnection_SendClientLicense(This,pClientLicense,cbClientLicense)	\
    ( (This)->lpVtbl -> SendClientLicense(This,pClientLicense,cbClientLicense) ) 

#define IWRdsProtocolLicenseConnection_RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense)	\
    ( (This)->lpVtbl -> RequestClientLicense(This,Reserve1,Reserve2,ppClientLicense,pcbClientLicense) ) 

#define IWRdsProtocolLicenseConnection_ProtocolComplete(This,ulComplete)	\
    ( (This)->lpVtbl -> ProtocolComplete(This,ulComplete) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolLicenseConnection_INTERFACE_DEFINED__ */


#ifndef __IWRdsProtocolLogonErrorRedirector_INTERFACE_DEFINED__
#define __IWRdsProtocolLogonErrorRedirector_INTERFACE_DEFINED__

/* interface IWRdsProtocolLogonErrorRedirector */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IWRdsProtocolLogonErrorRedirector;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("519FE83B-142A-4120-A3D5-A405D315281A")
    IWRdsProtocolLogonErrorRedirector : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBeginPainting( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectStatus( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectMessage( 
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RedirectLogonError( 
            /* [in] */ LONG ntsStatus,
            /* [in] */ LONG ntsSubstatus,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWRdsProtocolLogonErrorRedirectorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBeginPainting )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectStatus )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectMessage )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        HRESULT ( STDMETHODCALLTYPE *RedirectLogonError )( 
            __RPC__in IWRdsProtocolLogonErrorRedirector * This,
            /* [in] */ LONG ntsStatus,
            /* [in] */ LONG ntsSubstatus,
            /* [string][in] */ __RPC__in_string LPCWSTR pszCaption,
            /* [string][in] */ __RPC__in_string LPCWSTR pszMessage,
            /* [in] */ UINT uType,
            /* [out] */ __RPC__out WRDS_LOGON_ERROR_REDIRECTOR_RESPONSE *pResponse);
        
        END_INTERFACE
    } IWRdsProtocolLogonErrorRedirectorVtbl;

    interface IWRdsProtocolLogonErrorRedirector
    {
        CONST_VTBL struct IWRdsProtocolLogonErrorRedirectorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWRdsProtocolLogonErrorRedirector_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWRdsProtocolLogonErrorRedirector_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWRdsProtocolLogonErrorRedirector_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWRdsProtocolLogonErrorRedirector_OnBeginPainting(This)	\
    ( (This)->lpVtbl -> OnBeginPainting(This) ) 

#define IWRdsProtocolLogonErrorRedirector_RedirectStatus(This,pszMessage,pResponse)	\
    ( (This)->lpVtbl -> RedirectStatus(This,pszMessage,pResponse) ) 

#define IWRdsProtocolLogonErrorRedirector_RedirectMessage(This,pszCaption,pszMessage,uType,pResponse)	\
    ( (This)->lpVtbl -> RedirectMessage(This,pszCaption,pszMessage,uType,pResponse) ) 

#define IWRdsProtocolLogonErrorRedirector_RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse)	\
    ( (This)->lpVtbl -> RedirectLogonError(This,ntsStatus,ntsSubstatus,pszCaption,pszMessage,uType,pResponse) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWRdsProtocolLogonErrorRedirector_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_wtsprotocol_0000_0020 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wtsprotocol_0000_0020_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


