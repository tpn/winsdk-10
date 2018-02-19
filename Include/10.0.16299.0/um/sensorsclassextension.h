

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

#ifndef __windowssensorclassextension_h__
#define __windowssensorclassextension_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISensorDriver_FWD_DEFINED__
#define __ISensorDriver_FWD_DEFINED__
typedef interface ISensorDriver ISensorDriver;

#endif 	/* __ISensorDriver_FWD_DEFINED__ */


#ifndef __ISensorClassExtension_FWD_DEFINED__
#define __ISensorClassExtension_FWD_DEFINED__
typedef interface ISensorClassExtension ISensorClassExtension;

#endif 	/* __ISensorClassExtension_FWD_DEFINED__ */


#ifndef __SensorClassExtension_FWD_DEFINED__
#define __SensorClassExtension_FWD_DEFINED__

#ifdef __cplusplus
typedef class SensorClassExtension SensorClassExtension;
#else
typedef struct SensorClassExtension SensorClassExtension;
#endif /* __cplusplus */

#endif 	/* __SensorClassExtension_FWD_DEFINED__ */


/* header files for imported files */
#include "propidl.h"
#include "wudfddi.h"
#include "PortableDeviceTypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windowssensorclassextension_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if (_WIN32_WINNT >= 0x0600) // Windows Vista and later
typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_windowssensorclassextension_0000_0000_0001
    {
        SENSOR_STATE_MIN	= 0,
        SENSOR_STATE_READY	= SENSOR_STATE_MIN,
        SENSOR_STATE_NOT_AVAILABLE	= ( SENSOR_STATE_READY + 1 ) ,
        SENSOR_STATE_NO_DATA	= ( SENSOR_STATE_NOT_AVAILABLE + 1 ) ,
        SENSOR_STATE_INITIALIZING	= ( SENSOR_STATE_NO_DATA + 1 ) ,
        SENSOR_STATE_ACCESS_DENIED	= ( SENSOR_STATE_INITIALIZING + 1 ) ,
        SENSOR_STATE_ERROR	= ( SENSOR_STATE_ACCESS_DENIED + 1 ) ,
        SENSOR_STATE_MAX	= SENSOR_STATE_ERROR
    } 	SensorState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_windowssensorclassextension_0000_0000_0002
    {
        SENSOR_CONNECTION_TYPE_PC_INTEGRATED	= 0,
        SENSOR_CONNECTION_TYPE_PC_ATTACHED	= ( SENSOR_CONNECTION_TYPE_PC_INTEGRATED + 1 ) ,
        SENSOR_CONNECTION_TYPE_PC_EXTERNAL	= ( SENSOR_CONNECTION_TYPE_PC_ATTACHED + 1 ) 
    } 	SensorConnectionType;

typedef 
enum LOCATION_DESIRED_ACCURACY
    {
        LOCATION_DESIRED_ACCURACY_DEFAULT	= 0,
        LOCATION_DESIRED_ACCURACY_HIGH	= ( LOCATION_DESIRED_ACCURACY_DEFAULT + 1 ) 
    } 	LOCATION_DESIRED_ACCURACY;

typedef 
enum LOCATION_POSITION_SOURCE
    {
        LOCATION_POSITION_SOURCE_CELLULAR	= 0,
        LOCATION_POSITION_SOURCE_SATELLITE	= ( LOCATION_POSITION_SOURCE_CELLULAR + 1 ) ,
        LOCATION_POSITION_SOURCE_WIFI	= ( LOCATION_POSITION_SOURCE_SATELLITE + 1 ) ,
        LOCATION_POSITION_SOURCE_IPADDRESS	= ( LOCATION_POSITION_SOURCE_WIFI + 1 ) ,
        LOCATION_POSITION_SOURCE_UNKNOWN	= ( LOCATION_POSITION_SOURCE_IPADDRESS + 1 ) 
    } 	LOCATION_POSITION_SOURCE;

typedef 
enum SimpleDeviceOrientation
    {
        SIMPLE_DEVICE_ORIENTATION_NOT_ROTATED	= 0,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_90	= ( SIMPLE_DEVICE_ORIENTATION_NOT_ROTATED + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_180	= ( SIMPLE_DEVICE_ORIENTATION_ROTATED_90 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_270	= ( SIMPLE_DEVICE_ORIENTATION_ROTATED_180 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_UP	= ( SIMPLE_DEVICE_ORIENTATION_ROTATED_270 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_DOWN	= ( SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_UP + 1 ) 
    } 	SimpleDeviceOrientation;

typedef 
enum MagnetometerAccuracy
    {
        MAGNETOMETER_ACCURACY_UNKNOWN	= 0,
        MAGNETOMETER_ACCURACY_UNRELIABLE	= ( MAGNETOMETER_ACCURACY_UNKNOWN + 1 ) ,
        MAGNETOMETER_ACCURACY_APPROXIMATE	= ( MAGNETOMETER_ACCURACY_UNRELIABLE + 1 ) ,
        MAGNETOMETER_ACCURACY_HIGH	= ( MAGNETOMETER_ACCURACY_APPROXIMATE + 1 ) 
    } 	MagnetometerAccuracy;



extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0000_v0_0_s_ifspec;

#ifndef __ISensorDriver_INTERFACE_DEFINED__
#define __ISensorDriver_INTERFACE_DEFINED__

/* interface ISensorDriver */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISensorDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D262B6BA-87CC-495D-B639-939EF853BD3B")
    ISensorDriver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGetSupportedSensorObjects( 
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValuesCollection **ppSensorObjectCollection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetSupportedProperties( 
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetSupportedDataFields( 
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedDataFields) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetSupportedEvents( 
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulEventCount) GUID **ppSupportedEvents,
            /* [out] */ __RPC__out ULONG *pulEventCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetProperties( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceKeyCollection *pProperties,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppPropertyValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDataFields( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceKeyCollection *pDataFields,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppDataValues) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetProperties( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceValues *pPropertiesToSet,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppResults) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnClientConnect( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnClientDisconnect( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnClientSubscribeToEvents( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnClientUnsubscribeFromEvents( 
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProcessWpdMessage( 
            /* [in] */ __RPC__in_opt IUnknown *pUnkPortableDeviceValuesParams,
            /* [in] */ __RPC__in_opt IUnknown *pUnkPortableDeviceValuesResults) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISensorDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISensorDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISensorDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedSensorObjects )( 
            __RPC__in ISensorDriver * This,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValuesCollection **ppSensorObjectCollection);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedProperties )( 
            __RPC__in ISensorDriver * This,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedProperties);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedDataFields )( 
            __RPC__in ISensorDriver * This,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedDataFields);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedEvents )( 
            __RPC__in ISensorDriver * This,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pulEventCount) GUID **ppSupportedEvents,
            /* [out] */ __RPC__out ULONG *pulEventCount);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetProperties )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceKeyCollection *pProperties,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppPropertyValues);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDataFields )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceKeyCollection *pDataFields,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppDataValues);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetProperties )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceValues *pPropertiesToSet,
            /* [out] */ __RPC__deref_out_opt IPortableDeviceValues **ppResults);
        
        HRESULT ( STDMETHODCALLTYPE *OnClientConnect )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID);
        
        HRESULT ( STDMETHODCALLTYPE *OnClientDisconnect )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID);
        
        HRESULT ( STDMETHODCALLTYPE *OnClientSubscribeToEvents )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID);
        
        HRESULT ( STDMETHODCALLTYPE *OnClientUnsubscribeFromEvents )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IWDFFile *pClientFile,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessWpdMessage )( 
            __RPC__in ISensorDriver * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnkPortableDeviceValuesParams,
            /* [in] */ __RPC__in_opt IUnknown *pUnkPortableDeviceValuesResults);
        
        END_INTERFACE
    } ISensorDriverVtbl;

    interface ISensorDriver
    {
        CONST_VTBL struct ISensorDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISensorDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISensorDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISensorDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISensorDriver_OnGetSupportedSensorObjects(This,ppSensorObjectCollection)	\
    ( (This)->lpVtbl -> OnGetSupportedSensorObjects(This,ppSensorObjectCollection) ) 

#define ISensorDriver_OnGetSupportedProperties(This,pwszSensorID,ppSupportedProperties)	\
    ( (This)->lpVtbl -> OnGetSupportedProperties(This,pwszSensorID,ppSupportedProperties) ) 

#define ISensorDriver_OnGetSupportedDataFields(This,pwszSensorID,ppSupportedDataFields)	\
    ( (This)->lpVtbl -> OnGetSupportedDataFields(This,pwszSensorID,ppSupportedDataFields) ) 

#define ISensorDriver_OnGetSupportedEvents(This,pwszSensorID,ppSupportedEvents,pulEventCount)	\
    ( (This)->lpVtbl -> OnGetSupportedEvents(This,pwszSensorID,ppSupportedEvents,pulEventCount) ) 

#define ISensorDriver_OnGetProperties(This,pClientFile,pwszSensorID,pProperties,ppPropertyValues)	\
    ( (This)->lpVtbl -> OnGetProperties(This,pClientFile,pwszSensorID,pProperties,ppPropertyValues) ) 

#define ISensorDriver_OnGetDataFields(This,pClientFile,pwszSensorID,pDataFields,ppDataValues)	\
    ( (This)->lpVtbl -> OnGetDataFields(This,pClientFile,pwszSensorID,pDataFields,ppDataValues) ) 

#define ISensorDriver_OnSetProperties(This,pClientFile,pwszSensorID,pPropertiesToSet,ppResults)	\
    ( (This)->lpVtbl -> OnSetProperties(This,pClientFile,pwszSensorID,pPropertiesToSet,ppResults) ) 

#define ISensorDriver_OnClientConnect(This,pClientFile,pwszSensorID)	\
    ( (This)->lpVtbl -> OnClientConnect(This,pClientFile,pwszSensorID) ) 

#define ISensorDriver_OnClientDisconnect(This,pClientFile,pwszSensorID)	\
    ( (This)->lpVtbl -> OnClientDisconnect(This,pClientFile,pwszSensorID) ) 

#define ISensorDriver_OnClientSubscribeToEvents(This,pClientFile,pwszSensorID)	\
    ( (This)->lpVtbl -> OnClientSubscribeToEvents(This,pClientFile,pwszSensorID) ) 

#define ISensorDriver_OnClientUnsubscribeFromEvents(This,pClientFile,pwszSensorID)	\
    ( (This)->lpVtbl -> OnClientUnsubscribeFromEvents(This,pClientFile,pwszSensorID) ) 

#define ISensorDriver_OnProcessWpdMessage(This,pUnkPortableDeviceValuesParams,pUnkPortableDeviceValuesResults)	\
    ( (This)->lpVtbl -> OnProcessWpdMessage(This,pUnkPortableDeviceValuesParams,pUnkPortableDeviceValuesResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISensorDriver_INTERFACE_DEFINED__ */


#ifndef __ISensorClassExtension_INTERFACE_DEFINED__
#define __ISensorClassExtension_INTERFACE_DEFINED__

/* interface ISensorClassExtension */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISensorClassExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A31253BA-6F73-4BC9-ABAA-26C8833C58FF")
    ISensorClassExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSensorDriverUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessIoControl( 
            /* [in] */ __RPC__in_opt IWDFIoRequest *pRequest) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostEvent( 
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceValuesCollection *pEventCollection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostStateChange( 
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ SensorState state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CleanupFile( 
            /* [in] */ __RPC__in_opt IWDFFile *pWdfFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISensorClassExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISensorClassExtension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISensorClassExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISensorClassExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ISensorClassExtension * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSensorDriverUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __RPC__in ISensorClassExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessIoControl )( 
            __RPC__in ISensorClassExtension * This,
            /* [in] */ __RPC__in_opt IWDFIoRequest *pRequest);
        
        HRESULT ( STDMETHODCALLTYPE *PostEvent )( 
            __RPC__in ISensorClassExtension * This,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ __RPC__in_opt IPortableDeviceValuesCollection *pEventCollection);
        
        HRESULT ( STDMETHODCALLTYPE *PostStateChange )( 
            __RPC__in ISensorClassExtension * This,
            /* [in][string] */ __RPC__in_string LPWSTR pwszSensorID,
            /* [in] */ SensorState state);
        
        HRESULT ( STDMETHODCALLTYPE *CleanupFile )( 
            __RPC__in ISensorClassExtension * This,
            /* [in] */ __RPC__in_opt IWDFFile *pWdfFile);
        
        END_INTERFACE
    } ISensorClassExtensionVtbl;

    interface ISensorClassExtension
    {
        CONST_VTBL struct ISensorClassExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISensorClassExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISensorClassExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISensorClassExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISensorClassExtension_Initialize(This,pWdfDeviceUnknown,pSensorDriverUnknown)	\
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSensorDriverUnknown) ) 

#define ISensorClassExtension_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#define ISensorClassExtension_ProcessIoControl(This,pRequest)	\
    ( (This)->lpVtbl -> ProcessIoControl(This,pRequest) ) 

#define ISensorClassExtension_PostEvent(This,pwszSensorID,pEventCollection)	\
    ( (This)->lpVtbl -> PostEvent(This,pwszSensorID,pEventCollection) ) 

#define ISensorClassExtension_PostStateChange(This,pwszSensorID,state)	\
    ( (This)->lpVtbl -> PostStateChange(This,pwszSensorID,state) ) 

#define ISensorClassExtension_CleanupFile(This,pWdfFile)	\
    ( (This)->lpVtbl -> CleanupFile(This,pWdfFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISensorClassExtension_INTERFACE_DEFINED__ */



#ifndef __WindowsSensorClassExtensionLibrary_LIBRARY_DEFINED__
#define __WindowsSensorClassExtensionLibrary_LIBRARY_DEFINED__

/* library WindowsSensorClassExtensionLibrary */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WindowsSensorClassExtensionLibrary;

EXTERN_C const CLSID CLSID_SensorClassExtension;

#ifdef __cplusplus

class DECLSPEC_UUID("6101F767-998E-452B-B54A-E836DD486BAD")
SensorClassExtension;
#endif
#endif /* __WindowsSensorClassExtensionLibrary_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_windowssensorclassextension_0000_0003 */
/* [local] */ 

#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#pragma deprecated(ISensorClassExtension) // Please use SensorV2 Class Extensions.
#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)
#endif // (_WIN32_WINNT >= 0x0600)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


