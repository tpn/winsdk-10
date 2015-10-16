

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

#ifndef __btconnectionmanager_h__
#define __btconnectionmanager_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IBtRadioController_FWD_DEFINED__
#define __IBtRadioController_FWD_DEFINED__
typedef interface IBtRadioController IBtRadioController;

#endif 	/* __IBtRadioController_FWD_DEFINED__ */


#ifndef __IBtRadioControllerV2_FWD_DEFINED__
#define __IBtRadioControllerV2_FWD_DEFINED__
typedef interface IBtRadioControllerV2 IBtRadioControllerV2;

#endif 	/* __IBtRadioControllerV2_FWD_DEFINED__ */


#ifndef __IBtCommandCallback_FWD_DEFINED__
#define __IBtCommandCallback_FWD_DEFINED__
typedef interface IBtCommandCallback IBtCommandCallback;

#endif 	/* __IBtCommandCallback_FWD_DEFINED__ */


#ifndef __IBtConnectionObserver_FWD_DEFINED__
#define __IBtConnectionObserver_FWD_DEFINED__
typedef interface IBtConnectionObserver IBtConnectionObserver;

#endif 	/* __IBtConnectionObserver_FWD_DEFINED__ */


#ifndef __IBtConnectionObserverCallback_FWD_DEFINED__
#define __IBtConnectionObserverCallback_FWD_DEFINED__
typedef interface IBtConnectionObserverCallback IBtConnectionObserverCallback;

#endif 	/* __IBtConnectionObserverCallback_FWD_DEFINED__ */


#ifndef __IBtConnectionObserverCallback2_FWD_DEFINED__
#define __IBtConnectionObserverCallback2_FWD_DEFINED__
typedef interface IBtConnectionObserverCallback2 IBtConnectionObserverCallback2;

#endif 	/* __IBtConnectionObserverCallback2_FWD_DEFINED__ */


#ifndef __IBtConnectionResponder_FWD_DEFINED__
#define __IBtConnectionResponder_FWD_DEFINED__
typedef interface IBtConnectionResponder IBtConnectionResponder;

#endif 	/* __IBtConnectionResponder_FWD_DEFINED__ */


#ifndef __IBtConnectionResponderCallback_FWD_DEFINED__
#define __IBtConnectionResponderCallback_FWD_DEFINED__
typedef interface IBtConnectionResponderCallback IBtConnectionResponderCallback;

#endif 	/* __IBtConnectionResponderCallback_FWD_DEFINED__ */


#ifndef __IBtPairingRequest_FWD_DEFINED__
#define __IBtPairingRequest_FWD_DEFINED__
typedef interface IBtPairingRequest IBtPairingRequest;

#endif 	/* __IBtPairingRequest_FWD_DEFINED__ */


#ifndef __IBtPairingRequestCallback_FWD_DEFINED__
#define __IBtPairingRequestCallback_FWD_DEFINED__
typedef interface IBtPairingRequestCallback IBtPairingRequestCallback;

#endif 	/* __IBtPairingRequestCallback_FWD_DEFINED__ */


#ifndef __IBtIncomingPairingCallback_FWD_DEFINED__
#define __IBtIncomingPairingCallback_FWD_DEFINED__
typedef interface IBtIncomingPairingCallback IBtIncomingPairingCallback;

#endif 	/* __IBtIncomingPairingCallback_FWD_DEFINED__ */


#ifndef __IBtScoAudioDevice_FWD_DEFINED__
#define __IBtScoAudioDevice_FWD_DEFINED__
typedef interface IBtScoAudioDevice IBtScoAudioDevice;

#endif 	/* __IBtScoAudioDevice_FWD_DEFINED__ */


#ifndef __IBtScoAudioDeviceCallback_FWD_DEFINED__
#define __IBtScoAudioDeviceCallback_FWD_DEFINED__
typedef interface IBtScoAudioDeviceCallback IBtScoAudioDeviceCallback;

#endif 	/* __IBtScoAudioDeviceCallback_FWD_DEFINED__ */


#ifndef __IBtRegisterTrigger_FWD_DEFINED__
#define __IBtRegisterTrigger_FWD_DEFINED__
typedef interface IBtRegisterTrigger IBtRegisterTrigger;

#endif 	/* __IBtRegisterTrigger_FWD_DEFINED__ */


#ifndef __IBtRegisterTriggerCallback_FWD_DEFINED__
#define __IBtRegisterTriggerCallback_FWD_DEFINED__
typedef interface IBtRegisterTriggerCallback IBtRegisterTriggerCallback;

#endif 	/* __IBtRegisterTriggerCallback_FWD_DEFINED__ */


#ifndef __BtConnectionManager_FWD_DEFINED__
#define __BtConnectionManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class BtConnectionManager BtConnectionManager;
#else
typedef struct BtConnectionManager BtConnectionManager;
#endif /* __cplusplus */

#endif 	/* __BtConnectionManager_FWD_DEFINED__ */


#ifndef __BtConnectionManagerNoFail_FWD_DEFINED__
#define __BtConnectionManagerNoFail_FWD_DEFINED__

#ifdef __cplusplus
typedef class BtConnectionManagerNoFail BtConnectionManagerNoFail;
#else
typedef struct BtConnectionManagerNoFail BtConnectionManagerNoFail;
#endif /* __cplusplus */

#endif 	/* __BtConnectionManagerNoFail_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_btconnectionmanager_0000_0000 */
/* [local] */ 

typedef enum BLUETOOTH_RADIO_STATE BLUETOOTH_RADIO_STATE;

typedef enum INQUIRY_MODE INQUIRY_MODE;

typedef enum DISCOVERY_MODE DISCOVERY_MODE;

typedef enum BLUETOOTH_DEVICE_STATE BLUETOOTH_DEVICE_STATE;

typedef enum BLUETOOTH_CONNECTION_STATE BLUETOOTH_CONNECTION_STATE;

typedef enum BLUETOOTH_DEVICE_INTERFACE_FLAG BLUETOOTH_DEVICE_INTERFACE_FLAG;















#if NEVER
typedef 
enum AUTHENTICATION_REQUIREMENTS
    {
        x	= 0
    } 	AUTHENTICATION_REQUIREMENTS;

typedef INT_PTR MIDL_PVOID;

typedef INT_PTR MIDL_HANDLE;

typedef UINT_PTR SOCKET;

typedef ULONGLONG BTH_ADDR;

typedef struct _SOCKADDR_BTH
    {
    USHORT addressFamily;
    BTH_ADDR btAddr;
    GUID serviceClassId;
    ULONG port;
    } 	SOCKADDR_BTH;

typedef struct _SOCKADDR_BTH *PSOCKADDR_BTH;

#else
#include <BluetoothAPIs.h>
typedef void* MIDL_PVOID;
typedef HANDLE MIDL_HANDLE;
#define E_NOT_READY HRESULT_FROM_WIN32(ERROR_NOT_READY)
#define E_NOT_AUTHENTICATED HRESULT_FROM_WIN32(ERROR_NOT_AUTHENTICATED)
#endif

enum BLUETOOTH_RADIO_STATE
    {
        BRS_UNKNOWN	= 0,
        BRS_NO_HARDWARE	= ( BRS_UNKNOWN + 1 ) ,
        BRS_DISABLED	= ( BRS_NO_HARDWARE + 1 ) ,
        BRS_ENABLING	= ( BRS_DISABLED + 1 ) ,
        BRS_ENABLED	= ( BRS_ENABLING + 1 ) ,
        BRS_DISABLING	= ( BRS_ENABLED + 1 ) 
    } ;

enum INQUIRY_MODE
    {
        IM_NONE	= 0,
        IM_LIMITED	= ( IM_NONE + 1 ) ,
        IM_GENERAL	= ( IM_LIMITED + 1 ) 
    } ;

enum DISCOVERY_MODE
    {
        DM_NONE	= 0,
        DM_GENERAL	= ( DM_NONE + 1 ) ,
        DM_LIMITED	= ( DM_GENERAL + 1 ) 
    } ;

enum BLUETOOTH_DEVICE_STATE
    {
        BDS_NOT_VISIBLE	= 0,
        BDS_VISIBLE	= ( BDS_NOT_VISIBLE + 1 ) ,
        BDS_PAIRED	= ( BDS_VISIBLE + 1 ) ,
        BDS_PAIRING	= ( BDS_PAIRED + 1 ) ,
        BDS_CONNECTING	= ( BDS_PAIRING + 1 ) ,
        BDS_CONNECTED	= ( BDS_CONNECTING + 1 ) ,
        BDS_DISCONNECTING	= ( BDS_CONNECTED + 1 ) ,
        BDS_UNPAIRING	= ( BDS_DISCONNECTING + 1 ) 
    } ;

enum BLUETOOTH_CONNECTION_STATE
    {
        BCS_DISCONNECTED	= 0,
        BCS_CONNECTING	= ( BCS_DISCONNECTED + 1 ) ,
        BCS_CONNECTED	= ( BCS_CONNECTING + 1 ) ,
        BCS_DISCONNECTING	= ( BCS_CONNECTED + 1 ) 
    } ;

enum BLUETOOTH_DEVICE_INTERFACE_FLAG
    {
        BDIF_FLAG_UNKNOWN	= 0,
        BDIF_FLAG_BR	= 0x4000,
        BDIF_FLAG_LE	= 0x8000,
        BDIF_FLAG_LE_RANDOM_ADDRESS_TYPE	= 0x100000
    } ;
typedef struct _BLUETOOTH_PAIRING_OOB_DATA
    {
    DWORD dwIfFlags;
    /* [switch_is][switch_type] */ union 
        {
        /* [case()] */ UCHAR TK[ 16 ];
        /* [default] */ struct _OOB_DATA
            {
            UCHAR C[ 16 ];
            UCHAR R[ 16 ];
            } 	OOB_DATA;
        } 	;
    } 	BLUETOOTH_PAIRING_OOB_DATA;

typedef struct _BLUETOOTH_PAIRING_OOB_DATA *PBLUETOOTH_PAIRING_OOB_DATA;



extern RPC_IF_HANDLE __MIDL_itf_btconnectionmanager_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_btconnectionmanager_0000_0000_v0_0_s_ifspec;

#ifndef __IBtRadioController_INTERFACE_DEFINED__
#define __IBtRadioController_INTERFACE_DEFINED__

/* interface IBtRadioController */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtRadioController;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bb431756-4878-46c3-a8fc-ec95ff2df54d")
    IBtRadioController : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE EnableBluetoothRadio( 
            /* [in] */ BOOLEAN fEnable,
            /* [in] */ __RPC__in_opt IBtCommandCallback *pCallback,
            /* [in] */ MIDL_PVOID pvContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetInquiryMode( 
            /* [in] */ INQUIRY_MODE eMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetDiscoveryMode( 
            /* [in] */ DISCOVERY_MODE eMode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreatePairingRequest( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in_opt IBtPairingRequestCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtPairingRequest **ppPairingRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnpairDevice( 
            /* [in] */ BTH_ADDR btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectDevice( 
            /* [in] */ BTH_ADDR btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectDevice( 
            /* [in] */ BTH_ADDR btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterForIncomingPairing( 
            /* [in] */ __RPC__in_opt IBtIncomingPairingCallback *__MIDL__IBtRadioController0000) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterForIncomingPairing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateScoAudioDevice( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ UINT16 hfSupportedFeatures,
            /* [in] */ BOOLEAN fHeadset,
            /* [in] */ __RPC__in_opt IBtScoAudioDeviceCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtScoAudioDevice **ppConnection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBluetoothAddress( 
            /* [out] */ __RPC__out BTH_ADDR *btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SynchronousShutdown( 
            DWORD dwTimeout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtRadioControllerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtRadioController * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtRadioController * This);
        
        HRESULT ( STDMETHODCALLTYPE *EnableBluetoothRadio )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BOOLEAN fEnable,
            /* [in] */ __RPC__in_opt IBtCommandCallback *pCallback,
            /* [in] */ MIDL_PVOID pvContext);
        
        HRESULT ( STDMETHODCALLTYPE *SetInquiryMode )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ INQUIRY_MODE eMode);
        
        HRESULT ( STDMETHODCALLTYPE *SetDiscoveryMode )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ DISCOVERY_MODE eMode);
        
        HRESULT ( STDMETHODCALLTYPE *CreatePairingRequest )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in_opt IBtPairingRequestCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtPairingRequest **ppPairingRequest);
        
        HRESULT ( STDMETHODCALLTYPE *UnpairDevice )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BTH_ADDR btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectDevice )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BTH_ADDR btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectDevice )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BTH_ADDR btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterForIncomingPairing )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ __RPC__in_opt IBtIncomingPairingCallback *__MIDL__IBtRadioController0000);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterForIncomingPairing )( 
            __RPC__in IBtRadioController * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateScoAudioDevice )( 
            __RPC__in IBtRadioController * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ UINT16 hfSupportedFeatures,
            /* [in] */ BOOLEAN fHeadset,
            /* [in] */ __RPC__in_opt IBtScoAudioDeviceCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtScoAudioDevice **ppConnection);
        
        HRESULT ( STDMETHODCALLTYPE *GetBluetoothAddress )( 
            __RPC__in IBtRadioController * This,
            /* [out] */ __RPC__out BTH_ADDR *btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __RPC__in IBtRadioController * This);
        
        HRESULT ( STDMETHODCALLTYPE *SynchronousShutdown )( 
            __RPC__in IBtRadioController * This,
            DWORD dwTimeout);
        
        END_INTERFACE
    } IBtRadioControllerVtbl;

    interface IBtRadioController
    {
        CONST_VTBL struct IBtRadioControllerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtRadioController_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtRadioController_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtRadioController_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtRadioController_EnableBluetoothRadio(This,fEnable,pCallback,pvContext)	\
    ( (This)->lpVtbl -> EnableBluetoothRadio(This,fEnable,pCallback,pvContext) ) 

#define IBtRadioController_SetInquiryMode(This,eMode)	\
    ( (This)->lpVtbl -> SetInquiryMode(This,eMode) ) 

#define IBtRadioController_SetDiscoveryMode(This,eMode)	\
    ( (This)->lpVtbl -> SetDiscoveryMode(This,eMode) ) 

#define IBtRadioController_CreatePairingRequest(This,btAddr,pCallback,ppPairingRequest)	\
    ( (This)->lpVtbl -> CreatePairingRequest(This,btAddr,pCallback,ppPairingRequest) ) 

#define IBtRadioController_UnpairDevice(This,btAddr)	\
    ( (This)->lpVtbl -> UnpairDevice(This,btAddr) ) 

#define IBtRadioController_ConnectDevice(This,btAddr)	\
    ( (This)->lpVtbl -> ConnectDevice(This,btAddr) ) 

#define IBtRadioController_DisconnectDevice(This,btAddr)	\
    ( (This)->lpVtbl -> DisconnectDevice(This,btAddr) ) 

#define IBtRadioController_RegisterForIncomingPairing(This,__MIDL__IBtRadioController0000)	\
    ( (This)->lpVtbl -> RegisterForIncomingPairing(This,__MIDL__IBtRadioController0000) ) 

#define IBtRadioController_UnregisterForIncomingPairing(This)	\
    ( (This)->lpVtbl -> UnregisterForIncomingPairing(This) ) 

#define IBtRadioController_CreateScoAudioDevice(This,btAddr,hfSupportedFeatures,fHeadset,pCallback,ppConnection)	\
    ( (This)->lpVtbl -> CreateScoAudioDevice(This,btAddr,hfSupportedFeatures,fHeadset,pCallback,ppConnection) ) 

#define IBtRadioController_GetBluetoothAddress(This,btAddr)	\
    ( (This)->lpVtbl -> GetBluetoothAddress(This,btAddr) ) 

#define IBtRadioController_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define IBtRadioController_SynchronousShutdown(This,dwTimeout)	\
    ( (This)->lpVtbl -> SynchronousShutdown(This,dwTimeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtRadioController_INTERFACE_DEFINED__ */


#ifndef __IBtRadioControllerV2_INTERFACE_DEFINED__
#define __IBtRadioControllerV2_INTERFACE_DEFINED__

/* interface IBtRadioControllerV2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtRadioControllerV2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD650A7D-78F9-4800-AE38-068181784B93")
    IBtRadioControllerV2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateScoAudioDevice( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ UINT16 hfSupportedFeatures,
            /* [in] */ BOOLEAN fHeadset,
            /* [in] */ __RPC__in_opt IBtScoAudioDeviceCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtScoAudioDevice **ppConnection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBluetoothAddress( 
            /* [out] */ __RPC__out BTH_ADDR *btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SynchronousShutdown( 
            DWORD dwTimeout) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtRadioControllerV2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtRadioControllerV2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtRadioControllerV2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtRadioControllerV2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateScoAudioDevice )( 
            __RPC__in IBtRadioControllerV2 * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ UINT16 hfSupportedFeatures,
            /* [in] */ BOOLEAN fHeadset,
            /* [in] */ __RPC__in_opt IBtScoAudioDeviceCallback *pCallback,
            /* [out] */ __RPC__deref_out_opt IBtScoAudioDevice **ppConnection);
        
        HRESULT ( STDMETHODCALLTYPE *GetBluetoothAddress )( 
            __RPC__in IBtRadioControllerV2 * This,
            /* [out] */ __RPC__out BTH_ADDR *btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __RPC__in IBtRadioControllerV2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SynchronousShutdown )( 
            __RPC__in IBtRadioControllerV2 * This,
            DWORD dwTimeout);
        
        END_INTERFACE
    } IBtRadioControllerV2Vtbl;

    interface IBtRadioControllerV2
    {
        CONST_VTBL struct IBtRadioControllerV2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtRadioControllerV2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtRadioControllerV2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtRadioControllerV2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtRadioControllerV2_CreateScoAudioDevice(This,btAddr,hfSupportedFeatures,fHeadset,pCallback,ppConnection)	\
    ( (This)->lpVtbl -> CreateScoAudioDevice(This,btAddr,hfSupportedFeatures,fHeadset,pCallback,ppConnection) ) 

#define IBtRadioControllerV2_GetBluetoothAddress(This,btAddr)	\
    ( (This)->lpVtbl -> GetBluetoothAddress(This,btAddr) ) 

#define IBtRadioControllerV2_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#define IBtRadioControllerV2_SynchronousShutdown(This,dwTimeout)	\
    ( (This)->lpVtbl -> SynchronousShutdown(This,dwTimeout) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtRadioControllerV2_INTERFACE_DEFINED__ */


#ifndef __IBtCommandCallback_INTERFACE_DEFINED__
#define __IBtCommandCallback_INTERFACE_DEFINED__

/* interface IBtCommandCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtCommandCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0eba760c-c48d-4811-b4c4-8ce879b201b1")
    IBtCommandCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CommandCompleted( 
            /* [in] */ MIDL_PVOID pvContext,
            /* [in] */ HRESULT hrError) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtCommandCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtCommandCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtCommandCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtCommandCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *CommandCompleted )( 
            __RPC__in IBtCommandCallback * This,
            /* [in] */ MIDL_PVOID pvContext,
            /* [in] */ HRESULT hrError);
        
        END_INTERFACE
    } IBtCommandCallbackVtbl;

    interface IBtCommandCallback
    {
        CONST_VTBL struct IBtCommandCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtCommandCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtCommandCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtCommandCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtCommandCallback_CommandCompleted(This,pvContext,hrError)	\
    ( (This)->lpVtbl -> CommandCompleted(This,pvContext,hrError) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtCommandCallback_INTERFACE_DEFINED__ */


#ifndef __IBtConnectionObserver_INTERFACE_DEFINED__
#define __IBtConnectionObserver_INTERFACE_DEFINED__

/* interface IBtConnectionObserver */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtConnectionObserver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83c91970-1d3d-48e3-859f-436eb34f34fd")
    IBtConnectionObserver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterCallback( 
            /* [in] */ __RPC__in_opt IBtConnectionObserverCallback *pCallback,
            /* [out] */ __RPC__out INT_PTR *pRegistrationHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCallback( 
            /* [in] */ INT_PTR registrationHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtConnectionObserverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtConnectionObserver * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtConnectionObserver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtConnectionObserver * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            __RPC__in IBtConnectionObserver * This,
            /* [in] */ __RPC__in_opt IBtConnectionObserverCallback *pCallback,
            /* [out] */ __RPC__out INT_PTR *pRegistrationHandle);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterCallback )( 
            __RPC__in IBtConnectionObserver * This,
            /* [in] */ INT_PTR registrationHandle);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __RPC__in IBtConnectionObserver * This);
        
        END_INTERFACE
    } IBtConnectionObserverVtbl;

    interface IBtConnectionObserver
    {
        CONST_VTBL struct IBtConnectionObserverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtConnectionObserver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtConnectionObserver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtConnectionObserver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtConnectionObserver_RegisterCallback(This,pCallback,pRegistrationHandle)	\
    ( (This)->lpVtbl -> RegisterCallback(This,pCallback,pRegistrationHandle) ) 

#define IBtConnectionObserver_UnregisterCallback(This,registrationHandle)	\
    ( (This)->lpVtbl -> UnregisterCallback(This,registrationHandle) ) 

#define IBtConnectionObserver_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtConnectionObserver_INTERFACE_DEFINED__ */


#ifndef __IBtConnectionObserverCallback_INTERFACE_DEFINED__
#define __IBtConnectionObserverCallback_INTERFACE_DEFINED__

/* interface IBtConnectionObserverCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtConnectionObserverCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3d6da6ca-8b2d-4c38-bbd9-7b2c53105423")
    IBtConnectionObserverCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RadioStateChanged( 
            /* [in] */ BLUETOOTH_RADIO_STATE state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RemoteDeviceChanged( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ BLUETOOTH_DEVICE_STATE eState,
            /* [in] */ DWORD dwClassOfDevice,
            /* [in] */ __RPC__in LPCWSTR wszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProfileConnectionChanged( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializationComplete( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtConnectionObserverCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtConnectionObserverCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtConnectionObserverCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtConnectionObserverCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RadioStateChanged )( 
            __RPC__in IBtConnectionObserverCallback * This,
            /* [in] */ BLUETOOTH_RADIO_STATE state);
        
        HRESULT ( STDMETHODCALLTYPE *RemoteDeviceChanged )( 
            __RPC__in IBtConnectionObserverCallback * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ BLUETOOTH_DEVICE_STATE eState,
            /* [in] */ DWORD dwClassOfDevice,
            /* [in] */ __RPC__in LPCWSTR wszName);
        
        HRESULT ( STDMETHODCALLTYPE *ProfileConnectionChanged )( 
            __RPC__in IBtConnectionObserverCallback * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState);
        
        HRESULT ( STDMETHODCALLTYPE *InitializationComplete )( 
            __RPC__in IBtConnectionObserverCallback * This);
        
        END_INTERFACE
    } IBtConnectionObserverCallbackVtbl;

    interface IBtConnectionObserverCallback
    {
        CONST_VTBL struct IBtConnectionObserverCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtConnectionObserverCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtConnectionObserverCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtConnectionObserverCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtConnectionObserverCallback_RadioStateChanged(This,state)	\
    ( (This)->lpVtbl -> RadioStateChanged(This,state) ) 

#define IBtConnectionObserverCallback_RemoteDeviceChanged(This,btAddr,eState,dwClassOfDevice,wszName)	\
    ( (This)->lpVtbl -> RemoteDeviceChanged(This,btAddr,eState,dwClassOfDevice,wszName) ) 

#define IBtConnectionObserverCallback_ProfileConnectionChanged(This,btAddr,guidProfile,eState)	\
    ( (This)->lpVtbl -> ProfileConnectionChanged(This,btAddr,guidProfile,eState) ) 

#define IBtConnectionObserverCallback_InitializationComplete(This)	\
    ( (This)->lpVtbl -> InitializationComplete(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtConnectionObserverCallback_INTERFACE_DEFINED__ */


#ifndef __IBtConnectionObserverCallback2_INTERFACE_DEFINED__
#define __IBtConnectionObserverCallback2_INTERFACE_DEFINED__

/* interface IBtConnectionObserverCallback2 */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtConnectionObserverCallback2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("cbbc9044-eed8-49bd-bd3a-887ad84ac3f5")
    IBtConnectionObserverCallback2 : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SignalStrengthChanged( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iSignalStrength) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AdvertisingDataChanged( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ unsigned int cbData,
            /* [in] */ __RPC__in const BYTE *pbData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtConnectionObserverCallback2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtConnectionObserverCallback2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtConnectionObserverCallback2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtConnectionObserverCallback2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SignalStrengthChanged )( 
            __RPC__in IBtConnectionObserverCallback2 * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iSignalStrength);
        
        HRESULT ( STDMETHODCALLTYPE *AdvertisingDataChanged )( 
            __RPC__in IBtConnectionObserverCallback2 * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ unsigned int cbData,
            /* [in] */ __RPC__in const BYTE *pbData);
        
        END_INTERFACE
    } IBtConnectionObserverCallback2Vtbl;

    interface IBtConnectionObserverCallback2
    {
        CONST_VTBL struct IBtConnectionObserverCallback2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtConnectionObserverCallback2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtConnectionObserverCallback2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtConnectionObserverCallback2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtConnectionObserverCallback2_SignalStrengthChanged(This,btAddr,iSignalStrength)	\
    ( (This)->lpVtbl -> SignalStrengthChanged(This,btAddr,iSignalStrength) ) 

#define IBtConnectionObserverCallback2_AdvertisingDataChanged(This,btAddr,cbData,pbData)	\
    ( (This)->lpVtbl -> AdvertisingDataChanged(This,btAddr,cbData,pbData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtConnectionObserverCallback2_INTERFACE_DEFINED__ */


#ifndef __IBtConnectionResponder_INTERFACE_DEFINED__
#define __IBtConnectionResponder_INTERFACE_DEFINED__

/* interface IBtConnectionResponder */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtConnectionResponder;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4d1ac687-509c-48f7-a7bb-fe2b83a9c7dc")
    IBtConnectionResponder : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterCallback( 
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ __RPC__in_opt IBtConnectionResponderCallback *pCallback,
            /* [out] */ __RPC__out INT_PTR *pRegistrationHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterCallback( 
            /* [in] */ INT_PTR registrationHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProfileState( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectProfileToDevice( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ __RPC__in_opt IBtCommandCallback *pCallback,
            /* [in] */ MIDL_PVOID pvContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Shutdown( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtConnectionResponderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtConnectionResponder * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtConnectionResponder * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtConnectionResponder * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterCallback )( 
            __RPC__in IBtConnectionResponder * This,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ __RPC__in_opt IBtConnectionResponderCallback *pCallback,
            /* [out] */ __RPC__out INT_PTR *pRegistrationHandle);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterCallback )( 
            __RPC__in IBtConnectionResponder * This,
            /* [in] */ INT_PTR registrationHandle);
        
        HRESULT ( STDMETHODCALLTYPE *SetProfileState )( 
            __RPC__in IBtConnectionResponder * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectProfileToDevice )( 
            __RPC__in IBtConnectionResponder * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ __RPC__in REFGUID guidProfile,
            /* [in] */ __RPC__in_opt IBtCommandCallback *pCallback,
            /* [in] */ MIDL_PVOID pvContext);
        
        HRESULT ( STDMETHODCALLTYPE *Shutdown )( 
            __RPC__in IBtConnectionResponder * This);
        
        END_INTERFACE
    } IBtConnectionResponderVtbl;

    interface IBtConnectionResponder
    {
        CONST_VTBL struct IBtConnectionResponderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtConnectionResponder_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtConnectionResponder_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtConnectionResponder_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtConnectionResponder_RegisterCallback(This,guidProfile,pCallback,pRegistrationHandle)	\
    ( (This)->lpVtbl -> RegisterCallback(This,guidProfile,pCallback,pRegistrationHandle) ) 

#define IBtConnectionResponder_UnregisterCallback(This,registrationHandle)	\
    ( (This)->lpVtbl -> UnregisterCallback(This,registrationHandle) ) 

#define IBtConnectionResponder_SetProfileState(This,btAddr,guidProfile,eState)	\
    ( (This)->lpVtbl -> SetProfileState(This,btAddr,guidProfile,eState) ) 

#define IBtConnectionResponder_ConnectProfileToDevice(This,btAddr,guidProfile,pCallback,pvContext)	\
    ( (This)->lpVtbl -> ConnectProfileToDevice(This,btAddr,guidProfile,pCallback,pvContext) ) 

#define IBtConnectionResponder_Shutdown(This)	\
    ( (This)->lpVtbl -> Shutdown(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtConnectionResponder_INTERFACE_DEFINED__ */


#ifndef __IBtConnectionResponderCallback_INTERFACE_DEFINED__
#define __IBtConnectionResponderCallback_INTERFACE_DEFINED__

/* interface IBtConnectionResponderCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtConnectionResponderCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eb794a01-e173-4d1e-9cd4-2037cdb529e3")
    IBtConnectionResponderCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AcceptRfcommConnection( 
            /* [in] */ SOCKET socket,
            /* [in] */ __RPC__in const SOCKADDR_BTH *pRemoteAddr,
            /* [in] */ __RPC__in const WCHAR *remoteDeviceName,
            /* [in] */ BOOLEAN fIncoming) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AcceptL2CapConnection( 
            /* [in] */ MIDL_HANDLE handle,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int psm,
            /* [in] */ int outgoingMtu,
            /* [in] */ int incomingMtu,
            /* [in] */ BOOLEAN fIncoming) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectConnection( 
            /* [in] */ BTH_ADDR btAddr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtConnectionResponderCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtConnectionResponderCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtConnectionResponderCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtConnectionResponderCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *AcceptRfcommConnection )( 
            __RPC__in IBtConnectionResponderCallback * This,
            /* [in] */ SOCKET socket,
            /* [in] */ __RPC__in const SOCKADDR_BTH *pRemoteAddr,
            /* [in] */ __RPC__in const WCHAR *remoteDeviceName,
            /* [in] */ BOOLEAN fIncoming);
        
        HRESULT ( STDMETHODCALLTYPE *AcceptL2CapConnection )( 
            __RPC__in IBtConnectionResponderCallback * This,
            /* [in] */ MIDL_HANDLE handle,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int psm,
            /* [in] */ int outgoingMtu,
            /* [in] */ int incomingMtu,
            /* [in] */ BOOLEAN fIncoming);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectConnection )( 
            __RPC__in IBtConnectionResponderCallback * This,
            /* [in] */ BTH_ADDR btAddr);
        
        END_INTERFACE
    } IBtConnectionResponderCallbackVtbl;

    interface IBtConnectionResponderCallback
    {
        CONST_VTBL struct IBtConnectionResponderCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtConnectionResponderCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtConnectionResponderCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtConnectionResponderCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtConnectionResponderCallback_AcceptRfcommConnection(This,socket,pRemoteAddr,remoteDeviceName,fIncoming)	\
    ( (This)->lpVtbl -> AcceptRfcommConnection(This,socket,pRemoteAddr,remoteDeviceName,fIncoming) ) 

#define IBtConnectionResponderCallback_AcceptL2CapConnection(This,handle,btAddr,psm,outgoingMtu,incomingMtu,fIncoming)	\
    ( (This)->lpVtbl -> AcceptL2CapConnection(This,handle,btAddr,psm,outgoingMtu,incomingMtu,fIncoming) ) 

#define IBtConnectionResponderCallback_DisconnectConnection(This,btAddr)	\
    ( (This)->lpVtbl -> DisconnectConnection(This,btAddr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtConnectionResponderCallback_INTERFACE_DEFINED__ */


#ifndef __IBtPairingRequest_INTERFACE_DEFINED__
#define __IBtPairingRequest_INTERFACE_DEFINED__

/* interface IBtPairingRequest */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtPairingRequest;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eb7c310f-c408-43fe-98e6-4b9bae958c41")
    IBtPairingRequest : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartPairing( 
            /* [in] */ AUTHENTICATION_REQUIREMENTS eRequirements,
            /* [in] */ __RPC__in BLUETOOTH_PAIRING_OOB_DATA *pOobData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPin( 
            /* [in] */ int cbPin,
            /* [in] */ __RPC__in BYTE *pbPin) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AcceptPairing( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE FailAuthentication( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtPairingRequestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtPairingRequest * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtPairingRequest * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtPairingRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartPairing )( 
            __RPC__in IBtPairingRequest * This,
            /* [in] */ AUTHENTICATION_REQUIREMENTS eRequirements,
            /* [in] */ __RPC__in BLUETOOTH_PAIRING_OOB_DATA *pOobData);
        
        HRESULT ( STDMETHODCALLTYPE *SetPin )( 
            __RPC__in IBtPairingRequest * This,
            /* [in] */ int cbPin,
            /* [in] */ __RPC__in BYTE *pbPin);
        
        HRESULT ( STDMETHODCALLTYPE *AcceptPairing )( 
            __RPC__in IBtPairingRequest * This);
        
        HRESULT ( STDMETHODCALLTYPE *FailAuthentication )( 
            __RPC__in IBtPairingRequest * This);
        
        END_INTERFACE
    } IBtPairingRequestVtbl;

    interface IBtPairingRequest
    {
        CONST_VTBL struct IBtPairingRequestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtPairingRequest_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtPairingRequest_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtPairingRequest_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtPairingRequest_StartPairing(This,eRequirements,pOobData)	\
    ( (This)->lpVtbl -> StartPairing(This,eRequirements,pOobData) ) 

#define IBtPairingRequest_SetPin(This,cbPin,pbPin)	\
    ( (This)->lpVtbl -> SetPin(This,cbPin,pbPin) ) 

#define IBtPairingRequest_AcceptPairing(This)	\
    ( (This)->lpVtbl -> AcceptPairing(This) ) 

#define IBtPairingRequest_FailAuthentication(This)	\
    ( (This)->lpVtbl -> FailAuthentication(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtPairingRequest_INTERFACE_DEFINED__ */


#ifndef __IBtPairingRequestCallback_INTERFACE_DEFINED__
#define __IBtPairingRequestCallback_INTERFACE_DEFINED__

/* interface IBtPairingRequestCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtPairingRequestCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("263d4058-d9aa-42d6-8efe-da3ab89ec514")
    IBtPairingRequestCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPin( 
            /* [in] */ BTH_ADDR btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowPasskey( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int cbPasskey,
            /* [in] */ __RPC__in BYTE *pbPasskey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareNumber( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OutgoingPairingCompleted( 
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ HRESULT hr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtPairingRequestCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtPairingRequestCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtPairingRequestCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtPairingRequestCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPin )( 
            __RPC__in IBtPairingRequestCallback * This,
            /* [in] */ BTH_ADDR btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *ShowPasskey )( 
            __RPC__in IBtPairingRequestCallback * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int cbPasskey,
            /* [in] */ __RPC__in BYTE *pbPasskey);
        
        HRESULT ( STDMETHODCALLTYPE *CompareNumber )( 
            __RPC__in IBtPairingRequestCallback * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iNumber);
        
        HRESULT ( STDMETHODCALLTYPE *OutgoingPairingCompleted )( 
            __RPC__in IBtPairingRequestCallback * This,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ HRESULT hr);
        
        END_INTERFACE
    } IBtPairingRequestCallbackVtbl;

    interface IBtPairingRequestCallback
    {
        CONST_VTBL struct IBtPairingRequestCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtPairingRequestCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtPairingRequestCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtPairingRequestCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtPairingRequestCallback_GetPin(This,btAddr)	\
    ( (This)->lpVtbl -> GetPin(This,btAddr) ) 

#define IBtPairingRequestCallback_ShowPasskey(This,btAddr,cbPasskey,pbPasskey)	\
    ( (This)->lpVtbl -> ShowPasskey(This,btAddr,cbPasskey,pbPasskey) ) 

#define IBtPairingRequestCallback_CompareNumber(This,btAddr,iNumber)	\
    ( (This)->lpVtbl -> CompareNumber(This,btAddr,iNumber) ) 

#define IBtPairingRequestCallback_OutgoingPairingCompleted(This,btAddr,hr)	\
    ( (This)->lpVtbl -> OutgoingPairingCompleted(This,btAddr,hr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtPairingRequestCallback_INTERFACE_DEFINED__ */


#ifndef __IBtIncomingPairingCallback_INTERFACE_DEFINED__
#define __IBtIncomingPairingCallback_INTERFACE_DEFINED__

/* interface IBtIncomingPairingCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtIncomingPairingCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("22ed687a-b533-4479-9462-8a464ba11ebf")
    IBtIncomingPairingCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPin( 
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowPasskey( 
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int cbPasskey,
            /* [in] */ __RPC__in BYTE *pbPasskey) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CompareNumber( 
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iNumber) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IncomingJustWorks( 
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtIncomingPairingCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtIncomingPairingCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtIncomingPairingCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtIncomingPairingCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPin )( 
            __RPC__in IBtIncomingPairingCallback * This,
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr);
        
        HRESULT ( STDMETHODCALLTYPE *ShowPasskey )( 
            __RPC__in IBtIncomingPairingCallback * This,
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int cbPasskey,
            /* [in] */ __RPC__in BYTE *pbPasskey);
        
        HRESULT ( STDMETHODCALLTYPE *CompareNumber )( 
            __RPC__in IBtIncomingPairingCallback * This,
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr,
            /* [in] */ int iNumber);
        
        HRESULT ( STDMETHODCALLTYPE *IncomingJustWorks )( 
            __RPC__in IBtIncomingPairingCallback * This,
            /* [in] */ __RPC__in_opt IBtPairingRequest *pRequest,
            /* [in] */ BTH_ADDR btAddr);
        
        END_INTERFACE
    } IBtIncomingPairingCallbackVtbl;

    interface IBtIncomingPairingCallback
    {
        CONST_VTBL struct IBtIncomingPairingCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtIncomingPairingCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtIncomingPairingCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtIncomingPairingCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtIncomingPairingCallback_GetPin(This,pRequest,btAddr)	\
    ( (This)->lpVtbl -> GetPin(This,pRequest,btAddr) ) 

#define IBtIncomingPairingCallback_ShowPasskey(This,pRequest,btAddr,cbPasskey,pbPasskey)	\
    ( (This)->lpVtbl -> ShowPasskey(This,pRequest,btAddr,cbPasskey,pbPasskey) ) 

#define IBtIncomingPairingCallback_CompareNumber(This,pRequest,btAddr,iNumber)	\
    ( (This)->lpVtbl -> CompareNumber(This,pRequest,btAddr,iNumber) ) 

#define IBtIncomingPairingCallback_IncomingJustWorks(This,pRequest,btAddr)	\
    ( (This)->lpVtbl -> IncomingJustWorks(This,pRequest,btAddr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtIncomingPairingCallback_INTERFACE_DEFINED__ */


#ifndef __IBtScoAudioDevice_INTERFACE_DEFINED__
#define __IBtScoAudioDevice_INTERFACE_DEFINED__

/* interface IBtScoAudioDevice */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtScoAudioDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d5d68018-3e53-4e0f-947d-4c8133b0e4f1")
    IBtScoAudioDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BOOLEAN fWidebandAudio) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetControllerSupportedCodecId( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCodecId( 
            /* [in] */ int codecId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNRECDisable( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AllowScoConnection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ForbidScoConnection( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ConnectSco( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisconnectSco( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioConnected( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAudioDisconnected( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangeSpeakerVolume( 
            /* [in] */ int iNewVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ChangeMicrophoneVolume( 
            /* [in] */ int iNewVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DestroyDevice( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtScoAudioDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtScoAudioDevice * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtScoAudioDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IBtScoAudioDevice * This,
            /* [in] */ BOOLEAN fWidebandAudio);
        
        HRESULT ( STDMETHODCALLTYPE *GetControllerSupportedCodecId )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetCodecId )( 
            __RPC__in IBtScoAudioDevice * This,
            /* [in] */ int codecId);
        
        HRESULT ( STDMETHODCALLTYPE *SetNRECDisable )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *AllowScoConnection )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *ForbidScoConnection )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *ConnectSco )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *DisconnectSco )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioConnected )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetAudioDisconnected )( 
            __RPC__in IBtScoAudioDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeSpeakerVolume )( 
            __RPC__in IBtScoAudioDevice * This,
            /* [in] */ int iNewVolume);
        
        HRESULT ( STDMETHODCALLTYPE *ChangeMicrophoneVolume )( 
            __RPC__in IBtScoAudioDevice * This,
            /* [in] */ int iNewVolume);
        
        HRESULT ( STDMETHODCALLTYPE *DestroyDevice )( 
            __RPC__in IBtScoAudioDevice * This);
        
        END_INTERFACE
    } IBtScoAudioDeviceVtbl;

    interface IBtScoAudioDevice
    {
        CONST_VTBL struct IBtScoAudioDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtScoAudioDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtScoAudioDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtScoAudioDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtScoAudioDevice_Initialize(This,fWidebandAudio)	\
    ( (This)->lpVtbl -> Initialize(This,fWidebandAudio) ) 

#define IBtScoAudioDevice_GetControllerSupportedCodecId(This)	\
    ( (This)->lpVtbl -> GetControllerSupportedCodecId(This) ) 

#define IBtScoAudioDevice_SetCodecId(This,codecId)	\
    ( (This)->lpVtbl -> SetCodecId(This,codecId) ) 

#define IBtScoAudioDevice_SetNRECDisable(This)	\
    ( (This)->lpVtbl -> SetNRECDisable(This) ) 

#define IBtScoAudioDevice_AllowScoConnection(This)	\
    ( (This)->lpVtbl -> AllowScoConnection(This) ) 

#define IBtScoAudioDevice_ForbidScoConnection(This)	\
    ( (This)->lpVtbl -> ForbidScoConnection(This) ) 

#define IBtScoAudioDevice_ConnectSco(This)	\
    ( (This)->lpVtbl -> ConnectSco(This) ) 

#define IBtScoAudioDevice_DisconnectSco(This)	\
    ( (This)->lpVtbl -> DisconnectSco(This) ) 

#define IBtScoAudioDevice_SetAudioConnected(This)	\
    ( (This)->lpVtbl -> SetAudioConnected(This) ) 

#define IBtScoAudioDevice_SetAudioDisconnected(This)	\
    ( (This)->lpVtbl -> SetAudioDisconnected(This) ) 

#define IBtScoAudioDevice_ChangeSpeakerVolume(This,iNewVolume)	\
    ( (This)->lpVtbl -> ChangeSpeakerVolume(This,iNewVolume) ) 

#define IBtScoAudioDevice_ChangeMicrophoneVolume(This,iNewVolume)	\
    ( (This)->lpVtbl -> ChangeMicrophoneVolume(This,iNewVolume) ) 

#define IBtScoAudioDevice_DestroyDevice(This)	\
    ( (This)->lpVtbl -> DestroyDevice(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtScoAudioDevice_INTERFACE_DEFINED__ */


#ifndef __IBtScoAudioDeviceCallback_INTERFACE_DEFINED__
#define __IBtScoAudioDeviceCallback_INTERFACE_DEFINED__

/* interface IBtScoAudioDeviceCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtScoAudioDeviceCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d9291d8e-b135-4e9f-85cd-2356c3b878f5")
    IBtScoAudioDeviceCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ScoConnectionChanged( 
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState,
            /* [in] */ BOOLEAN fIncoming) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestAudioConnect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestAudioDisconnect( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestChangeSpeakerVolume( 
            /* [in] */ int iNewVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestChangeMicrophoneVolume( 
            /* [in] */ int iNewVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RequestCodecId( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReceiveControllerSupportedCodecId( 
            /* [in] */ MIDL_PVOID pvSupportedCodecId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtScoAudioDeviceCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtScoAudioDeviceCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtScoAudioDeviceCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtScoAudioDeviceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScoConnectionChanged )( 
            __RPC__in IBtScoAudioDeviceCallback * This,
            /* [in] */ BLUETOOTH_CONNECTION_STATE eState,
            /* [in] */ BOOLEAN fIncoming);
        
        HRESULT ( STDMETHODCALLTYPE *RequestAudioConnect )( 
            __RPC__in IBtScoAudioDeviceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RequestAudioDisconnect )( 
            __RPC__in IBtScoAudioDeviceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RequestChangeSpeakerVolume )( 
            __RPC__in IBtScoAudioDeviceCallback * This,
            /* [in] */ int iNewVolume);
        
        HRESULT ( STDMETHODCALLTYPE *RequestChangeMicrophoneVolume )( 
            __RPC__in IBtScoAudioDeviceCallback * This,
            /* [in] */ int iNewVolume);
        
        HRESULT ( STDMETHODCALLTYPE *RequestCodecId )( 
            __RPC__in IBtScoAudioDeviceCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *ReceiveControllerSupportedCodecId )( 
            __RPC__in IBtScoAudioDeviceCallback * This,
            /* [in] */ MIDL_PVOID pvSupportedCodecId);
        
        END_INTERFACE
    } IBtScoAudioDeviceCallbackVtbl;

    interface IBtScoAudioDeviceCallback
    {
        CONST_VTBL struct IBtScoAudioDeviceCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtScoAudioDeviceCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtScoAudioDeviceCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtScoAudioDeviceCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtScoAudioDeviceCallback_ScoConnectionChanged(This,eState,fIncoming)	\
    ( (This)->lpVtbl -> ScoConnectionChanged(This,eState,fIncoming) ) 

#define IBtScoAudioDeviceCallback_RequestAudioConnect(This)	\
    ( (This)->lpVtbl -> RequestAudioConnect(This) ) 

#define IBtScoAudioDeviceCallback_RequestAudioDisconnect(This)	\
    ( (This)->lpVtbl -> RequestAudioDisconnect(This) ) 

#define IBtScoAudioDeviceCallback_RequestChangeSpeakerVolume(This,iNewVolume)	\
    ( (This)->lpVtbl -> RequestChangeSpeakerVolume(This,iNewVolume) ) 

#define IBtScoAudioDeviceCallback_RequestChangeMicrophoneVolume(This,iNewVolume)	\
    ( (This)->lpVtbl -> RequestChangeMicrophoneVolume(This,iNewVolume) ) 

#define IBtScoAudioDeviceCallback_RequestCodecId(This)	\
    ( (This)->lpVtbl -> RequestCodecId(This) ) 

#define IBtScoAudioDeviceCallback_ReceiveControllerSupportedCodecId(This,pvSupportedCodecId)	\
    ( (This)->lpVtbl -> ReceiveControllerSupportedCodecId(This,pvSupportedCodecId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtScoAudioDeviceCallback_INTERFACE_DEFINED__ */


#ifndef __IBtRegisterTrigger_INTERFACE_DEFINED__
#define __IBtRegisterTrigger_INTERFACE_DEFINED__

/* interface IBtRegisterTrigger */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtRegisterTrigger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3799db18-fdfa-4010-8aca-1d643246db97")
    IBtRegisterTrigger : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegisterRfcommTriggerAsync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ __RPC__in REFGUID guidRemoteService,
            /* [in] */ __RPC__in REFGUID guidLocalService,
            /* [in] */ unsigned int uiCodFlags,
            /* [in] */ BOOLEAN fSingleConnection,
            /* [in] */ BOOLEAN fEncrypt,
            /* [in] */ BOOLEAN fAuthenticate,
            /* [in] */ unsigned int cbSdpRecord,
            /* [in] */ __RPC__in const BYTE *rgbSdpRecord,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterRfcommTriggerSync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ __RPC__in REFGUID guidRemoteService,
            /* [in] */ __RPC__in REFGUID guidLocalService,
            /* [in] */ unsigned int uiCodFlags,
            /* [in] */ BOOLEAN fSingleConnection,
            /* [in] */ BOOLEAN fEncrypt,
            /* [in] */ BOOLEAN fAuthenticate,
            /* [in] */ unsigned int cbSdpRecord,
            /* [in] */ __RPC__in const BYTE *rgbSdpRecord,
            /* [out] */ __RPC__out GUID *pguidTaskId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterDeviceConnectionChangeTriggerAsync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ BOOLEAN fIsLE,
            /* [in] */ BOOLEAN fMaintainConnection,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterDeviceConnectionChangeTriggerSync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ BOOLEAN fIsLE,
            /* [in] */ BOOLEAN fMaintainConnection,
            /* [out] */ __RPC__out GUID *pguidTaskId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterRssiTriggerAsync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ int iMinimumRssi,
            /* [in] */ int iMaximumRssi,
            /* [in] */ unsigned int uiRecognitionTime,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterRssiTriggerSync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ int iMinimumRssi,
            /* [in] */ int iMaximumRssi,
            /* [in] */ unsigned int uiRecognitionTime,
            /* [out] */ __RPC__out GUID *pguidTaskId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCharacteristicTriggerAsync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ unsigned short hService,
            /* [in] */ unsigned short hCharacteristic,
            /* [in] */ unsigned short hValue,
            /* [in] */ int cIncludedService,
            /* [size_is][in] */ __RPC__in_ecount_full(cIncludedService) unsigned short *hIncludedService,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterCharacteristicTriggerSync( 
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ unsigned short hService,
            /* [in] */ unsigned short hCharacteristic,
            /* [in] */ unsigned short hValue,
            /* [in] */ int cIncludedService,
            /* [size_is][in] */ __RPC__in_ecount_full(cIncludedService) unsigned short *hIncludedService,
            /* [out] */ __RPC__out GUID *pguidTaskId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UnregisterTrigger( 
            /* [in] */ GUID guidEventId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtRegisterTriggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtRegisterTrigger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtRegisterTrigger * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRfcommTriggerAsync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ __RPC__in REFGUID guidRemoteService,
            /* [in] */ __RPC__in REFGUID guidLocalService,
            /* [in] */ unsigned int uiCodFlags,
            /* [in] */ BOOLEAN fSingleConnection,
            /* [in] */ BOOLEAN fEncrypt,
            /* [in] */ BOOLEAN fAuthenticate,
            /* [in] */ unsigned int cbSdpRecord,
            /* [in] */ __RPC__in const BYTE *rgbSdpRecord,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRfcommTriggerSync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ __RPC__in REFGUID guidRemoteService,
            /* [in] */ __RPC__in REFGUID guidLocalService,
            /* [in] */ unsigned int uiCodFlags,
            /* [in] */ BOOLEAN fSingleConnection,
            /* [in] */ BOOLEAN fEncrypt,
            /* [in] */ BOOLEAN fAuthenticate,
            /* [in] */ unsigned int cbSdpRecord,
            /* [in] */ __RPC__in const BYTE *rgbSdpRecord,
            /* [out] */ __RPC__out GUID *pguidTaskId);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceConnectionChangeTriggerAsync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ BOOLEAN fIsLE,
            /* [in] */ BOOLEAN fMaintainConnection,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceConnectionChangeTriggerSync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ BOOLEAN fIsLE,
            /* [in] */ BOOLEAN fMaintainConnection,
            /* [out] */ __RPC__out GUID *pguidTaskId);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRssiTriggerAsync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ int iMinimumRssi,
            /* [in] */ int iMaximumRssi,
            /* [in] */ unsigned int uiRecognitionTime,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterRssiTriggerSync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ int iMinimumRssi,
            /* [in] */ int iMaximumRssi,
            /* [in] */ unsigned int uiRecognitionTime,
            /* [out] */ __RPC__out GUID *pguidTaskId);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterCharacteristicTriggerAsync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ unsigned short hService,
            /* [in] */ unsigned short hCharacteristic,
            /* [in] */ unsigned short hValue,
            /* [in] */ int cIncludedService,
            /* [size_is][in] */ __RPC__in_ecount_full(cIncludedService) unsigned short *hIncludedService,
            /* [in] */ __RPC__in_opt IBtRegisterTriggerCallback *pCallback);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterCharacteristicTriggerSync )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ BTH_ADDR bthAddr,
            /* [in] */ unsigned short hService,
            /* [in] */ unsigned short hCharacteristic,
            /* [in] */ unsigned short hValue,
            /* [in] */ int cIncludedService,
            /* [size_is][in] */ __RPC__in_ecount_full(cIncludedService) unsigned short *hIncludedService,
            /* [out] */ __RPC__out GUID *pguidTaskId);
        
        HRESULT ( STDMETHODCALLTYPE *UnregisterTrigger )( 
            __RPC__in IBtRegisterTrigger * This,
            /* [in] */ GUID guidEventId);
        
        END_INTERFACE
    } IBtRegisterTriggerVtbl;

    interface IBtRegisterTrigger
    {
        CONST_VTBL struct IBtRegisterTriggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtRegisterTrigger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtRegisterTrigger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtRegisterTrigger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtRegisterTrigger_RegisterRfcommTriggerAsync(This,bthAddr,guidRemoteService,guidLocalService,uiCodFlags,fSingleConnection,fEncrypt,fAuthenticate,cbSdpRecord,rgbSdpRecord,pCallback)	\
    ( (This)->lpVtbl -> RegisterRfcommTriggerAsync(This,bthAddr,guidRemoteService,guidLocalService,uiCodFlags,fSingleConnection,fEncrypt,fAuthenticate,cbSdpRecord,rgbSdpRecord,pCallback) ) 

#define IBtRegisterTrigger_RegisterRfcommTriggerSync(This,bthAddr,guidRemoteService,guidLocalService,uiCodFlags,fSingleConnection,fEncrypt,fAuthenticate,cbSdpRecord,rgbSdpRecord,pguidTaskId)	\
    ( (This)->lpVtbl -> RegisterRfcommTriggerSync(This,bthAddr,guidRemoteService,guidLocalService,uiCodFlags,fSingleConnection,fEncrypt,fAuthenticate,cbSdpRecord,rgbSdpRecord,pguidTaskId) ) 

#define IBtRegisterTrigger_RegisterDeviceConnectionChangeTriggerAsync(This,bthAddr,fIsLE,fMaintainConnection,pCallback)	\
    ( (This)->lpVtbl -> RegisterDeviceConnectionChangeTriggerAsync(This,bthAddr,fIsLE,fMaintainConnection,pCallback) ) 

#define IBtRegisterTrigger_RegisterDeviceConnectionChangeTriggerSync(This,bthAddr,fIsLE,fMaintainConnection,pguidTaskId)	\
    ( (This)->lpVtbl -> RegisterDeviceConnectionChangeTriggerSync(This,bthAddr,fIsLE,fMaintainConnection,pguidTaskId) ) 

#define IBtRegisterTrigger_RegisterRssiTriggerAsync(This,bthAddr,iMinimumRssi,iMaximumRssi,uiRecognitionTime,pCallback)	\
    ( (This)->lpVtbl -> RegisterRssiTriggerAsync(This,bthAddr,iMinimumRssi,iMaximumRssi,uiRecognitionTime,pCallback) ) 

#define IBtRegisterTrigger_RegisterRssiTriggerSync(This,bthAddr,iMinimumRssi,iMaximumRssi,uiRecognitionTime,pguidTaskId)	\
    ( (This)->lpVtbl -> RegisterRssiTriggerSync(This,bthAddr,iMinimumRssi,iMaximumRssi,uiRecognitionTime,pguidTaskId) ) 

#define IBtRegisterTrigger_RegisterCharacteristicTriggerAsync(This,bthAddr,hService,hCharacteristic,hValue,cIncludedService,hIncludedService,pCallback)	\
    ( (This)->lpVtbl -> RegisterCharacteristicTriggerAsync(This,bthAddr,hService,hCharacteristic,hValue,cIncludedService,hIncludedService,pCallback) ) 

#define IBtRegisterTrigger_RegisterCharacteristicTriggerSync(This,bthAddr,hService,hCharacteristic,hValue,cIncludedService,hIncludedService,pguidTaskId)	\
    ( (This)->lpVtbl -> RegisterCharacteristicTriggerSync(This,bthAddr,hService,hCharacteristic,hValue,cIncludedService,hIncludedService,pguidTaskId) ) 

#define IBtRegisterTrigger_UnregisterTrigger(This,guidEventId)	\
    ( (This)->lpVtbl -> UnregisterTrigger(This,guidEventId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtRegisterTrigger_INTERFACE_DEFINED__ */


#ifndef __IBtRegisterTriggerCallback_INTERFACE_DEFINED__
#define __IBtRegisterTriggerCallback_INTERFACE_DEFINED__

/* interface IBtRegisterTriggerCallback */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IBtRegisterTriggerCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e21a1912-8e69-472b-aed6-95c0aeb4afcf")
    IBtRegisterTriggerCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RegistrationCompleted( 
            /* [in] */ HRESULT hrRegister,
            /* [in] */ __RPC__in REFGUID guidTaskId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IBtRegisterTriggerCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IBtRegisterTriggerCallback * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IBtRegisterTriggerCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IBtRegisterTriggerCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *RegistrationCompleted )( 
            __RPC__in IBtRegisterTriggerCallback * This,
            /* [in] */ HRESULT hrRegister,
            /* [in] */ __RPC__in REFGUID guidTaskId);
        
        END_INTERFACE
    } IBtRegisterTriggerCallbackVtbl;

    interface IBtRegisterTriggerCallback
    {
        CONST_VTBL struct IBtRegisterTriggerCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBtRegisterTriggerCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IBtRegisterTriggerCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IBtRegisterTriggerCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IBtRegisterTriggerCallback_RegistrationCompleted(This,hrRegister,guidTaskId)	\
    ( (This)->lpVtbl -> RegistrationCompleted(This,hrRegister,guidTaskId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IBtRegisterTriggerCallback_INTERFACE_DEFINED__ */



#ifndef __BtConnectionManager_LIBRARY_DEFINED__
#define __BtConnectionManager_LIBRARY_DEFINED__

/* library BtConnectionManager */
/* [uuid] */ 


EXTERN_C const IID LIBID_BtConnectionManager;

EXTERN_C const CLSID CLSID_BtConnectionManager;

#ifdef __cplusplus

class DECLSPEC_UUID("101c5b9f-c6f7-41c4-815b-69aac1eca0a9")
BtConnectionManager;
#endif

EXTERN_C const CLSID CLSID_BtConnectionManagerNoFail;

#ifdef __cplusplus

class DECLSPEC_UUID("5da1f24d-44b1-4b67-b1fa-605df25f0ad7")
BtConnectionManagerNoFail;
#endif
#endif /* __BtConnectionManager_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_btconnectionmanager_0000_0016 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#pragma deprecated(IBtRadioController) // Please use IBtRadioControllerV2 and the appropriate domain specific Apis for the remaining functionality.
#pragma deprecated(IBtPairingRequest) // Please use Device Association Framework Apis.
#pragma deprecated(IBtPairingRequestCallback) // Please use Device Association Framework Apis.
#pragma deprecated(IBtIncomingPairingCallback) // Please use Device Association Framework Apis.
#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)


extern RPC_IF_HANDLE __MIDL_itf_btconnectionmanager_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_btconnectionmanager_0000_0016_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


