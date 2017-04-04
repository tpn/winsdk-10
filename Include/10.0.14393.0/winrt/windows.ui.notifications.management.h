

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

#ifndef __windows2Eui2Enotifications2Emanagement_h__
#define __windows2Eui2Enotifications2Emanagement_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__ */


#ifndef ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
#define ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
typedef interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

#endif 	/* ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    interface IUserNotificationListener;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    interface IUserNotificationListenerStatics;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"
#include "Windows.UI.Notifications.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0000 */
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
namespace UI {
namespace Notifications {
namespace Management {
enum UserNotificationListenerAccessStatus;
} /*Management*/
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0000 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3099 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3099 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3099_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3099_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0001 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f09e843a-13cb-559b-a9fc-015722c2cd57"))
IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus>"; }
};
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t;
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3100 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3100 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3100_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3100_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0002 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0fbad8c7-086f-5bf9-81e2-8d79e7184803"))
IAsyncOperation<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> : IAsyncOperation_impl<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Notifications.Management.UserNotificationListenerAccessStatus>"; }
};
typedef IAsyncOperation<enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus> __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t;
#define ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_FWD_DEFINED__
#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
namespace Management {
class UserNotificationListener;
} /*Management*/
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
namespace Management {
interface IUserNotificationListener;
} /*Management*/
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
class UserNotificationChangedEventArgs;
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
interface IUserNotificationChangedEventArgs;
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0002 */
/* [local] */ 






extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3101 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3101 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3101_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3101_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0003 */
/* [local] */ 

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("10242902-b897-5507-9922-2c0a7d34464d"))
ITypedEventHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListener*,ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::Management::UserNotificationListener*, ABI::Windows::UI::Notifications::Management::IUserNotificationListener*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*, ABI::Windows::UI::Notifications::IUserNotificationChangedEventArgs*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Notifications.Management.UserNotificationListener, Windows.UI.Notifications.UserNotificationChangedEventArgs>"; }
};
typedef ITypedEventHandler<ABI::Windows::UI::Notifications::Management::UserNotificationListener*,ABI::Windows::UI::Notifications::UserNotificationChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_t;
#define ____FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_FWD_DEFINED__
#define __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs_USE */
#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
class UserNotification;
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif

#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace UI {
namespace Notifications {
interface IUserNotification;
} /*Notifications*/
} /*UI*/
} /*Windows*/
}
#endif


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0003 */
/* [local] */ 





extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0003_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3102 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3102 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3102_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3102_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0004 */
/* [local] */ 

#ifndef DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6ee1200d-dd13-5050-88cb-5352af113fd1"))
IIterator<ABI::Windows::UI::Notifications::UserNotification*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Notifications.UserNotification>"; }
};
typedef IIterator<ABI::Windows::UI::Notifications::UserNotification*> __FIIterator_1_Windows__CUI__CNotifications__CUserNotification_t;
#define ____FIIterator_1_Windows__CUI__CNotifications__CUserNotification_FWD_DEFINED__
#define __FIIterator_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CNotifications__CUserNotification_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_Windows__CUI__CNotifications__CUserNotification_USE */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0004 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0004_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3103 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3103 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3103_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3103_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0005 */
/* [local] */ 

#ifndef DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("18170480-1bd8-5cd0-bb32-67e71d5b4d7c"))
IIterable<ABI::Windows::UI::Notifications::UserNotification*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Notifications.UserNotification>"; }
};
typedef IIterable<ABI::Windows::UI::Notifications::UserNotification*> __FIIterable_1_Windows__CUI__CNotifications__CUserNotification_t;
#define ____FIIterable_1_Windows__CUI__CNotifications__CUserNotification_FWD_DEFINED__
#define __FIIterable_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CNotifications__CUserNotification_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_Windows__CUI__CNotifications__CUserNotification_USE */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0005 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0005_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3104 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3104 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3104_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3104_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0006 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5a08f98c-8e45-5705-af54-f5418e598392"))
IVectorView<ABI::Windows::UI::Notifications::UserNotification*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Notifications::UserNotification*, ABI::Windows::UI::Notifications::IUserNotification*>> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>"; }
};
typedef IVectorView<ABI::Windows::UI::Notifications::UserNotification*> __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define ____FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_FWD_DEFINED__
#define __FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0006 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0006_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3105 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3105 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3105_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3105_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0007 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9e42ed08-45b3-5643-b5c7-b216f5781594"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>>"; }
};
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_FWD_DEFINED__
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0007 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0007_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3106 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3106 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3106_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3106_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0008 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bf7f3d3c-230f-54ea-ad74-0cf6c55cd8d1"))
IAsyncOperation<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Notifications.UserNotification>>"; }
};
typedef IAsyncOperation<__FIVectorView_1_Windows__CUI__CNotifications__CUserNotification*> __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t;
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_FWD_DEFINED__
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_t

/* ABI */ } /* Windows */ } /* Foundation */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if !defined(__windows2Eui2Enotifications_h__)
#include <Windows.UI.Notifications.h>
#endif // !defined(__windows2Eui2Enotifications_h__)
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus;


#endif /* end if !defined(__cplusplus) */


#endif



/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0008 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                
                typedef enum NotificationKinds NotificationKinds;
                
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
        namespace UI {
            namespace Notifications {
                namespace Management {
                    
                    typedef enum UserNotificationListenerAccessStatus UserNotificationListenerAccessStatus;
                    
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0008_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3107 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3107 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3107_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3107_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0009 */
/* [local] */ 

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)



/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0009 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0009_v0_0_s_ifspec;

#ifndef ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__

/* interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f09e843a-13cb-559b-a9fc-015722c2cd57")
    __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *asyncInfo,
            /* [in] */ AsyncStatus status) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            __RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *asyncInfo,
            /* [in] */ AsyncStatus status);
        
        END_INTERFACE
    } __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;

    interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
    {
        CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0010 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0010 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0010_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3108 */




/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3108 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3108_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement2Eidl_0000_3108_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0011 */
/* [local] */ 

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
#define DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
#if !defined(__cplusplus) || defined(RO_NO_TEMPLATE_NAME)


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0011 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0011_v0_0_s_ifspec;

#ifndef ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__
#define ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__

/* interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */
/* [unique][uuid][object] */ 



/* interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0fbad8c7-086f-5bf9-81e2-8d79e7184803")
    __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus : public IInspectable
    {
    public:
        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_Completed( 
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *handler) = 0;
        
        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Completed( 
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **handler) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetResults( 
            /* [retval][out] */ __RPC__out enum ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus *results) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus *handler);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **handler);
        
        HRESULT ( STDMETHODCALLTYPE *GetResults )( 
            __RPC__in __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus * This,
            /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus *results);
        
        END_INTERFACE
    } __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl;

    interface __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus
    {
        CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatusVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 

#define __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0012 */
/* [local] */ 

#endif /* pinterface */
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus */
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus
    {
        UserNotificationListenerAccessStatus_Unspecified	= 0,
        UserNotificationListenerAccessStatus_Allowed	= 1,
        UserNotificationListenerAccessStatus_Denied	= 2
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListener[] = L"Windows.UI.Notifications.Management.IUserNotificationListener";
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0012 */
/* [local] */ 

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Notifications {
                namespace Management {
                    
                    /* [v1_enum] */ 
                    enum UserNotificationListenerAccessStatus
                        {
                            UserNotificationListenerAccessStatus_Unspecified	= 0,
                            UserNotificationListenerAccessStatus_Allowed	= 1,
                            UserNotificationListenerAccessStatus_Denied	= 2
                        } ;
                } /* end namespace */
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0012_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Notifications::Management::IUserNotificationListener */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Notifications {
                    namespace Management {
                        
                        MIDL_INTERFACE("62553E41-8A06-4CEF-8215-6033A5BE4B03")
                        IUserNotificationListener : public IInspectable
                        {
                        public:
                            virtual HRESULT STDMETHODCALLTYPE RequestAccessAsync( 
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **result) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE GetAccessStatus( 
                                /* [out][retval] */ __RPC__out ABI::Windows::UI::Notifications::Management::UserNotificationListenerAccessStatus *accessStatus) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE add_NotificationChanged( 
                                /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs *handler,
                                /* [out][retval] */ __RPC__out EventRegistrationToken *token) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE remove_NotificationChanged( 
                                /* [in] */ EventRegistrationToken token) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE GetNotificationsAsync( 
                                /* [in] */ ABI::Windows::UI::Notifications::NotificationKinds kinds,
                                /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification **result) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE GetNotification( 
                                /* [in] */ UINT32 notificationId,
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Notifications::IUserNotification **result) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE ClearNotifications( void) = 0;
                            
                            virtual HRESULT STDMETHODCALLTYPE RemoveNotification( 
                                /* [in] */ UINT32 notificationId) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IUserNotificationListener = __uuidof(IUserNotificationListener);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CNotifications__CManagement__CUserNotificationListenerAccessStatus **result);
        
        HRESULT ( STDMETHODCALLTYPE *GetAccessStatus )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CUI_CNotifications_CManagement_CUserNotificationListenerAccessStatus *accessStatus);
        
        HRESULT ( STDMETHODCALLTYPE *add_NotificationChanged )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CNotifications__CManagement__CUserNotificationListener_Windows__CUI__CNotifications__CUserNotificationChangedEventArgs *handler,
            /* [out][retval] */ __RPC__out EventRegistrationToken *token);
        
        HRESULT ( STDMETHODCALLTYPE *remove_NotificationChanged )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ EventRegistrationToken token);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotificationsAsync )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ __x_ABI_CWindows_CUI_CNotifications_CNotificationKinds kinds,
            /* [out][retval] */ __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CNotifications__CUserNotification **result);
        
        HRESULT ( STDMETHODCALLTYPE *GetNotification )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ UINT32 notificationId,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CIUserNotification **result);
        
        HRESULT ( STDMETHODCALLTYPE *ClearNotifications )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This);
        
        HRESULT ( STDMETHODCALLTYPE *RemoveNotification )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener * This,
            /* [in] */ UINT32 notificationId);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl;

    interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_RequestAccessAsync(This,result)	\
    ( (This)->lpVtbl -> RequestAccessAsync(This,result) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetAccessStatus(This,accessStatus)	\
    ( (This)->lpVtbl -> GetAccessStatus(This,accessStatus) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_add_NotificationChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_NotificationChanged(This,handler,token) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_remove_NotificationChanged(This,token)	\
    ( (This)->lpVtbl -> remove_NotificationChanged(This,token) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetNotificationsAsync(This,kinds,result)	\
    ( (This)->lpVtbl -> GetNotificationsAsync(This,kinds,result) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_GetNotification(This,notificationId,result)	\
    ( (This)->lpVtbl -> GetNotification(This,notificationId,result) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_ClearNotifications(This)	\
    ( (This)->lpVtbl -> ClearNotifications(This) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_RemoveNotification(This,notificationId)	\
    ( (This)->lpVtbl -> RemoveNotification(This,notificationId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0013 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Notifications_Management_IUserNotificationListenerStatics[] = L"Windows.UI.Notifications.Management.IUserNotificationListenerStatics";
#endif /* !defined(____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0013 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0013_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::UI::Notifications::Management::IUserNotificationListenerStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace UI {
                namespace Notifications {
                    namespace Management {
                        
                        MIDL_INTERFACE("FF6123CF-4386-4AA3-B73D-B804E5B63B23")
                        IUserNotificationListenerStatics : public IInspectable
                        {
                        public:
                            virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Current( 
                                /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::UI::Notifications::Management::IUserNotificationListener **result) = 0;
                            
                        };

                        extern const __declspec(selectany) IID & IID_IUserNotificationListenerStatics = __uuidof(IUserNotificationListenerStatics);

                        
                    }  /* end namespace */
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )( 
            __RPC__in __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListener **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl;

    interface __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_get_Current(This,result)	\
    ( (This)->lpVtbl -> get_Current(This,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CUI_CNotifications_CManagement_CIUserNotificationListenerStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0014 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
#define RUNTIMECLASS_Windows_UI_Notifications_Management_UserNotificationListener_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Notifications_Management_UserNotificationListener[] = L"Windows.UI.Notifications.Management.UserNotificationListener";
#endif


/* interface __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0014 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Enotifications2Emanagement_0000_0014_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


