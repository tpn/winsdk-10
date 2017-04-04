

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

#ifndef __avapi_h__
#define __avapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAvAsyncResult_FWD_DEFINED__
#define __IAvAsyncResult_FWD_DEFINED__
typedef interface IAvAsyncResult IAvAsyncResult;

#endif 	/* __IAvAsyncResult_FWD_DEFINED__ */


#ifndef __IAvEvent_FWD_DEFINED__
#define __IAvEvent_FWD_DEFINED__
typedef interface IAvEvent IAvEvent;

#endif 	/* __IAvEvent_FWD_DEFINED__ */


/* header files for imported files */
#include "unknwn.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_avapi_0000_0000 */
/* [local] */ 

#include <AvError.h>


typedef /* [public][public][public][public] */ 
enum __MIDL___MIDL_itf_avapi_0000_0000_0001
    {
        AV_VARIANT_ARRAY_ELEMENT_TYPE_BOOL	= 0,
        AV_VARIANT_ARRAY_ELEMENT_TYPE_LONG	= ( AV_VARIANT_ARRAY_ELEMENT_TYPE_BOOL + 1 ) ,
        AV_VARIANT_ARRAY_ELEMENT_TYPE_SIZE	= ( AV_VARIANT_ARRAY_ELEMENT_TYPE_LONG + 1 ) ,
        AV_VARIANT_ARRAY_ELEMENT_TYPE_DOUBLE	= ( AV_VARIANT_ARRAY_ELEMENT_TYPE_SIZE + 1 ) 
    } 	AV_VARIANT_ARRAY_ELEMENT_TYPE;

typedef /* [public][public][public][public] */ union __MIDL___MIDL_itf_avapi_0000_0000_0002
    {
    BOOL avBool;
    LONG avLong;
    SIZE avSize;
    double avDouble;
    } 	AV_VARIANT_ARRAY_VALUE;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_avapi_0000_0000_0003
    {
    AV_VARIANT_ARRAY_ELEMENT_TYPE Type;
    AV_VARIANT_ARRAY_VALUE Value;
    } 	AV_VARIANT_ARRAY_ELEMENT;

typedef /* [public][public][public][public] */ struct __MIDL___MIDL_itf_avapi_0000_0000_0004
    {
    DWORD nElements;
    AV_VARIANT_ARRAY_ELEMENT *rgElements;
    } 	AV_VARIANT_ARRAY;

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_avapi_0000_0000_0005
    {
        AV_VARIANT_TYPE_BOOL	= 0,
        AV_VARIANT_TYPE_LONG	= ( AV_VARIANT_TYPE_BOOL + 1 ) ,
        AV_VARIANT_TYPE_WSTR	= ( AV_VARIANT_TYPE_LONG + 1 ) ,
        AV_VARIANT_TYPE_SIZE	= ( AV_VARIANT_TYPE_WSTR + 1 ) ,
        AV_VARIANT_TYPE_DOUBLE	= ( AV_VARIANT_TYPE_SIZE + 1 ) ,
        AV_VARIANT_TYPE_ARRAY	= ( AV_VARIANT_TYPE_DOUBLE + 1 ) 
    } 	AV_VARIANT_TYPE;

typedef /* [public][public][public] */ union __MIDL___MIDL_itf_avapi_0000_0000_0006
    {
    BOOL avBool;
    LONG avLong;
    LPCWSTR avStr;
    SIZE avSize;
    double avDouble;
    AV_VARIANT_ARRAY avArray;
    } 	AV_VARIANT_VALUE;

typedef /* [public][public] */ struct __MIDL___MIDL_itf_avapi_0000_0000_0007
    {
    DWORD cbSize;
    AV_VARIANT_TYPE Type;
    AV_VARIANT_VALUE Value;
    } 	AV_VARIANT;

typedef VOID ( *AV_ASYNCCALLBACK )( 
    /* [in] */ IAvAsyncResult *pAsyncResult,
    /* [in] */ IUnknown *pContext);

DEFINE_GUID(IID_IAvAsyncResult, 0xaa830160, 0x1579, 0x47e9, 0x85, 0xc2, 0x59, 0x53, 0x7, 0x34, 0xe1, 0xb0);


extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0000_v0_0_s_ifspec;

#ifndef __IAvAsyncResult_INTERFACE_DEFINED__
#define __IAvAsyncResult_INTERFACE_DEFINED__

/* interface IAvAsyncResult */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IAvAsyncResult;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA830160-1579-47E9-85C2-59530734E1B0")
    IAvAsyncResult : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetResult( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAvAsyncResultVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvAsyncResult * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvAsyncResult * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvAsyncResult * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetResult )( 
            IAvAsyncResult * This);
        
        END_INTERFACE
    } IAvAsyncResultVtbl;

    interface IAvAsyncResult
    {
        CONST_VTBL struct IAvAsyncResultVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvAsyncResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAvAsyncResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAvAsyncResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAvAsyncResult_GetResult(This)	\
    ( (This)->lpVtbl -> GetResult(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAvAsyncResult_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_avapi_0000_0001 */
/* [local] */ 

typedef VOID ( *AV_EVENTCALLBACK )( 
    /* [in] */ IAvEvent *pEvent,
    /* [in] */ IUnknown *pContext);

DEFINE_GUID(IID_IAvEvent, 0xf6b0ac1e, 0x9291, 0x46d0, 0x8b, 0x93, 0xd0, 0x3d, 0xea, 0xb0, 0xb9, 0x6b);


extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0001_v0_0_s_ifspec;

#ifndef __IAvEvent_INTERFACE_DEFINED__
#define __IAvEvent_INTERFACE_DEFINED__

/* interface IAvEvent */
/* [unique][uuid][local][object] */ 


EXTERN_C const IID IID_IAvEvent;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F6B0AC1E-9291-46D0-8B93-D03DEAB0B96B")
    IAvEvent : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetEventId( 
            /* [out] */ GUID *pguidEvent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNumParameters( 
            /* [out] */ DWORD *pcParameters) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetParameter( 
            /* [in] */ DWORD dwParamIndex,
            /* [out] */ AV_VARIANT **ppvarParameter) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAvEventVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAvEvent * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAvEvent * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAvEvent * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetEventId )( 
            IAvEvent * This,
            /* [out] */ GUID *pguidEvent);
        
        HRESULT ( STDMETHODCALLTYPE *GetNumParameters )( 
            IAvEvent * This,
            /* [out] */ DWORD *pcParameters);
        
        HRESULT ( STDMETHODCALLTYPE *GetParameter )( 
            IAvEvent * This,
            /* [in] */ DWORD dwParamIndex,
            /* [out] */ AV_VARIANT **ppvarParameter);
        
        END_INTERFACE
    } IAvEventVtbl;

    interface IAvEvent
    {
        CONST_VTBL struct IAvEventVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAvEvent_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAvEvent_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAvEvent_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAvEvent_GetEventId(This,pguidEvent)	\
    ( (This)->lpVtbl -> GetEventId(This,pguidEvent) ) 

#define IAvEvent_GetNumParameters(This,pcParameters)	\
    ( (This)->lpVtbl -> GetNumParameters(This,pcParameters) ) 

#define IAvEvent_GetParameter(This,dwParamIndex,ppvarParameter)	\
    ( (This)->lpVtbl -> GetParameter(This,dwParamIndex,ppvarParameter) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAvEvent_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_avapi_0000_0002 */
/* [local] */ 

HRESULT
AvCommon_CreateAvVariantArray(
    DWORD cElements,
    __deref_out AV_VARIANT **ppVariant
    );


extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_avapi_0000_0002_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


