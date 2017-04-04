

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

#ifndef __windows2Estorage2Epickers_h__
#define __windows2Estorage2Epickers_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                interface IFileOpenPicker;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                interface IFileSavePicker;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                interface IFileSavePicker3;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                interface IFolderPicker;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3108 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3109 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3109 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3109_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3109_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3110 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3111 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3111 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3111_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0004 */
/* [local] */ 

#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<String>"; }
};
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define ____FIVector_1_HSTRING_FWD_DEFINED__
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_HSTRING_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
class StorageFile;
} /*Storage*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
interface IStorageFile;
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0004 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3112 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0005 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e521c894-2c26-5946-9e61-2b5e188d01ed"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFile*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3113 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0006 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5e52f8ce-aced-5a42-95b4-f674dd84885e"))
IAsyncOperation<ABI::Windows::Storage::StorageFile*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::StorageFile*> __FIAsyncOperation_1_Windows__CStorage__CStorageFile_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3114 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0007 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43e29f53-0298-55aa-a6c8-4edd323d9598"))
IIterator<ABI::Windows::Storage::StorageFile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Storage.StorageFile>"; }
};
typedef IIterator<ABI::Windows::Storage::StorageFile*> __FIIterator_1_Windows__CStorage__CStorageFile_t;
#define ____FIIterator_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIIterator_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3115 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0008 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9ac00304-83ea-5688-87b6-ae38aab65d0b"))
IIterable<ABI::Windows::Storage::StorageFile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Storage.StorageFile>"; }
};
typedef IIterable<ABI::Windows::Storage::StorageFile*> __FIIterable_1_Windows__CStorage__CStorageFile_t;
#define ____FIIterable_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIIterable_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3116 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3116 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3116_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0009 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("80646519-5e2a-595d-a8cd-2a24b4067f1b"))
IVectorView<ABI::Windows::Storage::StorageFile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>"; }
};
typedef IVectorView<ABI::Windows::Storage::StorageFile*> __FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define ____FIVectorView_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3117 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3117 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3117_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0010 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cb4206c5-0988-5104-afa9-253c298f86fd"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFile*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CStorage__CStorageFile*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CStorage__CStorageFile*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0010 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3118 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3118 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3118_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0011 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("03362e33-e413-5f29-97d0-48a4780935f9"))
IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFile*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CStorage__CStorageFile*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Storage.StorageFile>>"; }
};
typedef IAsyncOperation<__FIVectorView_1_Windows__CStorage__CStorageFile*> __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_t;
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3119 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3119 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3119_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0012 */
/* [local] */ 

#ifndef DEF___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("174f26c7-79ea-5f7c-bd70-ac4457f2cac8"))
IKeyValuePair<HSTRING,__FIVector_1_HSTRING*> : IKeyValuePair_impl<HSTRING,__FIVector_1_HSTRING*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVector`1<String>>"; }
};
typedef IKeyValuePair<HSTRING,__FIVector_1_HSTRING*> __FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t;
#define ____FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_FWD_DEFINED__
#define __FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0012 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3120 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3120 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3120_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3120_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0013 */
/* [local] */ 

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a11824c9-e458-502a-afd8-ce3ce0abd6fe"))
IIterator<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVector`1<String>>>"; }
};
typedef IIterator<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t;
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0013 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0013_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3121 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3121 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3121_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3121_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0014 */
/* [local] */ 

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4fed2669-d0d3-59f6-91d9-95902d728d6a"))
IIterable<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVector`1<String>>>"; }
};
typedef IIterable<__FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t;
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVector_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0014 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3122 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3122 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3122_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3122_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0015 */
/* [local] */ 

#ifndef DEF___FIMapView_2_HSTRING___FIVector_1_HSTRING_USE
#define DEF___FIMapView_2_HSTRING___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("153f9c9c-d22a-5c9e-9c74-8b85c908b000"))
IMapView<HSTRING,__FIVector_1_HSTRING*> : IMapView_impl<HSTRING,__FIVector_1_HSTRING*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Foundation.Collections.IVector`1<String>>"; }
};
typedef IMapView<HSTRING,__FIVector_1_HSTRING*> __FIMapView_2_HSTRING___FIVector_1_HSTRING_t;
#define ____FIMapView_2_HSTRING___FIVector_1_HSTRING_FWD_DEFINED__
#define __FIMapView_2_HSTRING___FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING___FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIMapView_2_HSTRING___FIVector_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0015 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0015_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3123 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3123 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3123_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3123_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0016 */
/* [local] */ 

#ifndef DEF___FIMap_2_HSTRING___FIVector_1_HSTRING_USE
#define DEF___FIMap_2_HSTRING___FIVector_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e475ca9d-6afb-5992-993e-53e6ef7a9ecd"))
IMap<HSTRING,__FIVector_1_HSTRING*> : IMap_impl<HSTRING,__FIVector_1_HSTRING*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IMap`2<String, Windows.Foundation.Collections.IVector`1<String>>"; }
};
typedef IMap<HSTRING,__FIVector_1_HSTRING*> __FIMap_2_HSTRING___FIVector_1_HSTRING_t;
#define ____FIMap_2_HSTRING___FIVector_1_HSTRING_FWD_DEFINED__
#define __FIMap_2_HSTRING___FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING___FIVector_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIMap_2_HSTRING___FIVector_1_HSTRING_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
class StorageFolder;
} /*Storage*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
interface IStorageFolder;
} /*Storage*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0016 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0016_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3124 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3124 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3124_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3124_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0017 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c211026e-9e63-5452-ba54-3a07d6a96874"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::StorageFolder*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStorageFolder_USE */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0017 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0017_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3125 */




/* interface __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3125 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3125_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers2Eidl_0000_3125_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0018 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6be9e7d7-e83a-5cbc-802c-1768960b52c3"))
IAsyncOperation<ABI::Windows::Storage::StorageFolder*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFolder*, ABI::Windows::Storage::IStorageFolder*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>"; }
};
typedef IAsyncOperation<ABI::Windows::Storage::StorageFolder*> __FIAsyncOperation_1_Windows__CStorage__CStorageFolder_t;
#define ____FIAsyncOperation_1_Windows__CStorage__CStorageFolder_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CStorage__CStorageFolder ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStorageFolder_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStorageFolder_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Estorage_h__)
#include <Windows.Storage.h>
#endif // !defined(__windows2Estorage_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FileExtensionVector;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FileOpenPicker;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FilePickerFileTypesOrderedMap;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FilePickerSelectedFilesArray;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FileSavePicker;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Storage {
namespace Pickers {
class FolderPicker;
} /*Pickers*/
} /*Storage*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId
    {
        PickerLocationId_DocumentsLibrary	= 0,
        PickerLocationId_ComputerFolder	= 1,
        PickerLocationId_Desktop	= 2,
        PickerLocationId_Downloads	= 3,
        PickerLocationId_HomeGroup	= 4,
        PickerLocationId_MusicLibrary	= 5,
        PickerLocationId_PicturesLibrary	= 6,
        PickerLocationId_VideosLibrary	= 7,
        PickerLocationId_Objects3D	= 8,
        PickerLocationId_Unspecified	= 9
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode
    {
        PickerViewMode_List	= 0,
        PickerViewMode_Thumbnail	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_IFileOpenPicker[] = L"Windows.Storage.Pickers.IFileOpenPicker";
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0018 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                
                typedef enum PickerLocationId PickerLocationId;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                
                typedef enum PickerViewMode PickerViewMode;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                
                /* [v1_enum] */ 
                enum PickerLocationId
                    {
                        PickerLocationId_DocumentsLibrary	= 0,
                        PickerLocationId_ComputerFolder	= 1,
                        PickerLocationId_Desktop	= 2,
                        PickerLocationId_Downloads	= 3,
                        PickerLocationId_HomeGroup	= 4,
                        PickerLocationId_MusicLibrary	= 5,
                        PickerLocationId_PicturesLibrary	= 6,
                        PickerLocationId_VideosLibrary	= 7,
                        PickerLocationId_Objects3D	= 8,
                        PickerLocationId_Unspecified	= 9
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Pickers {
                
                /* [v1_enum] */ 
                enum PickerViewMode
                    {
                        PickerViewMode_List	= 0,
                        PickerViewMode_Thumbnail	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Pickers::IFileOpenPicker */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Pickers {
                    
                    MIDL_INTERFACE("2CA8278A-12C5-4C5F-8977-94547793C241")
                    IFileOpenPicker : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewMode( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Storage::Pickers::PickerViewMode *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ViewMode( 
                            /* [in] */ ABI::Windows::Storage::Pickers::PickerViewMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SettingsIdentifier( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SettingsIdentifier( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuggestedStartLocation( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Storage::Pickers::PickerLocationId *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuggestedStartLocation( 
                            /* [in] */ ABI::Windows::Storage::Pickers::PickerLocationId value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CommitButtonText( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CommitButtonText( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileTypeFilter( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE PickSingleFileAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **pickSingleFileOperation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE PickMultipleFilesAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile **pickMultipleFilesOperation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFileOpenPicker = __uuidof(IFileOpenPicker);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPickerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewMode )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewMode )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileTypeFilter )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *PickSingleFileAsync )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **pickSingleFileOperation);
        
        HRESULT ( STDMETHODCALLTYPE *PickMultipleFilesAsync )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CStorage__CStorageFile **pickMultipleFilesOperation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPickerVtbl;

    interface __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPickerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_get_ViewMode(This,value)	\
    ( (This)->lpVtbl -> get_ViewMode(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_put_ViewMode(This,value)	\
    ( (This)->lpVtbl -> put_ViewMode(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_get_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> get_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_put_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> put_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_get_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> get_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_put_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> put_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_get_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> get_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_put_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> put_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_get_FileTypeFilter(This,value)	\
    ( (This)->lpVtbl -> get_FileTypeFilter(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_PickSingleFileAsync(This,pickSingleFileOperation)	\
    ( (This)->lpVtbl -> PickSingleFileAsync(This,pickSingleFileOperation) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_PickMultipleFilesAsync(This,pickMultipleFilesOperation)	\
    ( (This)->lpVtbl -> PickMultipleFilesAsync(This,pickMultipleFilesOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileOpenPicker_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0019 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_IFileSavePicker[] = L"Windows.Storage.Pickers.IFileSavePicker";
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Pickers::IFileSavePicker */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Pickers {
                    
                    MIDL_INTERFACE("3286FFCB-617F-4CC5-AF6A-B3FDF29AD145")
                    IFileSavePicker : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SettingsIdentifier( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SettingsIdentifier( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuggestedStartLocation( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Storage::Pickers::PickerLocationId *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuggestedStartLocation( 
                            /* [in] */ ABI::Windows::Storage::Pickers::PickerLocationId value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CommitButtonText( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CommitButtonText( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileTypeChoices( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIMap_2_HSTRING___FIVector_1_HSTRING **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_DefaultFileExtension( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_DefaultFileExtension( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuggestedSaveFile( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Storage::IStorageFile **value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuggestedSaveFile( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuggestedFileName( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuggestedFileName( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE PickSaveFileAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **pickSaveFileOperation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFileSavePicker = __uuidof(IFileSavePicker);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CPickers_CIFileSavePickerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileTypeChoices )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIMap_2_HSTRING___FIVector_1_HSTRING **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_DefaultFileExtension )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_DefaultFileExtension )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuggestedSaveFile )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile **value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuggestedSaveFile )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuggestedFileName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuggestedFileName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        HRESULT ( STDMETHODCALLTYPE *PickSaveFileAsync )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **pickSaveFileOperation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CPickers_CIFileSavePickerVtbl;

    interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CIFileSavePickerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> get_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> put_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> get_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> put_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> get_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> put_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_FileTypeChoices(This,value)	\
    ( (This)->lpVtbl -> get_FileTypeChoices(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_DefaultFileExtension(This,value)	\
    ( (This)->lpVtbl -> get_DefaultFileExtension(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_DefaultFileExtension(This,value)	\
    ( (This)->lpVtbl -> put_DefaultFileExtension(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_SuggestedSaveFile(This,value)	\
    ( (This)->lpVtbl -> get_SuggestedSaveFile(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_SuggestedSaveFile(This,value)	\
    ( (This)->lpVtbl -> put_SuggestedSaveFile(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_get_SuggestedFileName(This,value)	\
    ( (This)->lpVtbl -> get_SuggestedFileName(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_put_SuggestedFileName(This,value)	\
    ( (This)->lpVtbl -> put_SuggestedFileName(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_PickSaveFileAsync(This,pickSaveFileOperation)	\
    ( (This)->lpVtbl -> PickSaveFileAsync(This,pickSaveFileOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0020 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_IFileSavePicker3[] = L"Windows.Storage.Pickers.IFileSavePicker3";
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0020_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Pickers::IFileSavePicker3 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Pickers {
                    
                    MIDL_INTERFACE("698AEC69-BA3C-4E51-BD90-4ABCBBF4CFAF")
                    IFileSavePicker3 : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_EnterpriseId( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_EnterpriseId( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFileSavePicker3 = __uuidof(IFileSavePicker3);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_EnterpriseId )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_EnterpriseId )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3 * This,
            /* [in] */ __RPC__in HSTRING value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3Vtbl;

    interface __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_get_EnterpriseId(This,value)	\
    ( (This)->lpVtbl -> get_EnterpriseId(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_put_EnterpriseId(This,value)	\
    ( (This)->lpVtbl -> put_EnterpriseId(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFileSavePicker3_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0021 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Pickers_IFolderPicker[] = L"Windows.Storage.Pickers.IFolderPicker";
#endif /* !defined(____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0021 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0021_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker */
/* [uuid][object] */ 



/* interface ABI::Windows::Storage::Pickers::IFolderPicker */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CPickers_CIFolderPicker;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Storage {
                namespace Pickers {
                    
                    MIDL_INTERFACE("084F7799-F3FB-400A-99B1-7B4A772FD60D")
                    IFolderPicker : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ViewMode( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Storage::Pickers::PickerViewMode *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_ViewMode( 
                            /* [in] */ ABI::Windows::Storage::Pickers::PickerViewMode value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SettingsIdentifier( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SettingsIdentifier( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_SuggestedStartLocation( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Storage::Pickers::PickerLocationId *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_SuggestedStartLocation( 
                            /* [in] */ ABI::Windows::Storage::Pickers::PickerLocationId value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_CommitButtonText( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_CommitButtonText( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_FileTypeFilter( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE PickSingleFolderAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder **pickSingleFolderOperation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IFolderPicker = __uuidof(IFolderPicker);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CStorage_CPickers_CIFolderPickerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ViewMode )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_ViewMode )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CPickers_CPickerViewMode value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SettingsIdentifier )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_SuggestedStartLocation )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [in] */ __x_ABI_CWindows_CStorage_CPickers_CPickerLocationId value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_CommitButtonText )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_FileTypeFilter )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_HSTRING **value);
        
        HRESULT ( STDMETHODCALLTYPE *PickSingleFolderAsync )( 
            __RPC__in __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFolder **pickSingleFolderOperation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CStorage_CPickers_CIFolderPickerVtbl;

    interface __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker
    {
        CONST_VTBL struct __x_ABI_CWindows_CStorage_CPickers_CIFolderPickerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_get_ViewMode(This,value)	\
    ( (This)->lpVtbl -> get_ViewMode(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_put_ViewMode(This,value)	\
    ( (This)->lpVtbl -> put_ViewMode(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_get_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> get_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_put_SettingsIdentifier(This,value)	\
    ( (This)->lpVtbl -> put_SettingsIdentifier(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_get_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> get_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_put_SuggestedStartLocation(This,value)	\
    ( (This)->lpVtbl -> put_SuggestedStartLocation(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_get_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> get_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_put_CommitButtonText(This,value)	\
    ( (This)->lpVtbl -> put_CommitButtonText(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_get_FileTypeFilter(This,value)	\
    ( (This)->lpVtbl -> get_FileTypeFilter(This,value) ) 

#define __x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_PickSingleFolderAsync(This,pickSingleFolderOperation)	\
    ( (This)->lpVtbl -> PickSingleFolderAsync(This,pickSingleFolderOperation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CStorage_CPickers_CIFolderPicker_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0022 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FileExtensionVector_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FileExtensionVector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FileExtensionVector[] = L"Windows.Storage.Pickers.FileExtensionVector";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FileOpenPicker_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FileOpenPicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FileOpenPicker[] = L"Windows.Storage.Pickers.FileOpenPicker";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FilePickerFileTypesOrderedMap_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FilePickerFileTypesOrderedMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FilePickerFileTypesOrderedMap[] = L"Windows.Storage.Pickers.FilePickerFileTypesOrderedMap";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FilePickerSelectedFilesArray_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FilePickerSelectedFilesArray_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FilePickerSelectedFilesArray[] = L"Windows.Storage.Pickers.FilePickerSelectedFilesArray";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FileSavePicker_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FileSavePicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FileSavePicker[] = L"Windows.Storage.Pickers.FileSavePicker";
#endif
#ifndef RUNTIMECLASS_Windows_Storage_Pickers_FolderPicker_DEFINED
#define RUNTIMECLASS_Windows_Storage_Pickers_FolderPicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Pickers_FolderPicker[] = L"Windows.Storage.Pickers.FolderPicker";
#endif


/* interface __MIDL_itf_windows2Estorage2Epickers_0000_0022 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Estorage2Epickers_0000_0022_v0_0_s_ifspec;

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


