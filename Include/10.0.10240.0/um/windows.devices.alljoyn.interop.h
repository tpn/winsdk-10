

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

#ifndef __windows2Edevices2Ealljoyn2Einterop_h__
#define __windows2Edevices2Ealljoyn2Einterop_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWindowsDevicesAllJoynBusAttachmentInterop_FWD_DEFINED__
#define __IWindowsDevicesAllJoynBusAttachmentInterop_FWD_DEFINED__
typedef interface IWindowsDevicesAllJoynBusAttachmentInterop IWindowsDevicesAllJoynBusAttachmentInterop;

#endif 	/* __IWindowsDevicesAllJoynBusAttachmentInterop_FWD_DEFINED__ */


#ifndef __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_FWD_DEFINED__
#define __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_FWD_DEFINED__
typedef interface IWindowsDevicesAllJoynBusAttachmentFactoryInterop IWindowsDevicesAllJoynBusAttachmentFactoryInterop;

#endif 	/* __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_FWD_DEFINED__ */


/* header files for imported files */
#include "Inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0000 */
/* [local] */ 

#include <alljoyn_c\BusAttachment.h>
#if (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)


extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0000_v0_0_s_ifspec;

#ifndef __IWindowsDevicesAllJoynBusAttachmentInterop_INTERFACE_DEFINED__
#define __IWindowsDevicesAllJoynBusAttachmentInterop_INTERFACE_DEFINED__

/* interface IWindowsDevicesAllJoynBusAttachmentInterop */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_IWindowsDevicesAllJoynBusAttachmentInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fd89c65b-b50e-4a19-9d0c-b42b783281cd")
    IWindowsDevicesAllJoynBusAttachmentInterop : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Win32Handle( 
            /* [retval][out] */ UINT64 *value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowsDevicesAllJoynBusAttachmentInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
            /* [out] */ TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Win32Handle )( 
            IWindowsDevicesAllJoynBusAttachmentInterop * This,
            /* [retval][out] */ UINT64 *value);
        
        END_INTERFACE
    } IWindowsDevicesAllJoynBusAttachmentInteropVtbl;

    interface IWindowsDevicesAllJoynBusAttachmentInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusAttachmentInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsDevicesAllJoynBusAttachmentInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsDevicesAllJoynBusAttachmentInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsDevicesAllJoynBusAttachmentInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsDevicesAllJoynBusAttachmentInterop_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define IWindowsDevicesAllJoynBusAttachmentInterop_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define IWindowsDevicesAllJoynBusAttachmentInterop_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define IWindowsDevicesAllJoynBusAttachmentInterop_get_Win32Handle(This,value)	\
    ( (This)->lpVtbl -> get_Win32Handle(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsDevicesAllJoynBusAttachmentInterop_INTERFACE_DEFINED__ */


#ifndef __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_INTERFACE_DEFINED__
#define __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_INTERFACE_DEFINED__

/* interface IWindowsDevicesAllJoynBusAttachmentFactoryInterop */
/* [object][uuid][local] */ 


EXTERN_C const IID IID_IWindowsDevicesAllJoynBusAttachmentFactoryInterop;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4b8f7505-b239-4e7b-88af-f6682575d861")
    IWindowsDevicesAllJoynBusAttachmentFactoryInterop : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE CreateFromWin32Handle( 
            /* [in] */ UINT64 win32handle,
            /* [in] */ boolean enableAboutData,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
            /* [out] */ ULONG *iidCount,
            /* [size_is][size_is][out] */ IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
            /* [out] */ HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
            /* [out] */ TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateFromWin32Handle )( 
            IWindowsDevicesAllJoynBusAttachmentFactoryInterop * This,
            /* [in] */ UINT64 win32handle,
            /* [in] */ boolean enableAboutData,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppv);
        
        END_INTERFACE
    } IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl;

    interface IWindowsDevicesAllJoynBusAttachmentFactoryInterop
    {
        CONST_VTBL struct IWindowsDevicesAllJoynBusAttachmentFactoryInteropVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define IWindowsDevicesAllJoynBusAttachmentFactoryInterop_CreateFromWin32Handle(This,win32handle,enableAboutData,riid,ppv)	\
    ( (This)->lpVtbl -> CreateFromWin32Handle(This,win32handle,enableAboutData,riid,ppv) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWindowsDevicesAllJoynBusAttachmentFactoryInterop_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0002 */
/* [local] */ 

#endif //(NTDDI_VERSION >= NTDDI_WINTHRESHOLD)


extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Ealljoyn2Einterop_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


