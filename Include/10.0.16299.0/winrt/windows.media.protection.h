/* Header file automatically generated from windows.media.protection.idl */
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
#ifndef __windows2Emedia2Eprotection_h__
#define __windows2Emedia2Eprotection_h__
#ifndef __windows2Emedia2Eprotection_p_h__
#define __windows2Emedia2Eprotection_p_h__


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
#include "Windows.Media.Playback.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IComponentLoadFailedEventHandler;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler ABI::Windows::Media::Protection::IComponentLoadFailedEventHandler

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IRebootNeededEventHandler;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler ABI::Windows::Media::Protection::IRebootNeededEventHandler

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IServiceRequestedEventHandler;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler ABI::Windows::Media::Protection::IServiceRequestedEventHandler

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IComponentLoadFailedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs ABI::Windows::Media::Protection::IComponentLoadFailedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IComponentRenewalStatics;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics ABI::Windows::Media::Protection::IComponentRenewalStatics

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IHdcpSession;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession ABI::Windows::Media::Protection::IHdcpSession

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionManager;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager ABI::Windows::Media::Protection::IMediaProtectionManager

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionPMPServer;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer ABI::Windows::Media::Protection::IMediaProtectionPMPServer

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionPMPServerFactory;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory ABI::Windows::Media::Protection::IMediaProtectionPMPServerFactory

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionServiceCompletion;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion ABI::Windows::Media::Protection::IMediaProtectionServiceCompletion

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IMediaProtectionServiceRequest;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest ABI::Windows::Media::Protection::IMediaProtectionServiceRequest

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IProtectionCapabilities;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities ABI::Windows::Media::Protection::IProtectionCapabilities

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IRevocationAndRenewalInformation;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation ABI::Windows::Media::Protection::IRevocationAndRenewalInformation

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IRevocationAndRenewalItem;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem ABI::Windows::Media::Protection::IRevocationAndRenewalItem

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IServiceRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs ABI::Windows::Media::Protection::IServiceRequestedEventArgs

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                interface IServiceRequestedEventArgs2;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 ABI::Windows::Media::Protection::IServiceRequestedEventArgs2

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class RevocationAndRenewalItem;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#define DEF___FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("dfb9655c-8b22-511f-8eaf-3aea7521802b"))
IIterator<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::RevocationAndRenewalItem*, ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Media.Protection.RevocationAndRenewalItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t;
#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
//#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#define DEF___FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("07015868-578c-556b-8a35-4039a35d1d92"))
IIterable<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::RevocationAndRenewalItem*, ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Media.Protection.RevocationAndRenewalItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t;
#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
//#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#define DEF___FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4a8793e2-33b8-5850-9943-6a94375caa89"))
IVectorView<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::RevocationAndRenewalItem*, ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Media.Protection.RevocationAndRenewalItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t;
#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
//#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#define DEF___FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3623cc0c-c765-57fb-967d-c7cb6097bd78"))
IVector<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::RevocationAndRenewalItem*, ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Media.Protection.RevocationAndRenewalItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Media::Protection::RevocationAndRenewalItem*> __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t;
#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
//#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Media::Protection::IRevocationAndRenewalItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                enum RenewalStatus : int;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


#ifndef DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b9da4aa0-26e0-5d69-a0c8-05716a406235"))
IAsyncOperationProgressHandler<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> : IAsyncOperationProgressHandler_impl<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Media.Protection.RenewalStatus, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
//#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE */





#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ec067827-67d9-59a6-a57b-3e7ca12b89c1"))
IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Media.Protection.RenewalStatus, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE */





#ifndef DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("595dcc09-9ad3-5094-800a-0883cce1ef01"))
IAsyncOperationWithProgress<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> : IAsyncOperationWithProgress_impl<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Media.Protection.RenewalStatus, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<enum ABI::Windows::Media::Protection::RenewalStatus,UINT32> __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t;
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
//#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Media::Protection::RenewalStatus,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                enum HdcpSetProtectionResult : int;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("19344a58-a5c1-5168-803e-632771628143"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.Protection.HdcpSetProtectionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::HdcpSetProtectionResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Media::Protection::HdcpSetProtectionResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE
#define DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5061ee0f-899a-569c-a0a3-c2566eb88142"))
IAsyncOperation<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> : IAsyncOperation_impl<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Media.Protection.HdcpSetProtectionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Media::Protection::HdcpSetProtectionResult> __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t;
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::HdcpSetProtectionResult>
//#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Media::Protection::HdcpSetProtectionResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                enum HdcpProtection : int;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_USE
#define DEF___FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8e330979-2fef-5d68-88aa-a9ee6697d117"))
IReference<enum ABI::Windows::Media::Protection::HdcpProtection> : IReference_impl<enum ABI::Windows::Media::Protection::HdcpProtection> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Media.Protection.HdcpProtection>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::Media::Protection::HdcpProtection> __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_t;
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection ABI::Windows::Foundation::__FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection ABI::Windows::Foundation::IReference<ABI::Windows::Media::Protection::HdcpProtection>
//#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_t ABI::Windows::Foundation::IReference<ABI::Windows::Media::Protection::HdcpProtection>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_USE */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class HdcpSession;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f82ae043-54fb-5366-a607-19b68e6bab8c"))
ITypedEventHandler<ABI::Windows::Media::Protection::HdcpSession*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::Protection::HdcpSession*, ABI::Windows::Media::Protection::IHdcpSession*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.Protection.HdcpSession, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::Protection::HdcpSession*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::IHdcpSession*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::Protection::IHdcpSession*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





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
        namespace Media {
            namespace Playback {
                class MediaPlaybackItem;
            } /* Windows */
        } /* Media */
    } /* Playback */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Playback {
                interface IMediaPlaybackItem;
            } /* Windows */
        } /* Media */
    } /* Playback */} /* ABI */
#define __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem ABI::Windows::Media::Playback::IMediaPlaybackItem

#endif // ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum GraphicsTrustStatus : int GraphicsTrustStatus;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum HdcpProtection : int HdcpProtection;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum HdcpSetProtectionResult : int HdcpSetProtectionResult;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum ProtectionCapabilityResult : int ProtectionCapabilityResult;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum RenewalStatus : int RenewalStatus;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                
                typedef enum RevocationAndRenewalReasons : unsigned int RevocationAndRenewalReasons;
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

















namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class ComponentLoadFailedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class MediaProtectionManager;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class MediaProtectionPMPServer;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class MediaProtectionServiceCompletion;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class ProtectionCapabilities;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class RevocationAndRenewalInformation;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                class ServiceRequestedEventArgs;
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */











/*
 *
 * Struct Windows.Media.Protection.GraphicsTrustStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, contract] */
                enum GraphicsTrustStatus : int
                {
                    GraphicsTrustStatus_TrustNotRequired = 0,
                    GraphicsTrustStatus_TrustEstablished = 1,
                    GraphicsTrustStatus_EnvironmentNotSupported = 2,
                    GraphicsTrustStatus_DriverNotSupported = 3,
                    GraphicsTrustStatus_DriverSigningFailure = 4,
                    GraphicsTrustStatus_UnknownFailure = 5,
                };
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.HdcpProtection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, contract] */
                enum HdcpProtection : int
                {
                    HdcpProtection_Off = 0,
                    HdcpProtection_On = 1,
                    HdcpProtection_OnWithTypeEnforcement = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Protection.HdcpSetProtectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, contract] */
                enum HdcpSetProtectionResult : int
                {
                    HdcpSetProtectionResult_Success = 0,
                    HdcpSetProtectionResult_TimedOut = 1,
                    HdcpSetProtectionResult_NotSupported = 2,
                    HdcpSetProtectionResult_UnknownFailure = 3,
                };
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Protection.ProtectionCapabilityResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, contract] */
                enum ProtectionCapabilityResult : int
                {
                    ProtectionCapabilityResult_NotSupported = 0,
                    ProtectionCapabilityResult_Maybe = 1,
                    ProtectionCapabilityResult_Probably = 2,
                };
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Media.Protection.RenewalStatus
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, contract] */
                enum RenewalStatus : int
                {
                    RenewalStatus_NotStarted = 0,
                    RenewalStatus_UpdatesInProgress = 1,
                    RenewalStatus_UserCancelled = 2,
                    RenewalStatus_AppComponentsMayNeedUpdating = 3,
                    RenewalStatus_NoComponentsFound = 4,
                };
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.RevocationAndRenewalReasons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [v1_enum, flags, contract] */
                enum RevocationAndRenewalReasons : unsigned int
                {
                    RevocationAndRenewalReasons_UserModeComponentLoad = 0x1,
                    RevocationAndRenewalReasons_KernelModeComponentLoad = 0x2,
                    RevocationAndRenewalReasons_AppComponent = 0x4,
                    RevocationAndRenewalReasons_GlobalRevocationListLoadFailed = 0x10,
                    RevocationAndRenewalReasons_InvalidGlobalRevocationListSignature = 0x20,
                    RevocationAndRenewalReasons_GlobalRevocationListAbsent = 0x1000,
                    RevocationAndRenewalReasons_ComponentRevoked = 0x2000,
                    RevocationAndRenewalReasons_InvalidComponentCertificateExtendedKeyUse = 0x4000,
                    RevocationAndRenewalReasons_ComponentCertificateRevoked = 0x8000,
                    RevocationAndRenewalReasons_InvalidComponentCertificateRoot = 0x10000,
                    RevocationAndRenewalReasons_ComponentHighSecurityCertificateRevoked = 0x20000,
                    RevocationAndRenewalReasons_ComponentLowSecurityCertificateRevoked = 0x40000,
                    RevocationAndRenewalReasons_BootDriverVerificationFailed = 0x100000,
                    RevocationAndRenewalReasons_ComponentSignedWithTestCertificate = 0x1000000,
                    RevocationAndRenewalReasons_EncryptionFailure = 0x10000000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(RevocationAndRenewalReasons)
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.ComponentLoadFailedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("95DA643C-6DB9-424B-86CA-091AF432081C"), contract] */
                MIDL_INTERFACE("95DA643C-6DB9-424B-86CA-091AF432081C")
                IComponentLoadFailedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IMediaProtectionManager * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IComponentLoadFailedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentLoadFailedEventHandler=_uuidof(IComponentLoadFailedEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.RebootNeededEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("64E12A45-973B-4A3A-B260-91898A49A82C"), contract] */
                MIDL_INTERFACE("64E12A45-973B-4A3A-B260-91898A49A82C")
                IRebootNeededEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IMediaProtectionManager * sender
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRebootNeededEventHandler=_uuidof(IRebootNeededEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.ServiceRequestedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("D2D690BA-CAC9-48E1-95C0-D38495A84055"), contract] */
                MIDL_INTERFACE("D2D690BA-CAC9-48E1-95C0-D38495A84055")
                IServiceRequestedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IMediaProtectionManager * sender,
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IServiceRequestedEventArgs * e
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IServiceRequestedEventHandler=_uuidof(IServiceRequestedEventHandler);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IComponentLoadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ComponentLoadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.IComponentLoadFailedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("95972E93-7746-417E-8495-F031BBC5862C"), exclusiveto, contract] */
                MIDL_INTERFACE("95972E93-7746-417E-8495-F031BBC5862C")
                IComponentLoadFailedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Information(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::IRevocationAndRenewalInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Completion(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::IMediaProtectionServiceCompletion * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentLoadFailedEventArgs=_uuidof(IComponentLoadFailedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IComponentRenewalStatics
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ComponentRenewal
 *
 *
 */
#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentRenewalStatics[] = L"Windows.Media.Protection.IComponentRenewalStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("6FFBCD67-B795-48C5-8B7B-A7C4EFE202E3"), exclusiveto, contract] */
                MIDL_INTERFACE("6FFBCD67-B795-48C5-8B7B-A7C4EFE202E3")
                IComponentRenewalStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RenewSystemComponentsAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IRevocationAndRenewalInformation * information,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IComponentRenewalStatics=_uuidof(IComponentRenewalStatics);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IHdcpSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.HdcpSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IHdcpSession[] = L"Windows.Media.Protection.IHdcpSession";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("718845E9-64D7-426D-809B-1BE461941A2A"), exclusiveto, contract] */
                MIDL_INTERFACE("718845E9-64D7-426D-809B-1BE461941A2A")
                IHdcpSession : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsEffectiveProtectionAtLeast(
                        /* [in] */ABI::Windows::Media::Protection::HdcpProtection protection,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetEffectiveProtection(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDesiredMinProtectionAsync(
                        /* [in] */ABI::Windows::Media::Protection::HdcpProtection protection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProtectionChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProtectionChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHdcpSession=_uuidof(IHdcpSession);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIHdcpSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionManager[] = L"Windows.Media.Protection.IMediaProtectionManager";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("45694947-C741-434B-A79E-474C12D93D2F"), exclusiveto, contract] */
                MIDL_INTERFACE("45694947-C741-434B-A79E-474C12D93D2F")
                IMediaProtectionManager : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServiceRequested(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IServiceRequestedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServiceRequested(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_RebootNeeded(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IRebootNeededEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_RebootNeeded(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ComponentLoadFailed(
                        /* [in] */__RPC__in_opt ABI::Windows::Media::Protection::IComponentLoadFailedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ComponentLoadFailed(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaProtectionManager=_uuidof(IMediaProtectionManager);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionPMPServer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionPMPServer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServer[] = L"Windows.Media.Protection.IMediaProtectionPMPServer";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("0C111226-7B26-4D31-95BB-9C1B08EF7FC0"), exclusiveto, contract] */
                MIDL_INTERFACE("0C111226-7B26-4D31-95BB-9C1B08EF7FC0")
                IMediaProtectionPMPServer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * ppProperties
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaProtectionPMPServer=_uuidof(IMediaProtectionPMPServer);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionPMPServerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionPMPServer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServerFactory[] = L"Windows.Media.Protection.IMediaProtectionPMPServerFactory";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("602C8E5E-F7D2-487E-AF91-DBC4252B2182"), exclusiveto, contract] */
                MIDL_INTERFACE("602C8E5E-F7D2-487E-AF91-DBC4252B2182")
                IMediaProtectionPMPServerFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreatePMPServer(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::Collections::IPropertySet * pProperties,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::IMediaProtectionPMPServer * * ppObject
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaProtectionPMPServerFactory=_uuidof(IMediaProtectionPMPServerFactory);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionServiceCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionServiceCompletion
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceCompletion[] = L"Windows.Media.Protection.IMediaProtectionServiceCompletion";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("8B5CCA18-CFD5-44EE-A2ED-DF76010C14B5"), exclusiveto, contract] */
                MIDL_INTERFACE("8B5CCA18-CFD5-44EE-A2ED-DF76010C14B5")
                IMediaProtectionServiceCompletion : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Complete(
                        /* [in] */boolean success
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaProtectionServiceCompletion=_uuidof(IMediaProtectionServiceCompletion);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceRequest[] = L"Windows.Media.Protection.IMediaProtectionServiceRequest";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("B1DE0EA6-2094-478D-87A4-8B95200F85C6"), contract] */
                MIDL_INTERFACE("B1DE0EA6-2094-478D-87A4-8B95200F85C6")
                IMediaProtectionServiceRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectionSystem(
                        /* [retval, out] */__RPC__out GUID * system
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out GUID * type
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMediaProtectionServiceRequest=_uuidof(IMediaProtectionServiceRequest);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IProtectionCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ProtectionCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IProtectionCapabilities[] = L"Windows.Media.Protection.IProtectionCapabilities";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("C7AC5D7E-7480-4D29-A464-7BCD913DD8E4"), exclusiveto, contract] */
                MIDL_INTERFACE("C7AC5D7E-7480-4D29-A464-7BCD913DD8E4")
                IProtectionCapabilities : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsTypeSupported(
                        /* [in] */__RPC__in HSTRING type,
                        /* [in] */__RPC__in HSTRING keySystem,
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::ProtectionCapabilityResult * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProtectionCapabilities=_uuidof(IProtectionCapabilities);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Protection.IRevocationAndRenewalInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.RevocationAndRenewalInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalInformation[] = L"Windows.Media.Protection.IRevocationAndRenewalInformation";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("F3A1937B-2501-439E-A6E7-6FC95E175FCF"), exclusiveto, contract] */
                MIDL_INTERFACE("F3A1937B-2501-439E-A6E7-6FC95E175FCF")
                IRevocationAndRenewalInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Items(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * * items
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevocationAndRenewalInformation=_uuidof(IRevocationAndRenewalInformation);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IRevocationAndRenewalItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.RevocationAndRenewalItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalItem[] = L"Windows.Media.Protection.IRevocationAndRenewalItem";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("3099C20C-3CF0-49EA-902D-CAF32D2DDE2C"), exclusiveto, contract] */
                MIDL_INTERFACE("3099C20C-3CF0-49EA-902D-CAF32D2DDE2C")
                IRevocationAndRenewalItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reasons(
                        /* [retval, out] */__RPC__out ABI::Windows::Media::Protection::RevocationAndRenewalReasons * reasons
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HeaderHash(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublicKeyHash(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * name
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RenewalId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IRevocationAndRenewalItem=_uuidof(IRevocationAndRenewalItem);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IServiceRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ServiceRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs[] = L"Windows.Media.Protection.IServiceRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("34283BAF-ABB4-4FC1-BD89-93F106573A49"), exclusiveto, contract] */
                MIDL_INTERFACE("34283BAF-ABB4-4FC1-BD89-93F106573A49")
                IServiceRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::IMediaProtectionServiceRequest * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Completion(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Protection::IMediaProtectionServiceCompletion * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IServiceRequestedEventArgs=_uuidof(IServiceRequestedEventArgs);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IServiceRequestedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ServiceRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs2[] = L"Windows.Media.Protection.IServiceRequestedEventArgs2";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace Protection {
                /* [object, uuid("553C69D6-FAFE-4128-8DFA-130E398A13A7"), exclusiveto, contract] */
                MIDL_INTERFACE("553C69D6-FAFE-4128-8DFA-130E398A13A7")
                IServiceRequestedEventArgs2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediaPlaybackItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::Playback::IMediaPlaybackItem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IServiceRequestedEventArgs2=_uuidof(IServiceRequestedEventArgs2);
                
            } /* Windows */
        } /* Media */
    } /* Protection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ComponentLoadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IComponentLoadFailedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ComponentLoadFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ComponentLoadFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.ComponentLoadFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ComponentRenewal
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.IComponentRenewalStatics interface starting with version 1.0 of the Windows.Media.Protection.ProtectionRenewalContract API contract
 *
 */
#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_ComponentRenewal_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ComponentRenewal_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentRenewal[] = L"Windows.Media.Protection.ComponentRenewal";
#endif
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.HdcpSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IHdcpSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Protection_HdcpSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_HdcpSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_HdcpSession[] = L"Windows.Media.Protection.HdcpSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionManager ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionManager[] = L"Windows.Media.Protection.MediaProtectionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionPMPServer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.IMediaProtectionPMPServerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionPMPServer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionPMPServer_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionPMPServer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionPMPServer[] = L"Windows.Media.Protection.MediaProtectionPMPServer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionServiceCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionServiceCompletion ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionServiceCompletion_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionServiceCompletion_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionServiceCompletion[] = L"Windows.Media.Protection.MediaProtectionServiceCompletion";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ProtectionCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IProtectionCapabilities ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ProtectionCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ProtectionCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ProtectionCapabilities[] = L"Windows.Media.Protection.ProtectionCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Media.Protection.RevocationAndRenewalInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IRevocationAndRenewalInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalInformation_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalInformation[] = L"Windows.Media.Protection.RevocationAndRenewalInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.RevocationAndRenewalItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IRevocationAndRenewalItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalItem_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalItem[] = L"Windows.Media.Protection.RevocationAndRenewalItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ServiceRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IServiceRequestedEventArgs ** Default Interface **
 *    Windows.Media.Protection.IServiceRequestedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ServiceRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ServiceRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ServiceRequestedEventArgs[] = L"Windows.Media.Protection.ServiceRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2;

#endif // ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

typedef struct __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;

interface __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

typedef  struct __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;

interface __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

typedef struct __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [in] */ __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;

interface __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem;

typedef struct __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This, /* [in] */ __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * *value);

    END_INTERFACE
} __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl;

interface __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus;
#if !defined(____FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult;

typedef struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl;

interface __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection;
#if !defined(____FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CProtection__CHdcpProtection;

typedef struct __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl;

interface __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CProtection__CHdcpProtectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CMedia__CProtection__CHdcpProtection_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem;

#endif // ____x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus;


typedef enum __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons;




































/*
 *
 * Struct Windows.Media.Protection.GraphicsTrustStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CGraphicsTrustStatus
{
    GraphicsTrustStatus_TrustNotRequired = 0,
    GraphicsTrustStatus_TrustEstablished = 1,
    GraphicsTrustStatus_EnvironmentNotSupported = 2,
    GraphicsTrustStatus_DriverNotSupported = 3,
    GraphicsTrustStatus_DriverSigningFailure = 4,
    GraphicsTrustStatus_UnknownFailure = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.HdcpProtection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpProtection
{
    HdcpProtection_Off = 0,
    HdcpProtection_On = 1,
    HdcpProtection_OnWithTypeEnforcement = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Protection.HdcpSetProtectionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CHdcpSetProtectionResult
{
    HdcpSetProtectionResult_Success = 0,
    HdcpSetProtectionResult_TimedOut = 1,
    HdcpSetProtectionResult_NotSupported = 2,
    HdcpSetProtectionResult_UnknownFailure = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Media.Protection.ProtectionCapabilityResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult
{
    ProtectionCapabilityResult_NotSupported = 0,
    ProtectionCapabilityResult_Maybe = 1,
    ProtectionCapabilityResult_Probably = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Struct Windows.Media.Protection.RenewalStatus
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 */

#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CRenewalStatus
{
    RenewalStatus_NotStarted = 0,
    RenewalStatus_UpdatesInProgress = 1,
    RenewalStatus_UserCancelled = 2,
    RenewalStatus_AppComponentsMayNeedUpdating = 3,
    RenewalStatus_NoComponentsFound = 4,
};
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Media.Protection.RevocationAndRenewalReasons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons
{
    RevocationAndRenewalReasons_UserModeComponentLoad = 0x1,
    RevocationAndRenewalReasons_KernelModeComponentLoad = 0x2,
    RevocationAndRenewalReasons_AppComponent = 0x4,
    RevocationAndRenewalReasons_GlobalRevocationListLoadFailed = 0x10,
    RevocationAndRenewalReasons_InvalidGlobalRevocationListSignature = 0x20,
    RevocationAndRenewalReasons_GlobalRevocationListAbsent = 0x1000,
    RevocationAndRenewalReasons_ComponentRevoked = 0x2000,
    RevocationAndRenewalReasons_InvalidComponentCertificateExtendedKeyUse = 0x4000,
    RevocationAndRenewalReasons_ComponentCertificateRevoked = 0x8000,
    RevocationAndRenewalReasons_InvalidComponentCertificateRoot = 0x10000,
    RevocationAndRenewalReasons_ComponentHighSecurityCertificateRevoked = 0x20000,
    RevocationAndRenewalReasons_ComponentLowSecurityCertificateRevoked = 0x40000,
    RevocationAndRenewalReasons_BootDriverVerificationFailed = 0x100000,
    RevocationAndRenewalReasons_ComponentSignedWithTestCertificate = 0x1000000,
    RevocationAndRenewalReasons_EncryptionFailure = 0x10000000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.ComponentLoadFailedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("95DA643C-6DB9-424B-86CA-091AF432081C"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.RebootNeededEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__
/* [object, uuid("64E12A45-973B-4A3A-B260-91898A49A82C"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Media.Protection.ServiceRequestedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("D2D690BA-CAC9-48E1-95C0-D38495A84055"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IComponentLoadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ComponentLoadFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.IComponentLoadFailedEventArgs";
/* [object, uuid("95972E93-7746-417E-8495-F031BBC5862C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_get_Information(This,value) \
    ( (This)->lpVtbl->get_Information(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_get_Completion(This,value) \
    ( (This)->lpVtbl->get_Completion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IComponentRenewalStatics
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ComponentRenewal
 *
 *
 */
#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IComponentRenewalStatics[] = L"Windows.Media.Protection.IComponentRenewalStatics";
/* [object, uuid("6FFBCD67-B795-48C5-8B7B-A7C4EFE202E3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RenewSystemComponentsAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * information,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CProtection__CRenewalStatus_UINT32 * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_RenewSystemComponentsAsync(This,information,operation) \
    ( (This)->lpVtbl->RenewSystemComponentsAsync(This,information,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIComponentRenewalStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IHdcpSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.HdcpSession
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IHdcpSession[] = L"Windows.Media.Protection.IHdcpSession";
/* [object, uuid("718845E9-64D7-426D-809B-1BE461941A2A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsEffectiveProtectionAtLeast )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CHdcpProtection protection,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEffectiveProtection )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CMedia__CProtection__CHdcpProtection * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredMinProtectionAsync )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
        /* [in] */__x_ABI_CWindows_CMedia_CProtection_CHdcpProtection protection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CProtection__CHdcpSetProtectionResult * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProtectionChanged )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CProtection__CHdcpSession_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProtectionChanged )(
        __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIHdcpSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_IsEffectiveProtectionAtLeast(This,protection,value) \
    ( (This)->lpVtbl->IsEffectiveProtectionAtLeast(This,protection,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_GetEffectiveProtection(This,value) \
    ( (This)->lpVtbl->GetEffectiveProtection(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_SetDesiredMinProtectionAsync(This,protection,value) \
    ( (This)->lpVtbl->SetDesiredMinProtectionAsync(This,protection,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_add_ProtectionChanged(This,handler,token) \
    ( (This)->lpVtbl->add_ProtectionChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_remove_ProtectionChanged(This,token) \
    ( (This)->lpVtbl->remove_ProtectionChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIHdcpSession;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIHdcpSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionManager[] = L"Windows.Media.Protection.IMediaProtectionManager";
/* [object, uuid("45694947-C741-434B-A79E-474C12D93D2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServiceRequested )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServiceRequested )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_RebootNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIRebootNeededEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_RebootNeeded )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ComponentLoadFailed )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIComponentLoadFailedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ComponentLoadFailed )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_add_ServiceRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_ServiceRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_remove_ServiceRequested(This,cookie) \
    ( (This)->lpVtbl->remove_ServiceRequested(This,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_add_RebootNeeded(This,handler,cookie) \
    ( (This)->lpVtbl->add_RebootNeeded(This,handler,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_remove_RebootNeeded(This,cookie) \
    ( (This)->lpVtbl->remove_RebootNeeded(This,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_add_ComponentLoadFailed(This,handler,cookie) \
    ( (This)->lpVtbl->add_ComponentLoadFailed(This,handler,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_remove_ComponentLoadFailed(This,cookie) \
    ( (This)->lpVtbl->remove_ComponentLoadFailed(This,cookie) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionPMPServer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionPMPServer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServer[] = L"Windows.Media.Protection.IMediaProtectionPMPServer";
/* [object, uuid("0C111226-7B26-4D31-95BB-9C1B08EF7FC0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * ppProperties
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_get_Properties(This,ppProperties) \
    ( (This)->lpVtbl->get_Properties(This,ppProperties) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionPMPServerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionPMPServer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionPMPServerFactory[] = L"Windows.Media.Protection.IMediaProtectionPMPServerFactory";
/* [object, uuid("602C8E5E-F7D2-487E-AF91-DBC4252B2182"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePMPServer )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * pProperties,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServer * * ppObject
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_CreatePMPServer(This,pProperties,ppObject) \
    ( (This)->lpVtbl->CreatePMPServer(This,pProperties,ppObject) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionPMPServerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionServiceCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.MediaProtectionServiceCompletion
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceCompletion[] = L"Windows.Media.Protection.IMediaProtectionServiceCompletion";
/* [object, uuid("8B5CCA18-CFD5-44EE-A2ED-DF76010C14B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * This,
        /* [in] */boolean success
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_Complete(This,success) \
    ( (This)->lpVtbl->Complete(This,success) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IMediaProtectionServiceRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IMediaProtectionServiceRequest[] = L"Windows.Media.Protection.IMediaProtectionServiceRequest";
/* [object, uuid("B1DE0EA6-2094-478D-87A4-8B95200F85C6"), contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectionSystem )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * system
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * This,
        /* [retval, out] */__RPC__out GUID * type
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_get_ProtectionSystem(This,system) \
    ( (This)->lpVtbl->get_ProtectionSystem(This,system) )

#define __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_get_Type(This,type) \
    ( (This)->lpVtbl->get_Type(This,type) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IProtectionCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ProtectionCapabilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IProtectionCapabilities[] = L"Windows.Media.Protection.IProtectionCapabilities";
/* [object, uuid("C7AC5D7E-7480-4D29-A464-7BCD913DD8E4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsTypeSupported )(
        __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities * This,
        /* [in] */__RPC__in HSTRING type,
        /* [in] */__RPC__in HSTRING keySystem,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CProtectionCapabilityResult * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_IsTypeSupported(This,type,keySystem,value) \
    ( (This)->lpVtbl->IsTypeSupported(This,type,keySystem,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIProtectionCapabilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Media.Protection.IRevocationAndRenewalInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.RevocationAndRenewalInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalInformation[] = L"Windows.Media.Protection.IRevocationAndRenewalInformation";
/* [object, uuid("F3A1937B-2501-439E-A6E7-6FC95E175FCF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CMedia__CProtection__CRevocationAndRenewalItem * * items
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_get_Items(This,items) \
    ( (This)->lpVtbl->get_Items(This,items) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IRevocationAndRenewalItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.RevocationAndRenewalItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IRevocationAndRenewalItem[] = L"Windows.Media.Protection.IRevocationAndRenewalItem";
/* [object, uuid("3099C20C-3CF0-49EA-902D-CAF32D2DDE2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reasons )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CMedia_CProtection_CRevocationAndRenewalReasons * reasons
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HeaderHash )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublicKeyHash )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * name
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RenewalId )(
        __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_get_Reasons(This,reasons) \
    ( (This)->lpVtbl->get_Reasons(This,reasons) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_get_HeaderHash(This,value) \
    ( (This)->lpVtbl->get_HeaderHash(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_get_PublicKeyHash(This,value) \
    ( (This)->lpVtbl->get_PublicKeyHash(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_get_Name(This,name) \
    ( (This)->lpVtbl->get_Name(This,name) )

#define __x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_get_RenewalId(This,value) \
    ( (This)->lpVtbl->get_RenewalId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIRevocationAndRenewalItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IServiceRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ServiceRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs[] = L"Windows.Media.Protection.IServiceRequestedEventArgs";
/* [object, uuid("34283BAF-ABB4-4FC1-BD89-93F106573A49"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceRequest * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Completion )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionServiceCompletion * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_get_Completion(This,value) \
    ( (This)->lpVtbl->get_Completion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.Protection.IServiceRequestedEventArgs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.Protection.ServiceRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Protection_IServiceRequestedEventArgs2[] = L"Windows.Media.Protection.IServiceRequestedEventArgs2";
/* [object, uuid("553C69D6-FAFE-4128-8DFA-130E398A13A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediaPlaybackItem )(
        __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl;

interface __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_get_MediaPlaybackItem(This,value) \
    ( (This)->lpVtbl->get_MediaPlaybackItem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2;
#endif /* !defined(____x_ABI_CWindows_CMedia_CProtection_CIServiceRequestedEventArgs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ComponentLoadFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IComponentLoadFailedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ComponentLoadFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ComponentLoadFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentLoadFailedEventArgs[] = L"Windows.Media.Protection.ComponentLoadFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ComponentRenewal
 *
 * Introduced to Windows.Media.Protection.ProtectionRenewalContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.Protection.IComponentRenewalStatics interface starting with version 1.0 of the Windows.Media.Protection.ProtectionRenewalContract API contract
 *
 */
#if WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Media_Protection_ComponentRenewal_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ComponentRenewal_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ComponentRenewal[] = L"Windows.Media.Protection.ComponentRenewal";
#endif
#endif // WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.HdcpSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IHdcpSession ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Media_Protection_HdcpSession_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_HdcpSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_HdcpSession[] = L"Windows.Media.Protection.HdcpSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionManager ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionManager_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionManager[] = L"Windows.Media.Protection.MediaProtectionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionPMPServer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Media.Protection.IMediaProtectionPMPServerFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionPMPServer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionPMPServer_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionPMPServer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionPMPServer[] = L"Windows.Media.Protection.MediaProtectionPMPServer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.MediaProtectionServiceCompletion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IMediaProtectionServiceCompletion ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_MediaProtectionServiceCompletion_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_MediaProtectionServiceCompletion_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_MediaProtectionServiceCompletion[] = L"Windows.Media.Protection.MediaProtectionServiceCompletion";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ProtectionCapabilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IProtectionCapabilities ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ProtectionCapabilities_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ProtectionCapabilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ProtectionCapabilities[] = L"Windows.Media.Protection.ProtectionCapabilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Media.Protection.RevocationAndRenewalInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IRevocationAndRenewalInformation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalInformation_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalInformation[] = L"Windows.Media.Protection.RevocationAndRenewalInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.RevocationAndRenewalItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IRevocationAndRenewalItem ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalItem_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_RevocationAndRenewalItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_RevocationAndRenewalItem[] = L"Windows.Media.Protection.RevocationAndRenewalItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.Protection.ServiceRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.Protection.IServiceRequestedEventArgs ** Default Interface **
 *    Windows.Media.Protection.IServiceRequestedEventArgs2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_Protection_ServiceRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Media_Protection_ServiceRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Protection_ServiceRequestedEventArgs[] = L"Windows.Media.Protection.ServiceRequestedEventArgs";
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
#endif // __windows2Emedia2Eprotection_p_h__

#endif // __windows2Emedia2Eprotection_h__
