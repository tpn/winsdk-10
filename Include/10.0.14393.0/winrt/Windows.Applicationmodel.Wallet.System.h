

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

#ifndef __windows2Eapplicationmodel2Ewallet2Esystem_h__
#define __windows2Eapplicationmodel2Ewallet2Esystem_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

#endif 	/* ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__ */


#ifndef ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_FWD_DEFINED__
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_FWD_DEFINED__
typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable;

#endif 	/* ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletItemSystemStore;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletItemSystemStore2;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    interface IWalletManagerSystemStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.Wallet.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0000 */
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
namespace ApplicationModel {
namespace Wallet {
namespace System {
class WalletItemSystemStore;
} /*System*/
} /*Wallet*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace Wallet {
namespace System {
interface IWalletItemSystemStore;
} /*System*/
} /*Wallet*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3174 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3174 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3174_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3174_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fe76bd86-3570-5d56-932e-a6fb8093a557"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3175 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3175 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3175_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3175_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("587c5f4f-7c55-5f74-b26a-f80e3bc6d4f2"))
IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore>"; }
};
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*> __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t;
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_USE */

interface IInspectable;


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0002 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3176 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3176 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3176_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3176_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3c619943-a672-57ee-ad32-f6d97a6f4217"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*, ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore*>,IInspectable*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Wallet.System.WalletItemSystemStore, Object>"; }
};
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Wallet::System::WalletItemSystemStore*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_t;
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace Wallet {
class WalletItem;
} /*Wallet*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace ApplicationModel {
namespace Wallet {
interface IWalletItem;
} /*Wallet*/
} /*ApplicationModel*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0003 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3177 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3177 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3177_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3177_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e3ceb002-c2dd-5e63-913c-d7d577561e73"))
IIterator<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Wallet.WalletItem>"; }
};
typedef IIterator<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3178 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3178 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3178_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3178_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac174c8c-0fdd-5cff-a29f-4e8ce1c8bc81"))
IIterable<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Wallet.WalletItem>"; }
};
typedef IIterable<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3179 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3179 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3179_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3179_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0006 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2dc89188-2b5b-591a-bb3d-d7d57ff7312c"))
IVectorView<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>"; }
};
typedef IVectorView<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3180 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3180 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3180_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3180_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9302d49e-dda3-5971-b48a-dfdf02c572af"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3181 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3181 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3181_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3181_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0008 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("23540ddd-166f-5b93-8669-e340b5e1820d"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Wallet.WalletItem>>"; }
};
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0008 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3182 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3182 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3182_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3182_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("88b0349f-503d-5786-a267-55bb37a8a1b1"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Wallet.WalletItem>"; }
};
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0009_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3183 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3183 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3183_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3183_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0010 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e64ddb0-ea5c-5593-a1f3-0b8209df3905"))
IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItem*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Wallet::WalletItem*, ABI::Windows::ApplicationModel::Wallet::IWalletItem*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Wallet.WalletItem>"; }
};
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Wallet::WalletItem*> __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_t;
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0010 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3184 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3184 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3184_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3184_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0011 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; }
};
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define ____FIAsyncOperationCompletedHandler_1_boolean_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0011 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0011_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3185 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3185 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3185_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3185_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0012 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; }
};
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define ____FIAsyncOperation_1_boolean_FWD_DEFINED__
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_boolean_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eapplicationmodel2Ewallet_h__)
#include <Windows.ApplicationModel.Wallet.h>
#endif // !defined(__windows2Eapplicationmodel2Ewallet_h__)
#if !defined(__windows2Estorage2Estreams_h__)
#include <Windows.Storage.Streams.h>
#endif // !defined(__windows2Estorage2Estreams_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)


#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation;


#endif /* end if !defined(__cplusplus) */


#endif




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0012 */
/* [local] */ 




#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    
                    typedef enum WalletItemAppAssociation WalletItemAppAssociation;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0012_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3186 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3186 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3186_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3186_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0013 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0013 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0013_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("fe76bd86-3570-5d56-932e-a6fb8093a557")
    __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0014 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0014_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3187 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3187 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3187_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3187_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0015 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0015 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0015_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("587c5f4f-7c55-5f74-b26a-f80e3bc6d4f2")
    __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__deref_out_opt ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore **results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore * This,
            /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore **results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl;

    interface __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0016 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0016 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0016_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3188 */




/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3188 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3188_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem2Eidl_0000_3188_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0017 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0017 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0017_v0_0_s_ifspec;

#ifndef ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__

/* interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable */
/* [unique][uuid][object] */ 



/* interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3c619943-a672-57ee-ad32-f6d97a6f4217")
    __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore *sender,
            /* [in] */ __RPC__in_opt IInspectable *e) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore *sender,
            /* [in] */ __RPC__in_opt IInspectable *e);
        
        END_INTERFACE
    } __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl;

    interface __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable
    {
        CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectableVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0018 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation
    {
        WalletItemAppAssociation_None	= 0,
        WalletItemAppAssociation_AppInstalled	= 1,
        WalletItemAppAssociation_AppNotInstalled	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0018 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Wallet {
                namespace System {
                    
                    /* [v1_enum] */ 
                    enum WalletItemAppAssociation
                        {
                            WalletItemAppAssociation_None	= 0,
                            WalletItemAppAssociation_AppInstalled	= 1,
                            WalletItemAppAssociation_AppNotInstalled	= 2
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0018_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Wallet {
                    namespace System {
                        
                        MIDL_INTERFACE("522E2BFF-96A2-4A17-8D19-FE1D9F837561")
                        IWalletItemSystemStore : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE GetItemsAsync( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem **operation) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE DeleteAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem *item,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction **operation) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ImportItemAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference *stream,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem **operation) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE GetAppStatusForItem( 
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem *item,
                                /* [out][retval] */ __RPC__out ABI::Windows::ApplicationModel::Wallet::System::WalletItemAppAssociation *result) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE LaunchAppForItemAsync( 
                                /* [in] */ __RPC__in_opt ABI::Windows::ApplicationModel::Wallet::IWalletItem *item,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IWalletItemSystemStore = __uuidof(IWalletItemSystemStore);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *GetItemsAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CWallet__CWalletItem **operation);
        
        HRESULT ( STDMETHODCALLTYPE *DeleteAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem *item,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction **operation);
        
        HRESULT ( STDMETHODCALLTYPE *ImportItemAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference *stream,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CWalletItem **operation);
        
        HRESULT ( STDMETHODCALLTYPE *GetAppStatusForItem )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem *item,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CWalletItemAppAssociation *result);
        
        HRESULT ( STDMETHODCALLTYPE *LaunchAppForItemAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore * This,
            /* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CWallet_CIWalletItem *item,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_boolean **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetItemsAsync(This,operation)	\
    ( (This)->lpVtbl -> GetItemsAsync(This,operation) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_DeleteAsync(This,item,operation)	\
    ( (This)->lpVtbl -> DeleteAsync(This,item,operation) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_ImportItemAsync(This,stream,operation)	\
    ( (This)->lpVtbl -> ImportItemAsync(This,stream,operation) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_GetAppStatusForItem(This,item,result)	\
    ( (This)->lpVtbl -> GetAppStatusForItem(This,item,result) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_LaunchAppForItemAsync(This,item,operation)	\
    ( (This)->lpVtbl -> LaunchAppForItemAsync(This,item,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0019 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletItemSystemStore2[] = L"Windows.ApplicationModel.Wallet.System.IWalletItemSystemStore2";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0019 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0019_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Wallet::System::IWalletItemSystemStore2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Wallet {
                    namespace System {
                        
                        MIDL_INTERFACE("F98D3A4E-BE00-4FDD-9734-6C113C1AC1CB")
                        IWalletItemSystemStore2 : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE add_ItemsChanged( 
                                /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable *handler,
                                /* [out][retval] */ __RPC__out EventRegistrationToken *cookie) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE remove_ItemsChanged( 
                                /* [in] */ EventRegistrationToken cookie) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IWalletItemSystemStore2 = __uuidof(IWalletItemSystemStore2);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *add_ItemsChanged )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore_IInspectable *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *cookie);
        
        HRESULT ( STDMETHODCALLTYPE *remove_ItemsChanged )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2 * This,
            /* [in] */ EventRegistrationToken cookie);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl;

    interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_add_ItemsChanged(This,handler,cookie)	\
    ( (This)->lpVtbl -> add_ItemsChanged(This,handler,cookie) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_remove_ItemsChanged(This,cookie)	\
    ( (This)->lpVtbl -> remove_ItemsChanged(This,cookie) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletItemSystemStore2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0020 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Wallet_System_IWalletManagerSystemStatics[] = L"Windows.ApplicationModel.Wallet.System.IWalletManagerSystemStatics";
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0020 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0020_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::ApplicationModel::Wallet::System::IWalletManagerSystemStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace ApplicationModel {
                namespace Wallet {
                    namespace System {
                        
                        MIDL_INTERFACE("BEE8EB89-2634-4B9A-8B23-EE8903C91FE0")
                        IWalletManagerSystemStatics : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE RequestStoreAsync( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore **operation) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IWalletManagerSystemStatics = __uuidof(IWalletManagerSystemStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )( 
            __RPC__in __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CWallet__CSystem__CWalletItemSystemStore **operation);
        
        END_INTERFACE
    } __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl;

    interface __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_RequestStoreAsync(This,operation)	\
    ( (This)->lpVtbl -> RequestStoreAsync(This,operation) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CApplicationModel_CWallet_CSystem_CIWalletManagerSystemStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0021 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletItemSystemStore[] = L"Windows.ApplicationModel.Wallet.System.WalletItemSystemStore";
#endif
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Wallet_System_WalletManagerSystem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Wallet_System_WalletManagerSystem[] = L"Windows.ApplicationModel.Wallet.System.WalletManagerSystem";
#endif


/* interface __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0021 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eapplicationmodel2Ewallet2Esystem_0000_0021_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


