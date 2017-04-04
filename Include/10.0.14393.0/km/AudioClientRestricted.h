

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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __audioclientrestricted_h__
#define __audioclientrestricted_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IMMRestrictedActivator_FWD_DEFINED__
#define __IMMRestrictedActivator_FWD_DEFINED__
typedef interface IMMRestrictedActivator IMMRestrictedActivator;

#endif 	/* __IMMRestrictedActivator_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "mmdeviceapi.h"
#include "audioclient.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_audioclientrestricted_0000_0000 */
/* [local] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_audioclientrestricted_0000_0000_0001
    {
        RestrictedAudioCategory_Speech	= 0,
        RestrictedAudioCategory_AudioCapture	= ( RestrictedAudioCategory_Speech + 1 ) ,
        RestrictedAudioCategory_AudioCaptureMovie	= ( RestrictedAudioCategory_AudioCapture + 1 ) ,
        RestrictedAudioCategory_PushToTalk	= ( RestrictedAudioCategory_AudioCaptureMovie + 1 ) ,
        RestrictedAudioCategory_enum_count	= ( RestrictedAudioCategory_PushToTalk + 1 ) 
    } 	RESTRICTED_AUDIO_STREAM_CATEGORY;



extern RPC_IF_HANDLE __MIDL_itf_audioclientrestricted_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclientrestricted_0000_0000_v0_0_s_ifspec;

#ifndef __IMMRestrictedActivator_INTERFACE_DEFINED__
#define __IMMRestrictedActivator_INTERFACE_DEFINED__

/* interface IMMRestrictedActivator */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IMMRestrictedActivator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E566E98C-A0F6-4f9f-A723-939A13ECF133")
    IMMRestrictedActivator : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ActivateAudioClient( 
            /* [annotation][in] */ 
            __in  EDataFlow dataFlow,
            /* [annotation][in] */ 
            __in  RESTRICTED_AUDIO_STREAM_CATEGORY category,
            /* [annotation][out] */ 
            __out  IAudioClient2 **ppClient) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMMRestrictedActivatorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMMRestrictedActivator * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMMRestrictedActivator * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMMRestrictedActivator * This);
        
        HRESULT ( STDMETHODCALLTYPE *ActivateAudioClient )( 
            IMMRestrictedActivator * This,
            /* [annotation][in] */ 
            __in  EDataFlow dataFlow,
            /* [annotation][in] */ 
            __in  RESTRICTED_AUDIO_STREAM_CATEGORY category,
            /* [annotation][out] */ 
            __out  IAudioClient2 **ppClient);
        
        END_INTERFACE
    } IMMRestrictedActivatorVtbl;

    interface IMMRestrictedActivator
    {
        CONST_VTBL struct IMMRestrictedActivatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMMRestrictedActivator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMMRestrictedActivator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMMRestrictedActivator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMMRestrictedActivator_ActivateAudioClient(This,dataFlow,category,ppClient)	\
    ( (This)->lpVtbl -> ActivateAudioClient(This,dataFlow,category,ppClient) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMMRestrictedActivator_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


