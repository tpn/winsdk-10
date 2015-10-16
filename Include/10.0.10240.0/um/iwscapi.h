

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

#ifndef __iwscapi_h__
#define __iwscapi_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IWscProduct_FWD_DEFINED__
#define __IWscProduct_FWD_DEFINED__
typedef interface IWscProduct IWscProduct;

#endif 	/* __IWscProduct_FWD_DEFINED__ */


#ifndef __IWSCProductList_FWD_DEFINED__
#define __IWSCProductList_FWD_DEFINED__
typedef interface IWSCProductList IWSCProductList;

#endif 	/* __IWSCProductList_FWD_DEFINED__ */


#ifndef __WSCProductList_FWD_DEFINED__
#define __WSCProductList_FWD_DEFINED__

#ifdef __cplusplus
typedef class WSCProductList WSCProductList;
#else
typedef struct WSCProductList WSCProductList;
#endif /* __cplusplus */

#endif 	/* __WSCProductList_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_iwscapi_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef 
enum _WSC_SECURITY_PRODUCT_STATE
    {
        WSC_SECURITY_PRODUCT_STATE_ON	= 0,
        WSC_SECURITY_PRODUCT_STATE_OFF	= 1,
        WSC_SECURITY_PRODUCT_STATE_SNOOZED	= 2,
        WSC_SECURITY_PRODUCT_STATE_EXPIRED	= 3
    } 	WSC_SECURITY_PRODUCT_STATE;

typedef 
enum _WSC_SECURITY_SIGNATURE_STATUS
    {
        WSC_SECURITY_PRODUCT_OUT_OF_DATE	= 0,
        WSC_SECURITY_PRODUCT_UP_TO_DATE	= 1
    } 	WSC_SECURITY_SIGNATURE_STATUS;



extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0000_v0_0_s_ifspec;

#ifndef __IWscProduct_INTERFACE_DEFINED__
#define __IWscProduct_INTERFACE_DEFINED__

/* interface IWscProduct */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWscProduct;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8C38232E-3A45-4A27-92B0-1A16A975F669")
    IWscProduct : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProductState( 
            /* [retval][out] */ __RPC__out WSC_SECURITY_PRODUCT_STATE *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_SignatureStatus( 
            /* [retval][out] */ __RPC__out WSC_SECURITY_SIGNATURE_STATUS *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_RemediationPath( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_ProductStateTimestamp( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWscProductVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWscProduct * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWscProduct * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWscProduct * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IWscProduct * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IWscProduct * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IWscProduct * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWscProduct * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            __RPC__in IWscProduct * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductState )( 
            __RPC__in IWscProduct * This,
            /* [retval][out] */ __RPC__out WSC_SECURITY_PRODUCT_STATE *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            __RPC__in IWscProduct * This,
            /* [retval][out] */ __RPC__out WSC_SECURITY_SIGNATURE_STATUS *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_RemediationPath )( 
            __RPC__in IWscProduct * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_ProductStateTimestamp )( 
            __RPC__in IWscProduct * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pVal);
        
        END_INTERFACE
    } IWscProductVtbl;

    interface IWscProduct
    {
        CONST_VTBL struct IWscProductVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWscProduct_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWscProduct_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWscProduct_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWscProduct_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWscProduct_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWscProduct_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWscProduct_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWscProduct_get_ProductName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductName(This,pVal) ) 

#define IWscProduct_get_ProductState(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductState(This,pVal) ) 

#define IWscProduct_get_SignatureStatus(This,pVal)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,pVal) ) 

#define IWscProduct_get_RemediationPath(This,pVal)	\
    ( (This)->lpVtbl -> get_RemediationPath(This,pVal) ) 

#define IWscProduct_get_ProductStateTimestamp(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductStateTimestamp(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWscProduct_INTERFACE_DEFINED__ */


#ifndef __IWSCProductList_INTERFACE_DEFINED__
#define __IWSCProductList_INTERFACE_DEFINED__

/* interface IWSCProductList */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IWSCProductList;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("722A338C-6E8E-4E72-AC27-1417FB0C81C2")
    IWSCProductList : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ ULONG provider) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ __RPC__out LONG *pVal) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ ULONG index,
            /* [retval][out] */ __RPC__deref_out_opt IWscProduct **pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IWSCProductListVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IWSCProductList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IWSCProductList * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IWSCProductList * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IWSCProductList * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IWSCProductList * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IWSCProductList * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IWSCProductList * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in IWSCProductList * This,
            /* [in] */ ULONG provider);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            __RPC__in IWSCProductList * This,
            /* [retval][out] */ __RPC__out LONG *pVal);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            __RPC__in IWSCProductList * This,
            /* [in] */ ULONG index,
            /* [retval][out] */ __RPC__deref_out_opt IWscProduct **pVal);
        
        END_INTERFACE
    } IWSCProductListVtbl;

    interface IWSCProductList
    {
        CONST_VTBL struct IWSCProductListVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IWSCProductList_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IWSCProductList_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IWSCProductList_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IWSCProductList_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IWSCProductList_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IWSCProductList_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IWSCProductList_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IWSCProductList_Initialize(This,provider)	\
    ( (This)->lpVtbl -> Initialize(This,provider) ) 

#define IWSCProductList_get_Count(This,pVal)	\
    ( (This)->lpVtbl -> get_Count(This,pVal) ) 

#define IWSCProductList_get_Item(This,index,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,index,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IWSCProductList_INTERFACE_DEFINED__ */



#ifndef __wscAPILib_LIBRARY_DEFINED__
#define __wscAPILib_LIBRARY_DEFINED__

/* library wscAPILib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_wscAPILib;

EXTERN_C const CLSID CLSID_WSCProductList;

#ifdef __cplusplus

class DECLSPEC_UUID("17072F7B-9ABE-4A74-A261-1EB76B55107A")
WSCProductList;
#endif
#endif /* __wscAPILib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_iwscapi_0000_0003 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0003_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


