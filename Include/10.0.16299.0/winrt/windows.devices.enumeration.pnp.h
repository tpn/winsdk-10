/* Header file automatically generated from windows.devices.enumeration.pnp.idl */
/*
 * File built with Microsoft(R) MIDLRT Compiler Engine Version 10.00.0206 
 */

#pragma warning( disable: 4049 )  /* more than 64k source lines */

/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include <rpc.h>
#include <rpcndr.h>

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif /*COM_NO_WINDOWS_H*/
#ifndef __windows2Edevices2Eenumeration2Epnp_h__
#define __windows2Edevices2Eenumeration2Epnp_h__
#ifndef __windows2Edevices2Eenumeration2Epnp_p_h__
#define __windows2Edevices2Eenumeration2Epnp_p_h__


#pragma once

//
// Deprecated attribute support
//

#pragma push_macro("DEPRECATED")
#undef DEPRECATED

#if !defined(DISABLE_WINRT_DEPRECATION)
#if defined(__cplusplus)
#if __cplusplus >= 201402
#define DEPRECATED(x) [[deprecated(x)]]
#elif defined(_MSC_VER)
#if _MSC_VER >= 1900
#define DEPRECATED(x) [[deprecated(x)]]
#define DEPRECATEDENUMERATOR(x) [[deprecated(x)]]
#else
#define DEPRECATED(x) __declspec(deprecated(x))
#define DEPRECATEDENUMERATOR(x)
#endif // _MSC_VER >= 1900
#else // Not Standard C++ or MSVC, ignore the construct.
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  // C++ deprecation
#else // C - disable deprecation
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif
#else // Deprecation is disabled
#define DEPRECATED(x)
#define DEPRECATEDENUMERATOR(x)
#endif  /* DEPRECATED */

// Disable Deprecation for this header, MIDL verifies that cross-type access is acceptable
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#else
#pragma warning(push)
#pragma warning(disable: 4996)
#endif

#pragma push_macro("MIDL_CONST_ID")
#if !defined(_MSC_VER) || (_MSC_VER >= 1910)
#define MIDL_CONST_ID constexpr const
#else
#define MIDL_CONST_ID const __declspec(selectany)
#endif


//  API Contract Inclusion Definitions
#if !defined(SPECIFIC_API_CONTRACT_DEFINITIONS)
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

#if !defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)
#define WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_WEBUI_CORE_WEBUICOMMANDBARCONTRACT_VERSION)

#endif // defined(SPECIFIC_API_CONTRACT_DEFINITIONS)


// Header files for imported files
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Devices.Enumeration.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    interface IPnpObject;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject ABI::Windows::Devices::Enumeration::Pnp::IPnpObject

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    interface IPnpObjectStatics;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectStatics

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    interface IPnpObjectUpdate;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    interface IPnpObjectWatcher;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    class PnpObject;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6bb6d2f1-b5fb-57f0-8251-f20cde5a6871"))
IIterator<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("30b50092-36ee-53ff-9450-029004436c60"))
IIterable<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cce5a798-d269-5fce-99ce-ef0ae3cd0569"))
IVectorView<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9d615463-6879-521f-8e97-e66d3ddbc95e"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("22b0fb93-30e6-501a-bd3b-9fa3063e9c16"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    class PnpObjectCollection;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("811d834c-a15e-5522-b7f4-e53004fc58ff"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*, __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Enumeration.Pnp.PnpObjectCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f383c2cc-f326-5bbe-95d1-cbc24714ef86"))
IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*, __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Enumeration.Pnp.PnpObjectCollection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectCollection*> __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t;
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection ABI::Windows::Foundation::IAsyncOperation<__FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>
//#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_t ABI::Windows::Foundation::IAsyncOperation<__FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    class PnpObjectWatcher;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2ee2b4c9-b696-5ecc-b29b-f1e0ef5fe1f7"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.Pnp.PnpObjectWatcher, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,IInspectable*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d578eed2-58e5-5825-8af2-12f89387b656"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObject*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.Pnp.PnpObjectWatcher, Windows.Devices.Enumeration.Pnp.PnpObject>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::PnpObject*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::IPnpObject*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    class PnpObjectUpdate;
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("af8f929d-8058-5c38-a3d8-30aa7a08b588"))
ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate*, ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Enumeration.Pnp.PnpObjectWatcher, Windows.Devices.Enumeration.Pnp.PnpObjectUpdate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::PnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::PnpObjectUpdate*> __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_t;
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate*>
//#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher*,ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                
                typedef enum DeviceWatcherStatus : int DeviceWatcherStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    
                    typedef enum PnpObjectType : int PnpObjectType;
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */



















/*
 *
 * Struct Windows.Devices.Enumeration.Pnp.PnpObjectType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    /* [v1_enum, contract] */
                    enum PnpObjectType : int
                    {
                        PnpObjectType_Unknown = 0,
                        PnpObjectType_DeviceInterface = 1,
                        PnpObjectType_DeviceContainer = 2,
                        PnpObjectType_Device = 3,
                        PnpObjectType_DeviceInterfaceClass = 4,
                        PnpObjectType_AssociationEndpoint = 5,
                        PnpObjectType_AssociationEndpointContainer = 6,
                        PnpObjectType_AssociationEndpointService = 7,
                    };
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObject[] = L"Windows.Devices.Enumeration.Pnp.IPnpObject";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    /* [object, uuid("95C66258-733B-4A8F-93A3-DB078AC870C1"), exclusiveto, contract] */
                    MIDL_INTERFACE("95C66258-733B-4A8F-93A3-DB078AC870C1")
                    IPnpObject : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Update(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectUpdate * updateInfo
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPnpObject=_uuidof(IPnpObject);
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    /* [object, uuid("B3C32A3D-D168-4660-BBF3-A733B14B6E01"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3C32A3D-D168-4660-BBF3-A733B14B6E01")
                    IPnpObjectStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateFromIdAsync(
                            /* [in] */ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType type,
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * * asyncOp
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                            /* [in] */ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType type,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncAqsFilter(
                            /* [in] */ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType type,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                            /* [in] */__RPC__in HSTRING aqsFilter,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcher(
                            /* [in] */ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType type,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher * * watcher
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateWatcherAqsFilter(
                            /* [in] */ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType type,
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
                            /* [in] */__RPC__in HSTRING aqsFilter,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::Pnp::IPnpObjectWatcher * * watcher
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPnpObjectStatics=_uuidof(IPnpObjectStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObjectUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    /* [object, uuid("6F59E812-001E-4844-BCC6-432886856A17"), exclusiveto, contract] */
                    MIDL_INTERFACE("6F59E812-001E-4844-BCC6-432886856A17")
                    IPnpObjectUpdate : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::Pnp::PnpObjectType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPnpObjectUpdate=_uuidof(IPnpObjectUpdate);
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObjectWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                namespace Pnp {
                    /* [object, uuid("83C95CA8-4772-4A7A-ACA8-E48C42A89C44"), exclusiveto, contract] */
                    MIDL_INTERFACE("83C95CA8-4772-4A7A-ACA8-E48C42A89C44")
                    IPnpObjectWatcher : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Added(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Added(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Updated(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Updated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Removed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Removed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EnumerationCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EnumerationCompleted(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Enumeration::DeviceWatcherStatus * status
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPnpObjectWatcher=_uuidof(IPnpObjectWatcher);
                    
                } /* Windows */
            } /* Devices */
        } /* Enumeration */
    } /* Pnp */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.Pnp.IPnpObjectStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObject ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObject_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObject[] = L"Windows.Devices.Enumeration.Pnp.PnpObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Devices.Enumeration.Pnp.PnpObject ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Devices.Enumeration.Pnp.PnpObject
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectCollection[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef struct __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef  struct __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef struct __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__




typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus;








typedef enum __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType;



















/*
 *
 * Struct Windows.Devices.Enumeration.Pnp.PnpObjectType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType
{
    PnpObjectType_Unknown = 0,
    PnpObjectType_DeviceInterface = 1,
    PnpObjectType_DeviceContainer = 2,
    PnpObjectType_Device = 3,
    PnpObjectType_DeviceInterfaceClass = 4,
    PnpObjectType_AssociationEndpoint = 5,
    PnpObjectType_AssociationEndpointContainer = 6,
    PnpObjectType_AssociationEndpointService = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObject[] = L"Windows.Devices.Enumeration.Pnp.IPnpObject";
/* [object, uuid("95C66258-733B-4A8F-93A3-DB078AC870C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * updateInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_Update(This,updateInfo) \
    ( (This)->lpVtbl->Update(This,updateInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectStatics[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectStatics";
/* [object, uuid("B3C32A3D-D168-4660-BBF3-A733B14B6E01"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromIdAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObject * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CEnumeration__CPnp__CPnpObjectCollection * * asyncOp
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcher )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * * watcher
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateWatcherAqsFilter )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics * This,
        /* [in] */__x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType type,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requestedProperties,
        /* [in] */__RPC__in HSTRING aqsFilter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * * watcher
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_CreateFromIdAsync(This,type,id,requestedProperties,asyncOp) \
    ( (This)->lpVtbl->CreateFromIdAsync(This,type,id,requestedProperties,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FindAllAsync(This,type,requestedProperties,asyncOp) \
    ( (This)->lpVtbl->FindAllAsync(This,type,requestedProperties,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_FindAllAsyncAqsFilter(This,type,requestedProperties,aqsFilter,asyncOp) \
    ( (This)->lpVtbl->FindAllAsyncAqsFilter(This,type,requestedProperties,aqsFilter,asyncOp) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_CreateWatcher(This,type,requestedProperties,watcher) \
    ( (This)->lpVtbl->CreateWatcher(This,type,requestedProperties,watcher) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_CreateWatcherAqsFilter(This,type,requestedProperties,aqsFilter,watcher) \
    ( (This)->lpVtbl->CreateWatcherAqsFilter(This,type,requestedProperties,aqsFilter,watcher) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObjectUpdate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate";
/* [object, uuid("6F59E812-001E-4844-BCC6-432886856A17"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CPnpObjectType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectUpdate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Enumeration.Pnp.PnpObjectWatcher
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Enumeration_Pnp_IPnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher";
/* [object, uuid("83C95CA8-4772-4A7A-ACA8-E48C42A89C44"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObject * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_Windows__CDevices__CEnumeration__CPnp__CPnpObjectUpdate * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CEnumeration__CPnp__CPnpObjectWatcher_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CEnumeration_CDeviceWatcherStatus * status
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl;

interface __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcherVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_add_Added(This,handler,token) \
    ( (This)->lpVtbl->add_Added(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_remove_Added(This,token) \
    ( (This)->lpVtbl->remove_Added(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_add_Updated(This,handler,token) \
    ( (This)->lpVtbl->add_Updated(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_remove_Updated(This,token) \
    ( (This)->lpVtbl->remove_Updated(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_add_Removed(This,handler,token) \
    ( (This)->lpVtbl->add_Removed(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_remove_Removed(This,token) \
    ( (This)->lpVtbl->remove_Removed(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_add_EnumerationCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_remove_EnumerationCompleted(This,token) \
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_get_Status(This,status) \
    ( (This)->lpVtbl->get_Status(This,status) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher;
#endif /* !defined(____x_ABI_CWindows_CDevices_CEnumeration_CPnp_CIPnpObjectWatcher_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Enumeration.Pnp.IPnpObjectStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObject ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObject_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObject[] = L"Windows.Devices.Enumeration.Pnp.PnpObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Devices.Enumeration.Pnp.PnpObject ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.Devices.Enumeration.Pnp.PnpObject
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectCollection_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectCollection[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectUpdate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObjectUpdate ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectUpdate[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectUpdate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Enumeration.Pnp.PnpObjectWatcher
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Enumeration.Pnp.IPnpObjectWatcher ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher_DEFINED
#define RUNTIMECLASS_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Enumeration_Pnp_PnpObjectWatcher[] = L"Windows.Devices.Enumeration.Pnp.PnpObjectWatcher";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Edevices2Eenumeration2Epnp_p_h__

#endif // __windows2Edevices2Eenumeration2Epnp_h__
