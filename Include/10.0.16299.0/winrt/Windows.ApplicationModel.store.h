/* Header file automatically generated from windows.applicationmodel.store.idl */
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
#ifndef __windows2Eapplicationmodel2Estore_h__
#define __windows2Eapplicationmodel2Estore_h__
#ifndef __windows2Eapplicationmodel2Estore_p_h__
#define __windows2Eapplicationmodel2Estore_p_h__


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
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ILicenseChangedEventHandler;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler ABI::Windows::ApplicationModel::Store::ILicenseChangedEventHandler

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentApp;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp ABI::Windows::ApplicationModel::Store::ICurrentApp

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentApp2Statics;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics ABI::Windows::ApplicationModel::Store::ICurrentApp2Statics

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppSimulator;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator ABI::Windows::ApplicationModel::Store::ICurrentAppSimulator

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppSimulatorStaticsWithFiltering;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering ABI::Windows::ApplicationModel::Store::ICurrentAppSimulatorStaticsWithFiltering

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppSimulatorWithCampaignId;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId ABI::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithCampaignId

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppSimulatorWithConsumables;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables ABI::Windows::ApplicationModel::Store::ICurrentAppSimulatorWithConsumables

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppStaticsWithFiltering;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering ABI::Windows::ApplicationModel::Store::ICurrentAppStaticsWithFiltering

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppWithCampaignId;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId ABI::Windows::ApplicationModel::Store::ICurrentAppWithCampaignId

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ICurrentAppWithConsumables;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables ABI::Windows::ApplicationModel::Store::ICurrentAppWithConsumables

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface ILicenseInformation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation ABI::Windows::ApplicationModel::Store::ILicenseInformation

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IListingInformation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation ABI::Windows::ApplicationModel::Store::IListingInformation

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IListingInformation2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 ABI::Windows::ApplicationModel::Store::IListingInformation2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductLicense;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense ABI::Windows::ApplicationModel::Store::IProductLicense

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductLicenseWithFulfillment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment ABI::Windows::ApplicationModel::Store::IProductLicenseWithFulfillment

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductListing;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing ABI::Windows::ApplicationModel::Store::IProductListing

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductListing2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 ABI::Windows::ApplicationModel::Store::IProductListing2

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductListingWithConsumables;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables ABI::Windows::ApplicationModel::Store::IProductListingWithConsumables

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductListingWithMetadata;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata ABI::Windows::ApplicationModel::Store::IProductListingWithMetadata

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductPurchaseDisplayProperties;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties ABI::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IProductPurchaseDisplayPropertiesFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory ABI::Windows::ApplicationModel::Store::IProductPurchaseDisplayPropertiesFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IPurchaseResults;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults ABI::Windows::ApplicationModel::Store::IPurchaseResults

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                interface IUnfulfilledConsumable;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class UnfulfilledConsumable;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb77cf2e-ef57-5256-9753-214baada2301"))
IIterator<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*, ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Store.UnfulfilledConsumable>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t;
#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
//#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f4d1483-dd86-5fdb-8c44-06c98844bf3d"))
IIterable<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*, ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Store.UnfulfilledConsumable>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t;
#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
//#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class ProductLicense;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ff71c38c-3e6e-5e60-994b-9201436deed1"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::ProductLicense*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ProductLicense*, ABI::Windows::ApplicationModel::Store::IProductLicense*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductLicense>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::ProductLicense*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3f3c06e6-593f-557a-8e3c-45513ac01f7c"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductLicense>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ffe05002-6e65-5001-a752-9b27ed3e2839"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductLicense>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class ProductListing;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("61a02c5d-4007-573e-8a01-0259714927df"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::ProductListing*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ProductListing*, ABI::Windows::ApplicationModel::Store::IProductListing*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductListing>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::ProductListing*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("142a6937-1ae1-5aad-8ada-9a8ee034e4eb"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductListing>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3a7d9a2f-2a82-59f8-bd7c-d691ca169863"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.Store.ProductListing>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d6434f65-dd84-534c-b579-cc10d69ec30a"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::ProductLicense*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ProductLicense*, ABI::Windows::ApplicationModel::Store::IProductLicense*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Store.ProductLicense>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::ProductLicense*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::IProductLicense*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3206de83-efbe-5791-a487-2ac974206ec6"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::ProductListing*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ProductListing*, ABI::Windows::ApplicationModel::Store::IProductListing*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.Store.ProductListing>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::ProductListing*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::Store::IProductListing*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f0ae5962-e039-5105-bcc5-9b552f13b102"))
IVectorView<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*, ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.UnfulfilledConsumable>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Store::UnfulfilledConsumable*> __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t;
#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
//#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                enum FulfillmentResult : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8775acc9-b9ae-5cce-895c-971bf9270892"))
IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.FulfillmentResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::FulfillmentResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::FulfillmentResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5c8531ac-5d8d-5e07-b6ee-7cab96930e8a"))
IAsyncOperation<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> : IAsyncOperation_impl<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.FulfillmentResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::ApplicationModel::Store::FulfillmentResult> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::FulfillmentResult>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::FulfillmentResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_USE */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class ListingInformation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fdf83922-762e-57dc-b721-c72ee568fd96"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::ListingInformation*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ListingInformation*, ABI::Windows::ApplicationModel::Store::IListingInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.ListingInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::ListingInformation*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::IListingInformation*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::IListingInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("161600f7-6d4f-500d-93a8-09ad6b5ac4ab"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::ListingInformation*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::ListingInformation*, ABI::Windows::ApplicationModel::Store::IListingInformation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.ListingInformation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::ListingInformation*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::IListingInformation*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::IListingInformation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class PurchaseResults;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("24b6922a-fdb1-5003-ae89-c8bf16ca0143"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::PurchaseResults*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::PurchaseResults*, ABI::Windows::ApplicationModel::Store::IPurchaseResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Store.PurchaseResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::PurchaseResults*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::IPurchaseResults*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Store::IPurchaseResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("241f6b10-6af6-5164-85eb-bae6bdae0be8"))
IAsyncOperation<ABI::Windows::ApplicationModel::Store::PurchaseResults*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Store::PurchaseResults*, ABI::Windows::ApplicationModel::Store::IPurchaseResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Store.PurchaseResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Store::PurchaseResults*> __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::IPurchaseResults*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Store::IPurchaseResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0451fe11-6b50-54c1-b765-d946b1d5c88b"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.UnfulfilledConsumable>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f1cd679a-3a8f-5e1b-82f1-f2fd0916ca3f"))
IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Store.UnfulfilledConsumable>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable*> __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Store::IUnfulfilledConsumable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_USE */


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
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */

#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                
                typedef enum FulfillmentResult : int FulfillmentResult;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                
                typedef enum ProductPurchaseStatus : int ProductPurchaseStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                
                typedef enum ProductType : int ProductType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */


























namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class LicenseInformation;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                class ProductPurchaseDisplayProperties;
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */












/*
 *
 * Struct Windows.ApplicationModel.Store.FulfillmentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [v1_enum, contract] */
                enum FulfillmentResult : int
                {
                    FulfillmentResult_Succeeded = 0,
                    FulfillmentResult_NothingToFulfill = 1,
                    FulfillmentResult_PurchasePending = 2,
                    FulfillmentResult_PurchaseReverted = 3,
                    FulfillmentResult_ServerError = 4,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.ProductPurchaseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [v1_enum, contract] */
                enum ProductPurchaseStatus : int
                {
                    ProductPurchaseStatus_Succeeded = 0,
                    ProductPurchaseStatus_AlreadyPurchased = 1,
                    ProductPurchaseStatus_NotFulfilled = 2,
                    ProductPurchaseStatus_NotPurchased = 3,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.ProductType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [v1_enum, contract] */
                enum ProductType : int
                {
                    ProductType_Unknown = 0,
                    ProductType_Durable = 1,
                    ProductType_Consumable = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.ApplicationModel.Store.LicenseChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("D4A50255-1369-4C36-832F-6F2D88E3659B"), contract] */
                MIDL_INTERFACE("D4A50255-1369-4C36-832F-6F2D88E3659B")
                ILicenseChangedEventHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILicenseChangedEventHandler=_uuidof(ILicenseChangedEventHandler);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentApp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp[] = L"Windows.ApplicationModel.Store.ICurrentApp";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("D52DC065-DA3F-4685-995E-9B482EB5E603"), exclusiveto, contract] */
                MIDL_INTERFACE("D52DC065-DA3F-4685-995E-9B482EB5E603")
                ICurrentApp : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::ILicenseInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LinkUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAppPurchaseAsync(
                        /* [in] */boolean includeReceipt,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */boolean includeReceipt,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppReceiptAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProductReceiptAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentApp=_uuidof(ICurrentApp);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentApp2Statics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp2Statics[] = L"Windows.ApplicationModel.Store.ICurrentApp2Statics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("DF4E6E2D-3171-4AD3-8614-2C61244373CB"), exclusiveto, contract] */
                MIDL_INTERFACE("DF4E6E2D-3171-4AD3-8614-2C61244373CB")
                ICurrentApp2Statics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetCustomerPurchaseIdAsync(
                        /* [in] */__RPC__in HSTRING serviceTicket,
                        /* [in] */__RPC__in HSTRING publisherUserId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCustomerCollectionsIdAsync(
                        /* [in] */__RPC__in HSTRING serviceTicket,
                        /* [in] */__RPC__in HSTRING publisherUserId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentApp2Statics=_uuidof(ICurrentApp2Statics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulator[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulator";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("F17F9DB1-74CD-4787-9787-19866E9A5559"), exclusiveto, contract] */
                MIDL_INTERFACE("F17F9DB1-74CD-4787-9787-19866E9A5559")
                ICurrentAppSimulator : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LicenseInformation(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::ILicenseInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LinkUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAppPurchaseAsync(
                        /* [in] */boolean includeReceipt,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [overload, deprecated] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */boolean includeReceipt,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetAppReceiptAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetProductReceiptAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReloadSimulatorAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * simulatorSettingsFile,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * reloadSimulatorOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppSimulator=_uuidof(ICurrentAppSimulator);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("617E70E2-F86F-4B54-9666-DDE285092C68"), exclusiveto, contract] */
                MIDL_INTERFACE("617E70E2-F86F-4B54-9666-DDE285092C68")
                ICurrentAppSimulatorStaticsWithFiltering : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationByProductIdsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * productIds,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationByKeywordsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keywords,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppSimulatorStaticsWithFiltering=_uuidof(ICurrentAppSimulatorStaticsWithFiltering);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("84678A43-DF00-4672-A43F-B25B1441CFCF"), exclusiveto, contract] */
                MIDL_INTERFACE("84678A43-DF00-4672-A43F-B25B1441CFCF")
                ICurrentAppSimulatorWithCampaignId : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAppPurchaseCampaignIdAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppSimulatorWithCampaignId=_uuidof(ICurrentAppSimulatorWithCampaignId);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("4E51F0AB-20E7-4412-9B85-59BB78388667"), exclusiveto, contract] */
                MIDL_INTERFACE("4E51F0AB-20E7-4412-9B85-59BB78388667")
                ICurrentAppSimulatorWithConsumables : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ReportConsumableFulfillmentAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */GUID transactionId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseWithResultsAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseWithDisplayPropertiesAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */__RPC__in HSTRING offerId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties * displayProperties,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetUnfulfilledConsumablesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppSimulatorWithConsumables=_uuidof(ICurrentAppSimulatorWithConsumables);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("D36D6542-9085-438E-97BA-A25C976BE2FD"), exclusiveto, contract] */
                MIDL_INTERFACE("D36D6542-9085-438E-97BA-A25C976BE2FD")
                ICurrentAppStaticsWithFiltering : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationByProductIdsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * productIds,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadListingInformationByKeywordsAsync(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keywords,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportProductFulfillment(
                        /* [in] */__RPC__in HSTRING productId
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppStaticsWithFiltering=_uuidof(ICurrentAppStaticsWithFiltering);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppWithCampaignId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppWithCampaignId";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("312F4CD0-36C1-44A6-B32B-432D608E4DD6"), exclusiveto, contract] */
                MIDL_INTERFACE("312F4CD0-36C1-44A6-B32B-432D608E4DD6")
                ICurrentAppWithCampaignId : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetAppPurchaseCampaignIdAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppWithCampaignId=_uuidof(ICurrentAppWithCampaignId);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppWithConsumables";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("844E0071-9E4F-4F79-995A-5F91172E6CEF"), exclusiveto, contract] */
                MIDL_INTERFACE("844E0071-9E4F-4F79-995A-5F91172E6CEF")
                ICurrentAppWithConsumables : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ReportConsumableFulfillmentAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */GUID transactionId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseWithResultsAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE RequestProductPurchaseWithDisplayPropertiesAsync(
                        /* [in] */__RPC__in HSTRING productId,
                        /* [in] */__RPC__in HSTRING offerId,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties * displayProperties,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetUnfulfilledConsumablesAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrentAppWithConsumables=_uuidof(ICurrentAppWithConsumables);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ILicenseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ILicenseInformation[] = L"Windows.ApplicationModel.Store.ILicenseInformation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("8EB7DC30-F170-4ED5-8E21-1516DA3FD367"), exclusiveto, contract] */
                MIDL_INTERFACE("8EB7DC30-F170-4ED5-8E21-1516DA3FD367")
                ILicenseInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductLicenses(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTrial(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationDate(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LicenseChanged(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Store::ILicenseChangedEventHandler  * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LicenseChanged(
                        /* [in] */EventRegistrationToken cookie
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILicenseInformation=_uuidof(ILicenseInformation);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IListingInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ListingInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation[] = L"Windows.ApplicationModel.Store.IListingInformation";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("588B4ABF-BC74-4383-B78C-99606323DECE"), exclusiveto, contract] */
                MIDL_INTERFACE("588B4ABF-BC74-4383-B78C-99606323DECE")
                IListingInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentMarket(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductListings(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedPrice(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AgeRating(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IListingInformation=_uuidof(IListingInformation);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IListingInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ListingInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation2[] = L"Windows.ApplicationModel.Store.IListingInformation2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("C0FD2C1D-B30E-4384-84EA-72FEFA82223E"), exclusiveto, contract] */
                MIDL_INTERFACE("C0FD2C1D-B30E-4384-84EA-72FEFA82223E")
                IListingInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedBasePrice(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SaleEndDate(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOnSale(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrencyCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IListingInformation2=_uuidof(IListingInformation2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicense[] = L"Windows.ApplicationModel.Store.IProductLicense";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("363308C7-2BCF-4C0E-8F2F-E808AAA8F99D"), exclusiveto, contract] */
                MIDL_INTERFACE("363308C7-2BCF-4C0E-8F2F-E808AAA8F99D")
                IProductLicense : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsActive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationDate(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductLicense=_uuidof(IProductLicense);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductLicenseWithFulfillment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductLicense
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Store.IProductLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment[] = L"Windows.ApplicationModel.Store.IProductLicenseWithFulfillment";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("FC535C8A-F667-40F3-BA3C-045A63ABB3AC"), exclusiveto, contract] */
                MIDL_INTERFACE("FC535C8A-F667-40F3-BA3C-045A63ABB3AC")
                IProductLicenseWithFulfillment : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsConsumable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductLicenseWithFulfillment=_uuidof(IProductLicenseWithFulfillment);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing[] = L"Windows.ApplicationModel.Store.IProductListing";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("45A7D6AD-C750-4D9C-947C-B00DCBF9E9C2"), exclusiveto, contract] */
                MIDL_INTERFACE("45A7D6AD-C750-4D9C-947C-B00DCBF9E9C2")
                IProductListing : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedPrice(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductListing=_uuidof(IProductListing);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListing2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing2[] = L"Windows.ApplicationModel.Store.IProductListing2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("F89E290F-73FE-494D-A939-08A9B2495ABE"), exclusiveto, contract] */
                MIDL_INTERFACE("F89E290F-73FE-494D-A939-08A9B2495ABE")
                IProductListing2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedBasePrice(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SaleEndDate(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsOnSale(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrencyCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductListing2=_uuidof(IProductListing2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListingWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithConsumables[] = L"Windows.ApplicationModel.Store.IProductListingWithConsumables";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("EB9E9790-8F6B-481F-93A7-5C3A63068149"), exclusiveto, contract] */
                MIDL_INTERFACE("EB9E9790-8F6B-481F-93A7-5C3A63068149")
                IProductListingWithConsumables : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::ProductType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductListingWithConsumables=_uuidof(IProductListingWithConsumables);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListingWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Store.IProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithMetadata[] = L"Windows.ApplicationModel.Store.IProductListingWithMetadata";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("124DA567-23F8-423E-9532-189943C40ACE"), exclusiveto, contract] */
                MIDL_INTERFACE("124DA567-23F8-423E-9532-189943C40ACE")
                IProductListingWithMetadata : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Keywords(
                        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::ProductType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tag(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ImageUri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductListingWithMetadata=_uuidof(IProductListingWithMetadata);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("D70B7420-BC92-401B-A809-C9B2E5DBBDAF"), exclusiveto, contract] */
                MIDL_INTERFACE("D70B7420-BC92-401B-A809-C9B2E5DBBDAF")
                IProductPurchaseDisplayProperties : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Description(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Image(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Image(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductPurchaseDisplayProperties=_uuidof(IProductPurchaseDisplayProperties);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("6F491DF4-32D6-4B40-B474-B83038A4D9CF"), exclusiveto, contract] */
                MIDL_INTERFACE("6F491DF4-32D6-4B40-B474-B83038A4D9CF")
                IProductPurchaseDisplayPropertiesFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateProductPurchaseDisplayProperties(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Store::IProductPurchaseDisplayProperties * * displayProperties
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IProductPurchaseDisplayPropertiesFactory=_uuidof(IProductPurchaseDisplayPropertiesFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.PurchaseResults
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IPurchaseResults[] = L"Windows.ApplicationModel.Store.IPurchaseResults";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("ED50B37E-8656-4F65-B8C8-AC7E0CB1A1C2"), exclusiveto, contract] */
                MIDL_INTERFACE("ED50B37E-8656-4F65-B8C8-AC7E0CB1A1C2")
                IPurchaseResults : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Store::ProductPurchaseStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransactionId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReceiptXml(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OfferId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPurchaseResults=_uuidof(IPurchaseResults);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IUnfulfilledConsumable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.UnfulfilledConsumable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IUnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.IUnfulfilledConsumable";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Store {
                /* [object, uuid("2DF7FBBB-1CDD-4CB8-A014-7B9CF8986927"), exclusiveto, contract] */
                MIDL_INTERFACE("2DF7FBBB-1CDD-4CB8-A014-7B9CF8986927")
                IUnfulfilledConsumable : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProductId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TransactionId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OfferId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUnfulfilledConsumable=_uuidof(IUnfulfilledConsumable);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Store */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.CurrentApp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppWithConsumables interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppWithCampaignId interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentApp2Statics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentApp interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentApp_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentApp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentApp[] = L"Windows.ApplicationModel.Store.CurrentApp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulator interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentAppSimulator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentAppSimulator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentAppSimulator[] = L"Windows.ApplicationModel.Store.CurrentAppSimulator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.ILicenseInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseInformation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseInformation[] = L"Windows.ApplicationModel.Store.LicenseInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ListingInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IListingInformation ** Default Interface **
 *    Windows.ApplicationModel.Store.IListingInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ListingInformation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ListingInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ListingInformation[] = L"Windows.ApplicationModel.Store.ListingInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductLicense ** Default Interface **
 *    Windows.ApplicationModel.Store.IProductLicenseWithFulfillment
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductLicense_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductLicense_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductLicense[] = L"Windows.ApplicationModel.Store.ProductLicense";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductListing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductListing ** Default Interface **
 *    Windows.ApplicationModel.Store.IProductListingWithMetadata
 *    Windows.ApplicationModel.Store.IProductListing2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductListing_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductListing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductListing[] = L"Windows.ApplicationModel.Store.ProductListing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.PurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IPurchaseResults ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_PurchaseResults_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_PurchaseResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_PurchaseResults[] = L"Windows.ApplicationModel.Store.PurchaseResults";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.UnfulfilledConsumable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IUnfulfilledConsumable ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_UnfulfilledConsumable_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_UnfulfilledConsumable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_UnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.UnfulfilledConsumable";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable;

#endif // ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

typedef struct __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CFulfillmentResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CListingInformation **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CStore__CPurchaseResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable_INTERFACE_DEFINED__

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CStore_CProductType __x_ABI_CWindows_CApplicationModel_CStore_CProductType;









































/*
 *
 * Struct Windows.ApplicationModel.Store.FulfillmentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CFulfillmentResult
{
    FulfillmentResult_Succeeded = 0,
    FulfillmentResult_NothingToFulfill = 1,
    FulfillmentResult_PurchasePending = 2,
    FulfillmentResult_PurchaseReverted = 3,
    FulfillmentResult_ServerError = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.ProductPurchaseStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus
{
    ProductPurchaseStatus_Succeeded = 0,
    ProductPurchaseStatus_AlreadyPurchased = 1,
    ProductPurchaseStatus_NotFulfilled = 2,
    ProductPurchaseStatus_NotPurchased = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.Store.ProductType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CStore_CProductType
{
    ProductType_Unknown = 0,
    ProductType_Durable = 1,
    ProductType_Consumable = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.ApplicationModel.Store.LicenseChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("D4A50255-1369-4C36-832F-6F2D88E3659B"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_Invoke(This) \
    ( (This)->lpVtbl->Invoke(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentApp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp[] = L"Windows.ApplicationModel.Store.ICurrentApp";
/* [object, uuid("D52DC065-DA3F-4685-995E-9B482EB5E603"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseInformation )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [in] */boolean includeReceipt,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */boolean includeReceipt,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProductReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_get_LicenseInformation(This,value) \
    ( (This)->lpVtbl->get_LicenseInformation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_get_LinkUri(This,value) \
    ( (This)->lpVtbl->get_LinkUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) \
    ( (This)->lpVtbl->RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_LoadListingInformationAsync(This,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationAsync(This,loadListingOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_GetAppReceiptAsync(This,appReceiptOperation) \
    ( (This)->lpVtbl->GetAppReceiptAsync(This,appReceiptOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_GetProductReceiptAsync(This,productId,getProductReceiptOperation) \
    ( (This)->lpVtbl->GetProductReceiptAsync(This,productId,getProductReceiptOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentApp2Statics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentApp2Statics[] = L"Windows.ApplicationModel.Store.ICurrentApp2Statics";
/* [object, uuid("DF4E6E2D-3171-4AD3-8614-2C61244373CB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCustomerPurchaseIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
        /* [in] */__RPC__in HSTRING serviceTicket,
        /* [in] */__RPC__in HSTRING publisherUserId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetCustomerCollectionsIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics * This,
        /* [in] */__RPC__in HSTRING serviceTicket,
        /* [in] */__RPC__in HSTRING publisherUserId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2StaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_GetCustomerPurchaseIdAsync(This,serviceTicket,publisherUserId,operation) \
    ( (This)->lpVtbl->GetCustomerPurchaseIdAsync(This,serviceTicket,publisherUserId,operation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_GetCustomerCollectionsIdAsync(This,serviceTicket,publisherUserId,operation) \
    ( (This)->lpVtbl->GetCustomerCollectionsIdAsync(This,serviceTicket,publisherUserId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentApp2Statics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulator[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulator";
/* [object, uuid("F17F9DB1-74CD-4787-9787-19866E9A5559"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LicenseInformation )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LinkUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [in] */boolean includeReceipt,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestAppPurchaseOperation
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [overload, deprecated] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */boolean includeReceipt,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * requestProductPurchaseOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetAppReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * appReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProductReceiptAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * getProductReceiptOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ReloadSimulatorAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * simulatorSettingsFile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * reloadSimulatorOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_get_LicenseInformation(This,value) \
    ( (This)->lpVtbl->get_LicenseInformation(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_get_LinkUri(This,value) \
    ( (This)->lpVtbl->get_LinkUri(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) \
    ( (This)->lpVtbl->RequestAppPurchaseAsync(This,includeReceipt,requestAppPurchaseOperation) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("RequestProductPurchaseAsync(productId, includeReceipt) may be altered or unavailable for releases after Windows 8.1. Instead, use RequestProductPurchaseAsync(productId).")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseAsync(This,productId,includeReceipt,requestProductPurchaseOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_LoadListingInformationAsync(This,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationAsync(This,loadListingOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_GetAppReceiptAsync(This,appReceiptOperation) \
    ( (This)->lpVtbl->GetAppReceiptAsync(This,appReceiptOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_GetProductReceiptAsync(This,productId,getProductReceiptOperation) \
    ( (This)->lpVtbl->GetProductReceiptAsync(This,productId,getProductReceiptOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_ReloadSimulatorAsync(This,simulatorSettingsFile,reloadSimulatorOperation) \
    ( (This)->lpVtbl->ReloadSimulatorAsync(This,simulatorSettingsFile,reloadSimulatorOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering";
/* [object, uuid("617E70E2-F86F-4B54-9666-DDE285092C68"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByProductIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * productIds,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByKeywordsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keywords,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFilteringVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorStaticsWithFiltering_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId";
/* [object, uuid("84678A43-DF00-4672-A43F-B25B1441CFCF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppPurchaseCampaignIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_GetAppPurchaseCampaignIdAsync(This,operation) \
    ( (This)->lpVtbl->GetAppPurchaseCampaignIdAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithCampaignId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppSimulatorWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables";
/* [object, uuid("4E51F0AB-20E7-4412-9B85-59BB78388667"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportConsumableFulfillmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */GUID transactionId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithResultsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithDisplayPropertiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING offerId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * displayProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnfulfilledConsumablesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumablesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) \
    ( (This)->lpVtbl->ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) \
    ( (This)->lpVtbl->GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppSimulatorWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppStaticsWithFiltering[] = L"Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering";
/* [object, uuid("D36D6542-9085-438E-97BA-A25C976BE2FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByProductIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * productIds,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *LoadListingInformationByKeywordsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * keywords,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation * * loadListingOperation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportProductFulfillment )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering * This,
        /* [in] */__RPC__in HSTRING productId
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFilteringVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationByProductIdsAsync(This,productIds,loadListingOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) \
    ( (This)->lpVtbl->LoadListingInformationByKeywordsAsync(This,keywords,loadListingOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_ReportProductFulfillment(This,productId) \
    ( (This)->lpVtbl->ReportProductFulfillment(This,productId) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppStaticsWithFiltering_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppWithCampaignId
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithCampaignId[] = L"Windows.ApplicationModel.Store.ICurrentAppWithCampaignId";
/* [object, uuid("312F4CD0-36C1-44A6-B32B-432D608E4DD6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAppPurchaseCampaignIdAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignIdVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_GetAppPurchaseCampaignIdAsync(This,operation) \
    ( (This)->lpVtbl->GetAppPurchaseCampaignIdAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithCampaignId_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ICurrentAppWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.CurrentApp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ICurrentAppWithConsumables[] = L"Windows.ApplicationModel.Store.ICurrentAppWithConsumables";
/* [object, uuid("844E0071-9E4F-4F79-995A-5F91172E6CEF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReportConsumableFulfillmentAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */GUID transactionId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CFulfillmentResult * * reportConsumableFulfillmentOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithResultsAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithResultsOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RequestProductPurchaseWithDisplayPropertiesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
        /* [in] */__RPC__in HSTRING productId,
        /* [in] */__RPC__in HSTRING offerId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * displayProperties,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CStore__CPurchaseResults * * requestProductPurchaseWithDisplayPropertiesOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetUnfulfilledConsumablesAsync )(
        __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CApplicationModel__CStore__CUnfulfilledConsumable * * getUnfulfilledConsumablesOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumablesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) \
    ( (This)->lpVtbl->ReportConsumableFulfillmentAsync(This,productId,transactionId,reportConsumableFulfillmentOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseWithResultsAsync(This,productId,requestProductPurchaseWithResultsOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) \
    ( (This)->lpVtbl->RequestProductPurchaseWithDisplayPropertiesAsync(This,productId,offerId,displayProperties,requestProductPurchaseWithDisplayPropertiesOperation) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) \
    ( (This)->lpVtbl->GetUnfulfilledConsumablesAsync(This,getUnfulfilledConsumablesOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CICurrentAppWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.ILicenseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.LicenseInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_ILicenseInformation[] = L"Windows.ApplicationModel.Store.ILicenseInformation";
/* [object, uuid("8EB7DC30-F170-4ED5-8E21-1516DA3FD367"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductLicenses )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductLicense * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTrial )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LicenseChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CStore_CILicenseChangedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LicenseChanged )(
        __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_get_ProductLicenses(This,value) \
    ( (This)->lpVtbl->get_ProductLicenses(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_get_IsActive(This,value) \
    ( (This)->lpVtbl->get_IsActive(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_get_IsTrial(This,value) \
    ( (This)->lpVtbl->get_IsTrial(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_get_ExpirationDate(This,value) \
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_add_LicenseChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_LicenseChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_remove_LicenseChanged(This,cookie) \
    ( (This)->lpVtbl->remove_LicenseChanged(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CILicenseInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IListingInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ListingInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation[] = L"Windows.ApplicationModel.Store.IListingInformation";
/* [object, uuid("588B4ABF-BC74-4383-B78C-99606323DECE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentMarket )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductListings )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CStore__CProductListing * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AgeRating )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_CurrentMarket(This,value) \
    ( (This)->lpVtbl->get_CurrentMarket(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_ProductListings(This,value) \
    ( (This)->lpVtbl->get_ProductListings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_FormattedPrice(This,value) \
    ( (This)->lpVtbl->get_FormattedPrice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_get_AgeRating(This,value) \
    ( (This)->lpVtbl->get_AgeRating(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IListingInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ListingInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IListingInformation2[] = L"Windows.ApplicationModel.Store.IListingInformation2";
/* [object, uuid("C0FD2C1D-B30E-4384-84EA-72FEFA82223E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedBasePrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SaleEndDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOnSale )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_get_FormattedBasePrice(This,value) \
    ( (This)->lpVtbl->get_FormattedBasePrice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_get_SaleEndDate(This,value) \
    ( (This)->lpVtbl->get_SaleEndDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_get_IsOnSale(This,value) \
    ( (This)->lpVtbl->get_IsOnSale(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_get_CurrencyCode(This,value) \
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIListingInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicense[] = L"Windows.ApplicationModel.Store.IProductLicense";
/* [object, uuid("363308C7-2BCF-4C0E-8F2F-E808AAA8F99D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_get_IsActive(This,value) \
    ( (This)->lpVtbl->get_IsActive(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_get_ExpirationDate(This,value) \
    ( (This)->lpVtbl->get_ExpirationDate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicense_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductLicenseWithFulfillment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductLicense
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Store.IProductLicense
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductLicenseWithFulfillment[] = L"Windows.ApplicationModel.Store.IProductLicenseWithFulfillment";
/* [object, uuid("FC535C8A-F667-40F3-BA3C-045A63ABB3AC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsConsumable )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_get_IsConsumable(This,value) \
    ( (This)->lpVtbl->get_IsConsumable(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductLicenseWithFulfillment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing[] = L"Windows.ApplicationModel.Store.IProductListing";
/* [object, uuid("45A7D6AD-C750-4D9C-947C-B00DCBF9E9C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedPrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_get_FormattedPrice(This,value) \
    ( (This)->lpVtbl->get_FormattedPrice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListing2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListing2[] = L"Windows.ApplicationModel.Store.IProductListing2";
/* [object, uuid("F89E290F-73FE-494D-A939-08A9B2495ABE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedBasePrice )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SaleEndDate )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsOnSale )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrencyCode )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_get_FormattedBasePrice(This,value) \
    ( (This)->lpVtbl->get_FormattedBasePrice(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_get_SaleEndDate(This,value) \
    ( (This)->lpVtbl->get_SaleEndDate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_get_IsOnSale(This,value) \
    ( (This)->lpVtbl->get_IsOnSale(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_get_CurrencyCode(This,value) \
    ( (This)->lpVtbl->get_CurrencyCode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListing2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListingWithConsumables
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithConsumables[] = L"Windows.ApplicationModel.Store.IProductListingWithConsumables";
/* [object, uuid("EB9E9790-8F6B-481F-93A7-5C3A63068149"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumablesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_get_ProductType(This,value) \
    ( (This)->lpVtbl->get_ProductType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithConsumables_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductListingWithMetadata
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductListing
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.ApplicationModel.Store.IProductListing
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductListingWithMetadata[] = L"Windows.ApplicationModel.Store.IProductListingWithMetadata";
/* [object, uuid("124DA567-23F8-423E-9532-189943C40ACE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Keywords )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt __FIIterable_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductType )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_get_Keywords(This,value) \
    ( (This)->lpVtbl->get_Keywords(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_get_ProductType(This,value) \
    ( (This)->lpVtbl->get_ProductType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_get_Tag(This,value) \
    ( (This)->lpVtbl->get_Tag(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_get_ImageUri(This,value) \
    ( (This)->lpVtbl->get_ImageUri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductListingWithMetadata_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties";
/* [object, uuid("D70B7420-BC92-401B-A809-C9B2E5DBBDAF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_put_Description(This,value) \
    ( (This)->lpVtbl->put_Description(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_get_Image(This,value) \
    ( (This)->lpVtbl->get_Image(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_put_Image(This,value) \
    ( (This)->lpVtbl->put_Image(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IProductPurchaseDisplayPropertiesFactory[] = L"Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory";
/* [object, uuid("6F491DF4-32D6-4B40-B474-B83038A4D9CF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateProductPurchaseDisplayProperties )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayProperties * * displayProperties
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_CreateProductPurchaseDisplayProperties(This,name,displayProperties) \
    ( (This)->lpVtbl->CreateProductPurchaseDisplayProperties(This,name,displayProperties) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIProductPurchaseDisplayPropertiesFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IPurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.PurchaseResults
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IPurchaseResults[] = L"Windows.ApplicationModel.Store.IPurchaseResults";
/* [object, uuid("ED50B37E-8656-4F65-B8C8-AC7E0CB1A1C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CStore_CProductPurchaseStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReceiptXml )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OfferId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_get_TransactionId(This,value) \
    ( (This)->lpVtbl->get_TransactionId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_get_ReceiptXml(This,value) \
    ( (This)->lpVtbl->get_ReceiptXml(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_get_OfferId(This,value) \
    ( (This)->lpVtbl->get_OfferId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIPurchaseResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Store.IUnfulfilledConsumable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Store.UnfulfilledConsumable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Store_IUnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.IUnfulfilledConsumable";
/* [object, uuid("2DF7FBBB-1CDD-4CB8-A014-7B9CF8986927"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TransactionId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OfferId )(
        __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl;

interface __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_get_ProductId(This,value) \
    ( (This)->lpVtbl->get_ProductId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_get_TransactionId(This,value) \
    ( (This)->lpVtbl->get_TransactionId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_get_OfferId(This,value) \
    ( (This)->lpVtbl->get_OfferId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CStore_CIUnfulfilledConsumable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.CurrentApp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppWithConsumables interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppWithCampaignId interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppStaticsWithFiltering interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentApp2Statics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentApp interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentApp_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentApp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentApp[] = L"Windows.ApplicationModel.Store.CurrentApp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.CurrentAppSimulator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorWithConsumables interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorWithCampaignId interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulatorStaticsWithFiltering interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Store.ICurrentAppSimulator interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentAppSimulator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_CurrentAppSimulator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_CurrentAppSimulator[] = L"Windows.ApplicationModel.Store.CurrentAppSimulator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.LicenseInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.ILicenseInformation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseInformation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_LicenseInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_LicenseInformation[] = L"Windows.ApplicationModel.Store.LicenseInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ListingInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IListingInformation ** Default Interface **
 *    Windows.ApplicationModel.Store.IListingInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ListingInformation_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ListingInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ListingInformation[] = L"Windows.ApplicationModel.Store.ListingInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductLicense
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductLicense ** Default Interface **
 *    Windows.ApplicationModel.Store.IProductLicenseWithFulfillment
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductLicense_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductLicense_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductLicense[] = L"Windows.ApplicationModel.Store.ProductLicense";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductListing
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductListing ** Default Interface **
 *    Windows.ApplicationModel.Store.IProductListingWithMetadata
 *    Windows.ApplicationModel.Store.IProductListing2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductListing_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductListing_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductListing[] = L"Windows.ApplicationModel.Store.ProductListing";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Store.IProductPurchaseDisplayPropertiesFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IProductPurchaseDisplayProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_ProductPurchaseDisplayProperties[] = L"Windows.ApplicationModel.Store.ProductPurchaseDisplayProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.PurchaseResults
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IPurchaseResults ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_PurchaseResults_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_PurchaseResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_PurchaseResults[] = L"Windows.ApplicationModel.Store.PurchaseResults";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Store.UnfulfilledConsumable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Store.IUnfulfilledConsumable ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Store_UnfulfilledConsumable_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Store_UnfulfilledConsumable_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Store_UnfulfilledConsumable[] = L"Windows.ApplicationModel.Store.UnfulfilledConsumable";
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
#endif // __windows2Eapplicationmodel2Estore_p_h__

#endif // __windows2Eapplicationmodel2Estore_h__
