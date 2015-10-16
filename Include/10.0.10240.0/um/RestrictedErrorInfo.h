

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

#ifndef __restrictederrorinfo_h__
#define __restrictederrorinfo_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IRestrictedErrorInfo_FWD_DEFINED__
#define __IRestrictedErrorInfo_FWD_DEFINED__
typedef interface IRestrictedErrorInfo IRestrictedErrorInfo;

#endif 	/* __IRestrictedErrorInfo_FWD_DEFINED__ */


#ifndef __ILanguageExceptionErrorInfo_FWD_DEFINED__
#define __ILanguageExceptionErrorInfo_FWD_DEFINED__
typedef interface ILanguageExceptionErrorInfo ILanguageExceptionErrorInfo;

#endif 	/* __ILanguageExceptionErrorInfo_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_restrictederrorinfo_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)


extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0000_v0_0_s_ifspec;

#ifndef __IRestrictedErrorInfo_INTERFACE_DEFINED__
#define __IRestrictedErrorInfo_INTERFACE_DEFINED__

/* interface IRestrictedErrorInfo */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_IRestrictedErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("82BA7092-4C88-427D-A7BC-16DD93FEB67E")
    IRestrictedErrorInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetErrorDetails( 
            /* [out] */ __RPC__deref_out_opt BSTR *description,
            /* [out] */ __RPC__out HRESULT *error,
            /* [out] */ __RPC__deref_out_opt BSTR *restrictedDescription,
            /* [out] */ __RPC__deref_out_opt BSTR *capabilitySid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetReference( 
            /* [out] */ __RPC__deref_out_opt BSTR *reference) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRestrictedErrorInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IRestrictedErrorInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IRestrictedErrorInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IRestrictedErrorInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetErrorDetails )( 
            __RPC__in IRestrictedErrorInfo * This,
            /* [out] */ __RPC__deref_out_opt BSTR *description,
            /* [out] */ __RPC__out HRESULT *error,
            /* [out] */ __RPC__deref_out_opt BSTR *restrictedDescription,
            /* [out] */ __RPC__deref_out_opt BSTR *capabilitySid);
        
        HRESULT ( STDMETHODCALLTYPE *GetReference )( 
            __RPC__in IRestrictedErrorInfo * This,
            /* [out] */ __RPC__deref_out_opt BSTR *reference);
        
        END_INTERFACE
    } IRestrictedErrorInfoVtbl;

    interface IRestrictedErrorInfo
    {
        CONST_VTBL struct IRestrictedErrorInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRestrictedErrorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRestrictedErrorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRestrictedErrorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRestrictedErrorInfo_GetErrorDetails(This,description,error,restrictedDescription,capabilitySid)	\
    ( (This)->lpVtbl -> GetErrorDetails(This,description,error,restrictedDescription,capabilitySid) ) 

#define IRestrictedErrorInfo_GetReference(This,reference)	\
    ( (This)->lpVtbl -> GetReference(This,reference) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRestrictedErrorInfo_INTERFACE_DEFINED__ */


#ifndef __ILanguageExceptionErrorInfo_INTERFACE_DEFINED__
#define __ILanguageExceptionErrorInfo_INTERFACE_DEFINED__

/* interface ILanguageExceptionErrorInfo */
/* [object][unique][uuid] */ 


EXTERN_C const IID IID_ILanguageExceptionErrorInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04a2dbf3-df83-116c-0946-0812abf6e07d")
    ILanguageExceptionErrorInfo : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetLanguageException( 
            /* [out] */ __RPC__deref_out_opt IUnknown **languageException) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ILanguageExceptionErrorInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ILanguageExceptionErrorInfo * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ILanguageExceptionErrorInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ILanguageExceptionErrorInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetLanguageException )( 
            __RPC__in ILanguageExceptionErrorInfo * This,
            /* [out] */ __RPC__deref_out_opt IUnknown **languageException);
        
        END_INTERFACE
    } ILanguageExceptionErrorInfoVtbl;

    interface ILanguageExceptionErrorInfo
    {
        CONST_VTBL struct ILanguageExceptionErrorInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ILanguageExceptionErrorInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ILanguageExceptionErrorInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ILanguageExceptionErrorInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ILanguageExceptionErrorInfo_GetLanguageException(This,languageException)	\
    ( (This)->lpVtbl -> GetLanguageException(This,languageException) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ILanguageExceptionErrorInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_restrictederrorinfo_0000_0002 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0002_v0_0_s_ifspec;

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


