/* Header file automatically generated from windows.media.casting.idl */
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
#ifndef __windows2Emedia2Ecasting_h__
#define __windows2Emedia2Ecasting_h__
#ifndef __windows2Emedia2Ecasting_p_h__
#define __windows2Emedia2Ecasting_p_h__


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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Popups.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingConnection;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection ABI::Windows::Media::Casting::ICastingConnection

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingConnectionErrorOccurredEventArgs;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs ABI::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingDevice;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice ABI::Windows::Media::Casting::ICastingDevice

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingDevicePicker;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker ABI::Windows::Media::Casting::ICastingDevicePicker

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingDevicePickerFilter;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter ABI::Windows::Media::Casting::ICastingDevicePickerFilter

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingDeviceSelectedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs ABI::Windows::Media::Casting::ICastingDeviceSelectedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingDeviceStatics;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics ABI::Windows::Media::Casting::ICastingDeviceStatics

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                interface ICastingSource;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource ABI::Windows::Media::Casting::ICastingSource

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingSource;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CCasting__CCastingSource_USE
#define DEF___FIIterator_1_Windows__CMedia__CCasting__CCastingSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3f6c93e9-cc77-5ef4-b2b7-25cfcfc09720"))
IIterator<ABI::Windows::Media::Casting::CastingSource*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingSource*, ABI::Windows::Media::Casting::ICastingSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Casting.CastingSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Casting::CastingSource*> __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_t;
#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CCasting__CCastingSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Casting::ICastingSource*>
//#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Casting::ICastingSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CCasting__CCastingSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CCasting__CCastingSource_USE
#define DEF___FIIterable_1_Windows__CMedia__CCasting__CCastingSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1abb2cc9-46a2-58b1-91aa-28699d66d1ab"))
IIterable<ABI::Windows::Media::Casting::CastingSource*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingSource*, ABI::Windows::Media::Casting::ICastingSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Casting.CastingSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Casting::CastingSource*> __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_t;
#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CCasting__CCastingSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Casting::ICastingSource*>
//#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Casting::ICastingSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CCasting__CCastingSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_USE
#define DEF___FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7828da61-dea4-5485-b27a-8f78e0472402"))
IVectorView<ABI::Windows::Media::Casting::CastingSource*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingSource*, ABI::Windows::Media::Casting::ICastingSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Casting.CastingSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Casting::CastingSource*> __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_t;
#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Casting::ICastingSource*>
//#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Casting::ICastingSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CCasting__CCastingSource_USE
#define DEF___FIVector_1_Windows__CMedia__CCasting__CCastingSource_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c2e3dea8-92e0-50af-9c93-83b3e86b73b4"))
IVector<ABI::Windows::Media::Casting::CastingSource*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingSource*, ABI::Windows::Media::Casting::ICastingSource*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Casting.CastingSource>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Casting::CastingSource*> __FIVector_1_Windows__CMedia__CCasting__CCastingSource_t;
#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CCasting__CCastingSource_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Casting::ICastingSource*>
//#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Casting::ICastingSource*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CCasting__CCastingSource_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                enum CastingConnectionErrorStatus : int;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7216a94a-a10a-5763-8e96-bf33c582ed92"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Casting.CastingConnectionErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingConnectionErrorStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingConnectionErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("25c821bc-deb8-5850-8af2-d3ac35426bd2"))
IAsyncOperation<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> : IAsyncOperation_impl<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Casting.CastingConnectionErrorStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Casting::CastingConnectionErrorStatus> __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::CastingConnectionErrorStatus>
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::CastingConnectionErrorStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingDevice;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f0c69b9e-14cb-510a-8ef0-7e86d771baaf"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingDevice*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingDevice*, ABI::Windows::Media::Casting::ICastingDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Casting.CastingDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingDevice*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::ICastingDevice*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::ICastingDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b4ee058-4c69-5e70-8834-c1d171cc1b22"))
IAsyncOperation<ABI::Windows::Media::Casting::CastingDevice*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingDevice*, ABI::Windows::Media::Casting::ICastingDevice*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Casting.CastingDevice>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::Casting::CastingDevice*> __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::ICastingDevice*>
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::ICastingDevice*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                enum CastingPlaybackTypes : unsigned int;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b55e550c-dfa8-50be-be8f-5d42c9dac120"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Casting.CastingPlaybackTypes>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingPlaybackTypes>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Casting::CastingPlaybackTypes>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dff10e53-4c5e-5dba-9269-cd61881bb8b3"))
IAsyncOperation<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> : IAsyncOperation_impl<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Casting.CastingPlaybackTypes>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Casting::CastingPlaybackTypes> __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t;
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::CastingPlaybackTypes>
//#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Casting::CastingPlaybackTypes>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingConnection;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1576170-9b08-5a9b-87d2-c1ac47bc6681"))
ITypedEventHandler<ABI::Windows::Media::Casting::CastingConnection*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingConnection*, ABI::Windows::Media::Casting::ICastingConnection*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Casting.CastingConnection, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Casting::CastingConnection*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingConnection*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingConnection*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingConnectionErrorOccurredEventArgs;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("78afbbd0-9811-5f0e-9566-47c3e8cdd929"))
ITypedEventHandler<ABI::Windows::Media::Casting::CastingConnection*,ABI::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingConnection*, ABI::Windows::Media::Casting::ICastingConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs*, ABI::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Casting.CastingConnection, Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Casting::CastingConnection*,ABI::Windows::Media::Casting::CastingConnectionErrorOccurredEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingConnection*,ABI::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingConnection*,ABI::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingDevicePicker;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a64b972b-aa63-5c61-9cde-cd6ffea8a247"))
ITypedEventHandler<ABI::Windows::Media::Casting::CastingDevicePicker*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingDevicePicker*, ABI::Windows::Media::Casting::ICastingDevicePicker*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Casting.CastingDevicePicker, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Casting::CastingDevicePicker*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingDevicePicker*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingDevicePicker*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingDeviceSelectedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b3655b33-c4ad-5f4c-a187-b2e4c770a16b"))
ITypedEventHandler<ABI::Windows::Media::Casting::CastingDevicePicker*,ABI::Windows::Media::Casting::CastingDeviceSelectedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingDevicePicker*, ABI::Windows::Media::Casting::ICastingDevicePicker*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Casting::CastingDeviceSelectedEventArgs*, ABI::Windows::Media::Casting::ICastingDeviceSelectedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Casting.CastingDevicePicker, Windows.Media.Casting.CastingDeviceSelectedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Casting::CastingDevicePicker*,ABI::Windows::Media::Casting::CastingDeviceSelectedEventArgs*> __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingDevicePicker*,ABI::Windows::Media::Casting::ICastingDeviceSelectedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Casting::ICastingDevicePicker*,ABI::Windows::Media::Casting::ICastingDeviceSelectedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DevicePickerAppearance;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDevicePickerAppearance;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance ABI::Windows::Devices::Enumeration::IDevicePickerAppearance

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamWithContentType;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                
                typedef enum CastingConnectionErrorStatus : int CastingConnectionErrorStatus;
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                
                typedef enum CastingConnectionState : int CastingConnectionState;
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                
                typedef enum CastingPlaybackTypes : unsigned int CastingPlaybackTypes;
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */













namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                class CastingDevicePickerFilter;
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */












/*
 *
 * Struct Windows.Media.Casting.CastingConnectionErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [v1_enum, contract] */
                enum CastingConnectionErrorStatus : int
                {
                    CastingConnectionErrorStatus_Succeeded = 0,
                    CastingConnectionErrorStatus_DeviceDidNotRespond = 1,
                    CastingConnectionErrorStatus_DeviceError = 2,
                    CastingConnectionErrorStatus_DeviceLocked = 3,
                    CastingConnectionErrorStatus_ProtectedPlaybackFailed = 4,
                    CastingConnectionErrorStatus_InvalidCastingSource = 5,
                    CastingConnectionErrorStatus_Unknown = 6,
                };
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Casting.CastingConnectionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [v1_enum, contract] */
                enum CastingConnectionState : int
                {
                    CastingConnectionState_Disconnected = 0,
                    CastingConnectionState_Connected = 1,
                    CastingConnectionState_Rendering = 2,
                    CastingConnectionState_Disconnecting = 3,
                    CastingConnectionState_Connecting = 4,
                };
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Casting.CastingPlaybackTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [v1_enum, flags, contract] */
                enum CastingPlaybackTypes : unsigned int
                {
                    CastingPlaybackTypes_None = 0,
                    CastingPlaybackTypes_Audio = 0x1,
                    CastingPlaybackTypes_Video = 0x2,
                    CastingPlaybackTypes_Picture = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(CastingPlaybackTypes)
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingConnection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnection[] = L"Windows.Media.Casting.ICastingConnection";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("CD951653-C2F1-4498-8B78-5FB4CD3640DD"), exclusiveto, contract] */
                MIDL_INTERFACE("CD951653-C2F1-4498-8B78-5FB4CD3640DD")
                ICastingConnection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Casting::CastingConnectionState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Device(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Casting::ICastingDevice * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Casting::ICastingSource * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Casting::ICastingSource * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StateChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StateChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ErrorOccurred(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ErrorOccurred(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestStartCastingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Casting::ICastingSource * value,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DisconnectAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingConnection=_uuidof(ICastingConnection);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnection;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("A7FB3C69-8719-4F00-81FB-961863C79A32"), exclusiveto, contract] */
                MIDL_INTERFACE("A7FB3C69-8719-4F00-81FB-961863C79A32")
                ICastingConnectionErrorOccurredEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ErrorStatus(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Casting::CastingConnectionErrorStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingConnectionErrorOccurredEventArgs=_uuidof(ICastingConnectionErrorOccurredEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevice[] = L"Windows.Media.Casting.ICastingDevice";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("DE721C83-4A43-4AD1-A6D2-2492A796C3F2"), exclusiveto, contract] */
                MIDL_INTERFACE("DE721C83-4A43-4AD1-A6D2-2492A796C3F2")
                ICastingDevice : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Icon(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamWithContentType * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetSupportedCastingPlaybackTypesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCastingConnection(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Casting::ICastingConnection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingDevice=_uuidof(ICastingDevice);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevice;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevicePicker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePicker[] = L"Windows.Media.Casting.ICastingDevicePicker";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("DCD39924-0591-49BE-AACB-4B82EE756A95"), exclusiveto, contract] */
                MIDL_INTERFACE("DCD39924-0591-49BE-AACB-4B82EE756A95")
                ICastingDevicePicker : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Filter(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Casting::ICastingDevicePickerFilter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appearance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDevicePickerAppearance * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CastingDeviceSelected(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CastingDeviceSelected(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CastingDevicePickerDismissed(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CastingDevicePickerDismissed(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE Show(
                        /* [in] */ABI::Windows::Foundation::Rect selection
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowWithPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Hide(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingDevicePicker=_uuidof(ICastingDevicePicker);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevicePickerFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePickerFilter[] = L"Windows.Media.Casting.ICastingDevicePickerFilter";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("BE8C619C-B563-4354-AE33-9FDAAD8C6291"), exclusiveto, contract] */
                MIDL_INTERFACE("BE8C619C-B563-4354-AE33-9FDAAD8C6291")
                ICastingDevicePickerFilter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportsAudio(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SupportsAudio(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportsVideo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SupportsVideo(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportsPictures(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SupportsPictures(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedCastingSources(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCasting__CCastingSource * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingDevicePickerFilter=_uuidof(ICastingDevicePickerFilter);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDeviceSelectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.ICastingDeviceSelectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("DC439E86-DD57-4D0D-9400-AF45E4FB3663"), exclusiveto, contract] */
                MIDL_INTERFACE("DC439E86-DD57-4D0D-9400-AF45E4FB3663")
                ICastingDeviceSelectedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedCastingDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Casting::ICastingDevice * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingDeviceSelectedEventArgs=_uuidof(ICastingDeviceSelectedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceStatics[] = L"Windows.Media.Casting.ICastingDeviceStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("E7D958D7-4D13-4237-A365-4C4F6A4CFD2F"), exclusiveto, contract] */
                MIDL_INTERFACE("E7D958D7-4D13-4237-A365-4C4F6A4CFD2F")
                ICastingDeviceStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [in] */ABI::Windows::Media::Casting::CastingPlaybackTypes type,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelectorFromCastingSourceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Casting::ICastingSource * castingSource,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeviceInfoSupportsCastingAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * device,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingDeviceStatics=_uuidof(ICastingDeviceStatics);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingSource[] = L"Windows.Media.Casting.ICastingSource";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Casting {
                /* [object, uuid("F429EA72-3467-47E6-A027-522923E9D727"), exclusiveto, contract] */
                MIDL_INTERFACE("F429EA72-3467-47E6-A027-522923E9D727")
                ICastingSource : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredSourceUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PreferredSourceUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICastingSource=_uuidof(ICastingSource);
                
            } /* Windows */
        } /* Media */
    } /* Casting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingConnection ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingConnection_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnection[] = L"Windows.Media.Casting.CastingConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Casting.ICastingDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevice_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevice[] = L"Windows.Media.Casting.CastingDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevicePicker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevicePicker_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevicePicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePicker[] = L"Windows.Media.Casting.CastingDevicePicker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevicePickerFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevicePickerFilter_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevicePickerFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePickerFilter[] = L"Windows.Media.Casting.CastingDevicePickerFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDeviceSelectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDeviceSelectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDeviceSelectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.CastingDeviceSelectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingSource[] = L"Windows.Media.Casting.CastingSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnection __x_ABI_CWindows_CMedia_CCasting_CICastingConnection;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevice __x_ABI_CWindows_CMedia_CCasting_CICastingDevice;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingSource __x_ABI_CWindows_CMedia_CCasting_CICastingSource;

#endif // ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CCasting__CCastingSource __FIIterator_1_Windows__CMedia__CCasting__CCastingSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCasting__CCastingSource;

typedef struct __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl;

interface __FIIterator_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CCasting__CCastingSource_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CCasting__CCastingSource __FIIterable_1_Windows__CMedia__CCasting__CCastingSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCasting__CCastingSource;

typedef  struct __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCasting__CCastingSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCasting__CCastingSource **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl;

interface __FIIterable_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CCasting__CCastingSource_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCasting__CCastingSource;

typedef struct __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl;

interface __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CCasting__CCastingSource __FIVector_1_Windows__CMedia__CCasting__CCastingSource;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCasting__CCastingSource;

typedef struct __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCasting__CCastingSource **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCasting__CCastingSource * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCasting_CICastingSource * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl;

interface __FIVector_1_Windows__CMedia__CCasting__CCastingSource
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCasting__CCastingSourceVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CCasting__CCastingSource_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CCasting__CCastingSource_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingDevice **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCasting__CCastingPlaybackTypes **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;





typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus;


typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState;


typedef enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes;
























/*
 *
 * Struct Windows.Media.Casting.CastingConnectionErrorStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus
{
    CastingConnectionErrorStatus_Succeeded = 0,
    CastingConnectionErrorStatus_DeviceDidNotRespond = 1,
    CastingConnectionErrorStatus_DeviceError = 2,
    CastingConnectionErrorStatus_DeviceLocked = 3,
    CastingConnectionErrorStatus_ProtectedPlaybackFailed = 4,
    CastingConnectionErrorStatus_InvalidCastingSource = 5,
    CastingConnectionErrorStatus_Unknown = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Casting.CastingConnectionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState
{
    CastingConnectionState_Disconnected = 0,
    CastingConnectionState_Connected = 1,
    CastingConnectionState_Rendering = 2,
    CastingConnectionState_Disconnecting = 3,
    CastingConnectionState_Connecting = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Casting.CastingPlaybackTypes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes
{
    CastingPlaybackTypes_None = 0,
    CastingPlaybackTypes_Audio = 0x1,
    CastingPlaybackTypes_Video = 0x2,
    CastingPlaybackTypes_Picture = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingConnection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnection[] = L"Windows.Media.Casting.ICastingConnection";
/* [object, uuid("CD951653-C2F1-4498-8B78-5FB4CD3640DD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Device )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingConnection_Windows__CMedia__CCasting__CCastingConnectionErrorOccurredEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ErrorOccurred )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *RequestStartCastingAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * value,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingConnectionErrorStatus * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_get_Device(This,value) \
    ( (This)->lpVtbl->get_Device(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_add_StateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_remove_StateChanged(This,token) \
    ( (This)->lpVtbl->remove_StateChanged(This,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_add_ErrorOccurred(This,handler,token) \
    ( (This)->lpVtbl->add_ErrorOccurred(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_remove_ErrorOccurred(This,token) \
    ( (This)->lpVtbl->remove_ErrorOccurred(This,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_RequestStartCastingAsync(This,value,operation) \
    ( (This)->lpVtbl->RequestStartCastingAsync(This,value,operation) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnection_DisconnectAsync(This,operation) \
    ( (This)->lpVtbl->DisconnectAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnection;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs";
/* [object, uuid("A7FB3C69-8719-4F00-81FB-961863C79A32"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ErrorStatus )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CCasting_CCastingConnectionErrorStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_get_ErrorStatus(This,value) \
    ( (This)->lpVtbl->get_ErrorStatus(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingConnectionErrorOccurredEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevice[] = L"Windows.Media.Casting.ICastingDevice";
/* [object, uuid("DE721C83-4A43-4AD1-A6D2-2492A796C3F2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Icon )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedCastingPlaybackTypesAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingPlaybackTypes * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCastingConnection )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevice
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_get_Icon(This,value) \
    ( (This)->lpVtbl->get_Icon(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_GetSupportedCastingPlaybackTypesAsync(This,operation) \
    ( (This)->lpVtbl->GetSupportedCastingPlaybackTypesAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevice_CreateCastingConnection(This,value) \
    ( (This)->lpVtbl->CreateCastingConnection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevice;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevice_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevicePicker
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePicker[] = L"Windows.Media.Casting.ICastingDevicePicker";
/* [object, uuid("DCD39924-0591-49BE-AACB-4B82EE756A95"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Filter )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appearance )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDevicePickerAppearance * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CastingDeviceSelected )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_Windows__CMedia__CCasting__CCastingDeviceSelectedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CastingDeviceSelected )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CastingDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCasting__CCastingDevicePicker_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CastingDevicePickerDismissed )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */EventRegistrationToken token
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *Show )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowWithPlacement )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement
        );
    HRESULT ( STDMETHODCALLTYPE *Hide )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_get_Filter(This,value) \
    ( (This)->lpVtbl->get_Filter(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_get_Appearance(This,value) \
    ( (This)->lpVtbl->get_Appearance(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_add_CastingDeviceSelected(This,handler,token) \
    ( (This)->lpVtbl->add_CastingDeviceSelected(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_remove_CastingDeviceSelected(This,token) \
    ( (This)->lpVtbl->remove_CastingDeviceSelected(This,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_add_CastingDevicePickerDismissed(This,handler,token) \
    ( (This)->lpVtbl->add_CastingDevicePickerDismissed(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_remove_CastingDevicePickerDismissed(This,token) \
    ( (This)->lpVtbl->remove_CastingDevicePickerDismissed(This,token) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_Show(This,selection) \
    ( (This)->lpVtbl->Show(This,selection) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_ShowWithPlacement(This,selection,preferredPlacement) \
    ( (This)->lpVtbl->ShowWithPlacement(This,selection,preferredPlacement) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_Hide(This) \
    ( (This)->lpVtbl->Hide(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePicker_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevicePickerFilter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDevicePickerFilter[] = L"Windows.Media.Casting.ICastingDevicePickerFilter";
/* [object, uuid("BE8C619C-B563-4354-AE33-9FDAAD8C6291"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SupportsAudio )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SupportsVideo )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportsPictures )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SupportsPictures )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedCastingSources )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCasting__CCastingSource * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_get_SupportsAudio(This,value) \
    ( (This)->lpVtbl->get_SupportsAudio(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_put_SupportsAudio(This,value) \
    ( (This)->lpVtbl->put_SupportsAudio(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_get_SupportsVideo(This,value) \
    ( (This)->lpVtbl->get_SupportsVideo(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_put_SupportsVideo(This,value) \
    ( (This)->lpVtbl->put_SupportsVideo(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_get_SupportsPictures(This,value) \
    ( (This)->lpVtbl->get_SupportsPictures(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_put_SupportsPictures(This,value) \
    ( (This)->lpVtbl->put_SupportsPictures(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_get_SupportedCastingSources(This,value) \
    ( (This)->lpVtbl->get_SupportedCastingSources(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDevicePickerFilter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDeviceSelectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.ICastingDeviceSelectedEventArgs";
/* [object, uuid("DC439E86-DD57-4D0D-9400-AF45E4FB3663"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedCastingDevice )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingDevice * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_get_SelectedCastingDevice(This,value) \
    ( (This)->lpVtbl->get_SelectedCastingDevice(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceSelectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingDeviceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingDevice
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingDeviceStatics[] = L"Windows.Media.Casting.ICastingDeviceStatics";
/* [object, uuid("E7D958D7-4D13-4237-A365-4C4F6A4CFD2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
        /* [in] */__x_ABI_CWindows_CMedia_CCasting_CCastingPlaybackTypes type,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelectorFromCastingSourceAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * castingSource,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCasting__CCastingDevice * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeviceInfoSupportsCastingAsync )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * device,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_GetDeviceSelector(This,type,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,type,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_GetDeviceSelectorFromCastingSourceAsync(This,castingSource,operation) \
    ( (This)->lpVtbl->GetDeviceSelectorFromCastingSourceAsync(This,castingSource,operation) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_FromIdAsync(This,value,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,value,operation) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_DeviceInfoSupportsCastingAsync(This,device,operation) \
    ( (This)->lpVtbl->DeviceInfoSupportsCastingAsync(This,device,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingDeviceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Casting.ICastingSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Casting.CastingSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Casting_ICastingSource[] = L"Windows.Media.Casting.ICastingSource";
/* [object, uuid("F429EA72-3467-47E6-A027-522923E9D727"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PreferredSourceUri )(
        __x_ABI_CWindows_CMedia_CCasting_CICastingSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl;

interface __x_ABI_CWindows_CMedia_CCasting_CICastingSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCasting_CICastingSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_get_PreferredSourceUri(This,value) \
    ( (This)->lpVtbl->get_PreferredSourceUri(This,value) )

#define __x_ABI_CWindows_CMedia_CCasting_CICastingSource_put_PreferredSourceUri(This,value) \
    ( (This)->lpVtbl->put_PreferredSourceUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCasting_CICastingSource;
#endif /* !defined(____x_ABI_CWindows_CMedia_CCasting_CICastingSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingConnection ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingConnection_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnection[] = L"Windows.Media.Casting.CastingConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingConnectionErrorOccurredEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingConnectionErrorOccurredEventArgs[] = L"Windows.Media.Casting.CastingConnectionErrorOccurredEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevice
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Casting.ICastingDeviceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevice ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevice_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevice_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevice[] = L"Windows.Media.Casting.CastingDevice";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevicePicker
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevicePicker ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevicePicker_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevicePicker_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePicker[] = L"Windows.Media.Casting.CastingDevicePicker";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDevicePickerFilter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDevicePickerFilter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDevicePickerFilter_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDevicePickerFilter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDevicePickerFilter[] = L"Windows.Media.Casting.CastingDevicePickerFilter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingDeviceSelectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingDeviceSelectedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingDeviceSelectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingDeviceSelectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingDeviceSelectedEventArgs[] = L"Windows.Media.Casting.CastingDeviceSelectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Casting.CastingSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Casting.ICastingSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Casting_CastingSource_DEFINED
#define RUNTIMECLASS_Windows_Media_Casting_CastingSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Casting_CastingSource[] = L"Windows.Media.Casting.CastingSource";
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
#endif // __windows2Emedia2Ecasting_p_h__

#endif // __windows2Emedia2Ecasting_h__
