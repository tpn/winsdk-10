

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

#ifndef __windowsstoragecom_h__
#define __windowsstoragecom_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRandomAccessStreamFileAccessMode_FWD_DEFINED__
#define __IRandomAccessStreamFileAccessMode_FWD_DEFINED__
typedef interface IRandomAccessStreamFileAccessMode IRandomAccessStreamFileAccessMode;

#endif 	/* __IRandomAccessStreamFileAccessMode_FWD_DEFINED__ */


#ifndef __IUnbufferedFileHandleOplockCallback_FWD_DEFINED__
#define __IUnbufferedFileHandleOplockCallback_FWD_DEFINED__
typedef interface IUnbufferedFileHandleOplockCallback IUnbufferedFileHandleOplockCallback;

#endif 	/* __IUnbufferedFileHandleOplockCallback_FWD_DEFINED__ */


#ifndef __IUnbufferedFileHandleProvider_FWD_DEFINED__
#define __IUnbufferedFileHandleProvider_FWD_DEFINED__
typedef interface IUnbufferedFileHandleProvider IUnbufferedFileHandleProvider;

#endif 	/* __IUnbufferedFileHandleProvider_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windowsstoragecom_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0000_v0_0_s_ifspec;

#ifndef __IRandomAccessStreamFileAccessMode_INTERFACE_DEFINED__
#define __IRandomAccessStreamFileAccessMode_INTERFACE_DEFINED__

/* interface IRandomAccessStreamFileAccessMode */
/* [uuid][object] */ 


EXTERN_C const IID IID_IRandomAccessStreamFileAccessMode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("332E5848-2E15-458E-85C4-C911C0C3D6F4")
    IRandomAccessStreamFileAccessMode : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetMode( 
            /* [out] */ __RPC__out DWORD *fileAccessMode) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRandomAccessStreamFileAccessModeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRandomAccessStreamFileAccessMode * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRandomAccessStreamFileAccessMode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRandomAccessStreamFileAccessMode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetMode )( 
            __RPC__in IRandomAccessStreamFileAccessMode * This,
            /* [out] */ __RPC__out DWORD *fileAccessMode);
        
        END_INTERFACE
    } IRandomAccessStreamFileAccessModeVtbl;

    interface IRandomAccessStreamFileAccessMode
    {
        CONST_VTBL struct IRandomAccessStreamFileAccessModeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRandomAccessStreamFileAccessMode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRandomAccessStreamFileAccessMode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRandomAccessStreamFileAccessMode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRandomAccessStreamFileAccessMode_GetMode(This,fileAccessMode)	\
    ( (This)->lpVtbl -> GetMode(This,fileAccessMode) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRandomAccessStreamFileAccessMode_INTERFACE_DEFINED__ */


#ifndef __IUnbufferedFileHandleOplockCallback_INTERFACE_DEFINED__
#define __IUnbufferedFileHandleOplockCallback_INTERFACE_DEFINED__

/* interface IUnbufferedFileHandleOplockCallback */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IUnbufferedFileHandleOplockCallback;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D1019A0E-6243-4329-8497-2E75894D7710")
    IUnbufferedFileHandleOplockCallback : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnBrokenCallback( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnbufferedFileHandleOplockCallbackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnbufferedFileHandleOplockCallback * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnbufferedFileHandleOplockCallback * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnbufferedFileHandleOplockCallback * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnBrokenCallback )( 
            IUnbufferedFileHandleOplockCallback * This);
        
        END_INTERFACE
    } IUnbufferedFileHandleOplockCallbackVtbl;

    interface IUnbufferedFileHandleOplockCallback
    {
        CONST_VTBL struct IUnbufferedFileHandleOplockCallbackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnbufferedFileHandleOplockCallback_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnbufferedFileHandleOplockCallback_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnbufferedFileHandleOplockCallback_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnbufferedFileHandleOplockCallback_OnBrokenCallback(This)	\
    ( (This)->lpVtbl -> OnBrokenCallback(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnbufferedFileHandleOplockCallback_INTERFACE_DEFINED__ */


#ifndef __IUnbufferedFileHandleProvider_INTERFACE_DEFINED__
#define __IUnbufferedFileHandleProvider_INTERFACE_DEFINED__

/* interface IUnbufferedFileHandleProvider */
/* [uuid][object] */ 


EXTERN_C const IID IID_IUnbufferedFileHandleProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A65C9109-42AB-4B94-A7B1-DD2E4E68515E")
    IUnbufferedFileHandleProvider : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OpenUnbufferedFileHandle( 
            /* [in] */ __RPC__in_opt IUnbufferedFileHandleOplockCallback *oplockBreakCallback,
            /* [retval][out] */ __RPC__out DWORD_PTR *fileHandle) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseUnbufferedFileHandle( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnbufferedFileHandleProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IUnbufferedFileHandleProvider * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IUnbufferedFileHandleProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IUnbufferedFileHandleProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *OpenUnbufferedFileHandle )( 
            __RPC__in IUnbufferedFileHandleProvider * This,
            /* [in] */ __RPC__in_opt IUnbufferedFileHandleOplockCallback *oplockBreakCallback,
            /* [retval][out] */ __RPC__out DWORD_PTR *fileHandle);
        
        HRESULT ( STDMETHODCALLTYPE *CloseUnbufferedFileHandle )( 
            __RPC__in IUnbufferedFileHandleProvider * This);
        
        END_INTERFACE
    } IUnbufferedFileHandleProviderVtbl;

    interface IUnbufferedFileHandleProvider
    {
        CONST_VTBL struct IUnbufferedFileHandleProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnbufferedFileHandleProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnbufferedFileHandleProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnbufferedFileHandleProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnbufferedFileHandleProvider_OpenUnbufferedFileHandle(This,oplockBreakCallback,fileHandle)	\
    ( (This)->lpVtbl -> OpenUnbufferedFileHandle(This,oplockBreakCallback,fileHandle) ) 

#define IUnbufferedFileHandleProvider_CloseUnbufferedFileHandle(This)	\
    ( (This)->lpVtbl -> CloseUnbufferedFileHandle(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnbufferedFileHandleProvider_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windowsstoragecom_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowsstoragecom_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


