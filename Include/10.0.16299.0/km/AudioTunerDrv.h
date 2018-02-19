

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

#ifndef __audiotunerdrv_h__
#define __audiotunerdrv_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAdapterDriver_FWD_DEFINED__
#define __IAdapterDriver_FWD_DEFINED__
typedef interface IAdapterDriver IAdapterDriver;

#endif 	/* __IAdapterDriver_FWD_DEFINED__ */


#ifndef __IMiniportTunerDevice_FWD_DEFINED__
#define __IMiniportTunerDevice_FWD_DEFINED__
typedef interface IMiniportTunerDevice IMiniportTunerDevice;

#endif 	/* __IMiniportTunerDevice_FWD_DEFINED__ */


#ifndef __IPortTunerDevice_FWD_DEFINED__
#define __IPortTunerDevice_FWD_DEFINED__
typedef interface IPortTunerDevice IPortTunerDevice;

#endif 	/* __IPortTunerDevice_FWD_DEFINED__ */


#ifndef __IMiniportFmRxDevice_FWD_DEFINED__
#define __IMiniportFmRxDevice_FWD_DEFINED__
typedef interface IMiniportFmRxDevice IMiniportFmRxDevice;

#endif 	/* __IMiniportFmRxDevice_FWD_DEFINED__ */


#ifndef __IPortFmRxDevice_FWD_DEFINED__
#define __IPortFmRxDevice_FWD_DEFINED__
typedef interface IPortFmRxDevice IPortFmRxDevice;

#endif 	/* __IPortFmRxDevice_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "objidl.h"
#include "AudioTunerDef.h"
#include "AvApi.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_audiotunerdrv_0000_0000 */
/* [local] */ 

#include <AudioTunerProp.h>





typedef HANDLE HTUNER_ASYNCCTXT;

typedef HTUNER_ASYNCCTXT *PHTUNER_ASYNCCTXT;

STDAPI
CreateAdapterDriver(
    __deref_out IAdapterDriver **ppAdapterDriver
    );
typedef struct _TUNER_DEVICECAPS
    {
    DWORD dwIndex;
    DWORD dwDeviceTypeFlags;
    } 	TUNER_DEVICECAPS;

typedef struct _TUNER_DEVICECAPS *PTUNER_DEVICECAPS;

typedef 
enum _TUNER_DEVICETYPE_FLAGS
    {
        TUNER_DEVICETYPE_FLAGS_FMRX	= 0x1
    } 	TUNER_DEVICETYPE_FLAGS;

typedef enum _TUNER_DEVICETYPE_FLAGS *PTUNER_DEVICETYPE_FLAGS;

DEFINE_GUID(IID_IAdapterDriver, 0x7b227537, 0xae3f, 0x4b57, 0x87, 0xba, 0x9f, 0xb3, 0x2d, 0x5f, 0xe3, 0xf8);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0000_v0_0_s_ifspec;

#ifndef __IAdapterDriver_INTERFACE_DEFINED__
#define __IAdapterDriver_INTERFACE_DEFINED__

/* interface IAdapterDriver */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IAdapterDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7B227537-AE3F-4B57-87BA-9FB32D5FE3F8")
    IAdapterDriver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetNumDevices( 
            /* [out] */ LPDWORD pcDevices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDeviceCaps( 
            /* [in] */ DWORD dwIndex,
            /* [out] */ PTUNER_DEVICECAPS pDeviceCaps) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateMiniportTunerDevice( 
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwDeviceTypeFlags,
            /* [in] */ IPortTunerDevice *pPortTunerDevice,
            /* [out] */ IMiniportTunerDevice **ppMiniportTunerDevice) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAdapterDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAdapterDriver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAdapterDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAdapterDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumDevices )( 
            IAdapterDriver * This,
            /* [out] */ LPDWORD pcDevices);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCaps )( 
            IAdapterDriver * This,
            /* [in] */ DWORD dwIndex,
            /* [out] */ PTUNER_DEVICECAPS pDeviceCaps);
        
        HRESULT ( STDMETHODCALLTYPE *CreateMiniportTunerDevice )( 
            IAdapterDriver * This,
            /* [in] */ DWORD dwIndex,
            /* [in] */ DWORD dwDeviceTypeFlags,
            /* [in] */ IPortTunerDevice *pPortTunerDevice,
            /* [out] */ IMiniportTunerDevice **ppMiniportTunerDevice);
        
        END_INTERFACE
    } IAdapterDriverVtbl;

    interface IAdapterDriver
    {
        CONST_VTBL struct IAdapterDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAdapterDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAdapterDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAdapterDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAdapterDriver_GetNumDevices(This,pcDevices)	\
    ( (This)->lpVtbl -> GetNumDevices(This,pcDevices) ) 

#define IAdapterDriver_GetDeviceCaps(This,dwIndex,pDeviceCaps)	\
    ( (This)->lpVtbl -> GetDeviceCaps(This,dwIndex,pDeviceCaps) ) 

#define IAdapterDriver_CreateMiniportTunerDevice(This,dwIndex,dwDeviceTypeFlags,pPortTunerDevice,ppMiniportTunerDevice)	\
    ( (This)->lpVtbl -> CreateMiniportTunerDevice(This,dwIndex,dwDeviceTypeFlags,pPortTunerDevice,ppMiniportTunerDevice) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAdapterDriver_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerdrv_0000_0001 */
/* [local] */ 

DEFINE_GUID(IID_IMiniportTunerDevice, 0x7a351d7, 0x6452, 0x4824, 0xa4, 0xa1, 0xe3, 0xd, 0x5c, 0x68, 0xa, 0x8a);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0001_v0_0_s_ifspec;

#ifndef __IMiniportTunerDevice_INTERFACE_DEFINED__
#define __IMiniportTunerDevice_INTERFACE_DEFINED__

/* interface IMiniportTunerDevice */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IMiniportTunerDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("07A351D7-6452-4824-A4A1-E30D5C680A8A")
    IMiniportTunerDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetPowerState( 
            /* [out] */ PTUNER_POWERSTATE pPowerState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetPowerState( 
            /* [in] */ TUNER_POWERSTATE PowerState,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetVolume( 
            /* [out] */ LONG *plVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetVolume( 
            /* [in] */ LONG lVolume) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][out] */ void *pvPropData,
            /* [in] */ DWORD cbPropData,
            /* [out] */ LPDWORD pcbReturn) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][in] */ const void *pvPropData,
            /* [in] */ DWORD cbPropData) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiniportTunerDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiniportTunerDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiniportTunerDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiniportTunerDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPowerState )( 
            IMiniportTunerDevice * This,
            /* [out] */ PTUNER_POWERSTATE pPowerState);
        
        HRESULT ( STDMETHODCALLTYPE *SetPowerState )( 
            IMiniportTunerDevice * This,
            /* [in] */ TUNER_POWERSTATE PowerState,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt);
        
        HRESULT ( STDMETHODCALLTYPE *GetVolume )( 
            IMiniportTunerDevice * This,
            /* [out] */ LONG *plVolume);
        
        HRESULT ( STDMETHODCALLTYPE *SetVolume )( 
            IMiniportTunerDevice * This,
            /* [in] */ LONG lVolume);
        
        HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IMiniportTunerDevice * This,
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][out] */ void *pvPropData,
            /* [in] */ DWORD cbPropData,
            /* [out] */ LPDWORD pcbReturn);
        
        HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IMiniportTunerDevice * This,
            /* [in] */ REFGUID rguidPropId,
            /* [size_is][in] */ const void *pvPropData,
            /* [in] */ DWORD cbPropData);
        
        END_INTERFACE
    } IMiniportTunerDeviceVtbl;

    interface IMiniportTunerDevice
    {
        CONST_VTBL struct IMiniportTunerDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiniportTunerDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiniportTunerDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiniportTunerDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiniportTunerDevice_GetPowerState(This,pPowerState)	\
    ( (This)->lpVtbl -> GetPowerState(This,pPowerState) ) 

#define IMiniportTunerDevice_SetPowerState(This,PowerState,hAsyncCtxt)	\
    ( (This)->lpVtbl -> SetPowerState(This,PowerState,hAsyncCtxt) ) 

#define IMiniportTunerDevice_GetVolume(This,plVolume)	\
    ( (This)->lpVtbl -> GetVolume(This,plVolume) ) 

#define IMiniportTunerDevice_SetVolume(This,lVolume)	\
    ( (This)->lpVtbl -> SetVolume(This,lVolume) ) 

#define IMiniportTunerDevice_GetProperty(This,rguidPropId,pvPropData,cbPropData,pcbReturn)	\
    ( (This)->lpVtbl -> GetProperty(This,rguidPropId,pvPropData,cbPropData,pcbReturn) ) 

#define IMiniportTunerDevice_SetProperty(This,rguidPropId,pvPropData,cbPropData)	\
    ( (This)->lpVtbl -> SetProperty(This,rguidPropId,pvPropData,cbPropData) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiniportTunerDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerdrv_0000_0002 */
/* [local] */ 

DEFINE_GUID(IID_IPortTunerDevice, 0xcb0a8cb6, 0x392d, 0x4944, 0xaf, 0xe8, 0xbb, 0x55, 0x22, 0x7, 0x63, 0x82);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0002_v0_0_s_ifspec;

#ifndef __IPortTunerDevice_INTERFACE_DEFINED__
#define __IPortTunerDevice_INTERFACE_DEFINED__

/* interface IPortTunerDevice */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IPortTunerDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CB0A8CB6-392D-4944-AFE8-BB5522076382")
    IPortTunerDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SendTunerEvent( 
            /* [in] */ REFGUID rguidEventId,
            /* [in] */ AV_VARIANT *pavvParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AsyncComplete( 
            /* [in] */ HRESULT hrStatus,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPortTunerDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPortTunerDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPortTunerDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPortTunerDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *SendTunerEvent )( 
            IPortTunerDevice * This,
            /* [in] */ REFGUID rguidEventId,
            /* [in] */ AV_VARIANT *pavvParam);
        
        HRESULT ( STDMETHODCALLTYPE *AsyncComplete )( 
            IPortTunerDevice * This,
            /* [in] */ HRESULT hrStatus,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt);
        
        END_INTERFACE
    } IPortTunerDeviceVtbl;

    interface IPortTunerDevice
    {
        CONST_VTBL struct IPortTunerDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPortTunerDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortTunerDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPortTunerDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPortTunerDevice_SendTunerEvent(This,rguidEventId,pavvParam)	\
    ( (This)->lpVtbl -> SendTunerEvent(This,rguidEventId,pavvParam) ) 

#define IPortTunerDevice_AsyncComplete(This,hrStatus,hAsyncCtxt)	\
    ( (This)->lpVtbl -> AsyncComplete(This,hrStatus,hAsyncCtxt) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPortTunerDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerdrv_0000_0003 */
/* [local] */ 

typedef 
enum _FM_EMPHASIS
    {
        FM_EMPHASIS_50_USEC	= 0,
        FM_EMPHASIS_75_USEC	= ( FM_EMPHASIS_50_USEC + 1 ) 
    } 	FM_EMPHASIS;

typedef enum _FM_EMPHASIS *PFM_EMPHASIS;

typedef struct _FM_REGIONPARAMS
    {
    FM_FREQUENCY FrequencyMin;
    FM_FREQUENCY FrequencyMax;
    FM_FREQUENCY FrequencySpacing;
    FM_EMPHASIS Emphasis;
    } 	FM_REGIONPARAMS;

typedef struct _FM_REGIONPARAMS *PFM_REGIONPARAMS;

DEFINE_GUID(IID_IMiniportFmRxDevice, 0x1f607ea4, 0x214e, 0x4b05, 0xaf, 0x96, 0xa8, 0x61, 0x90, 0x84, 0xf7, 0xf9);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0003_v0_0_s_ifspec;

#ifndef __IMiniportFmRxDevice_INTERFACE_DEFINED__
#define __IMiniportFmRxDevice_INTERFACE_DEFINED__

/* interface IMiniportFmRxDevice */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IMiniportFmRxDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1F607EA4-214E-4B05-AF96-A8619084F7F9")
    IMiniportFmRxDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetRegionParams( 
            /* [in] */ const FM_REGIONPARAMS *pRegionParams,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Tune( 
            /* [in] */ FM_FREQUENCY Frequency,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTunedFrequency( 
            /* [out] */ PFM_FREQUENCY pFrequency) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Seek( 
            /* [in] */ FM_SEEKDIR SeekDir,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CancelSeek( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RdsStartCapture( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RdsStopCapture( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IMiniportFmRxDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IMiniportFmRxDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IMiniportFmRxDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IMiniportFmRxDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetRegionParams )( 
            IMiniportFmRxDevice * This,
            /* [in] */ const FM_REGIONPARAMS *pRegionParams,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt);
        
        HRESULT ( STDMETHODCALLTYPE *Tune )( 
            IMiniportFmRxDevice * This,
            /* [in] */ FM_FREQUENCY Frequency,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt);
        
        HRESULT ( STDMETHODCALLTYPE *GetTunedFrequency )( 
            IMiniportFmRxDevice * This,
            /* [out] */ PFM_FREQUENCY pFrequency);
        
        HRESULT ( STDMETHODCALLTYPE *Seek )( 
            IMiniportFmRxDevice * This,
            /* [in] */ FM_SEEKDIR SeekDir,
            /* [in] */ HTUNER_ASYNCCTXT hAsyncCtxt);
        
        HRESULT ( STDMETHODCALLTYPE *CancelSeek )( 
            IMiniportFmRxDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *RdsStartCapture )( 
            IMiniportFmRxDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *RdsStopCapture )( 
            IMiniportFmRxDevice * This);
        
        END_INTERFACE
    } IMiniportFmRxDeviceVtbl;

    interface IMiniportFmRxDevice
    {
        CONST_VTBL struct IMiniportFmRxDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IMiniportFmRxDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IMiniportFmRxDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IMiniportFmRxDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IMiniportFmRxDevice_SetRegionParams(This,pRegionParams,hAsyncCtxt)	\
    ( (This)->lpVtbl -> SetRegionParams(This,pRegionParams,hAsyncCtxt) ) 

#define IMiniportFmRxDevice_Tune(This,Frequency,hAsyncCtxt)	\
    ( (This)->lpVtbl -> Tune(This,Frequency,hAsyncCtxt) ) 

#define IMiniportFmRxDevice_GetTunedFrequency(This,pFrequency)	\
    ( (This)->lpVtbl -> GetTunedFrequency(This,pFrequency) ) 

#define IMiniportFmRxDevice_Seek(This,SeekDir,hAsyncCtxt)	\
    ( (This)->lpVtbl -> Seek(This,SeekDir,hAsyncCtxt) ) 

#define IMiniportFmRxDevice_CancelSeek(This)	\
    ( (This)->lpVtbl -> CancelSeek(This) ) 

#define IMiniportFmRxDevice_RdsStartCapture(This)	\
    ( (This)->lpVtbl -> RdsStartCapture(This) ) 

#define IMiniportFmRxDevice_RdsStopCapture(This)	\
    ( (This)->lpVtbl -> RdsStopCapture(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IMiniportFmRxDevice_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_audiotunerdrv_0000_0004 */
/* [local] */ 

typedef struct _RDS_GROUP
    {
    WORD wBlockA;
    WORD wBlockB;
    WORD wBlockC;
    WORD wBlockD;
    } 	RDS_GROUP;

typedef struct _RDS_GROUP *PRDS_GROUP;

DEFINE_GUID(IID_IPortFmRxDevice, 0x64cbaa33, 0x446f, 0x43c0, 0x90, 0x41, 0x69, 0x60, 0x6, 0x38, 0x65, 0x0);


extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audiotunerdrv_0000_0004_v0_0_s_ifspec;

#ifndef __IPortFmRxDevice_INTERFACE_DEFINED__
#define __IPortFmRxDevice_INTERFACE_DEFINED__

/* interface IPortFmRxDevice */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IPortFmRxDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("64CBAA33-446F-43C0-9041-696006386500")
    IPortFmRxDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE ProcessRdsGroup( 
            /* [in] */ const RDS_GROUP *pRdsGroup) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPortFmRxDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPortFmRxDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPortFmRxDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPortFmRxDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessRdsGroup )( 
            IPortFmRxDevice * This,
            /* [in] */ const RDS_GROUP *pRdsGroup);
        
        END_INTERFACE
    } IPortFmRxDeviceVtbl;

    interface IPortFmRxDevice
    {
        CONST_VTBL struct IPortFmRxDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPortFmRxDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortFmRxDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPortFmRxDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPortFmRxDevice_ProcessRdsGroup(This,pRdsGroup)	\
    ( (This)->lpVtbl -> ProcessRdsGroup(This,pRdsGroup) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPortFmRxDevice_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


