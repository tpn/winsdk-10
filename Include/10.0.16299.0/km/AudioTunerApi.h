

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

#ifndef __audiotunerapi_h__
#define __audiotunerapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAudioTuner_FWD_DEFINED__
#define __IAudioTuner_FWD_DEFINED__
typedef interface IAudioTuner IAudioTuner;

#endif 	/* __IAudioTuner_FWD_DEFINED__ */


#ifndef __IFmReceiver_FWD_DEFINED__
#define __IFmReceiver_FWD_DEFINED__
typedef interface IFmReceiver IFmReceiver;

#endif 	/* __IFmReceiver_FWD_DEFINED__ */


#ifndef __IRdsCapture_FWD_DEFINED__
#define __IRdsCapture_FWD_DEFINED__
typedef interface IRdsCapture IRdsCapture;

#endif 	/* __IRdsCapture_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "AvApi.h"
#include "AudioTunerDef.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_audiotunerapi_0000_0000 */
/* [local] */ 

#include <AudioTunerProp.h>




DEFINE_GUID(IID_IAudioTuner, 0x5e708e9f, 0x8500, 0x41ca, 0x85, 0xbc, 0x53, 0xed, 0x26, 0x91, 0xd5, 0xc7);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0000_v0_0_s_ifspec;

#ifndef __IAudioTuner_INTERFACE_DEFINED__
#define __IAudioTuner_INTERFACE_DEFINED__

/* interface IAudioTuner */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IAudioTuner;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5E708E9F-8500-41ca-85BC-53ED2691D5C7")
    IAudioTuner : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPowerState( 
            /* [out] */ PTUNER_POWERSTATE pPowerState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSetPowerState( 
            /* [in] */ TUNER_POWERSTATE PowerState,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSetPowerState( 
            /* [in] */ IAvAsyncResult *pAsyncResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ LONG *plVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVolume( 
            /* [in] */ LONG lVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][out] */ void *pvPropData,
            /* [in] */ DWORD cbPropData,
            /* [optional][out] */ LPDWORD pcbReturn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][in] */ const void *pvPropData,
            /* [in] */ DWORD cbPropData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Subscribe( 
            /* [in] */ AV_EVENTCALLBACK pfnAvEventCallback,
            /* [optional][in] */ IUnknown *pUnkContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Unsubscribe( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAudioTunerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAudioTuner * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAudioTuner * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAudioTuner * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerState )( 
            IAudioTuner * This,
            /* [out] */ PTUNER_POWERSTATE pPowerState);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSetPowerState )( 
            IAudioTuner * This,
            /* [in] */ TUNER_POWERSTATE PowerState,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndSetPowerState )( 
            IAudioTuner * This,
            /* [in] */ IAvAsyncResult *pAsyncResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IAudioTuner * This,
            /* [out] */ LONG *plVolume);
        
        HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            IAudioTuner * This,
            /* [in] */ LONG lVolume);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IAudioTuner * This,
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][out] */ void *pvPropData,
            /* [in] */ DWORD cbPropData,
            /* [optional][out] */ LPDWORD pcbReturn);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IAudioTuner * This,
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][in] */ const void *pvPropData,
            /* [in] */ DWORD cbPropData);
        
        HRESULT ( STDMETHODCALLTYPE *Subscribe )( 
            IAudioTuner * This,
            /* [in] */ AV_EVENTCALLBACK pfnAvEventCallback,
            /* [optional][in] */ IUnknown *pUnkContext);
        
        HRESULT ( STDMETHODCALLTYPE *Unsubscribe )( 
            IAudioTuner * This);
        
        END_INTERFACE
    } IAudioTunerVtbl;

    interface IAudioTuner
    {
        CONST_VTBL struct IAudioTunerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAudioTuner_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAudioTuner_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAudioTuner_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAudioTuner_GetPowerState(This,pPowerState)	\
    ( (This)->lpVtbl -> GetPowerState(This,pPowerState) ) 

#define IAudioTuner_BeginSetPowerState(This,PowerState,pfnAsyncCallback,pUnkContext)	\
    ( (This)->lpVtbl -> BeginSetPowerState(This,PowerState,pfnAsyncCallback,pUnkContext) ) 

#define IAudioTuner_EndSetPowerState(This,pAsyncResult)	\
    ( (This)->lpVtbl -> EndSetPowerState(This,pAsyncResult) ) 

#define IAudioTuner_GetVolume(This,plVolume)	\
    ( (This)->lpVtbl -> GetVolume(This,plVolume) ) 

#define IAudioTuner_SetVolume(This,lVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,lVolume) ) 

#define IAudioTuner_GetProperty(This,rguidPropId,pvPropData,cbPropData,pcbReturn)	\
    ( (This)->lpVtbl -> GetProperty(This,rguidPropId,pvPropData,cbPropData,pcbReturn) ) 

#define IAudioTuner_SetProperty(This,rguidPropId,pvPropData,cbPropData)	\
    ( (This)->lpVtbl -> SetProperty(This,rguidPropId,pvPropData,cbPropData) ) 

#define IAudioTuner_Subscribe(This,pfnAvEventCallback,pUnkContext)	\
    ( (This)->lpVtbl -> Subscribe(This,pfnAvEventCallback,pUnkContext) ) 

#define IAudioTuner_Unsubscribe(This)	\
    ( (This)->lpVtbl -> Unsubscribe(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAudioTuner_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerapi_0000_0001 */
/* [local] */ 

DEFINE_GUID(IID_IFmReceiver, 0x42c0c635, 0xec96, 0x40ac, 0x95, 0x3e, 0x4f, 0xf7, 0x22, 0xed, 0xf, 0xff);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0001_v0_0_s_ifspec;

#ifndef __IFmReceiver_INTERFACE_DEFINED__
#define __IFmReceiver_INTERFACE_DEFINED__

/* interface IFmReceiver */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IFmReceiver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("42C0C635-EC96-40ac-953E-4FF722ED0FFF")
    IFmReceiver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetRegion( 
            /* [out] */ LONG *plRegionId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSetRegion( 
            /* [in] */ LONG lRegionId,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSetRegion( 
            /* [in] */ IAvAsyncResult *pAsyncResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetRegionRange( 
            /* [in] */ LONG lRegionId,
            /* [out] */ FM_REGIONRANGE *pRegionRange) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginTune( 
            /* [in] */ FM_FREQUENCY Frequency,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndTune( 
            /* [in] */ IAvAsyncResult *pAsyncResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTunedFrequency( 
            /* [out] */ PFM_FREQUENCY pFrequency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE BeginSeek( 
            /* [in] */ FM_SEEKDIR SeekDir,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EndSeek( 
            /* [in] */ IAvAsyncResult *pAsyncResult) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelSeek( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFmReceiverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFmReceiver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFmReceiver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFmReceiver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegion )( 
            IFmReceiver * This,
            /* [out] */ LONG *plRegionId);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSetRegion )( 
            IFmReceiver * This,
            /* [in] */ LONG lRegionId,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndSetRegion )( 
            IFmReceiver * This,
            /* [in] */ IAvAsyncResult *pAsyncResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetRegionRange )( 
            IFmReceiver * This,
            /* [in] */ LONG lRegionId,
            /* [out] */ FM_REGIONRANGE *pRegionRange);
        
        HRESULT ( STDMETHODCALLTYPE *BeginTune )( 
            IFmReceiver * This,
            /* [in] */ FM_FREQUENCY Frequency,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndTune )( 
            IFmReceiver * This,
            /* [in] */ IAvAsyncResult *pAsyncResult);
        
        HRESULT ( STDMETHODCALLTYPE *GetTunedFrequency )( 
            IFmReceiver * This,
            /* [out] */ PFM_FREQUENCY pFrequency);
        
        HRESULT ( STDMETHODCALLTYPE *BeginSeek )( 
            IFmReceiver * This,
            /* [in] */ FM_SEEKDIR SeekDir,
            /* [in] */ AV_ASYNCCALLBACK pfnAsyncCallback,
            /* [optional][in] */ IUnknown *pUnkContext);
        
        HRESULT ( STDMETHODCALLTYPE *EndSeek )( 
            IFmReceiver * This,
            /* [in] */ IAvAsyncResult *pAsyncResult);
        
        HRESULT ( STDMETHODCALLTYPE *CancelSeek )( 
            IFmReceiver * This);
        
        END_INTERFACE
    } IFmReceiverVtbl;

    interface IFmReceiver
    {
        CONST_VTBL struct IFmReceiverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFmReceiver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFmReceiver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFmReceiver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFmReceiver_GetRegion(This,plRegionId)	\
    ( (This)->lpVtbl -> GetRegion(This,plRegionId) ) 

#define IFmReceiver_BeginSetRegion(This,lRegionId,pfnAsyncCallback,pUnkContext)	\
    ( (This)->lpVtbl -> BeginSetRegion(This,lRegionId,pfnAsyncCallback,pUnkContext) ) 

#define IFmReceiver_EndSetRegion(This,pAsyncResult)	\
    ( (This)->lpVtbl -> EndSetRegion(This,pAsyncResult) ) 

#define IFmReceiver_GetRegionRange(This,lRegionId,pRegionRange)	\
    ( (This)->lpVtbl -> GetRegionRange(This,lRegionId,pRegionRange) ) 

#define IFmReceiver_BeginTune(This,Frequency,pfnAsyncCallback,pUnkContext)	\
    ( (This)->lpVtbl -> BeginTune(This,Frequency,pfnAsyncCallback,pUnkContext) ) 

#define IFmReceiver_EndTune(This,pAsyncResult)	\
    ( (This)->lpVtbl -> EndTune(This,pAsyncResult) ) 

#define IFmReceiver_GetTunedFrequency(This,pFrequency)	\
    ( (This)->lpVtbl -> GetTunedFrequency(This,pFrequency) ) 

#define IFmReceiver_BeginSeek(This,SeekDir,pfnAsyncCallback,pUnkContext)	\
    ( (This)->lpVtbl -> BeginSeek(This,SeekDir,pfnAsyncCallback,pUnkContext) ) 

#define IFmReceiver_EndSeek(This,pAsyncResult)	\
    ( (This)->lpVtbl -> EndSeek(This,pAsyncResult) ) 

#define IFmReceiver_CancelSeek(This)	\
    ( (This)->lpVtbl -> CancelSeek(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFmReceiver_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerapi_0000_0002 */
/* [local] */ 

DEFINE_GUID(IID_IRdsCapture, 0x12e36a78, 0x1ddc, 0x415a, 0x84, 0xd9, 0x2a, 0x92, 0xd5, 0xc4, 0x2d, 0x7);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0002_v0_0_s_ifspec;

#ifndef __IRdsCapture_INTERFACE_DEFINED__
#define __IRdsCapture_INTERFACE_DEFINED__

/* interface IRdsCapture */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IRdsCapture;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12E36A78-1DDC-415a-84D9-2A92D5C42D07")
    IRdsCapture : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE StartCapture( 
            /* [in] */ DWORD dwRdsTypeFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE StopCapture( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsCaptureStarted( 
            /* [out] */ BOOL *pfStarted) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsRtPlusDataAvailable( 
            /* [out] */ BOOL *pfRtPlusDataAvailable) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetData( 
            /* [in] */ RDS_TYPE Type,
            /* [size_is][out] */ PRDS_DATA pRdsData,
            /* [in] */ DWORD cbRdsData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRdsCaptureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRdsCapture * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRdsCapture * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRdsCapture * This);
        
        HRESULT ( STDMETHODCALLTYPE *StartCapture )( 
            IRdsCapture * This,
            /* [in] */ DWORD dwRdsTypeFlags);
        
        HRESULT ( STDMETHODCALLTYPE *StopCapture )( 
            IRdsCapture * This);
        
        HRESULT ( STDMETHODCALLTYPE *IsCaptureStarted )( 
            IRdsCapture * This,
            /* [out] */ BOOL *pfStarted);
        
        HRESULT ( STDMETHODCALLTYPE *IsRtPlusDataAvailable )( 
            IRdsCapture * This,
            /* [out] */ BOOL *pfRtPlusDataAvailable);
        
        HRESULT ( STDMETHODCALLTYPE *GetData )( 
            IRdsCapture * This,
            /* [in] */ RDS_TYPE Type,
            /* [size_is][out] */ PRDS_DATA pRdsData,
            /* [in] */ DWORD cbRdsData);
        
        END_INTERFACE
    } IRdsCaptureVtbl;

    interface IRdsCapture
    {
        CONST_VTBL struct IRdsCaptureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRdsCapture_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRdsCapture_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRdsCapture_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRdsCapture_StartCapture(This,dwRdsTypeFlags)	\
    ( (This)->lpVtbl -> StartCapture(This,dwRdsTypeFlags) ) 

#define IRdsCapture_StopCapture(This)	\
    ( (This)->lpVtbl -> StopCapture(This) ) 

#define IRdsCapture_IsCaptureStarted(This,pfStarted)	\
    ( (This)->lpVtbl -> IsCaptureStarted(This,pfStarted) ) 

#define IRdsCapture_IsRtPlusDataAvailable(This,pfRtPlusDataAvailable)	\
    ( (This)->lpVtbl -> IsRtPlusDataAvailable(This,pfRtPlusDataAvailable) ) 

#define IRdsCapture_GetData(This,Type,pRdsData,cbRdsData)	\
    ( (This)->lpVtbl -> GetData(This,Type,pRdsData,cbRdsData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRdsCapture_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerapi_0000_0003 */
/* [local] */ 

DEFINE_GUID(CLSID_FmReceiver, 0xb8b32416, 0xc9c2, 0x4817, 0x81, 0x67, 0xda, 0x97, 0xb, 0x54, 0x32, 0xb);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerapi_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


