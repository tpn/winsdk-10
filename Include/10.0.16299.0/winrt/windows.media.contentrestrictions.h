/* Header file automatically generated from windows.media.contentrestrictions.idl */
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
#ifndef __windows2Emedia2Econtentrestrictions_h__
#define __windows2Emedia2Econtentrestrictions_h__
#ifndef __windows2Emedia2Econtentrestrictions_p_h__
#define __windows2Emedia2Econtentrestrictions_p_h__


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
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                interface IContentRestrictionsBrowsePolicy;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                interface IRatedContentDescription;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription ABI::Windows::Media::ContentRestrictions::IRatedContentDescription

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                interface IRatedContentDescriptionFactory;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory ABI::Windows::Media::ContentRestrictions::IRatedContentDescriptionFactory

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                interface IRatedContentRestrictions;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions ABI::Windows::Media::ContentRestrictions::IRatedContentRestrictions

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                interface IRatedContentRestrictionsFactory;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory ABI::Windows::Media::ContentRestrictions::IRatedContentRestrictionsFactory

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                enum ContentAccessRestrictionLevel : int;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf61be5d-40c3-5484-846a-3f82b8ba5738"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("860c0179-be01-546d-a9ce-5956464c98ab"))
IAsyncOperation<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> : IAsyncOperation_impl<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel> __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t;
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
//#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::ContentRestrictions::ContentAccessRestrictionLevel>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                class ContentRestrictionsBrowsePolicy;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("72ae1a16-c705-54e7-b1c4-fc05a0e07a77"))
IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*, ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ae3399b2-c7d5-5f1b-9fb9-f8bd81e9f9be"))
IAsyncOperation<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*, ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Media::ContentRestrictions::ContentRestrictionsBrowsePolicy*> __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t;
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>
//#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIReference_1_UINT32_USE
#define DEF___FIReference_1_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("513ef3af-e784-5325-a91e-97c2b8111cf3"))
IReference<UINT32> : IReference_impl<UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT32> __FIReference_1_UINT32_t;
#define __FIReference_1_UINT32 ABI::Windows::Foundation::__FIReference_1_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT32 ABI::Windows::Foundation::IReference<UINT32>
//#define __FIReference_1_UINT32_t ABI::Windows::Foundation::IReference<UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT32_USE */




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




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */




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





#ifndef DEF___FIEventHandler_1_IInspectable_USE
#define DEF___FIEventHandler_1_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c50898f6-c536-5f47-8583-8b2c2438a13b"))
IEventHandler<IInspectable*> : IEventHandler_impl<IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.EventHandler`1<Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IEventHandler<IInspectable*> __FIEventHandler_1_IInspectable_t;
#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::__FIEventHandler_1_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIEventHandler_1_IInspectable ABI::Windows::Foundation::IEventHandler<IInspectable*>
//#define __FIEventHandler_1_IInspectable_t ABI::Windows::Foundation::IEventHandler<IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIEventHandler_1_IInspectable_USE */








#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStreamReference;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference ABI::Windows::Storage::Streams::IRandomAccessStreamReference

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                
                typedef enum ContentAccessRestrictionLevel : int ContentAccessRestrictionLevel;
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                
                typedef enum RatedContentCategory : int RatedContentCategory;
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                class RatedContentDescription;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                class RatedContentRestrictions;
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */










/*
 *
 * Struct Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [v1_enum, contract] */
                enum ContentAccessRestrictionLevel : int
                {
                    ContentAccessRestrictionLevel_Allow = 0,
                    ContentAccessRestrictionLevel_Warn = 1,
                    ContentAccessRestrictionLevel_Block = 2,
                    ContentAccessRestrictionLevel_Hide = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.ContentRestrictions.RatedContentCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [v1_enum, contract] */
                enum RatedContentCategory : int
                {
                    RatedContentCategory_General = 0,
                    RatedContentCategory_Application = 1,
                    RatedContentCategory_Game = 2,
                    RatedContentCategory_Movie = 3,
                    RatedContentCategory_Television = 4,
                    RatedContentCategory_Music = 5,
                };
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [object, uuid("8C0133A4-442E-461A-8757-FAD2F5BD37E4"), exclusiveto, contract] */
                MIDL_INTERFACE("8C0133A4-442E-461A-8757-FAD2F5BD37E4")
                IContentRestrictionsBrowsePolicy : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxBrowsableAgeRating(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreferredAgeRating(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IContentRestrictionsBrowsePolicy=_uuidof(IContentRestrictionsBrowsePolicy);
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescription[] = L"Windows.Media.ContentRestrictions.IRatedContentDescription";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [object, uuid("694866DF-66B2-4DC3-96B1-F090EEDEE255"), exclusiveto, contract] */
                MIDL_INTERFACE("694866DF-66B2-4DC3-96B1-F090EEDEE255")
                IRatedContentDescription : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Image(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Image(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStreamReference * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Category(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::ContentRestrictions::RatedContentCategory * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Category(
                        /* [in] */ABI::Windows::Media::ContentRestrictions::RatedContentCategory value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ratings(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Ratings(
                        /* [in] */__RPC__in_opt __FIVector_1_HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRatedContentDescription=_uuidof(IRatedContentDescription);
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [object, uuid("2E38DF62-9B90-4FA6-89C1-4B8D2FFB3573"), exclusiveto, contract] */
                MIDL_INTERFACE("2E38DF62-9B90-4FA6-89C1-4B8D2FFB3573")
                IRatedContentDescriptionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING id,
                        /* [in] */__RPC__in HSTRING title,
                        /* [in] */ABI::Windows::Media::ContentRestrictions::RatedContentCategory category,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::ContentRestrictions::IRatedContentDescription * * RatedContentDescription
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRatedContentDescriptionFactory=_uuidof(IRatedContentDescriptionFactory);
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictions";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [object, uuid("3F7F23CB-BA07-4401-A49D-8B9222205723"), exclusiveto, contract] */
                MIDL_INTERFACE("3F7F23CB-BA07-4401-A49D-8B9222205723")
                IRatedContentRestrictions : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetBrowsePolicyAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRestrictionLevelAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::ContentRestrictions::IRatedContentDescription * RatedContentDescription,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestContentAccessAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::ContentRestrictions::IRatedContentDescription * RatedContentDescription,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RestrictionsChanged(
                        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RestrictionsChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRatedContentRestrictions=_uuidof(IRatedContentRestrictions);
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace ContentRestrictions {
                /* [object, uuid("FB4B2996-C3BD-4910-9619-97CFD0694D56"), exclusiveto, contract] */
                MIDL_INTERFACE("FB4B2996-C3BD-4910-9619-97CFD0694D56")
                IRatedContentRestrictionsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithMaxAgeRating(
                        /* [in] */UINT32 maxAgeRating,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::ContentRestrictions::IRatedContentRestrictions * * ratedContentRestrictions
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRatedContentRestrictionsFactory=_uuidof(IRatedContentRestrictionsFactory);
                
            } /* Windows */
        } /* Media */
    } /* ContentRestrictions */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.RatedContentDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IRatedContentDescription ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentDescription_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentDescription[] = L"Windows.Media.ContentRestrictions.RatedContentDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IRatedContentRestrictions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentRestrictions_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentRestrictions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.RatedContentRestrictions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy;

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription;

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory;

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions;

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory;

#endif // ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevelVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIReference_1_UINT32_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT32_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT32;

typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;

interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT32_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT32_INTERFACE_DEFINED__


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


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


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



#if !defined(____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__)
#define ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__

typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;

typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This,/* [in] */ __RPC__in_opt IInspectable *sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;

interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIEventHandler_1_IInspectable_QueryInterface(This,riid,ppvObject)	\
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIEventHandler_1_IInspectable_AddRef(This)	\
        ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIEventHandler_1_IInspectable_Release(This)	\
        ( (This)->lpVtbl -> Release(This) ) 

#define __FIEventHandler_1_IInspectable_Invoke(This,sender,e)	\
        ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FIEventHandler_1_IInspectable_INTERFACE_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel;


typedef enum __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory;

















/*
 *
 * Struct Windows.Media.ContentRestrictions.ContentAccessRestrictionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CContentAccessRestrictionLevel
{
    ContentAccessRestrictionLevel_Allow = 0,
    ContentAccessRestrictionLevel_Warn = 1,
    ContentAccessRestrictionLevel_Block = 2,
    ContentAccessRestrictionLevel_Hide = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.ContentRestrictions.RatedContentCategory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory
{
    RatedContentCategory_General = 0,
    RatedContentCategory_Application = 1,
    RatedContentCategory_Game = 2,
    RatedContentCategory_Movie = 3,
    RatedContentCategory_Television = 4,
    RatedContentCategory_Music = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy";
/* [object, uuid("8C0133A4-442E-461A-8757-FAD2F5BD37E4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxBrowsableAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreferredAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl;

interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_get_GeographicRegion(This,value) \
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_get_MaxBrowsableAgeRating(This,value) \
    ( (This)->lpVtbl->get_MaxBrowsableAgeRating(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_get_PreferredAgeRating(This,value) \
    ( (This)->lpVtbl->get_PreferredAgeRating(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIContentRestrictionsBrowsePolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescription[] = L"Windows.Media.ContentRestrictions.IRatedContentDescription";
/* [object, uuid("694866DF-66B2-4DC3-96B1-F090EEDEE255"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Category )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [in] */__x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ratings )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Ratings )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * This,
        /* [in] */__RPC__in_opt __FIVector_1_HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl;

interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_get_Image(This,value) \
    ( (This)->lpVtbl->get_Image(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_put_Image(This,value) \
    ( (This)->lpVtbl->put_Image(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_get_Category(This,value) \
    ( (This)->lpVtbl->get_Category(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_put_Category(This,value) \
    ( (This)->lpVtbl->put_Category(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_get_Ratings(This,value) \
    ( (This)->lpVtbl->get_Ratings(This,value) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_put_Ratings(This,value) \
    ( (This)->lpVtbl->put_Ratings(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentDescription
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentDescriptionFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory";
/* [object, uuid("2E38DF62-9B90-4FA6-89C1-4B8D2FFB3573"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in HSTRING title,
        /* [in] */__x_ABI_CWindows_CMedia_CContentRestrictions_CRatedContentCategory category,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * * RatedContentDescription
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_Create(This,id,title,category,RatedContentDescription) \
    ( (This)->lpVtbl->Create(This,id,title,category,RatedContentDescription) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescriptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictions";
/* [object, uuid("3F7F23CB-BA07-4401-A49D-8B9222205723"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetBrowsePolicyAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentRestrictionsBrowsePolicy * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetRestrictionLevelAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * RatedContentDescription,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CContentRestrictions__CContentAccessRestrictionLevel * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestContentAccessAsync )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentDescription * RatedContentDescription,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RestrictionsChanged )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
        /* [in] */__RPC__in_opt __FIEventHandler_1_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RestrictionsChanged )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl;

interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_GetBrowsePolicyAsync(This,operation) \
    ( (This)->lpVtbl->GetBrowsePolicyAsync(This,operation) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_GetRestrictionLevelAsync(This,RatedContentDescription,operation) \
    ( (This)->lpVtbl->GetRestrictionLevelAsync(This,RatedContentDescription,operation) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_RequestContentAccessAsync(This,RatedContentDescription,operation) \
    ( (This)->lpVtbl->RequestContentAccessAsync(This,RatedContentDescription,operation) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_add_RestrictionsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_RestrictionsChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_remove_RestrictionsChanged(This,token) \
    ( (This)->lpVtbl->remove_RestrictionsChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ContentRestrictions_IRatedContentRestrictionsFactory[] = L"Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory";
/* [object, uuid("FB4B2996-C3BD-4910-9619-97CFD0694D56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithMaxAgeRating )(
        __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory * This,
        /* [in] */UINT32 maxAgeRating,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictions * * ratedContentRestrictions
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_CreateWithMaxAgeRating(This,maxAgeRating,ratedContentRestrictions) \
    ( (This)->lpVtbl->CreateWithMaxAgeRating(This,maxAgeRating,ratedContentRestrictions) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CContentRestrictions_CIRatedContentRestrictionsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IContentRestrictionsBrowsePolicy ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_ContentRestrictionsBrowsePolicy[] = L"Windows.Media.ContentRestrictions.ContentRestrictionsBrowsePolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.RatedContentDescription
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.ContentRestrictions.IRatedContentDescriptionFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IRatedContentDescription ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentDescription_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentDescription_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentDescription[] = L"Windows.Media.ContentRestrictions.RatedContentDescription";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.ContentRestrictions.RatedContentRestrictions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.ContentRestrictions.IRatedContentRestrictionsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.ContentRestrictions.IRatedContentRestrictions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentRestrictions_DEFINED
#define RUNTIMECLASS_Windows_Media_ContentRestrictions_RatedContentRestrictions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ContentRestrictions_RatedContentRestrictions[] = L"Windows.Media.ContentRestrictions.RatedContentRestrictions";
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
#endif // __windows2Emedia2Econtentrestrictions_p_h__

#endif // __windows2Emedia2Econtentrestrictions_h__
