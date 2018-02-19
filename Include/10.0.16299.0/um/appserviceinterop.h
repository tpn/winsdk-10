

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

#ifndef __appserviceinterop_h__
#define __appserviceinterop_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAppServiceConnectionExtendedExecution_FWD_DEFINED__
#define __IAppServiceConnectionExtendedExecution_FWD_DEFINED__
typedef interface IAppServiceConnectionExtendedExecution IAppServiceConnectionExtendedExecution;

#endif 	/* __IAppServiceConnectionExtendedExecution_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_appserviceinterop_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#if (NTDDI_VERSION >= NTDDI_WIN10_RS2)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0000_v0_0_s_ifspec;

#ifndef __IAppServiceConnectionExtendedExecution_INTERFACE_DEFINED__
#define __IAppServiceConnectionExtendedExecution_INTERFACE_DEFINED__

/* interface IAppServiceConnectionExtendedExecution */
/* [uuid][unique][object] */ 


EXTERN_C const IID IID_IAppServiceConnectionExtendedExecution;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("65219584-F9CB-4AE3-81F9-A28A6CA450D9")
    IAppServiceConnectionExtendedExecution : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OpenForExtendedExecutionAsync( 
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **operation) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAppServiceConnectionExtendedExecutionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IAppServiceConnectionExtendedExecution * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IAppServiceConnectionExtendedExecution * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IAppServiceConnectionExtendedExecution * This);
        
        HRESULT ( STDMETHODCALLTYPE *OpenForExtendedExecutionAsync )( 
            __RPC__in IAppServiceConnectionExtendedExecution * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt void **operation);
        
        END_INTERFACE
    } IAppServiceConnectionExtendedExecutionVtbl;

    interface IAppServiceConnectionExtendedExecution
    {
        CONST_VTBL struct IAppServiceConnectionExtendedExecutionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAppServiceConnectionExtendedExecution_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAppServiceConnectionExtendedExecution_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAppServiceConnectionExtendedExecution_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAppServiceConnectionExtendedExecution_OpenForExtendedExecutionAsync(This,riid,operation)	\
    ( (This)->lpVtbl -> OpenForExtendedExecutionAsync(This,riid,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAppServiceConnectionExtendedExecution_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_appserviceinterop_0000_0001 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#endif //(NTDDI_VERSION >= NTDDI_WIN10)


extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_appserviceinterop_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


