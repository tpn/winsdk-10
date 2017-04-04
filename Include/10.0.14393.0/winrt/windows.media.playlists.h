

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

#ifndef __windows2Emedia2Eplaylists_h__
#define __windows2Emedia2Eplaylists_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist;

#endif 	/* ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Playlists {
                interface IPlaylist;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Playlists {
                interface IPlaylistStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0000 */
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
namespace Media {
namespace Playlists {
class Playlist;
} /*Playlists*/
} /*Media*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Media {
namespace Playlists {
interface IPlaylist;
} /*Playlists*/
} /*Media*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3110 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3110 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3110_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3110_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("427deafd-b226-5ef0-9320-c9f325e37474"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Playlists::Playlist*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Playlists::Playlist*, ABI::Windows::Media::Playlists::IPlaylist*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Playlists.Playlist>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Playlists::Playlist*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_USE */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3111 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3111 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3111_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3111_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8ffb74ab-912f-5bc1-87fa-2865f673cbfc"))
IAsyncOperation<ABI::Windows::Media::Playlists::Playlist*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Playlists::Playlist*, ABI::Windows::Media::Playlists::IPlaylist*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Playlists.Playlist>"; }
};
typedef IAsyncOperation<ABI::Windows::Media::Playlists::Playlist*> __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_t;
#define ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_USE */
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


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3112 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3112 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3112_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3112_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0003 */
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


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0003 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3113 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3113 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3113_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3113_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0004 */
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


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3114 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3114 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3114_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3114_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0005 */
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


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3115 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3115 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3115_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3115_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0006 */
/* [local] */ 

#ifndef DEF___FIVector_1_Windows__CStorage__CStorageFile_USE
#define DEF___FIVector_1_Windows__CStorage__CStorageFile_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fcbc8b8b-6103-5b4e-ba00-4bc2cedb6a35"))
IVector<ABI::Windows::Storage::StorageFile*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Storage::StorageFile*, ABI::Windows::Storage::IStorageFile*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVector`1<Windows.Storage.StorageFile>"; }
};
typedef IVector<ABI::Windows::Storage::StorageFile*> __FIVector_1_Windows__CStorage__CStorageFile_t;
#define ____FIVector_1_Windows__CStorage__CStorageFile_FWD_DEFINED__
#define __FIVector_1_Windows__CStorage__CStorageFile ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CStorage__CStorageFile_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVector_1_Windows__CStorage__CStorageFile_USE */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3116 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3116 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3116_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3116_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0007 */
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


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3117 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3117 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3117_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3117_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0008 */
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

typedef enum __x_ABI_CWindows_CStorage_CNameCollisionOption __x_ABI_CWindows_CStorage_CNameCollisionOption;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CMedia_CPlaylists_CPlaylistFormat __x_ABI_CWindows_CMedia_CPlaylists_CPlaylistFormat;


#endif /* end if !defined(__cplusplus) */


#endif



/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0008 */
/* [local] */ 




#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Storage {
            
            typedef enum NameCollisionOption NameCollisionOption;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Playlists {
                
                typedef enum PlaylistFormat PlaylistFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3118 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3118 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3118_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3118_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0009_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("427deafd-b226-5ef0-9320-c9f325e37474")
    __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylistVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3119 */




/* interface __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3119 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3119_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists2Eidl_0000_3119_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0011 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist
#define DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0011_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8ffb74ab-912f-5bc1-87fa-2865f673cbfc")
    __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::Media::Playlists::IPlaylist **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CPlaylists__CPlaylist **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylistVtbl;

    interface __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CMedia_CPlaylists_CPlaylistFormat
    {
        PlaylistFormat_WindowsMedia	= 0,
        PlaylistFormat_Zune	= 1,
        PlaylistFormat_M3u	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playlists_IPlaylist[] = L"Windows.Media.Playlists.IPlaylist";
#endif /* !defined(____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0012 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Playlists {
                
                /* [v1_enum] */ 
                enum PlaylistFormat
                    {
                        PlaylistFormat_WindowsMedia	= 0,
                        PlaylistFormat_Zune	= 1,
                        PlaylistFormat_M3u	= 2
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::Playlists::IPlaylist */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace Playlists {
                    
                    MIDL_INTERFACE("803736F5-CF44-4D97-83B3-7A089E9AB663")
                    IPlaylist : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Files( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CStorageFile **value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SaveAsync( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SaveAsAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFolder *saveLocation,
                            /* [in] */ __RPC__in HSTRING desiredName,
                            /* [in] */ ABI::Windows::Storage::NameCollisionOption option,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **operation) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE SaveAsWithFormatAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFolder *saveLocation,
                            /* [in] */ __RPC__in HSTRING desiredName,
                            /* [in] */ ABI::Windows::Storage::NameCollisionOption option,
                            /* [in] */ ABI::Windows::Media::Playlists::PlaylistFormat playlistFormat,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPlaylist = __uuidof(IPlaylist);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Files )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVector_1_Windows__CStorage__CStorageFile **value);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAsAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder *saveLocation,
            /* [in] */ __RPC__in HSTRING desiredName,
            /* [in] */ __x_ABI_CWindows_CStorage_CNameCollisionOption option,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **operation);
        
        HRESULT ( STDMETHODCALLTYPE *SaveAsWithFormatAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFolder *saveLocation,
            /* [in] */ __RPC__in HSTRING desiredName,
            /* [in] */ __x_ABI_CWindows_CStorage_CNameCollisionOption option,
            /* [in] */ __x_ABI_CWindows_CMedia_CPlaylists_CPlaylistFormat playlistFormat,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStorageFile **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistVtbl;

    interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_get_Files(This,value)	\
    ( (This)->lpVtbl -> get_Files(This,value) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_SaveAsync(This,operation)	\
    ( (This)->lpVtbl -> SaveAsync(This,operation) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_SaveAsAsync(This,saveLocation,desiredName,option,operation)	\
    ( (This)->lpVtbl -> SaveAsAsync(This,saveLocation,desiredName,option,operation) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_SaveAsWithFormatAsync(This,saveLocation,desiredName,option,playlistFormat,operation)	\
    ( (This)->lpVtbl -> SaveAsWithFormatAsync(This,saveLocation,desiredName,option,playlistFormat,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylist_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0013 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playlists_IPlaylistStatics[] = L"Windows.Media.Playlists.IPlaylistStatics";
#endif /* !defined(____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0013_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Media::Playlists::IPlaylistStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Media {
                namespace Playlists {
                    
                    MIDL_INTERFACE("C5C331CD-81F9-4FF3-95B9-70B6FF046B68")
                    IPlaylistStatics : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE LoadAsync( 
                            /* [in] */ __RPC__in_opt ABI::Windows::Storage::IStorageFile *file,
                            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist **operation) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IPlaylistStatics = __uuidof(IPlaylistStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *LoadAsync )( 
            __RPC__in __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile *file,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CPlaylists__CPlaylist **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStaticsVtbl;

    interface __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_LoadAsync(This,file,operation)	\
    ( (This)->lpVtbl -> LoadAsync(This,file,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CMedia_CPlaylists_CIPlaylistStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0014 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Media_Playlists_Playlist_DEFINED
#define RUNTIMECLASS_Windows_Media_Playlists_Playlist_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playlists_Playlist[] = L"Windows.Media.Playlists.Playlist";
#endif


/* interface __MIDL_itf_windows2Emedia2Eplaylists_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Eplaylists_0000_0014_v0_0_s_ifspec;

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


