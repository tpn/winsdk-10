

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

#ifndef __applicationactivation_h__
#define __applicationactivation_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IApplicationActivationPhone_FWD_DEFINED__
#define __IApplicationActivationPhone_FWD_DEFINED__
typedef interface IApplicationActivationPhone IApplicationActivationPhone;

#endif 	/* __IApplicationActivationPhone_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "unknwn.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_applicationactivation_0000_0000 */
/* [local] */ 

//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
#include <ApplicationActivationClient.h>

// DO NOT USE THIS CLSID, USE CLSID_ApplicationActivationClient instead, this would be removed
#define CLSID_ApplicationActivation CLSID_ApplicationActivationClient

typedef /* [v1_enum] */ 
enum ActivationType
    {
        Launch	= 0,
        LaunchWithTile	= ( Launch + 1 ) ,
        LaunchChild	= ( LaunchWithTile + 1 ) ,
        AppointmentsProviderInternal_ShowTimeFrame	= ( LaunchChild + 1 ) ,
        AppointmentsProviderInternal_ShowAppointmentDetails	= ( AppointmentsProviderInternal_ShowTimeFrame + 1 ) ,
        AppointmentsProviderInternal_AddAppointment	= ( AppointmentsProviderInternal_ShowAppointmentDetails + 1 ) ,
        AppointmentsProviderInternal_RemoveAppointment	= ( AppointmentsProviderInternal_AddAppointment + 1 ) ,
        AppointmentsProviderInternal_ReplaceAppointment	= ( AppointmentsProviderInternal_RemoveAppointment + 1 ) ,
        AppointmentsProviderInternal_ChooseCalendarForView	= ( AppointmentsProviderInternal_ReplaceAppointment + 1 ) ,
        AppointmentDetails	= ( AppointmentsProviderInternal_ChooseCalendarForView + 1 ) ,
        VoiceCommand	= ( AppointmentDetails + 1 ) ,
        WalletAction	= ( VoiceCommand + 1 ) ,
        PersonalAssistantLaunch	= ( WalletAction + 1 ) ,
        Max	= ( PersonalAssistantLaunch + 1 ) 
    } 	ActivationType;

DEFINE_GUID(IID_IApplicationActivationPhone, 0xdfcaacc1, 0x90d6, 0x4b33, 0xb4, 0x37, 0xe2, 0x9d, 0x4c, 0xfa, 0xd8, 0xa6);


extern RPC_IF_HANDLE __MIDL_itf_applicationactivation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_applicationactivation_0000_0000_v0_0_s_ifspec;

#ifndef __IApplicationActivationPhone_INTERFACE_DEFINED__
#define __IApplicationActivationPhone_INTERFACE_DEFINED__

/* interface IApplicationActivationPhone */
/* [uuid][object] */ 


EXTERN_C const IID IID_IApplicationActivationPhone;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DFCAACC1-90D6-4B33-B437-E29D4CFAD8A6")
    IApplicationActivationPhone : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetActivationInfo( 
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  ActivationType activationType) = 0;
        
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE SetActivationInfoEx( 
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  ActivationType activationType,
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

    typedef struct IApplicationActivationPhoneVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IApplicationActivationPhone * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IApplicationActivationPhone * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IApplicationActivationPhone * This);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetActivationInfo )( 
            IApplicationActivationPhone * This,
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  ActivationType activationType);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *SetActivationInfoEx )( 
            IApplicationActivationPhone * This,
            /* [annotation][in] */ 
            _In_  DWORD dwWindowId,
            /* [annotation][in] */ 
            _In_  ActivationType activationType,
            /* [annotation][in] */ 
            _In_z_count_(dwNumArguments)  LPCWSTR *ppszArguments,
            /* [annotation][in] */ 
            _In_  DWORD dwNumArguments);
        
        /* [propget][local] */ HRESULT ( STDMETHODCALLTYPE *get_CompletedEvent )( 
            IApplicationActivationPhone * This,
            /* [retval][out] */ HANDLE *hValue);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *GetReturnData )( 
            IApplicationActivationPhone * This,
            /* [annotation][out] */ 
            _Out_  HRESULT *phrResult,
            /* [annotation][out] */ 
            _Outptr_result_bytebuffer_(*pdwSize)  BYTE **ppbData,
            /* [annotation][out] */ 
            _Out_  DWORD *pdwSize);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *ActivateApplicationAsync )( 
            IApplicationActivationPhone * This,
            /* [annotation][in] */ 
            _In_  LPCWSTR pszAppUserModelId,
            /* [annotation][in] */ 
            _In_opt_  LPCWSTR pszArguments,
            /* [annotation][in] */ 
            _In_  ACTIVATEOPTIONS options);
        
        END_INTERFACE
    } IApplicationActivationPhoneVtbl;

    interface IApplicationActivationPhone
    {
        CONST_VTBL struct IApplicationActivationPhoneVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IApplicationActivationPhone_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IApplicationActivationPhone_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IApplicationActivationPhone_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IApplicationActivationPhone_SetActivationInfo(This,dwWindowId,activationType)	\
    ( (This)->lpVtbl -> SetActivationInfo(This,dwWindowId,activationType) ) 

#define IApplicationActivationPhone_SetActivationInfoEx(This,dwWindowId,activationType,ppszArguments,dwNumArguments)	\
    ( (This)->lpVtbl -> SetActivationInfoEx(This,dwWindowId,activationType,ppszArguments,dwNumArguments) ) 

#define IApplicationActivationPhone_get_CompletedEvent(This,hValue)	\
    ( (This)->lpVtbl -> get_CompletedEvent(This,hValue) ) 

#define IApplicationActivationPhone_GetReturnData(This,phrResult,ppbData,pdwSize)	\
    ( (This)->lpVtbl -> GetReturnData(This,phrResult,ppbData,pdwSize) ) 

#define IApplicationActivationPhone_ActivateApplicationAsync(This,pszAppUserModelId,pszArguments,options)	\
    ( (This)->lpVtbl -> ActivateApplicationAsync(This,pszAppUserModelId,pszArguments,options) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IApplicationActivationPhone_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


