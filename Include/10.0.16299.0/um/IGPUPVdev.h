

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

#ifndef __igpupvdev_h__
#define __igpupvdev_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IGPUPVDev_FWD_DEFINED__
#define __IGPUPVDev_FWD_DEFINED__
typedef interface IGPUPVDev IGPUPVDev;

#endif 	/* __IGPUPVDev_FWD_DEFINED__ */


#ifndef __IGPUPMitigationDevice_FWD_DEFINED__
#define __IGPUPMitigationDevice_FWD_DEFINED__
typedef interface IGPUPMitigationDevice IGPUPMitigationDevice;

#endif 	/* __IGPUPMitigationDevice_FWD_DEFINED__ */


#ifndef __IVmGPUPGuestMemoryAccess_FWD_DEFINED__
#define __IVmGPUPGuestMemoryAccess_FWD_DEFINED__
typedef interface IVmGPUPGuestMemoryAccess IVmGPUPGuestMemoryAccess;

#endif 	/* __IVmGPUPGuestMemoryAccess_FWD_DEFINED__ */


#ifndef __IVmGPUPGuestMsiAccess_FWD_DEFINED__
#define __IVmGPUPGuestMsiAccess_FWD_DEFINED__
typedef interface IVmGPUPGuestMsiAccess IVmGPUPGuestMsiAccess;

#endif 	/* __IVmGPUPGuestMsiAccess_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_igpupvdev_0000_0000 */
/* [local] */ 

#ifdef __midl
typedef struct _LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } 	LUID;

typedef LUID *PLUID;

#endif
typedef UINT64 GUEST_PHYSICAL_ADDRESS;



extern RPC_IF_HANDLE __MIDL_itf_igpupvdev_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_igpupvdev_0000_0000_v0_0_s_ifspec;

#ifndef __IGPUPVDev_INTERFACE_DEFINED__
#define __IGPUPVDev_INTERFACE_DEFINED__

/* interface IGPUPVDev */
/* [hidden][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IGPUPVDev;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0f4ddc9b-d683-46fb-a7e9-935dfe0b617f")
    IGPUPVDev : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetDeviceLuid( 
            /* [out] */ __RPC__out PLUID DeviceLUID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPUPVDevVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IGPUPVDev * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IGPUPVDev * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IGPUPVDev * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetDeviceLuid )( 
            __RPC__in IGPUPVDev * This,
            /* [out] */ __RPC__out PLUID DeviceLUID);
        
        END_INTERFACE
    } IGPUPVDevVtbl;

    interface IGPUPVDev
    {
        CONST_VTBL struct IGPUPVDevVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGPUPVDev_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGPUPVDev_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGPUPVDev_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGPUPVDev_GetDeviceLuid(This,DeviceLUID)	\
    ( (This)->lpVtbl -> GetDeviceLuid(This,DeviceLUID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGPUPVDev_INTERFACE_DEFINED__ */


#ifndef __IGPUPMitigationDevice_INTERFACE_DEFINED__
#define __IGPUPMitigationDevice_INTERFACE_DEFINED__

/* interface IGPUPMitigationDevice */
/* [local][unique][helpstring][uuid][object] */ 

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL_IGPUPMitigationDevice_0001
    {
        BAR0	= 0,
        BAR1	= ( BAR0 + 1 ) ,
        BAR2	= ( BAR1 + 1 ) ,
        BAR3	= ( BAR2 + 1 ) ,
        BAR4	= ( BAR3 + 1 ) ,
        BAR5	= ( BAR4 + 1 ) ,
        ROMBAR	= ( BAR5 + 1 ) ,
        CONFIG	= ( ROMBAR + 1 ) 
    } 	VGPU_BAR_SELECTOR;

typedef /* [public][public][v1_enum] */ 
enum __MIDL_IGPUPMitigationDevice_0002
    {
        GpupPowerDeviceInvalid	= 0,
        GpupPowerDeviceD0	= ( GpupPowerDeviceInvalid + 1 ) ,
        GpupPowerDeviceD1	= ( GpupPowerDeviceD0 + 1 ) ,
        GpupPowerDeviceD2	= ( GpupPowerDeviceD1 + 1 ) ,
        GpupPowerDeviceD3	= ( GpupPowerDeviceD2 + 1 ) ,
        GpupPowerDeviceD3Final	= ( GpupPowerDeviceD3 + 1 ) ,
        GpupPowerDevicePrepareForHibernation	= ( GpupPowerDeviceD3Final + 1 ) ,
        GpupPowerDeviceMaximum	= ( GpupPowerDevicePrepareForHibernation + 1 ) 
    } 	GPUP_POWER_DEVICE_STATE;

typedef /* [public][public][public][public][public][public][v1_enum] */ 
enum __MIDL_IGPUPMitigationDevice_0003
    {
        GpupSaveInvalid	= 0,
        GpupSaveMaximum	= ( GpupSaveInvalid + 1 ) 
    } 	GPUP_SAVE_RESTORE_PAUSE_STATE;


EXTERN_C const IID IID_IGPUPMitigationDevice;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d6f70a58-e039-42b3-96db-efe033bc2eac")
    IGPUPMitigationDevice : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ GUID *VmGuid,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ HANDLE DeviceHandle,
            /* [in] */ HANDLE VmBusHandle,
            /* [in] */ IUnknown *GpupServices) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PowerTransitionComplete( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_POWER_DEVICE_STATE GpupPowerState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadInterceptedGpup( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ VGPU_BAR_SELECTOR BarIndex,
            /* [in] */ ULONG64 Offset,
            /* [in] */ ULONG64 Length,
            /* [out] */ BYTE *ValueRead) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteInterceptedGpup( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ VGPU_BAR_SELECTOR BarIndex,
            /* [in] */ ULONG64 Offset,
            /* [in] */ ULONG64 Length,
            /* [in] */ const BYTE WriteValue[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PauseGpup( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ResumeGpup( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveGpupBegin( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [out][in] */ ULONG *Length,
            /* [out] */ BYTE SaveBuffer[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SaveGpupContinue( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [out][in] */ ULONG *Length,
            /* [out] */ ULONG *RequestedLength,
            /* [out] */ BYTE SaveBuffer[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RestoreGpup( 
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [in] */ ULONG Length,
            /* [in] */ ULONG Offset,
            /* [in] */ ULONG TotalLength,
            /* [in] */ BYTE RestoreBuffer[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGPUPMitigationDeviceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGPUPMitigationDevice * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGPUPMitigationDevice * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGPUPMitigationDevice * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IGPUPMitigationDevice * This,
            /* [in] */ GUID *VmGuid,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ HANDLE DeviceHandle,
            /* [in] */ HANDLE VmBusHandle,
            /* [in] */ IUnknown *GpupServices);
        
        HRESULT ( STDMETHODCALLTYPE *PowerTransitionComplete )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_POWER_DEVICE_STATE GpupPowerState);
        
        HRESULT ( STDMETHODCALLTYPE *ReadInterceptedGpup )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ VGPU_BAR_SELECTOR BarIndex,
            /* [in] */ ULONG64 Offset,
            /* [in] */ ULONG64 Length,
            /* [out] */ BYTE *ValueRead);
        
        HRESULT ( STDMETHODCALLTYPE *WriteInterceptedGpup )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ VGPU_BAR_SELECTOR BarIndex,
            /* [in] */ ULONG64 Offset,
            /* [in] */ ULONG64 Length,
            /* [in] */ const BYTE WriteValue[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *PauseGpup )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags);
        
        HRESULT ( STDMETHODCALLTYPE *ResumeGpup )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags);
        
        HRESULT ( STDMETHODCALLTYPE *SaveGpupBegin )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [out][in] */ ULONG *Length,
            /* [out] */ BYTE SaveBuffer[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *SaveGpupContinue )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [out][in] */ ULONG *Length,
            /* [out] */ ULONG *RequestedLength,
            /* [out] */ BYTE SaveBuffer[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *RestoreGpup )( 
            IGPUPMitigationDevice * This,
            /* [in] */ PLUID DeviceLuid,
            /* [in] */ GPUP_SAVE_RESTORE_PAUSE_STATE Flags,
            /* [in] */ ULONG Length,
            /* [in] */ ULONG Offset,
            /* [in] */ ULONG TotalLength,
            /* [in] */ BYTE RestoreBuffer[  ]);
        
        END_INTERFACE
    } IGPUPMitigationDeviceVtbl;

    interface IGPUPMitigationDevice
    {
        CONST_VTBL struct IGPUPMitigationDeviceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGPUPMitigationDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGPUPMitigationDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGPUPMitigationDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGPUPMitigationDevice_Initialize(This,VmGuid,DeviceLuid,DeviceHandle,VmBusHandle,GpupServices)	\
    ( (This)->lpVtbl -> Initialize(This,VmGuid,DeviceLuid,DeviceHandle,VmBusHandle,GpupServices) ) 

#define IGPUPMitigationDevice_PowerTransitionComplete(This,DeviceLuid,GpupPowerState)	\
    ( (This)->lpVtbl -> PowerTransitionComplete(This,DeviceLuid,GpupPowerState) ) 

#define IGPUPMitigationDevice_ReadInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,ValueRead)	\
    ( (This)->lpVtbl -> ReadInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,ValueRead) ) 

#define IGPUPMitigationDevice_WriteInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,WriteValue)	\
    ( (This)->lpVtbl -> WriteInterceptedGpup(This,DeviceLuid,BarIndex,Offset,Length,WriteValue) ) 

#define IGPUPMitigationDevice_PauseGpup(This,DeviceLuid,Flags)	\
    ( (This)->lpVtbl -> PauseGpup(This,DeviceLuid,Flags) ) 

#define IGPUPMitigationDevice_ResumeGpup(This,DeviceLuid,Flags)	\
    ( (This)->lpVtbl -> ResumeGpup(This,DeviceLuid,Flags) ) 

#define IGPUPMitigationDevice_SaveGpupBegin(This,DeviceLuid,Flags,Length,SaveBuffer)	\
    ( (This)->lpVtbl -> SaveGpupBegin(This,DeviceLuid,Flags,Length,SaveBuffer) ) 

#define IGPUPMitigationDevice_SaveGpupContinue(This,DeviceLuid,Flags,Length,RequestedLength,SaveBuffer)	\
    ( (This)->lpVtbl -> SaveGpupContinue(This,DeviceLuid,Flags,Length,RequestedLength,SaveBuffer) ) 

#define IGPUPMitigationDevice_RestoreGpup(This,DeviceLuid,Flags,Length,Offset,TotalLength,RestoreBuffer)	\
    ( (This)->lpVtbl -> RestoreGpup(This,DeviceLuid,Flags,Length,Offset,TotalLength,RestoreBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGPUPMitigationDevice_INTERFACE_DEFINED__ */


#ifndef __IVmGPUPGuestMemoryAccess_INTERFACE_DEFINED__
#define __IVmGPUPGuestMemoryAccess_INTERFACE_DEFINED__

/* interface IVmGPUPGuestMemoryAccess */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IVmGPUPGuestMemoryAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15df23e2-05cf-48d1-ae3a-3826fcb6041c")
    IVmGPUPGuestMemoryAccess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateRamApertureFromByteRange( 
            /* [in] */ UINT64 StartGpaAddress,
            /* [in] */ UINT64 ByteCount,
            /* [in] */ BOOL WriteProtected,
            /* [out] */ PVOID *MapAddress,
            /* [out] */ IUnknown **Aperture) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadRamBytes( 
            /* [in] */ GUEST_PHYSICAL_ADDRESS StartAddress,
            /* [in] */ UINT64 ByteCount,
            /* [size_is][out] */ BYTE ClientBuffer[  ]) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteRamBytes( 
            /* [in] */ GUEST_PHYSICAL_ADDRESS StartAddress,
            /* [in] */ UINT64 ByteCount,
            /* [size_is][in] */ const BYTE ClientBuffer[  ]) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVmGPUPGuestMemoryAccessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVmGPUPGuestMemoryAccess * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVmGPUPGuestMemoryAccess * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVmGPUPGuestMemoryAccess * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateRamApertureFromByteRange )( 
            IVmGPUPGuestMemoryAccess * This,
            /* [in] */ UINT64 StartGpaAddress,
            /* [in] */ UINT64 ByteCount,
            /* [in] */ BOOL WriteProtected,
            /* [out] */ PVOID *MapAddress,
            /* [out] */ IUnknown **Aperture);
        
        HRESULT ( STDMETHODCALLTYPE *ReadRamBytes )( 
            IVmGPUPGuestMemoryAccess * This,
            /* [in] */ GUEST_PHYSICAL_ADDRESS StartAddress,
            /* [in] */ UINT64 ByteCount,
            /* [size_is][out] */ BYTE ClientBuffer[  ]);
        
        HRESULT ( STDMETHODCALLTYPE *WriteRamBytes )( 
            IVmGPUPGuestMemoryAccess * This,
            /* [in] */ GUEST_PHYSICAL_ADDRESS StartAddress,
            /* [in] */ UINT64 ByteCount,
            /* [size_is][in] */ const BYTE ClientBuffer[  ]);
        
        END_INTERFACE
    } IVmGPUPGuestMemoryAccessVtbl;

    interface IVmGPUPGuestMemoryAccess
    {
        CONST_VTBL struct IVmGPUPGuestMemoryAccessVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVmGPUPGuestMemoryAccess_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVmGPUPGuestMemoryAccess_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVmGPUPGuestMemoryAccess_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVmGPUPGuestMemoryAccess_CreateRamApertureFromByteRange(This,StartGpaAddress,ByteCount,WriteProtected,MapAddress,Aperture)	\
    ( (This)->lpVtbl -> CreateRamApertureFromByteRange(This,StartGpaAddress,ByteCount,WriteProtected,MapAddress,Aperture) ) 

#define IVmGPUPGuestMemoryAccess_ReadRamBytes(This,StartAddress,ByteCount,ClientBuffer)	\
    ( (This)->lpVtbl -> ReadRamBytes(This,StartAddress,ByteCount,ClientBuffer) ) 

#define IVmGPUPGuestMemoryAccess_WriteRamBytes(This,StartAddress,ByteCount,ClientBuffer)	\
    ( (This)->lpVtbl -> WriteRamBytes(This,StartAddress,ByteCount,ClientBuffer) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVmGPUPGuestMemoryAccess_INTERFACE_DEFINED__ */


#ifndef __IVmGPUPGuestMsiAccess_INTERFACE_DEFINED__
#define __IVmGPUPGuestMsiAccess_INTERFACE_DEFINED__

/* interface IVmGPUPGuestMsiAccess */
/* [local][unique][uuid][object] */ 


EXTERN_C const IID IID_IVmGPUPGuestMsiAccess;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("72469f11-9256-419a-aea5-38de4701b2ee")
    IVmGPUPGuestMsiAccess : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE DeliverInterrupt( 
            /* [in] */ UINT32 DestAddr,
            /* [in] */ UINT32 Data) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVmGPUPGuestMsiAccessVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVmGPUPGuestMsiAccess * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVmGPUPGuestMsiAccess * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVmGPUPGuestMsiAccess * This);
        
        HRESULT ( STDMETHODCALLTYPE *DeliverInterrupt )( 
            IVmGPUPGuestMsiAccess * This,
            /* [in] */ UINT32 DestAddr,
            /* [in] */ UINT32 Data);
        
        END_INTERFACE
    } IVmGPUPGuestMsiAccessVtbl;

    interface IVmGPUPGuestMsiAccess
    {
        CONST_VTBL struct IVmGPUPGuestMsiAccessVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVmGPUPGuestMsiAccess_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVmGPUPGuestMsiAccess_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVmGPUPGuestMsiAccess_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVmGPUPGuestMsiAccess_DeliverInterrupt(This,DestAddr,Data)	\
    ( (This)->lpVtbl -> DeliverInterrupt(This,DestAddr,Data) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVmGPUPGuestMsiAccess_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


