/* Header file automatically generated from windows.applicationmodel.socialinfo.idl */
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
#ifndef __windows2Eapplicationmodel2Esocialinfo_h__
#define __windows2Eapplicationmodel2Esocialinfo_h__
#ifndef __windows2Eapplicationmodel2Esocialinfo_p_h__
#define __windows2Eapplicationmodel2Esocialinfo_p_h__


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

#if !defined(WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION)

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
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedChildItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedContent;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialFeedSharedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialItemThumbnail;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                interface ISocialUserInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo ABI::Windows::ApplicationModel::SocialInfo::ISocialUserInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e7c8cd1f-3907-5da8-9d72-90426dc37072"))
IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ad33d864-9569-5e2d-bd72-182a8ff50cf6"))
IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialItemThumbnail;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fabcf39f-fd48-5550-8f47-a0f1573e1f53"))
IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*, ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.SocialInfo.SocialItemThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t;
#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
//#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5d102c6d-92c3-59f3-b1dc-5986c56445a5"))
IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*, ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.SocialInfo.SocialItemThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t;
#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
//#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e6be2bb8-fc75-585c-836c-34f3ff87680f"))
IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9a3e6d46-e880-5deb-9006-92fe5c43ace1"))
IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*, ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.SocialInfo.SocialItemThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t;
#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
//#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("36cd5297-36c3-56a7-9656-ec9d5bde7aba"))
IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*, ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.SocialInfo.SocialFeedItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItem*> __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t;
#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c210bbd7-2f56-5076-bb0e-b7497726cf95"))
IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*, ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.SocialInfo.SocialItemThumbnail>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::SocialInfo::SocialItemThumbnail*> __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t;
#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
//#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_USE */


#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


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




namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef struct BitmapSize BitmapSize;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialFeedItemStyle : int SocialFeedItemStyle;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialFeedKind : int SocialFeedKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialFeedUpdateMode : int SocialFeedUpdateMode;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                
                typedef enum SocialItemBadgeStyle : int SocialItemBadgeStyle;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedChildItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedContent;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialFeedSharedItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                class SocialUserInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */











/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedItemStyle
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("SocialFeedItemStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                SocialFeedItemStyle : int
                {
                    SocialFeedItemStyle_Default = 0,
                    SocialFeedItemStyle_Photo = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedKind
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("SocialFeedKind is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                SocialFeedKind : int
                {
                    SocialFeedKind_HomeFeed = 0,
                    SocialFeedKind_ContactFeed = 1,
                    SocialFeedKind_Dashboard = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedUpdateMode
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("SocialFeedUpdateMode is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                SocialFeedUpdateMode : int
                {
                    SocialFeedUpdateMode_Append = 0,
                    SocialFeedUpdateMode_Replace = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialItemBadgeStyle
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [v1_enum, deprecated, contract] */
                enum 
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("SocialItemBadgeStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                SocialItemBadgeStyle : int
                {
                    SocialItemBadgeStyle_Hidden = 0,
                    SocialItemBadgeStyle_Visible = 1,
                    SocialItemBadgeStyle_VisibleWithCount = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedChildItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("0B6A985A-D59D-40BE-980C-488A2AB30A83"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("0B6A985A-D59D-40BE-980C-488A2AB30A83")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialFeedChildItem : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Author(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialUserInfo * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SecondaryContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Timestamp(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnails(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SharedItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_SharedItem(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialFeedChildItem=_uuidof(ISocialFeedChildItem);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedContent
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedContent
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedContent";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("A234E429-3E39-494D-A37C-F462A2494514"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("A234E429-3E39-494D-A37C-F462A2494514")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialFeedContent : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Message(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialFeedContent=_uuidof(ISocialFeedContent);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("4F1392AB-1F72-4D33-B695-DE3E1DB60317"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("4F1392AB-1F72-4D33-B695-DE3E1DB60317")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialFeedItem : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Author(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialUserInfo * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_PrimaryContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SecondaryContent(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Timestamp(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnails(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_SharedItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_SharedItem(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedSharedItem * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BadgeStyle(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_BadgeStyle(
                        /* [in] */ABI::Windows::ApplicationModel::SocialInfo::SocialItemBadgeStyle value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BadgeCountValue(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_BadgeCountValue(
                        /* [in] */INT32 value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_RemoteId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_RemoteId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ChildItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_ChildItem(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedChildItem * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Style(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Style(
                        /* [in] */ABI::Windows::ApplicationModel::SocialInfo::SocialFeedItemStyle value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialFeedItem=_uuidof(ISocialFeedItem);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("7BFB9E40-A6AA-45A7-9FF6-54C42105DD1F"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("7BFB9E40-A6AA-45A7-9FF6-54C42105DD1F")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialFeedSharedItem : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_OriginalSource(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_OriginalSource(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialFeedContent * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Timestamp(
                        /* [in] */ABI::Windows::Foundation::DateTime value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Thumbnail(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Thumbnail(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::SocialInfo::ISocialItemThumbnail * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialFeedSharedItem=_uuidof(ISocialFeedSharedItem);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialItemThumbnail
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("5CBF831A-3F08-497F-917F-57E09D84B141"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("5CBF831A-3F08-497F-917F-57E09D84B141")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialItemThumbnail : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_ImageUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_ImageUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_BitmapSize(
                        /* [retval, out] */__RPC__out ABI::Windows::Graphics::Imaging::BitmapSize * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_BitmapSize(
                        /* [in] */ABI::Windows::Graphics::Imaging::BitmapSize value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SetImageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * image,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialItemThumbnail=_uuidof(ISocialItemThumbnail);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialUserInfo
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialUserInfo
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.ISocialUserInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace SocialInfo {
                /* [object, uuid("9E5E1BD1-90D0-4E1D-9554-844D46607F61"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("9E5E1BD1-90D0-4E1D-9554-844D46607F61")
                
                #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                ISocialUserInfo : IInspectable
                {
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_UserName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_UserName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_RemoteId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_RemoteId(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_TargetUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISocialUserInfo=_uuidof(ISocialUserInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* SocialInfo */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedChildItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedContent
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedContent ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedContent_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedContent_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedContent";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialItemThumbnail
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialUserInfo
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialUserInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialUserInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialUserInfo_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.SocialUserInfo";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

typedef struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem;

typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl;

interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialFeedItem_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail;

typedef struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl;

interface __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnailVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle;


typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode;


typedef enum __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle;






















/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedItemStyle
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedItemStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle
{
    SocialFeedItemStyle_Default = 0,
    SocialFeedItemStyle_Photo = 1,
};
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedKind
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedKind is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedKind
{
    SocialFeedKind_HomeFeed = 0,
    SocialFeedKind_ContactFeed = 1,
    SocialFeedKind_Dashboard = 2,
};
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialFeedUpdateMode
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedUpdateMode is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedUpdateMode
{
    SocialFeedUpdateMode_Append = 0,
    SocialFeedUpdateMode_Replace = 1,
};
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.SocialInfo.SocialItemBadgeStyle
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 */

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
/* [v1_enum, deprecated, contract] */
enum 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialItemBadgeStyle is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle
{
    SocialItemBadgeStyle_Hidden = 0,
    SocialItemBadgeStyle_Visible = 1,
    SocialItemBadgeStyle_VisibleWithCount = 2,
};
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedChildItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem";
/* [object, uuid("0B6A985A-D59D-40BE-980C-488A2AB30A83"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SecondaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnails )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_Author(This,value) \
    ( (This)->lpVtbl->get_Author(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_PrimaryContent(This,value) \
    ( (This)->lpVtbl->get_PrimaryContent(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_SecondaryContent(This,value) \
    ( (This)->lpVtbl->get_SecondaryContent(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_put_Timestamp(This,value) \
    ( (This)->lpVtbl->put_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_Thumbnails(This,value) \
    ( (This)->lpVtbl->get_Thumbnails(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_get_SharedItem(This,value) \
    ( (This)->lpVtbl->get_SharedItem(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_put_SharedItem(This,value) \
    ( (This)->lpVtbl->put_SharedItem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedContent
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedContent
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedContent";
/* [object, uuid("A234E429-3E39-494D-A37C-F462A2494514"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_put_Message(This,value) \
    ( (This)->lpVtbl->put_Message(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedItem";
/* [object, uuid("4F1392AB-1F72-4D33-B695-DE3E1DB60317"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_PrimaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SecondaryContent )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnails )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CSocialInfo__CSocialItemThumbnail * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_SharedItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BadgeStyle )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_BadgeStyle )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialItemBadgeStyle value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_BadgeCountValue )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */INT32 value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ChildItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_ChildItem )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedChildItem * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CSocialInfo_CSocialFeedItemStyle value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_Author(This,value) \
    ( (This)->lpVtbl->get_Author(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_PrimaryContent(This,value) \
    ( (This)->lpVtbl->get_PrimaryContent(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_SecondaryContent(This,value) \
    ( (This)->lpVtbl->get_SecondaryContent(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_Timestamp(This,value) \
    ( (This)->lpVtbl->put_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_Thumbnails(This,value) \
    ( (This)->lpVtbl->get_Thumbnails(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_SharedItem(This,value) \
    ( (This)->lpVtbl->get_SharedItem(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_SharedItem(This,value) \
    ( (This)->lpVtbl->put_SharedItem(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_BadgeStyle(This,value) \
    ( (This)->lpVtbl->get_BadgeStyle(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_BadgeStyle(This,value) \
    ( (This)->lpVtbl->put_BadgeStyle(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_BadgeCountValue(This,value) \
    ( (This)->lpVtbl->get_BadgeCountValue(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_BadgeCountValue(This,value) \
    ( (This)->lpVtbl->put_BadgeCountValue(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_RemoteId(This,value) \
    ( (This)->lpVtbl->get_RemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_RemoteId(This,value) \
    ( (This)->lpVtbl->put_RemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_ChildItem(This,value) \
    ( (This)->lpVtbl->get_ChildItem(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_ChildItem(This,value) \
    ( (This)->lpVtbl->put_ChildItem(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_get_Style(This,value) \
    ( (This)->lpVtbl->get_Style(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_put_Style(This,value) \
    ( (This)->lpVtbl->put_Style(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem";
/* [object, uuid("7BFB9E40-A6AA-45A7-9FF6-54C42105DD1F"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_OriginalSource )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_OriginalSource )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedContent * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Timestamp )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_get_OriginalSource(This,value) \
    ( (This)->lpVtbl->get_OriginalSource(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_put_OriginalSource(This,value) \
    ( (This)->lpVtbl->put_OriginalSource(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_put_Timestamp(This,value) \
    ( (This)->lpVtbl->put_Timestamp(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_put_Thumbnail(This,value) \
    ( (This)->lpVtbl->put_Thumbnail(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_get_Thumbnail(This,value) \
    ( (This)->lpVtbl->get_Thumbnail(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialFeedSharedItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialItemThumbnail
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail";
/* [object, uuid("5CBF831A-3F08-497F-917F-57E09D84B141"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_BitmapSize )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_BitmapSize )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapSize value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SetImageAsync )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * image,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnailVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_get_ImageUri(This,value) \
    ( (This)->lpVtbl->get_ImageUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_put_ImageUri(This,value) \
    ( (This)->lpVtbl->put_ImageUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_get_BitmapSize(This,value) \
    ( (This)->lpVtbl->get_BitmapSize(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_put_BitmapSize(This,value) \
    ( (This)->lpVtbl->put_BitmapSize(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_SetImageAsync(This,image,operation) \
    ( (This)->lpVtbl->SetImageAsync(This,image,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialItemThumbnail_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.SocialInfo.ISocialUserInfo
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.SocialInfo.SocialUserInfo
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_SocialInfo_ISocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.ISocialUserInfo";
/* [object, uuid("9E5E1BD1-90D0-4E1D-9554-844D46607F61"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
__x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_UserName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_UserName )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_RemoteId )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    
    #if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_TargetUri )(
        __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_get_UserName(This,value) \
    ( (This)->lpVtbl->get_UserName(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_put_UserName(This,value) \
    ( (This)->lpVtbl->put_UserName(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_get_RemoteId(This,value) \
    ( (This)->lpVtbl->get_RemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_put_RemoteId(This,value) \
    ( (This)->lpVtbl->put_RemoteId(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_get_TargetUri(This,value) \
    ( (This)->lpVtbl->get_TargetUri(This,value) )


#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("ISocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
#define __x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_put_TargetUri(This,value) \
    ( (This)->lpVtbl->put_TargetUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CSocialInfo_CISocialUserInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedChildItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedChildItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedChildItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedChildItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedChildItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedContent
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedContent ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedContent_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedContent_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedContent is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedContent[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedContent";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialFeedSharedItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialFeedSharedItem is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialFeedSharedItem[] = L"Windows.ApplicationModel.SocialInfo.SocialFeedSharedItem";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialItemThumbnail
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.ApplicationModel.SocialInfo.SocialInfoContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialItemThumbnail ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialItemThumbnail is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialItemThumbnail[] = L"Windows.ApplicationModel.SocialInfo.SocialItemThumbnail";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.SocialInfo.SocialUserInfo
 *
 * Introduced to Windows.ApplicationModel.SocialInfo.SocialInfoContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.SocialInfo.ISocialUserInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialUserInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_SocialInfo_SocialUserInfo_DEFINED

#if WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
DEPRECATED("SocialUserInfo is deprecated and might not work on all platforms. For more info, see MSDN.")
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x20000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_SocialInfo_SocialUserInfo[] = L"Windows.ApplicationModel.SocialInfo.SocialUserInfo";
#endif
#endif // WINDOWS_APPLICATIONMODEL_SOCIALINFO_SOCIALINFOCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Esocialinfo_p_h__

#endif // __windows2Eapplicationmodel2Esocialinfo_h__
