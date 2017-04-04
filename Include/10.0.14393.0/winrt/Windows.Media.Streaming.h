

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

#ifndef __windows2Emedia2Estreaming_h__
#define __windows2Emedia2Estreaming_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIIterator_1___F__CIPropertySet_FWD_DEFINED__
#define ____FIIterator_1___F__CIPropertySet_FWD_DEFINED__
typedef interface __FIIterator_1___F__CIPropertySet __FIIterator_1___F__CIPropertySet;

#endif 	/* ____FIIterator_1___F__CIPropertySet_FWD_DEFINED__ */


#ifndef ____FIIterable_1___F__CIPropertySet_FWD_DEFINED__
#define ____FIIterable_1___F__CIPropertySet_FWD_DEFINED__
typedef interface __FIIterable_1___F__CIPropertySet __FIIterable_1___F__CIPropertySet;

#endif 	/* ____FIIterable_1___F__CIPropertySet_FWD_DEFINED__ */


#ifndef ____FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define ____FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
typedef interface __FIVectorView_1___F__CIPropertySet __FIVectorView_1___F__CIPropertySet;

#endif 	/* ____FIVectorView_1___F__CIPropertySet_FWD_DEFINED__ */


#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet;

#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
typedef interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet;

#endif 	/* ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Streaming {
                interface IStreamSelectorStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "windows.foundation.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Media.Streaming.Devices.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0000 */
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
interface IRandomAccessStreamWithContentType;
} /*Streams*/
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3158 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3158 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3158_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3158_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3dddecf4-1d39-58e8-83b1-dbed541c7f35"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3159 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3159 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3159_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3159_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c4a57c5e-32b0-55b3-ad13-ce1c23041ed6"))
IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType_USE */

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Foundation {
namespace Collections {
interface IPropertySet;
} /*Collections*/
} /*Foundation*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3160 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3160 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3160_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3160_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0003 */
/* [local] */ 

#ifndef DEF___FIIterator_1___F__CIPropertySet_USE
#define DEF___FIIterator_1___F__CIPropertySet_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d79a75c8-b1d2-544d-9b09-7f7900a34efb"))
IIterator<ABI::Windows::Foundation::Collections::IPropertySet*> : IIterator_impl<ABI::Windows::Foundation::Collections::IPropertySet*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IPropertySet>"; }
};
typedef IIterator<ABI::Windows::Foundation::Collections::IPropertySet*> __FIIterator_1___F__CIPropertySet_t;
#define ____FIIterator_1___F__CIPropertySet_FWD_DEFINED__
#define __FIIterator_1___F__CIPropertySet ABI::Windows::Foundation::Collections::__FIIterator_1___F__CIPropertySet_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1___F__CIPropertySet_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3161 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3161 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3161_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3161_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterable_1___F__CIPropertySet_USE
#define DEF___FIIterable_1___F__CIPropertySet_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("489b756d-be43-5abb-b9a0-a47254103339"))
IIterable<ABI::Windows::Foundation::Collections::IPropertySet*> : IIterable_impl<ABI::Windows::Foundation::Collections::IPropertySet*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IPropertySet>"; }
};
typedef IIterable<ABI::Windows::Foundation::Collections::IPropertySet*> __FIIterable_1___F__CIPropertySet_t;
#define ____FIIterable_1___F__CIPropertySet_FWD_DEFINED__
#define __FIIterable_1___F__CIPropertySet ABI::Windows::Foundation::Collections::__FIIterable_1___F__CIPropertySet_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1___F__CIPropertySet_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3162 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3162 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3162_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3162_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0005 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___F__CIPropertySet_USE
#define DEF___FIVectorView_1___F__CIPropertySet_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c25d9a17-c31e-5311-8122-3c04d28af9fc"))
IVectorView<ABI::Windows::Foundation::Collections::IPropertySet*> : IVectorView_impl<ABI::Windows::Foundation::Collections::IPropertySet*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IPropertySet>"; }
};
typedef IVectorView<ABI::Windows::Foundation::Collections::IPropertySet*> __FIVectorView_1___F__CIPropertySet_t;
#define ____FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define __FIVectorView_1___F__CIPropertySet ABI::Windows::Foundation::Collections::__FIVectorView_1___F__CIPropertySet_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1___F__CIPropertySet_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3163 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3163 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3163_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3163_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("af4e2f8a-92ca-5640-865c-9948fbde4495"))
IAsyncOperationCompletedHandler<__FIVectorView_1___F__CIPropertySet*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1___F__CIPropertySet*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IPropertySet>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1___F__CIPropertySet*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_USE */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3164 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3164 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3164_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3164_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("216f9390-ea3d-5465-a789-6394a47eb4a4"))
IAsyncOperation<__FIVectorView_1___F__CIPropertySet*> : IAsyncOperation_impl<__FIVectorView_1___F__CIPropertySet*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Collections.IPropertySet>>"; }
};
typedef IAsyncOperation<__FIVectorView_1___F__CIPropertySet*> __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_t;
#define ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_USE */
#pragma warning(push)
#pragma warning(disable:4668) 
#pragma warning(disable:4001) 
#pragma once
#pragma warning(pop)

#ifndef RUNTIMECLASS_Windows_Media_Streaming_StreamSelector_DEFINED
#define RUNTIMECLASS_Windows_Media_Streaming_StreamSelector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Streaming_StreamSelector[] = L"Windows.Media.Streaming.StreamSelector";
#endif


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0007 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3165 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3165 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3165_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3165_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0008 */
/* [local] */ 

#ifndef DEF___FIIterator_1___F__CIPropertySet
#define DEF___FIIterator_1___F__CIPropertySet
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0008 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0008_v0_0_s_ifspec;

#ifndef ____FIIterator_1___F__CIPropertySet_INTERFACE_DEFINED__
#define ____FIIterator_1___F__CIPropertySet_INTERFACE_DEFINED__

/* interface __FIIterator_1___F__CIPropertySet */
/* [unique][uuid][object] */ 



/* interface __FIIterator_1___F__CIPropertySet */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterator_1___F__CIPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d79a75c8-b1d2-544d-9b09-7f7900a34efb")
    __FIIterator_1___F__CIPropertySet : public IInspectable
    {
    public:
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet **current) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_HasCurrent( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE MoveNext( 
            /* [retval][out] */ __RPC__out boolean *hasCurrent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Foundation::Collections::IPropertySet **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterator_1___F__CIPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet **current);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *MoveNext )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__out boolean *hasCurrent);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIIterator_1___F__CIPropertySet * This,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIIterator_1___F__CIPropertySetVtbl;

    interface __FIIterator_1___F__CIPropertySet
    {
        CONST_VTBL struct __FIIterator_1___F__CIPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterator_1___F__CIPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___F__CIPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___F__CIPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___F__CIPropertySet_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___F__CIPropertySet_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___F__CIPropertySet_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___F__CIPropertySet_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___F__CIPropertySet_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___F__CIPropertySet_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___F__CIPropertySet_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterator_1___F__CIPropertySet_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0009 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterator_1___F__CIPropertySet */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0009 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3166 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3166 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3166_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3166_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0010 */
/* [local] */ 

#ifndef DEF___FIIterable_1___F__CIPropertySet
#define DEF___FIIterable_1___F__CIPropertySet
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0010_v0_0_s_ifspec;

#ifndef ____FIIterable_1___F__CIPropertySet_INTERFACE_DEFINED__
#define ____FIIterable_1___F__CIPropertySet_INTERFACE_DEFINED__

/* interface __FIIterable_1___F__CIPropertySet */
/* [unique][uuid][object] */ 



/* interface __FIIterable_1___F__CIPropertySet */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIIterable_1___F__CIPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("489b756d-be43-5abb-b9a0-a47254103339")
    __FIIterable_1___F__CIPropertySet : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE First( 
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___F__CIPropertySet **first) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIIterable_1___F__CIPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *First )( 
            __RPC__in __FIIterable_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___F__CIPropertySet **first);
        
        END_INTERFACE
    } __FIIterable_1___F__CIPropertySetVtbl;

    interface __FIIterable_1___F__CIPropertySet
    {
        CONST_VTBL struct __FIIterable_1___F__CIPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIIterable_1___F__CIPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___F__CIPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___F__CIPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___F__CIPropertySet_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___F__CIPropertySet_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___F__CIPropertySet_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___F__CIPropertySet_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIIterable_1___F__CIPropertySet_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0011 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIIterable_1___F__CIPropertySet */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3167 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3167 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3167_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3167_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0012 */
/* [local] */ 

#ifndef DEF___FIVectorView_1___F__CIPropertySet
#define DEF___FIVectorView_1___F__CIPropertySet
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0012 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0012_v0_0_s_ifspec;

#ifndef ____FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__
#define ____FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__

/* interface __FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 



/* interface __FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIVectorView_1___F__CIPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("c25d9a17-c31e-5311-8122-3c04d28af9fc")
    __FIVectorView_1___F__CIPropertySet : public IInspectable
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetAt( 
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet **item) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Size( 
            /* [retval][out] */ __RPC__out unsigned int *size) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IndexOf( 
            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetMany( 
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) ABI::Windows::Foundation::Collections::IPropertySet **items,
            /* [retval][out] */ __RPC__out unsigned int *actual) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIVectorView_1___F__CIPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetAt )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ unsigned int index,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet **item);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__out unsigned int *size);
        
        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);
        
        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
            __RPC__in __FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet **items,
            /* [retval][out] */ __RPC__out unsigned int *actual);
        
        END_INTERFACE
    } __FIVectorView_1___F__CIPropertySetVtbl;

    interface __FIVectorView_1___F__CIPropertySet
    {
        CONST_VTBL struct __FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIVectorView_1___F__CIPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1___F__CIPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1___F__CIPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1___F__CIPropertySet_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1___F__CIPropertySet_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1___F__CIPropertySet_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1___F__CIPropertySet_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1___F__CIPropertySet_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1___F__CIPropertySet_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1___F__CIPropertySet_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0013 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIVectorView_1___F__CIPropertySet */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3168 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3168 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3168_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3168_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0014 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0014 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0014_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("af4e2f8a-92ca-5640-865c-9948fbde4495")
    __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl;

    interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0015 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3169 */




/* interface __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3169 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3169_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming2Eidl_0000_3169_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0016 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet
#define DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0016 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0016_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("216f9390-ea3d-5465-a789-6394a47eb4a4")
    __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1___F__CIPropertySet **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1___F__CIPropertySet **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1___F__CIPropertySet **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl;

    interface __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet
    {
        CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySetVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0017 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet */
#if !defined(____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Streaming_IStreamSelectorStatics[] = L"Windows.Media.Streaming.IStreamSelectorStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Estreaming_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Estreaming_0000_0017_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::Streaming::IStreamSelectorStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace Streaming {
                    
                    MIDL_INTERFACE("8a4cd4a1-ed85-4e0f-bd68-8a6862e4636d")
                    IStreamSelectorStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE SelectBestStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *storageFile,
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *selectorProperties,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetStreamPropertiesAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *storageFile,
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *selectorProperties,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SelectBestStreamFromStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *stream,
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *selectorProperties,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE GetStreamPropertiesFromStreamAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream *stream,
                            /* [in] */ __RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet *selectorProperties,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IStreamSelectorStatics = __uuidof(IStreamSelectorStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *SelectBestStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *storageFile,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *selectorProperties,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamPropertiesAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *storageFile,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *selectorProperties,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet **value);
        
        HRESULT ( STDMETHODCALLTYPE *SelectBestStreamFromStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *stream,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *selectorProperties,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **value);
        
        HRESULT ( STDMETHODCALLTYPE *GetStreamPropertiesFromStreamAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream *stream,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet *selectorProperties,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1___F__CIPropertySet **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_SelectBestStreamAsync(This,storageFile,selectorProperties,value)	\
    ( (This)->lpVtbl -> SelectBestStreamAsync(This,storageFile,selectorProperties,value) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_GetStreamPropertiesAsync(This,storageFile,selectorProperties,value)	\
    ( (This)->lpVtbl -> GetStreamPropertiesAsync(This,storageFile,selectorProperties,value) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_SelectBestStreamFromStreamAsync(This,stream,selectorProperties,value)	\
    ( (This)->lpVtbl -> SelectBestStreamFromStreamAsync(This,stream,selectorProperties,value) ) 

#define __x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_GetStreamPropertiesFromStreamAsync(This,stream,selectorProperties,value)	\
    ( (This)->lpVtbl -> GetStreamPropertiesFromStreamAsync(This,stream,selectorProperties,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CStreaming_CIStreamSelectorStatics_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


