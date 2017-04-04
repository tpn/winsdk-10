

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

#ifndef __windows2Edata2Epdf_h__
#define __windows2Edata2Epdf_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;

#endif 	/* ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument __x_ABI_CWindows_CData_CPdf_CIPdfDocument;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfDocument;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfDocumentStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPage __x_ABI_CWindows_CData_CPdf_CIPdfPage;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPage;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPage_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPageDimensions;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                interface IPdfPageRenderOptions;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0000 */
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
namespace Data {
namespace Pdf {
class PdfDocument;
} /*Pdf*/
} /*Data*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Pdf {
interface IPdfDocument;
} /*Pdf*/
} /*Data*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3112 */




/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8d4950b3-629d-5d7d-84cc-04c0dcf7942b"))
IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::PdfDocument*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Pdf::PdfDocument*, ABI::Windows::Data::Pdf::IPdfDocument*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Data.Pdf.PdfDocument>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Data::Pdf::PdfDocument*> __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_USE */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3113 */




/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE
#define DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d6b166ec-099a-5ee2-ad2e-f4c88614aabb"))
IAsyncOperation<ABI::Windows::Data::Pdf::PdfDocument*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Pdf::PdfDocument*, ABI::Windows::Data::Pdf::IPdfDocument*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Data.Pdf.PdfDocument>"; }
};
typedef IAsyncOperation<ABI::Windows::Data::Pdf::PdfDocument*> __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_t;
#define ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage_h__)
#include <Windows.Storage.h>
#endif // !defined(__windows2Estorage_h__)
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if !defined(__windows2Eui_h__)
#include <Windows.UI.h>
#endif // !defined(__windows2Eui_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)


#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;

#endif
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;

#endif


#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation __x_ABI_CWindows_CData_CPdf_CPdfPageRotation;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Pdf {
class PdfPage;
} /*Pdf*/
} /*Data*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Pdf {
class PdfPageDimensions;
} /*Pdf*/
} /*Data*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Data {
namespace Pdf {
class PdfPageRenderOptions;
} /*Pdf*/
} /*Data*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0002 */
/* [local] */ 




#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                
                typedef enum PdfPageRotation PdfPageRotation;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif







extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3114 */




/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf_0000_0003 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Edata2Epdf_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0003_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8d4950b3-629d-5d7d-84cc-04c0dcf7942b")
    __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0004 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3115 */




/* interface __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Edata2Epdf_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument
#define DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0005_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d6b166ec-099a-5ee2-ad2e-f4c88614aabb")
    __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Data::Pdf::IPdfDocument **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CPdf__CPdfDocument **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfDocument **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl;

    interface __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0006 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CData_CPdf_CPdfPageRotation
    {
        PdfPageRotation_Normal	= 0,
        PdfPageRotation_Rotate90	= 1,
        PdfPageRotation_Rotate180	= 2,
        PdfPageRotation_Rotate270	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocument[] = L"Windows.Data.Pdf.IPdfDocument";
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0006 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Pdf {
                
                /* [v1_enum] */ 
                enum PdfPageRotation
                    {
                        PdfPageRotation_Normal	= 0,
                        PdfPageRotation_Rotate90	= 1,
                        PdfPageRotation_Rotate180	= 2,
                        PdfPageRotation_Rotate270	= 3
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Pdf::IPdfDocument */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Pdf {
                    
                    MIDL_INTERFACE("AC7EBEDD-80FA-4089-846E-81B77FF5A86C")
                    IPdfDocument : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE GetPage( 
                            /* [in] */ UINT32 pageIndex,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Data::Pdf::IPdfPage **pdfPage) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PageCount( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsPasswordProtected( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPdfDocument = __uuidof(IPdfDocument);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetPage )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [in] */ UINT32 pageIndex,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPage **pdfPage);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PageCount )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProtected )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocument * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl;

    interface __x_ABI_CWindows_CData_CPdf_CIPdfDocument
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_GetPage(This,pageIndex,pdfPage)	\
    ( (This)->lpVtbl -> GetPage(This,pageIndex,pdfPage) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_get_PageCount(This,value)	\
    ( (This)->lpVtbl -> get_PageCount(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocument_get_IsPasswordProtected(This,value)	\
    ( (This)->lpVtbl -> get_IsPasswordProtected(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfDocument_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0007 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfDocumentStatics[] = L"Windows.Data.Pdf.IPdfDocumentStatics";
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0007_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Pdf::IPdfDocumentStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Pdf {
                    
                    MIDL_INTERFACE("433A0B5F-C007-4788-90F2-08143D922599")
                    IPdfDocumentStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE LoadFromFileAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *file,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE LoadFromFileWithPasswordAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *file,
                            /* [in] */ __RPC__in HSTRING password,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE LoadFromStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *inputStream,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE LoadFromStreamWithPasswordAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *inputStream,
                            /* [in] */ __RPC__in HSTRING password,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPdfDocumentStatics = __uuidof(IPdfDocumentStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *LoadFromFileAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *file,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *LoadFromFileWithPasswordAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *file,
            /* [in] */ __RPC__in HSTRING password,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *LoadFromStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *inputStream,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *LoadFromStreamWithPasswordAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *inputStream,
            /* [in] */ __RPC__in HSTRING password,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CPdf__CPdfDocument **asyncInfo);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl;

    interface __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromFileAsync(This,file,asyncInfo)	\
    ( (This)->lpVtbl -> LoadFromFileAsync(This,file,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromFileWithPasswordAsync(This,file,password,asyncInfo)	\
    ( (This)->lpVtbl -> LoadFromFileWithPasswordAsync(This,file,password,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromStreamAsync(This,inputStream,asyncInfo)	\
    ( (This)->lpVtbl -> LoadFromStreamAsync(This,inputStream,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_LoadFromStreamWithPasswordAsync(This,inputStream,password,asyncInfo)	\
    ( (This)->lpVtbl -> LoadFromStreamWithPasswordAsync(This,inputStream,password,asyncInfo) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfDocumentStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0008 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPage[] = L"Windows.Data.Pdf.IPdfPage";
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0008_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CPdf_CIPdfPage */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Pdf::IPdfPage */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Pdf {
                    
                    MIDL_INTERFACE("9DB4B0C8-5320-4CFC-AD76-493FDAD0E594")
                    IPdfPage : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE RenderToStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *outputStream,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **asyncInfo) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE RenderWithOptionsToStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *outputStream,
                            /* [in] */ __RPC__in_opt ABI::Windows::Data::Pdf::IPdfPageRenderOptions *options,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **asyncInfo) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE PreparePageAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **asyncInfo) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Index( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Size *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Dimensions( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Data::Pdf::IPdfPageDimensions **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Rotation( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Data::Pdf::PdfPageRotation *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_PreferredZoom( 
                            /* [out][retval] */ __RPC__out FLOAT *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPdfPage = __uuidof(IPdfPage);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *RenderToStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *outputStream,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *RenderWithOptionsToStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *outputStream,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions *options,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **asyncInfo);
        
        HRESULT ( STDMETHODCALLTYPE *PreparePageAsync )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **asyncInfo);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CSize *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Dimensions )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Rotation )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CData_CPdf_CPdfPageRotation *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_PreferredZoom )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPage * This,
            /* [out][retval] */ __RPC__out FLOAT *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl;

    interface __x_ABI_CWindows_CData_CPdf_CIPdfPage
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_RenderToStreamAsync(This,outputStream,asyncInfo)	\
    ( (This)->lpVtbl -> RenderToStreamAsync(This,outputStream,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_RenderWithOptionsToStreamAsync(This,outputStream,options,asyncInfo)	\
    ( (This)->lpVtbl -> RenderWithOptionsToStreamAsync(This,outputStream,options,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_PreparePageAsync(This,asyncInfo)	\
    ( (This)->lpVtbl -> PreparePageAsync(This,asyncInfo) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Index(This,value)	\
    ( (This)->lpVtbl -> get_Index(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Size(This,value)	\
    ( (This)->lpVtbl -> get_Size(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Dimensions(This,value)	\
    ( (This)->lpVtbl -> get_Dimensions(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_Rotation(This,value)	\
    ( (This)->lpVtbl -> get_Rotation(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPage_get_PreferredZoom(This,value)	\
    ( (This)->lpVtbl -> get_PreferredZoom(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPage_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0009 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageDimensions[] = L"Windows.Data.Pdf.IPdfPageDimensions";
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0009_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Pdf::IPdfPageDimensions */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Pdf {
                    
                    MIDL_INTERFACE("22170471-313E-44E8-835D-63A3E7624A10")
                    IPdfPageDimensions : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_MediaBox( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CropBox( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BleedBox( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_TrimBox( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ArtBox( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPdfPageDimensions = __uuidof(IPdfPageDimensions);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_MediaBox )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CropBox )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BleedBox )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_TrimBox )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ArtBox )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl;

    interface __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_MediaBox(This,value)	\
    ( (This)->lpVtbl -> get_MediaBox(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_CropBox(This,value)	\
    ( (This)->lpVtbl -> get_CropBox(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_BleedBox(This,value)	\
    ( (This)->lpVtbl -> get_BleedBox(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_TrimBox(This,value)	\
    ( (This)->lpVtbl -> get_TrimBox(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_get_ArtBox(This,value)	\
    ( (This)->lpVtbl -> get_ArtBox(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPageDimensions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0010 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Pdf_IPdfPageRenderOptions[] = L"Windows.Data.Pdf.IPdfPageRenderOptions";
#endif /* !defined(____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0010_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions */
/* [uuid][object] */ 



/* interface ABI::Windows::Data::Pdf::IPdfPageRenderOptions */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Data {
                namespace Pdf {
                    
                    MIDL_INTERFACE("3C98056F-B7CF-4C29-9A04-52D90267F425")
                    IPdfPageRenderOptions : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SourceRect( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Foundation::Rect *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SourceRect( 
                            /* [in] */ ABI::Windows::Foundation::Rect value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DestinationWidth( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DestinationWidth( 
                            /* [in] */ UINT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DestinationHeight( 
                            /* [out][retval] */ __RPC__out UINT32 *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DestinationHeight( 
                            /* [in] */ UINT32 value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BackgroundColor( 
                            /* [out][retval] */ __RPC__out ABI::Windows::UI::Color *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BackgroundColor( 
                            /* [in] */ ABI::Windows::UI::Color value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IsIgnoringHighContrast( 
                            /* [out][retval] */ __RPC__out boolean *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_IsIgnoringHighContrast( 
                            /* [in] */ boolean value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_BitmapEncoderId( 
                            /* [out][retval] */ __RPC__out GUID *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_BitmapEncoderId( 
                            /* [in] */ GUID value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPdfPageRenderOptions = __uuidof(IPdfPageRenderOptions);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SourceRect )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CFoundation_CRect *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SourceRect )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CRect value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out UINT32 *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ UINT32 value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CColor *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ __x_ABI_CWindows_CUI_CColor value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsIgnoringHighContrast )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out boolean *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_IsIgnoringHighContrast )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ boolean value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_BitmapEncoderId )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [out][retval] */ __RPC__out GUID *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_BitmapEncoderId )( 
            __RPC__in __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions * This,
            /* [in] */ GUID value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl;

    interface __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions
    {
        CONST_VTBL struct __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_SourceRect(This,value)	\
    ( (This)->lpVtbl -> get_SourceRect(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_SourceRect(This,value)	\
    ( (This)->lpVtbl -> put_SourceRect(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_DestinationWidth(This,value)	\
    ( (This)->lpVtbl -> get_DestinationWidth(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_DestinationWidth(This,value)	\
    ( (This)->lpVtbl -> put_DestinationWidth(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_DestinationHeight(This,value)	\
    ( (This)->lpVtbl -> get_DestinationHeight(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_DestinationHeight(This,value)	\
    ( (This)->lpVtbl -> put_DestinationHeight(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_BackgroundColor(This,value)	\
    ( (This)->lpVtbl -> get_BackgroundColor(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_BackgroundColor(This,value)	\
    ( (This)->lpVtbl -> put_BackgroundColor(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_IsIgnoringHighContrast(This,value)	\
    ( (This)->lpVtbl -> get_IsIgnoringHighContrast(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_IsIgnoringHighContrast(This,value)	\
    ( (This)->lpVtbl -> put_IsIgnoringHighContrast(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_get_BitmapEncoderId(This,value)	\
    ( (This)->lpVtbl -> get_BitmapEncoderId(This,value) ) 

#define __x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_put_BitmapEncoderId(This,value)	\
    ( (This)->lpVtbl -> put_BitmapEncoderId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CData_CPdf_CIPdfPageRenderOptions_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0011 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfDocument[] = L"Windows.Data.Pdf.PdfDocument";
#endif
#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPage[] = L"Windows.Data.Pdf.PdfPage";
#endif
#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageDimensions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageDimensions[] = L"Windows.Data.Pdf.PdfPageDimensions";
#endif
#ifndef RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
#define RUNTIMECLASS_Windows_Data_Pdf_PdfPageRenderOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Pdf_PdfPageRenderOptions[] = L"Windows.Data.Pdf.PdfPageRenderOptions";
#endif


/* interface __MIDL_itf_windows2Edata2Epdf_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edata2Epdf_0000_0011_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


