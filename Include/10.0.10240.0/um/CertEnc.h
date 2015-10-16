

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

#ifndef __certenc_h__
#define __certenc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICertEncodeStringArray_FWD_DEFINED__
#define __ICertEncodeStringArray_FWD_DEFINED__
typedef interface ICertEncodeStringArray ICertEncodeStringArray;

#endif 	/* __ICertEncodeStringArray_FWD_DEFINED__ */


#ifndef __ICertEncodeLongArray_FWD_DEFINED__
#define __ICertEncodeLongArray_FWD_DEFINED__
typedef interface ICertEncodeLongArray ICertEncodeLongArray;

#endif 	/* __ICertEncodeLongArray_FWD_DEFINED__ */


#ifndef __ICertEncodeDateArray_FWD_DEFINED__
#define __ICertEncodeDateArray_FWD_DEFINED__
typedef interface ICertEncodeDateArray ICertEncodeDateArray;

#endif 	/* __ICertEncodeDateArray_FWD_DEFINED__ */


#ifndef __ICertEncodeCRLDistInfo_FWD_DEFINED__
#define __ICertEncodeCRLDistInfo_FWD_DEFINED__
typedef interface ICertEncodeCRLDistInfo ICertEncodeCRLDistInfo;

#endif 	/* __ICertEncodeCRLDistInfo_FWD_DEFINED__ */


#ifndef __ICertEncodeAltName_FWD_DEFINED__
#define __ICertEncodeAltName_FWD_DEFINED__
typedef interface ICertEncodeAltName ICertEncodeAltName;

#endif 	/* __ICertEncodeAltName_FWD_DEFINED__ */


#ifndef __ICertEncodeBitString_FWD_DEFINED__
#define __ICertEncodeBitString_FWD_DEFINED__
typedef interface ICertEncodeBitString ICertEncodeBitString;

#endif 	/* __ICertEncodeBitString_FWD_DEFINED__ */


#ifndef __CCertEncodeStringArray_FWD_DEFINED__
#define __CCertEncodeStringArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeStringArray CCertEncodeStringArray;
#else
typedef struct CCertEncodeStringArray CCertEncodeStringArray;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeStringArray_FWD_DEFINED__ */


#ifndef __CCertEncodeLongArray_FWD_DEFINED__
#define __CCertEncodeLongArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeLongArray CCertEncodeLongArray;
#else
typedef struct CCertEncodeLongArray CCertEncodeLongArray;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeLongArray_FWD_DEFINED__ */


#ifndef __CCertEncodeDateArray_FWD_DEFINED__
#define __CCertEncodeDateArray_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeDateArray CCertEncodeDateArray;
#else
typedef struct CCertEncodeDateArray CCertEncodeDateArray;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeDateArray_FWD_DEFINED__ */


#ifndef __CCertEncodeCRLDistInfo_FWD_DEFINED__
#define __CCertEncodeCRLDistInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeCRLDistInfo CCertEncodeCRLDistInfo;
#else
typedef struct CCertEncodeCRLDistInfo CCertEncodeCRLDistInfo;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeCRLDistInfo_FWD_DEFINED__ */


#ifndef __CCertEncodeAltName_FWD_DEFINED__
#define __CCertEncodeAltName_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeAltName CCertEncodeAltName;
#else
typedef struct CCertEncodeAltName CCertEncodeAltName;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeAltName_FWD_DEFINED__ */


#ifndef __CCertEncodeBitString_FWD_DEFINED__
#define __CCertEncodeBitString_FWD_DEFINED__

#ifdef __cplusplus
typedef class CCertEncodeBitString CCertEncodeBitString;
#else
typedef struct CCertEncodeBitString CCertEncodeBitString;
#endif /* __cplusplus */

#endif 	/* __CCertEncodeBitString_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_certenc_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)


extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_s_ifspec;

#ifndef __ICertEncodeStringArray_INTERFACE_DEFINED__
#define __ICertEncodeStringArray_INTERFACE_DEFINED__

/* interface ICertEncodeStringArray */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeStringArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("12a88820-7494-11d0-8816-00a0c903b83c")
    ICertEncodeStringArray : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStringType( 
            /* [retval][out] */ __RPC__out LONG *pStringType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ __RPC__out LONG *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstr) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            /* [in] */ LONG Count,
            /* [in] */ LONG StringType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ LONG Index,
            /* [in] */ __RPC__in const BSTR str) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeStringArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeStringArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeStringArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeStringArray * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetStringType )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [retval][out] */ __RPC__out LONG *pStringType);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [retval][out] */ __RPC__out LONG *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstr);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ LONG Count,
            /* [in] */ LONG StringType);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [in] */ LONG Index,
            /* [in] */ __RPC__in const BSTR str);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeStringArray * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeStringArrayVtbl;

    interface ICertEncodeStringArray
    {
        CONST_VTBL struct ICertEncodeStringArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeStringArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeStringArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeStringArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeStringArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeStringArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeStringArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeStringArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeStringArray_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeStringArray_GetStringType(This,pStringType)	\
    ( (This)->lpVtbl -> GetStringType(This,pStringType) ) 

#define ICertEncodeStringArray_GetCount(This,pCount)	\
    ( (This)->lpVtbl -> GetCount(This,pCount) ) 

#define ICertEncodeStringArray_GetValue(This,Index,pstr)	\
    ( (This)->lpVtbl -> GetValue(This,Index,pstr) ) 

#define ICertEncodeStringArray_Reset(This,Count,StringType)	\
    ( (This)->lpVtbl -> Reset(This,Count,StringType) ) 

#define ICertEncodeStringArray_SetValue(This,Index,str)	\
    ( (This)->lpVtbl -> SetValue(This,Index,str) ) 

#define ICertEncodeStringArray_Encode(This,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeStringArray_INTERFACE_DEFINED__ */


#ifndef __ICertEncodeLongArray_INTERFACE_DEFINED__
#define __ICertEncodeLongArray_INTERFACE_DEFINED__

/* interface ICertEncodeLongArray */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeLongArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("15e2f230-a0a2-11d0-8821-00a0c903b83c")
    ICertEncodeLongArray : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ __RPC__out LONG *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out LONG *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            /* [in] */ LONG Count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ LONG Index,
            /* [in] */ LONG Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeLongArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeLongArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeLongArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeLongArray * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [retval][out] */ __RPC__out LONG *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out LONG *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ LONG Count);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [in] */ LONG Index,
            /* [in] */ LONG Value);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeLongArray * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeLongArrayVtbl;

    interface ICertEncodeLongArray
    {
        CONST_VTBL struct ICertEncodeLongArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeLongArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeLongArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeLongArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeLongArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeLongArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeLongArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeLongArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeLongArray_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeLongArray_GetCount(This,pCount)	\
    ( (This)->lpVtbl -> GetCount(This,pCount) ) 

#define ICertEncodeLongArray_GetValue(This,Index,pValue)	\
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) ) 

#define ICertEncodeLongArray_Reset(This,Count)	\
    ( (This)->lpVtbl -> Reset(This,Count) ) 

#define ICertEncodeLongArray_SetValue(This,Index,Value)	\
    ( (This)->lpVtbl -> SetValue(This,Index,Value) ) 

#define ICertEncodeLongArray_Encode(This,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeLongArray_INTERFACE_DEFINED__ */


#ifndef __ICertEncodeDateArray_INTERFACE_DEFINED__
#define __ICertEncodeDateArray_INTERFACE_DEFINED__

/* interface ICertEncodeDateArray */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeDateArray;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2f9469a0-a470-11d0-8821-00a0c903b83c")
    ICertEncodeDateArray : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCount( 
            /* [retval][out] */ __RPC__out LONG *pCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out DATE *pValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            /* [in] */ LONG Count) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetValue( 
            /* [in] */ LONG Index,
            /* [in] */ DATE Value) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeDateArrayVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeDateArray * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeDateArray * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeDateArray * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetCount )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [retval][out] */ __RPC__out LONG *pCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ LONG Index,
            /* [retval][out] */ __RPC__out DATE *pValue);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ LONG Count);
        
        HRESULT ( STDMETHODCALLTYPE *SetValue )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [in] */ LONG Index,
            /* [in] */ DATE Value);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeDateArray * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeDateArrayVtbl;

    interface ICertEncodeDateArray
    {
        CONST_VTBL struct ICertEncodeDateArrayVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeDateArray_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeDateArray_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeDateArray_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeDateArray_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeDateArray_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeDateArray_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeDateArray_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeDateArray_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeDateArray_GetCount(This,pCount)	\
    ( (This)->lpVtbl -> GetCount(This,pCount) ) 

#define ICertEncodeDateArray_GetValue(This,Index,pValue)	\
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) ) 

#define ICertEncodeDateArray_Reset(This,Count)	\
    ( (This)->lpVtbl -> Reset(This,Count) ) 

#define ICertEncodeDateArray_SetValue(This,Index,Value)	\
    ( (This)->lpVtbl -> SetValue(This,Index,Value) ) 

#define ICertEncodeDateArray_Encode(This,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeDateArray_INTERFACE_DEFINED__ */


#ifndef __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__
#define __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__

/* interface ICertEncodeCRLDistInfo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeCRLDistInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("01958640-bbff-11d0-8825-00a0c903b83c")
    ICertEncodeCRLDistInfo : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDistPointCount( 
            /* [retval][out] */ __RPC__out LONG *pDistPointCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameCount( 
            /* [in] */ LONG DistPointIndex,
            /* [retval][out] */ __RPC__out LONG *pNameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameChoice( 
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__out LONG *pNameChoice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            /* [in] */ LONG DistPointCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNameCount( 
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNameEntry( 
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [in] */ LONG NameChoice,
            /* [in] */ __RPC__in const BSTR strName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeCRLDistInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeCRLDistInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeCRLDistInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeCRLDistInfo * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetDistPointCount )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [retval][out] */ __RPC__out LONG *pDistPointCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointIndex,
            /* [retval][out] */ __RPC__out LONG *pNameCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__out LONG *pNameChoice);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetNameCount )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [in] */ LONG DistPointIndex,
            /* [in] */ LONG NameIndex,
            /* [in] */ LONG NameChoice,
            /* [in] */ __RPC__in const BSTR strName);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeCRLDistInfo * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeCRLDistInfoVtbl;

    interface ICertEncodeCRLDistInfo
    {
        CONST_VTBL struct ICertEncodeCRLDistInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeCRLDistInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeCRLDistInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeCRLDistInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeCRLDistInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeCRLDistInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeCRLDistInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeCRLDistInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeCRLDistInfo_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeCRLDistInfo_GetDistPointCount(This,pDistPointCount)	\
    ( (This)->lpVtbl -> GetDistPointCount(This,pDistPointCount) ) 

#define ICertEncodeCRLDistInfo_GetNameCount(This,DistPointIndex,pNameCount)	\
    ( (This)->lpVtbl -> GetNameCount(This,DistPointIndex,pNameCount) ) 

#define ICertEncodeCRLDistInfo_GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice)	\
    ( (This)->lpVtbl -> GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) ) 

#define ICertEncodeCRLDistInfo_GetName(This,DistPointIndex,NameIndex,pstrName)	\
    ( (This)->lpVtbl -> GetName(This,DistPointIndex,NameIndex,pstrName) ) 

#define ICertEncodeCRLDistInfo_Reset(This,DistPointCount)	\
    ( (This)->lpVtbl -> Reset(This,DistPointCount) ) 

#define ICertEncodeCRLDistInfo_SetNameCount(This,DistPointIndex,NameCount)	\
    ( (This)->lpVtbl -> SetNameCount(This,DistPointIndex,NameCount) ) 

#define ICertEncodeCRLDistInfo_SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName)	\
    ( (This)->lpVtbl -> SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) ) 

#define ICertEncodeCRLDistInfo_Encode(This,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeCRLDistInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_certenc_0000_0004 */
/* [local] */ 

#define	EAN_NAMEOBJECTID	( 0x80000000 )

#define	EANR_SUPPRESS_IA5CONVERSION	( 0x80000000 )



extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0004_v0_0_s_ifspec;

#ifndef __ICertEncodeAltName_INTERFACE_DEFINED__
#define __ICertEncodeAltName_INTERFACE_DEFINED__

/* interface ICertEncodeAltName */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeAltName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1c9a8c70-1271-11d1-9bd4-00c04fb683fa")
    ICertEncodeAltName : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameCount( 
            /* [retval][out] */ __RPC__out LONG *pNameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNameChoice( 
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__out LONG *pNameChoice) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( 
            /* [in] */ LONG NameCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNameEntry( 
            /* [in] */ LONG NameIndex,
            /* [in] */ LONG NameChoice,
            /* [in] */ __RPC__in const BSTR strName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeAltNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeAltName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeAltName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeAltName * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeAltName * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )( 
            __RPC__in ICertEncodeAltName * This,
            /* [retval][out] */ __RPC__out LONG *pNameCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__out LONG *pNameChoice);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ LONG NameIndex,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrName);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ LONG NameCount);
        
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )( 
            __RPC__in ICertEncodeAltName * This,
            /* [in] */ LONG NameIndex,
            /* [in] */ LONG NameChoice,
            /* [in] */ __RPC__in const BSTR strName);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeAltName * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeAltNameVtbl;

    interface ICertEncodeAltName
    {
        CONST_VTBL struct ICertEncodeAltNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeAltName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeAltName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeAltName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeAltName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeAltName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeAltName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeAltName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeAltName_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeAltName_GetNameCount(This,pNameCount)	\
    ( (This)->lpVtbl -> GetNameCount(This,pNameCount) ) 

#define ICertEncodeAltName_GetNameChoice(This,NameIndex,pNameChoice)	\
    ( (This)->lpVtbl -> GetNameChoice(This,NameIndex,pNameChoice) ) 

#define ICertEncodeAltName_GetName(This,NameIndex,pstrName)	\
    ( (This)->lpVtbl -> GetName(This,NameIndex,pstrName) ) 

#define ICertEncodeAltName_Reset(This,NameCount)	\
    ( (This)->lpVtbl -> Reset(This,NameCount) ) 

#define ICertEncodeAltName_SetNameEntry(This,NameIndex,NameChoice,strName)	\
    ( (This)->lpVtbl -> SetNameEntry(This,NameIndex,NameChoice,strName) ) 

#define ICertEncodeAltName_Encode(This,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeAltName_INTERFACE_DEFINED__ */


#ifndef __ICertEncodeBitString_INTERFACE_DEFINED__
#define __ICertEncodeBitString_INTERFACE_DEFINED__

/* interface ICertEncodeBitString */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ICertEncodeBitString;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6db525be-1278-11d1-9bd4-00c04fb683fa")
    ICertEncodeBitString : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Decode( 
            /* [in] */ __RPC__in const BSTR strBinary) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBitCount( 
            /* [retval][out] */ __RPC__out LONG *pBitCount) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBitString( 
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBitString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Encode( 
            /* [in] */ LONG BitCount,
            /* [in] */ __RPC__in BSTR strBitString,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICertEncodeBitStringVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ICertEncodeBitString * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ICertEncodeBitString * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ICertEncodeBitString * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in ICertEncodeBitString * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in ICertEncodeBitString * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in ICertEncodeBitString * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICertEncodeBitString * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *Decode )( 
            __RPC__in ICertEncodeBitString * This,
            /* [in] */ __RPC__in const BSTR strBinary);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitCount )( 
            __RPC__in ICertEncodeBitString * This,
            /* [retval][out] */ __RPC__out LONG *pBitCount);
        
        HRESULT ( STDMETHODCALLTYPE *GetBitString )( 
            __RPC__in ICertEncodeBitString * This,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBitString);
        
        HRESULT ( STDMETHODCALLTYPE *Encode )( 
            __RPC__in ICertEncodeBitString * This,
            /* [in] */ LONG BitCount,
            /* [in] */ __RPC__in BSTR strBitString,
            /* [retval][out] */ __RPC__deref_out_opt BSTR *pstrBinary);
        
        END_INTERFACE
    } ICertEncodeBitStringVtbl;

    interface ICertEncodeBitString
    {
        CONST_VTBL struct ICertEncodeBitStringVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICertEncodeBitString_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICertEncodeBitString_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICertEncodeBitString_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICertEncodeBitString_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICertEncodeBitString_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICertEncodeBitString_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICertEncodeBitString_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICertEncodeBitString_Decode(This,strBinary)	\
    ( (This)->lpVtbl -> Decode(This,strBinary) ) 

#define ICertEncodeBitString_GetBitCount(This,pBitCount)	\
    ( (This)->lpVtbl -> GetBitCount(This,pBitCount) ) 

#define ICertEncodeBitString_GetBitString(This,pstrBitString)	\
    ( (This)->lpVtbl -> GetBitString(This,pstrBitString) ) 

#define ICertEncodeBitString_Encode(This,BitCount,strBitString,pstrBinary)	\
    ( (This)->lpVtbl -> Encode(This,BitCount,strBitString,pstrBinary) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICertEncodeBitString_INTERFACE_DEFINED__ */



#ifndef __CERTENCODELib_LIBRARY_DEFINED__
#define __CERTENCODELib_LIBRARY_DEFINED__

/* library CERTENCODELib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CERTENCODELib;

EXTERN_C const CLSID CLSID_CCertEncodeStringArray;

#ifdef __cplusplus

class DECLSPEC_UUID("19a76fe0-7494-11d0-8816-00a0c903b83c")
CCertEncodeStringArray;
#endif

EXTERN_C const CLSID CLSID_CCertEncodeLongArray;

#ifdef __cplusplus

class DECLSPEC_UUID("4e0680a0-a0a2-11d0-8821-00a0c903b83c")
CCertEncodeLongArray;
#endif

EXTERN_C const CLSID CLSID_CCertEncodeDateArray;

#ifdef __cplusplus

class DECLSPEC_UUID("301f77b0-a470-11d0-8821-00a0c903b83c")
CCertEncodeDateArray;
#endif

EXTERN_C const CLSID CLSID_CCertEncodeCRLDistInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("01fa60a0-bbff-11d0-8825-00a0c903b83c")
CCertEncodeCRLDistInfo;
#endif

EXTERN_C const CLSID CLSID_CCertEncodeAltName;

#ifdef __cplusplus

class DECLSPEC_UUID("1cfc4cda-1271-11d1-9bd4-00c04fb683fa")
CCertEncodeAltName;
#endif

EXTERN_C const CLSID CLSID_CCertEncodeBitString;

#ifdef __cplusplus

class DECLSPEC_UUID("6d6b3cd8-1278-11d1-9bd4-00c04fb683fa")
CCertEncodeBitString;
#endif
#endif /* __CERTENCODELib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_certenc_0000_0007 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0007_v0_0_s_ifspec;

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


