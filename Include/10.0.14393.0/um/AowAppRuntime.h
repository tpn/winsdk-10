

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

#ifndef __aowappruntime_h__
#define __aowappruntime_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAoWAppActivatedRuntime_FWD_DEFINED__
#define __IAoWAppActivatedRuntime_FWD_DEFINED__
typedef interface IAoWAppActivatedRuntime IAoWAppActivatedRuntime;

#endif 	/* __IAoWAppActivatedRuntime_FWD_DEFINED__ */


#ifndef __IAoWBackgroundTaskRuntime_FWD_DEFINED__
#define __IAoWBackgroundTaskRuntime_FWD_DEFINED__
typedef interface IAoWBackgroundTaskRuntime IAoWBackgroundTaskRuntime;

#endif 	/* __IAoWBackgroundTaskRuntime_FWD_DEFINED__ */


#ifndef __AoWAppActivatedRuntime_FWD_DEFINED__
#define __AoWAppActivatedRuntime_FWD_DEFINED__

#ifdef __cplusplus
typedef class AoWAppActivatedRuntime AoWAppActivatedRuntime;
#else
typedef struct AoWAppActivatedRuntime AoWAppActivatedRuntime;
#endif /* __cplusplus */

#endif 	/* __AoWAppActivatedRuntime_FWD_DEFINED__ */


#ifndef __AoWBackgroundTaskRuntime_FWD_DEFINED__
#define __AoWBackgroundTaskRuntime_FWD_DEFINED__

#ifdef __cplusplus
typedef class AoWBackgroundTaskRuntime AoWBackgroundTaskRuntime;
#else
typedef struct AoWBackgroundTaskRuntime AoWBackgroundTaskRuntime;
#endif /* __cplusplus */

#endif 	/* __AoWBackgroundTaskRuntime_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"
#include "inspectable.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_aowappruntime_0000_0000 */
/* [local] */ 

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


extern RPC_IF_HANDLE __MIDL_itf_aowappruntime_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_aowappruntime_0000_0000_v0_0_s_ifspec;

#ifndef __IAoWAppActivatedRuntime_INTERFACE_DEFINED__
#define __IAoWAppActivatedRuntime_INTERFACE_DEFINED__

/* interface IAoWAppActivatedRuntime */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IAoWAppActivatedRuntime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c35036d2-b8e4-498e-a199-073075e2ea6f")
    IAoWAppActivatedRuntime : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnActivated( 
            /* [in] */ __RPC__in_opt IInspectable *launchActivatedEventArgs) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAoWAppActivatedRuntimeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAoWAppActivatedRuntime * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAoWAppActivatedRuntime * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAoWAppActivatedRuntime * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnActivated )( 
            __RPC__in IAoWAppActivatedRuntime * This,
            /* [in] */ __RPC__in_opt IInspectable *launchActivatedEventArgs);
        
        END_INTERFACE
    } IAoWAppActivatedRuntimeVtbl;

    interface IAoWAppActivatedRuntime
    {
        CONST_VTBL struct IAoWAppActivatedRuntimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAoWAppActivatedRuntime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAoWAppActivatedRuntime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAoWAppActivatedRuntime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAoWAppActivatedRuntime_OnActivated(This,launchActivatedEventArgs)	\
    ( (This)->lpVtbl -> OnActivated(This,launchActivatedEventArgs) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAoWAppActivatedRuntime_INTERFACE_DEFINED__ */


#ifndef __IAoWBackgroundTaskRuntime_INTERFACE_DEFINED__
#define __IAoWBackgroundTaskRuntime_INTERFACE_DEFINED__

/* interface IAoWBackgroundTaskRuntime */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IAoWBackgroundTaskRuntime;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("eacc1765-4c7f-449f-b9f9-7d13135ea10b")
    IAoWBackgroundTaskRuntime : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE RunTask( 
            /* [in] */ __RPC__in_opt IInspectable *backgroundTaskInstance) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAoWBackgroundTaskRuntimeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAoWBackgroundTaskRuntime * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAoWBackgroundTaskRuntime * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAoWBackgroundTaskRuntime * This);
        
        HRESULT ( STDMETHODCALLTYPE *RunTask )( 
            __RPC__in IAoWBackgroundTaskRuntime * This,
            /* [in] */ __RPC__in_opt IInspectable *backgroundTaskInstance);
        
        END_INTERFACE
    } IAoWBackgroundTaskRuntimeVtbl;

    interface IAoWBackgroundTaskRuntime
    {
        CONST_VTBL struct IAoWBackgroundTaskRuntimeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAoWBackgroundTaskRuntime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAoWBackgroundTaskRuntime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAoWBackgroundTaskRuntime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAoWBackgroundTaskRuntime_RunTask(This,backgroundTaskInstance)	\
    ( (This)->lpVtbl -> RunTask(This,backgroundTaskInstance) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAoWBackgroundTaskRuntime_INTERFACE_DEFINED__ */



#ifndef __AoWAppRuntime_LIBRARY_DEFINED__
#define __AoWAppRuntime_LIBRARY_DEFINED__

/* library AoWAppRuntime */
/* [uuid] */ 


EXTERN_C const IID LIBID_AoWAppRuntime;

EXTERN_C const CLSID CLSID_AoWAppActivatedRuntime;

#ifdef __cplusplus

class DECLSPEC_UUID("da3739a3-46a5-4e9b-b2b5-9545eeea93e6")
AoWAppActivatedRuntime;
#endif

EXTERN_C const CLSID CLSID_AoWBackgroundTaskRuntime;

#ifdef __cplusplus

class DECLSPEC_UUID("e213b5d9-4ee5-4e2d-945e-6508c1d050fb")
AoWBackgroundTaskRuntime;
#endif
#endif /* __AoWAppRuntime_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_aowappruntime_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_aowappruntime_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_aowappruntime_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


