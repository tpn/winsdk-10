

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

#ifndef __windows2Eweb_h__
#define __windows2Eweb_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver __x_ABI_CWindows_CWeb_CIUriToStreamResolver;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Web {
            interface IUriToStreamResolver;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CWeb_CIWebErrorStatics __x_ABI_CWindows_CWeb_CIWebErrorStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Web {
            interface IWebErrorStatics;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CWeb_CIWebErrorStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eweb_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Streams {
interface IInputStream;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eweb_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Eidl_0000_3107 */




/* interface __MIDL_itf_windows2Eweb2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d0bd0125-9049-57a3-bd66-e2525d98c814"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IInputStream*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IInputStream>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IInputStream*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIInputStream_USE */


/* interface __MIDL_itf_windows2Eweb_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb2Eidl_0000_3108 */




/* interface __MIDL_itf_windows2Eweb2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eweb_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8fe0732-556d-5841-b7ee-b3450fb52666"))
IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IInputStream*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IInputStream>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IInputStream*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
class Uri;
} /*Foundation*/
} /*Windows*/
}
#endif

#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;


#endif /* end if !defined(__cplusplus) */


#endif


#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CWeb_CWebErrorStatus
    {
        WebErrorStatus_Unknown	= 0,
        WebErrorStatus_CertificateCommonNameIsIncorrect	= 1,
        WebErrorStatus_CertificateExpired	= 2,
        WebErrorStatus_CertificateContainsErrors	= 3,
        WebErrorStatus_CertificateRevoked	= 4,
        WebErrorStatus_CertificateIsInvalid	= 5,
        WebErrorStatus_ServerUnreachable	= 6,
        WebErrorStatus_Timeout	= 7,
        WebErrorStatus_ErrorHttpInvalidServerResponse	= 8,
        WebErrorStatus_ConnectionAborted	= 9,
        WebErrorStatus_ConnectionReset	= 10,
        WebErrorStatus_Disconnected	= 11,
        WebErrorStatus_HttpToHttpsOnRedirection	= 12,
        WebErrorStatus_HttpsToHttpOnRedirection	= 13,
        WebErrorStatus_CannotConnect	= 14,
        WebErrorStatus_HostNameNotResolved	= 15,
        WebErrorStatus_OperationCanceled	= 16,
        WebErrorStatus_RedirectFailed	= 17,
        WebErrorStatus_UnexpectedStatusCode	= 18,
        WebErrorStatus_UnexpectedRedirection	= 19,
        WebErrorStatus_UnexpectedClientError	= 20,
        WebErrorStatus_UnexpectedServerError	= 21,
        WebErrorStatus_MultipleChoices	= 300,
        WebErrorStatus_MovedPermanently	= 301,
        WebErrorStatus_Found	= 302,
        WebErrorStatus_SeeOther	= 303,
        WebErrorStatus_NotModified	= 304,
        WebErrorStatus_UseProxy	= 305,
        WebErrorStatus_TemporaryRedirect	= 307,
        WebErrorStatus_BadRequest	= 400,
        WebErrorStatus_Unauthorized	= 401,
        WebErrorStatus_PaymentRequired	= 402,
        WebErrorStatus_Forbidden	= 403,
        WebErrorStatus_NotFound	= 404,
        WebErrorStatus_MethodNotAllowed	= 405,
        WebErrorStatus_NotAcceptable	= 406,
        WebErrorStatus_ProxyAuthenticationRequired	= 407,
        WebErrorStatus_RequestTimeout	= 408,
        WebErrorStatus_Conflict	= 409,
        WebErrorStatus_Gone	= 410,
        WebErrorStatus_LengthRequired	= 411,
        WebErrorStatus_PreconditionFailed	= 412,
        WebErrorStatus_RequestEntityTooLarge	= 413,
        WebErrorStatus_RequestUriTooLong	= 414,
        WebErrorStatus_UnsupportedMediaType	= 415,
        WebErrorStatus_RequestedRangeNotSatisfiable	= 416,
        WebErrorStatus_ExpectationFailed	= 417,
        WebErrorStatus_InternalServerError	= 500,
        WebErrorStatus_NotImplemented	= 501,
        WebErrorStatus_BadGateway	= 502,
        WebErrorStatus_ServiceUnavailable	= 503,
        WebErrorStatus_GatewayTimeout	= 504,
        WebErrorStatus_HttpVersionNotSupported	= 505
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_IUriToStreamResolver[] = L"Windows.Web.IUriToStreamResolver";
#endif /* !defined(____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eweb_0000_0002 */
/* [local] */ 



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Web {
            
            typedef enum WebErrorStatus WebErrorStatus;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Web {
            
            /* [v1_enum] */ 
            enum WebErrorStatus
                {
                    WebErrorStatus_Unknown	= 0,
                    WebErrorStatus_CertificateCommonNameIsIncorrect	= 1,
                    WebErrorStatus_CertificateExpired	= 2,
                    WebErrorStatus_CertificateContainsErrors	= 3,
                    WebErrorStatus_CertificateRevoked	= 4,
                    WebErrorStatus_CertificateIsInvalid	= 5,
                    WebErrorStatus_ServerUnreachable	= 6,
                    WebErrorStatus_Timeout	= 7,
                    WebErrorStatus_ErrorHttpInvalidServerResponse	= 8,
                    WebErrorStatus_ConnectionAborted	= 9,
                    WebErrorStatus_ConnectionReset	= 10,
                    WebErrorStatus_Disconnected	= 11,
                    WebErrorStatus_HttpToHttpsOnRedirection	= 12,
                    WebErrorStatus_HttpsToHttpOnRedirection	= 13,
                    WebErrorStatus_CannotConnect	= 14,
                    WebErrorStatus_HostNameNotResolved	= 15,
                    WebErrorStatus_OperationCanceled	= 16,
                    WebErrorStatus_RedirectFailed	= 17,
                    WebErrorStatus_UnexpectedStatusCode	= 18,
                    WebErrorStatus_UnexpectedRedirection	= 19,
                    WebErrorStatus_UnexpectedClientError	= 20,
                    WebErrorStatus_UnexpectedServerError	= 21,
                    WebErrorStatus_MultipleChoices	= 300,
                    WebErrorStatus_MovedPermanently	= 301,
                    WebErrorStatus_Found	= 302,
                    WebErrorStatus_SeeOther	= 303,
                    WebErrorStatus_NotModified	= 304,
                    WebErrorStatus_UseProxy	= 305,
                    WebErrorStatus_TemporaryRedirect	= 307,
                    WebErrorStatus_BadRequest	= 400,
                    WebErrorStatus_Unauthorized	= 401,
                    WebErrorStatus_PaymentRequired	= 402,
                    WebErrorStatus_Forbidden	= 403,
                    WebErrorStatus_NotFound	= 404,
                    WebErrorStatus_MethodNotAllowed	= 405,
                    WebErrorStatus_NotAcceptable	= 406,
                    WebErrorStatus_ProxyAuthenticationRequired	= 407,
                    WebErrorStatus_RequestTimeout	= 408,
                    WebErrorStatus_Conflict	= 409,
                    WebErrorStatus_Gone	= 410,
                    WebErrorStatus_LengthRequired	= 411,
                    WebErrorStatus_PreconditionFailed	= 412,
                    WebErrorStatus_RequestEntityTooLarge	= 413,
                    WebErrorStatus_RequestUriTooLong	= 414,
                    WebErrorStatus_UnsupportedMediaType	= 415,
                    WebErrorStatus_RequestedRangeNotSatisfiable	= 416,
                    WebErrorStatus_ExpectationFailed	= 417,
                    WebErrorStatus_InternalServerError	= 500,
                    WebErrorStatus_NotImplemented	= 501,
                    WebErrorStatus_BadGateway	= 502,
                    WebErrorStatus_ServiceUnavailable	= 503,
                    WebErrorStatus_GatewayTimeout	= 504,
                    WebErrorStatus_HttpVersionNotSupported	= 505
                } ;
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0002_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver */
/* [uuid][object] */ 



/* interface ABI::Windows::Web::IUriToStreamResolver */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CIUriToStreamResolver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Web {
                
                MIDL_INTERFACE("B0ABA86A-9AEB-4D3A-9590-003E3CA7E290")
                IUriToStreamResolver : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE UriToStreamAsync( 
                        /* [in] */ __RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass *uri,
                        /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream **operation) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IUriToStreamResolver = __uuidof(IUriToStreamResolver);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *UriToStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIUriToStreamResolver * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass *uri,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIInputStream **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl;

    interface __x_ABI_CWindows_CWeb_CIUriToStreamResolver
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CIUriToStreamResolverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CWeb_CIUriToStreamResolver_UriToStreamAsync(This,uri,operation)	\
    ( (This)->lpVtbl -> UriToStreamAsync(This,uri,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CWeb_CIUriToStreamResolver_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eweb_0000_0003 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_IWebErrorStatics[] = L"Windows.Web.IWebErrorStatics";
#endif /* !defined(____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eweb_0000_0003 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CWeb_CIWebErrorStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Web::IWebErrorStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CIWebErrorStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Web {
                
                MIDL_INTERFACE("FE616766-BF27-4064-87B7-6563BB11CE2E")
                IWebErrorStatics : public IInspectable
                {
                public:
                    virtual HRESULT STDMETHODCALLTYPE GetStatus( 
                        /* [in] */ INT32 hresult,
                        /* [out][retval] */ __RPC__out ABI::Windows::Web::WebErrorStatus *status) = 0;
                    
                };

                extern const __declspec(selectany) IID & IID_IWebErrorStatics = __uuidof(IWebErrorStatics);

                
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetStatus )( 
            __RPC__in __x_ABI_CWindows_CWeb_CIWebErrorStatics * This,
            /* [in] */ INT32 hresult,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus *status);
        
        END_INTERFACE
    } __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl;

    interface __x_ABI_CWindows_CWeb_CIWebErrorStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CWeb_CIWebErrorStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CWeb_CIWebErrorStatics_GetStatus(This,hresult,status)	\
    ( (This)->lpVtbl -> GetStatus(This,hresult,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CWeb_CIWebErrorStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eweb_0000_0004 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Web_WebError_DEFINED
#define RUNTIMECLASS_Windows_Web_WebError_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_WebError[] = L"Windows.Web.WebError";
#endif


/* interface __MIDL_itf_windows2Eweb_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eweb_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


