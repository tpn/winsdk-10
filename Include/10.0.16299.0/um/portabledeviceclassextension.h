

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

#ifndef __PortableDeviceClassExtension_h__
#define __PortableDeviceClassExtension_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPortableDeviceClassExtension_FWD_DEFINED__
#define __IPortableDeviceClassExtension_FWD_DEFINED__
typedef interface IPortableDeviceClassExtension IPortableDeviceClassExtension;

#endif 	/* __IPortableDeviceClassExtension_FWD_DEFINED__ */


#ifndef __PortableDeviceClassExtension_FWD_DEFINED__
#define __PortableDeviceClassExtension_FWD_DEFINED__

#ifdef __cplusplus
typedef class PortableDeviceClassExtension PortableDeviceClassExtension;
#else
typedef struct PortableDeviceClassExtension PortableDeviceClassExtension;
#endif /* __cplusplus */

#endif 	/* __PortableDeviceClassExtension_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "PortableDeviceTypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_PortableDeviceClassExtension_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if (_WIN32_WINNT >= 0x0501) // XP and later


extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0000_v0_0_s_ifspec;

#ifndef __IPortableDeviceClassExtension_INTERFACE_DEFINED__
#define __IPortableDeviceClassExtension_INTERFACE_DEFINED__

/* interface IPortableDeviceClassExtension */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IPortableDeviceClassExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("bc08386a-9952-40cd-ba50-9541d64a4b4e")
    IPortableDeviceClassExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            __RPC__in_opt IPortableDeviceValues *pOptions) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ProcessLibraryMessage( 
            __RPC__in_opt IPortableDeviceValues *pParams,
            __RPC__in_opt IPortableDeviceValues *pResults) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPortableDeviceClassExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IPortableDeviceClassExtension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IPortableDeviceClassExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IPortableDeviceClassExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IPortableDeviceClassExtension * This,
            __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            __RPC__in_opt IPortableDeviceValues *pOptions);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __RPC__in IPortableDeviceClassExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *ProcessLibraryMessage )( 
            __RPC__in IPortableDeviceClassExtension * This,
            __RPC__in_opt IPortableDeviceValues *pParams,
            __RPC__in_opt IPortableDeviceValues *pResults);
        
        END_INTERFACE
    } IPortableDeviceClassExtensionVtbl;

    interface IPortableDeviceClassExtension
    {
        CONST_VTBL struct IPortableDeviceClassExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPortableDeviceClassExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPortableDeviceClassExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPortableDeviceClassExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPortableDeviceClassExtension_Initialize(This,pWdfDeviceUnknown,pOptions)	\
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pOptions) ) 

#define IPortableDeviceClassExtension_Uninitialize(This)	\
    ( (This)->lpVtbl -> Uninitialize(This) ) 

#define IPortableDeviceClassExtension_ProcessLibraryMessage(This,pParams,pResults)	\
    ( (This)->lpVtbl -> ProcessLibraryMessage(This,pParams,pResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPortableDeviceClassExtension_INTERFACE_DEFINED__ */



#ifndef __PortableDeviceClassExtension_LIBRARY_DEFINED__
#define __PortableDeviceClassExtension_LIBRARY_DEFINED__

/* library PortableDeviceClassExtension */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_PortableDeviceClassExtension;

EXTERN_C const CLSID CLSID_PortableDeviceClassExtension;

#ifdef __cplusplus

class DECLSPEC_UUID("4cadfae1-5512-456a-9d65-5b5e7e9ca9a3")
PortableDeviceClassExtension;
#endif
#endif /* __PortableDeviceClassExtension_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_PortableDeviceClassExtension_0000_0002 */
/* [local] */ 

#endif // (_WIN32_WINNT >= 0x0501)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceClassExtension_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


