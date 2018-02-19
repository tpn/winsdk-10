/* Header file automatically generated from windows.applicationmodel.email.dataprovider.idl */
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
#ifndef __windows2Eapplicationmodel2Eemail2Edataprovider_h__
#define __windows2Eapplicationmodel2Eemail2Edataprovider_h__
#ifndef __windows2Eapplicationmodel2Eemail2Edataprovider_p_h__
#define __windows2Eapplicationmodel2Eemail2Edataprovider_p_h__


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
#include "Windows.ApplicationModel.Email.h"
#include "Windows.Security.Cryptography.Certificates.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxCreateFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxCreateFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDeleteFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDeleteFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDownloadAttachmentRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDownloadAttachmentRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDownloadMessageRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxDownloadMessageRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxEmptyFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxEmptyFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxForwardMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxForwardMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxGetAutoReplySettingsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxGetAutoReplySettingsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxMoveFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxMoveFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxProposeNewTimeForMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxProposeNewTimeForMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxResolveRecipientsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxResolveRecipientsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxServerSearchReadBatchRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxServerSearchReadBatchRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxSetAutoReplySettingsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxSetAutoReplySettingsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxUpdateMeetingResponseRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxUpdateMeetingResponseRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxValidateCertificatesRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    interface IEmailMailboxValidateCertificatesRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxCreateFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8c7db52d-496e-5419-bd78-b8b657cf4e66"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDeleteFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d962a9b6-bbb4-5d82-84b4-8f703bf3086f"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDownloadAttachmentRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d2e92019-b997-5cd6-8f88-4dbc6f969f15"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDownloadMessageRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e1b59b2f-ddd5-5159-ae9a-14a866912095"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxEmptyFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9a851b84-bcb1-5121-ab61-3efe568f683d"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxForwardMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9d6a017f-5a70-5d83-a680-d2806748ca0b"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxGetAutoReplySettingsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("587c6f92-a969-57b3-895f-9a06b3650d3a"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxMoveFolderRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2c6bf2c8-42f3-523d-80db-170e4fb1567f"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxProposeNewTimeForMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("309d8bde-1e60-524b-828c-5a3d64a672aa"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxResolveRecipientsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ec14e586-e4fb-5fc0-91fc-931ce17a3fc3"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxServerSearchReadBatchRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f8bf9067-7d11-56a0-a303-163435c14016"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxSetAutoReplySettingsRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("aa4f8fb3-05e0-54e6-afac-a28e853e756e"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b65fc3ec-9476-51c4-ba70-1505d79826b9"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxUpdateMeetingResponseRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3274fbfd-c10a-5b30-adea-2b4b860b4a0d"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxValidateCertificatesRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("de2625f7-e16f-512e-a8c6-b7445532bcc6"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs*, ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection, Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection*,ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailRecipient;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailRecipient;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient ABI::Windows::ApplicationModel::Email::IEmailRecipient

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("12238d88-1a2f-5e7a-89b1-8dc140536bac"))
IIterator<ABI::Windows::ApplicationModel::Email::EmailRecipient*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::EmailRecipient*, ABI::Windows::ApplicationModel::Email::IEmailRecipient*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Email.EmailRecipient>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Email::EmailRecipient*> __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t;
#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5f18cab2-236d-5ec5-bc64-e3e63d29e774"))
IIterable<ABI::Windows::ApplicationModel::Email::EmailRecipient*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::EmailRecipient*, ABI::Windows::ApplicationModel::Email::IEmailRecipient*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Email.EmailRecipient>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Email::EmailRecipient*> __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t;
#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d6af60-f11a-5c03-80cc-473407a5aabf"))
IVectorView<ABI::Windows::ApplicationModel::Email::EmailRecipient*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::EmailRecipient*, ABI::Windows::ApplicationModel::Email::IEmailRecipient*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Email.EmailRecipient>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Email::EmailRecipient*> __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t;
#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
//#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Email::IEmailRecipient*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


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



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailRecipientResolutionResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailRecipientResolutionResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5c040cd6-9593-5e74-9a5e-7284cd1b7200"))
IIterator<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*, ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Email.EmailRecipientResolutionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*> __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t;
#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cae3c1c4-c689-5787-976f-1a158ffdd16b"))
IIterable<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*, ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Email.EmailRecipientResolutionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Email::EmailRecipientResolutionResult*> __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t;
#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::IEmailRecipientResolutionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class Certificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate ABI::Windows::Security::Cryptography::Certificates::ICertificate

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("676fc159-f15c-58bd-91a7-28f7e795c756"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c7d1423-e8fd-5a91-b55c-8bfbe7ac2d40"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("963f7013-77c2-51c5-8038-b5bcef633edb"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                enum EmailCertificateValidationStatus : int;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1cfe3d41-16a5-5026-a6fe-2cb0a303a605"))
IIterator<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> : IIterator_impl<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Email.EmailCertificateValidationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t;
#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>
//#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE */





#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("7e326530-7449-51a7-b1bc-c43533a78e06"))
IIterable<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> : IIterable_impl<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Email.EmailCertificateValidationStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus> __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t;
#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>
//#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Email::EmailCertificateValidationStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailBatchStatus : int EmailBatchStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailCertificateValidationStatus : int EmailCertificateValidationStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailFolder;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailFolder;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder ABI::Windows::ApplicationModel::Email::IEmailFolder

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMailboxAutoReplyMessageResponseKind : int EmailMailboxAutoReplyMessageResponseKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailMailboxAutoReplySettings;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailMailboxAutoReplySettings;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings ABI::Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMailboxCreateFolderStatus : int EmailMailboxCreateFolderStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMailboxDeleteFolderStatus : int EmailMailboxDeleteFolderStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMailboxEmptyFolderStatus : int EmailMailboxEmptyFolderStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMeetingResponseType : int EmailMeetingResponseType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailMessage;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailMessage;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage ABI::Windows::ApplicationModel::Email::IEmailMessage

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                
                typedef enum EmailMessageBodyKind : int EmailMessageBodyKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                class EmailQueryOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                interface IEmailQueryOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Email */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions ABI::Windows::ApplicationModel::Email::IEmailQueryOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Deferral;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IDeferral;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIDeferral ABI::Windows::Foundation::IDeferral

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


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
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */










































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxCreateFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDeleteFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDownloadAttachmentRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxDownloadMessageRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxEmptyFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxForwardMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxGetAutoReplySettingsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxMoveFolderRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxProposeNewTimeForMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxResolveRecipientsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxServerSearchReadBatchRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxSetAutoReplySettingsRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxUpdateMeetingResponseRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    class EmailMailboxValidateCertificatesRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */













/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("3B9C9DC7-37B2-4BF0-AE30-7B644A1C96E1"), exclusiveto, contract] */
                    MIDL_INTERFACE("3B9C9DC7-37B2-4BF0-AE30-7B644A1C96E1")
                    IEmailDataProviderConnection : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MailboxSyncRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MailboxSyncRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadMessageRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadMessageRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadAttachmentRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadAttachmentRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CreateFolderRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CreateFolderRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DeleteFolderRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DeleteFolderRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_EmptyFolderRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_EmptyFolderRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MoveFolderRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MoveFolderRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UpdateMeetingResponseRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UpdateMeetingResponseRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ForwardMeetingRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ForwardMeetingRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProposeNewTimeForMeetingRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProposeNewTimeForMeetingRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SetAutoReplySettingsRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SetAutoReplySettingsRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GetAutoReplySettingsRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GetAutoReplySettingsRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ResolveRecipientsRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ResolveRecipientsRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ValidateCertificatesRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ValidateCertificatesRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ServerSearchReadBatchRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ServerSearchReadBatchRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailDataProviderConnection=_uuidof(IEmailDataProviderConnection);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("8F3E4E50-341E-45F3-BBA0-84A005E1319A"), exclusiveto, contract] */
                    MIDL_INTERFACE("8F3E4E50-341E-45F3-BBA0-84A005E1319A")
                    IEmailDataProviderTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Connection(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailDataProviderTriggerDetails=_uuidof(IEmailDataProviderTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("184D3775-C921-4C39-A309-E16C9F22B04B"), exclusiveto, contract] */
                    MIDL_INTERFACE("184D3775-C921-4C39-A309-E16C9F22B04B")
                    IEmailMailboxCreateFolderRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Email::IEmailFolder * folder,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus status,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxCreateFolderRequest=_uuidof(IEmailMailboxCreateFolderRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("03E4C02C-241C-4EA9-A68F-FF20BC5AFC85"), exclusiveto, contract] */
                    MIDL_INTERFACE("03E4C02C-241C-4EA9-A68F-FF20BC5AFC85")
                    IEmailMailboxCreateFolderRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxCreateFolderRequestEventArgs=_uuidof(IEmailMailboxCreateFolderRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("9469E88A-A931-4779-923D-09A3EA292E29"), exclusiveto, contract] */
                    MIDL_INTERFACE("9469E88A-A931-4779-923D-09A3EA292E29")
                    IEmailMailboxDeleteFolderRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus status,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDeleteFolderRequest=_uuidof(IEmailMailboxDeleteFolderRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("B4D32D06-2332-4678-8378-28B579336846"), exclusiveto, contract] */
                    MIDL_INTERFACE("B4D32D06-2332-4678-8378-28B579336846")
                    IEmailMailboxDeleteFolderRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDeleteFolderRequestEventArgs=_uuidof(IEmailMailboxDeleteFolderRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("0B1DBBB4-750C-48E1-BCE4-8D589684FFBC"), exclusiveto, contract] */
                    MIDL_INTERFACE("0B1DBBB4-750C-48E1-BCE4-8D589684FFBC")
                    IEmailMailboxDownloadAttachmentRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMessageId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailAttachmentId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDownloadAttachmentRequest=_uuidof(IEmailMailboxDownloadAttachmentRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("CCDDC46D-FFA8-4877-9F9D-FED7BCAF4104"), exclusiveto, contract] */
                    MIDL_INTERFACE("CCDDC46D-FFA8-4877-9F9D-FED7BCAF4104")
                    IEmailMailboxDownloadAttachmentRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDownloadAttachmentRequestEventArgs=_uuidof(IEmailMailboxDownloadAttachmentRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("497B4187-5B4D-4B23-816C-F3842BEB753E"), exclusiveto, contract] */
                    MIDL_INTERFACE("497B4187-5B4D-4B23-816C-F3842BEB753E")
                    IEmailMailboxDownloadMessageRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMessageId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDownloadMessageRequest=_uuidof(IEmailMailboxDownloadMessageRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("470409AD-D0A0-4A5B-BB2A-37621039C53E"), exclusiveto, contract] */
                    MIDL_INTERFACE("470409AD-D0A0-4A5B-BB2A-37621039C53E")
                    IEmailMailboxDownloadMessageRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxDownloadMessageRequestEventArgs=_uuidof(IEmailMailboxDownloadMessageRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("FE4B03AB-F86D-46D9-B4CE-BC8A6D9E9268"), exclusiveto, contract] */
                    MIDL_INTERFACE("FE4B03AB-F86D-46D9-B4CE-BC8A6D9E9268")
                    IEmailMailboxEmptyFolderRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus status,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxEmptyFolderRequest=_uuidof(IEmailMailboxEmptyFolderRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("7183F484-985A-4AC0-B33F-EE0E2627A3C0"), exclusiveto, contract] */
                    MIDL_INTERFACE("7183F484-985A-4AC0-B33F-EE0E2627A3C0")
                    IEmailMailboxEmptyFolderRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxEmptyFolderRequestEventArgs=_uuidof(IEmailMailboxEmptyFolderRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("616D6AF1-70D4-4832-B869-B80542AE9BE8"), exclusiveto, contract] */
                    MIDL_INTERFACE("616D6AF1-70D4-4832-B869-B80542AE9BE8")
                    IEmailMailboxForwardMeetingRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMessageId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recipients(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForwardHeaderType(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Email::EmailMessageBodyKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForwardHeader(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Comment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxForwardMeetingRequest=_uuidof(IEmailMailboxForwardMeetingRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("2BD8F33A-2974-4759-A5A5-58F44D3C0275"), exclusiveto, contract] */
                    MIDL_INTERFACE("2BD8F33A-2974-4759-A5A5-58F44D3C0275")
                    IEmailMailboxForwardMeetingRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxForwardMeetingRequestEventArgs=_uuidof(IEmailMailboxForwardMeetingRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("9B380789-1E88-4E01-84CC-1386AD9A2C2F"), exclusiveto, contract] */
                    MIDL_INTERFACE("9B380789-1E88-4E01-84CC-1386AD9A2C2F")
                    IEmailMailboxGetAutoReplySettingsRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedFormat(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings * autoReplySettings,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxGetAutoReplySettingsRequest=_uuidof(IEmailMailboxGetAutoReplySettingsRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("D79F55C2-FD45-4004-8A91-9BACF38B7022"), exclusiveto, contract] */
                    MIDL_INTERFACE("D79F55C2-FD45-4004-8A91-9BACF38B7022")
                    IEmailMailboxGetAutoReplySettingsRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxGetAutoReplySettingsRequestEventArgs=_uuidof(IEmailMailboxGetAutoReplySettingsRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("10BA2856-4A95-4068-91CC-67CC7ACF454F"), exclusiveto, contract] */
                    MIDL_INTERFACE("10BA2856-4A95-4068-91CC-67CC7ACF454F")
                    IEmailMailboxMoveFolderRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewParentFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewFolderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxMoveFolderRequest=_uuidof(IEmailMailboxMoveFolderRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("38623020-14BA-4C88-8698-7239E3C8AAA7"), exclusiveto, contract] */
                    MIDL_INTERFACE("38623020-14BA-4C88-8698-7239E3C8AAA7")
                    IEmailMailboxMoveFolderRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxMoveFolderRequestEventArgs=_uuidof(IEmailMailboxMoveFolderRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("5AEFF152-9799-4F9F-A399-FF07F3EEF04E"), exclusiveto, contract] */
                    MIDL_INTERFACE("5AEFF152-9799-4F9F-A399-FF07F3EEF04E")
                    IEmailMailboxProposeNewTimeForMeetingRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMessageId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewStartTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewDuration(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Comment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxProposeNewTimeForMeetingRequest=_uuidof(IEmailMailboxProposeNewTimeForMeetingRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("FB480B98-33AD-4A67-8251-0F9C249B6A20"), exclusiveto, contract] */
                    MIDL_INTERFACE("FB480B98-33AD-4A67-8251-0F9C249B6A20")
                    IEmailMailboxProposeNewTimeForMeetingRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs=_uuidof(IEmailMailboxProposeNewTimeForMeetingRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("EFA4CF70-7B39-4C9B-811E-41EAF43A332D"), exclusiveto, contract] */
                    MIDL_INTERFACE("EFA4CF70-7B39-4C9B-811E-41EAF43A332D")
                    IEmailMailboxResolveRecipientsRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recipients(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * resolutionResults,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxResolveRecipientsRequest=_uuidof(IEmailMailboxResolveRecipientsRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("260F9E02-B2CF-40F8-8C28-E3ED43B1E89A"), exclusiveto, contract] */
                    MIDL_INTERFACE("260F9E02-B2CF-40F8-8C28-E3ED43B1E89A")
                    IEmailMailboxResolveRecipientsRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxResolveRecipientsRequestEventArgs=_uuidof(IEmailMailboxResolveRecipientsRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("090EEBDF-5A96-41D3-8AD8-34912F9AA60E"), exclusiveto, contract] */
                    MIDL_INTERFACE("090EEBDF-5A96-41D3-8AD8-34912F9AA60E")
                    IEmailMailboxServerSearchReadBatchRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailFolderId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::IEmailQueryOptions * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuggestedBatchSize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveMessageAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Email::IEmailMessage * message,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [in] */ABI::Windows::ApplicationModel::Email::EmailBatchStatus batchStatus,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxServerSearchReadBatchRequest=_uuidof(IEmailMailboxServerSearchReadBatchRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("14101B4E-ED9E-45D1-AD7A-CC9B7F643AE2"), exclusiveto, contract] */
                    MIDL_INTERFACE("14101B4E-ED9E-45D1-AD7A-CC9B7F643AE2")
                    IEmailMailboxServerSearchReadBatchRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxServerSearchReadBatchRequestEventArgs=_uuidof(IEmailMailboxServerSearchReadBatchRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("75A422D0-A88E-4E54-8DC7-C243186B774E"), exclusiveto, contract] */
                    MIDL_INTERFACE("75A422D0-A88E-4E54-8DC7-C243186B774E")
                    IEmailMailboxSetAutoReplySettingsRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoReplySettings(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxSetAutoReplySettingsRequest=_uuidof(IEmailMailboxSetAutoReplySettingsRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("09DA11AD-D7CA-4087-AC86-53FA67F76246"), exclusiveto, contract] */
                    MIDL_INTERFACE("09DA11AD-D7CA-4087-AC86-53FA67F76246")
                    IEmailMailboxSetAutoReplySettingsRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxSetAutoReplySettingsRequestEventArgs=_uuidof(IEmailMailboxSetAutoReplySettingsRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("4E10E8E4-7E67-405A-B673-DC60C91090FC"), exclusiveto, contract] */
                    MIDL_INTERFACE("4E10E8E4-7E67-405A-B673-DC60C91090FC")
                    IEmailMailboxSyncManagerSyncRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxSyncManagerSyncRequest=_uuidof(IEmailMailboxSyncManagerSyncRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("439A031A-8FCC-4AE5-B9B5-D434E0A65AA8"), exclusiveto, contract] */
                    MIDL_INTERFACE("439A031A-8FCC-4AE5-B9B5-D434E0A65AA8")
                    IEmailMailboxSyncManagerSyncRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxSyncManagerSyncRequestEventArgs=_uuidof(IEmailMailboxSyncManagerSyncRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("5B99AC93-B2CF-4888-BA4F-306B6B66DF30"), exclusiveto, contract] */
                    MIDL_INTERFACE("5B99AC93-B2CF-4888-BA4F-306B6B66DF30")
                    IEmailMailboxUpdateMeetingResponseRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMessageId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Email::EmailMeetingResponseType * response
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Comment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SendUpdate(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxUpdateMeetingResponseRequest=_uuidof(IEmailMailboxUpdateMeetingResponseRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("6898D761-56C9-4F17-BE31-66FDA94BA159"), exclusiveto, contract] */
                    MIDL_INTERFACE("6898D761-56C9-4F17-BE31-66FDA94BA159")
                    IEmailMailboxUpdateMeetingResponseRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxUpdateMeetingResponseRequestEventArgs=_uuidof(IEmailMailboxUpdateMeetingResponseRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("A94D3931-E11A-4F97-B81A-187A70A8F41A"), exclusiveto, contract] */
                    MIDL_INTERFACE("A94D3931-E11A-4F97-B81A-187A70A8F41A")
                    IEmailMailboxValidateCertificatesRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailMailboxId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * validationStatuses,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxValidateCertificatesRequest=_uuidof(IEmailMailboxValidateCertificatesRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Email {
                namespace DataProvider {
                    /* [object, uuid("2583BF17-02FF-49FE-A73C-03F37566C691"), exclusiveto, contract] */
                    MIDL_INTERFACE("2583BF17-02FF-49FE-A73C-03F37566C691")
                    IEmailMailboxValidateCertificatesRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEmailMailboxValidateCertificatesRequestEventArgs=_uuidof(IEmailMailboxValidateCertificatesRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Email */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection[] = L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipient **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipient * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipientVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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


#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;

typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailRecipientResolutionResult * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus;
#if !defined(____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;

typedef struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus_INTERFACE_DEFINED__




typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailCertificateValidationStatus;

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind;

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType;

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind;

#ifndef ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions_FWD_DEFINED__








typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;



















































































/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderConnection[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection";
/* [object, uuid("3B9C9DC7-37B2-4BF0-AE30-7B644A1C96E1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MailboxSyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSyncManagerSyncRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MailboxSyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadMessageRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadMessageRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadMessageRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadAttachmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDownloadAttachmentRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadAttachmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CreateFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxCreateFolderRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CreateFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DeleteFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxDeleteFolderRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DeleteFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_EmptyFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxEmptyFolderRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_EmptyFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MoveFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxMoveFolderRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MoveFolderRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxUpdateMeetingResponseRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxForwardMeetingRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxProposeNewTimeForMeetingRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SetAutoReplySettingsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxSetAutoReplySettingsRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SetAutoReplySettingsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GetAutoReplySettingsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxGetAutoReplySettingsRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GetAutoReplySettingsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ResolveRecipientsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxResolveRecipientsRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ResolveRecipientsRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ValidateCertificatesRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxValidateCertificatesRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ValidateCertificatesRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CEmail__CDataProvider__CEmailDataProviderConnection_Windows__CApplicationModel__CEmail__CDataProvider__CEmailMailboxServerSearchReadBatchRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ServerSearchReadBatchRequested )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_MailboxSyncRequested(This,handler,token) \
    ( (This)->lpVtbl->add_MailboxSyncRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_MailboxSyncRequested(This,token) \
    ( (This)->lpVtbl->remove_MailboxSyncRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_DownloadMessageRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadMessageRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_DownloadMessageRequested(This,token) \
    ( (This)->lpVtbl->remove_DownloadMessageRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_DownloadAttachmentRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DownloadAttachmentRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_DownloadAttachmentRequested(This,token) \
    ( (This)->lpVtbl->remove_DownloadAttachmentRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_CreateFolderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CreateFolderRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_CreateFolderRequested(This,token) \
    ( (This)->lpVtbl->remove_CreateFolderRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_DeleteFolderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_DeleteFolderRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_DeleteFolderRequested(This,token) \
    ( (This)->lpVtbl->remove_DeleteFolderRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_EmptyFolderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_EmptyFolderRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_EmptyFolderRequested(This,token) \
    ( (This)->lpVtbl->remove_EmptyFolderRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_MoveFolderRequested(This,handler,token) \
    ( (This)->lpVtbl->add_MoveFolderRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_MoveFolderRequested(This,token) \
    ( (This)->lpVtbl->remove_MoveFolderRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_UpdateMeetingResponseRequested(This,handler,token) \
    ( (This)->lpVtbl->add_UpdateMeetingResponseRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_UpdateMeetingResponseRequested(This,token) \
    ( (This)->lpVtbl->remove_UpdateMeetingResponseRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_ForwardMeetingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ForwardMeetingRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_ForwardMeetingRequested(This,token) \
    ( (This)->lpVtbl->remove_ForwardMeetingRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_ProposeNewTimeForMeetingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ProposeNewTimeForMeetingRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_ProposeNewTimeForMeetingRequested(This,token) \
    ( (This)->lpVtbl->remove_ProposeNewTimeForMeetingRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_SetAutoReplySettingsRequested(This,handler,token) \
    ( (This)->lpVtbl->add_SetAutoReplySettingsRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_SetAutoReplySettingsRequested(This,token) \
    ( (This)->lpVtbl->remove_SetAutoReplySettingsRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_GetAutoReplySettingsRequested(This,handler,token) \
    ( (This)->lpVtbl->add_GetAutoReplySettingsRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_GetAutoReplySettingsRequested(This,token) \
    ( (This)->lpVtbl->remove_GetAutoReplySettingsRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_ResolveRecipientsRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ResolveRecipientsRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_ResolveRecipientsRequested(This,token) \
    ( (This)->lpVtbl->remove_ResolveRecipientsRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_ValidateCertificatesRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ValidateCertificatesRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_ValidateCertificatesRequested(This,token) \
    ( (This)->lpVtbl->remove_ValidateCertificatesRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_add_ServerSearchReadBatchRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ServerSearchReadBatchRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_remove_ServerSearchReadBatchRequested(This,token) \
    ( (This)->lpVtbl->remove_ServerSearchReadBatchRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails";
/* [object, uuid("8F3E4E50-341E-45F3-BBA0-84A005E1319A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_get_Connection(This,value) \
    ( (This)->lpVtbl->get_Connection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest";
/* [object, uuid("184D3775-C921-4C39-A309-E16C9F22B04B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailFolder * folder,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxCreateFolderStatus status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_get_ParentFolderId(This,value) \
    ( (This)->lpVtbl->get_ParentFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_ReportCompletedAsync(This,folder,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,folder,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_ReportFailedAsync(This,status,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxCreateFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs";
/* [object, uuid("03E4C02C-241C-4EA9-A68F-FF20BC5AFC85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxCreateFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest";
/* [object, uuid("9469E88A-A931-4779-923D-09A3EA292E29"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxDeleteFolderStatus status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_get_EmailFolderId(This,value) \
    ( (This)->lpVtbl->get_EmailFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_ReportFailedAsync(This,status,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDeleteFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs";
/* [object, uuid("B4D32D06-2332-4678-8378-28B579336846"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDeleteFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest";
/* [object, uuid("0B1DBBB4-750C-48E1-BCE4-8D589684FFBC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailAttachmentId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_get_EmailMessageId(This,value) \
    ( (This)->lpVtbl->get_EmailMessageId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_get_EmailAttachmentId(This,value) \
    ( (This)->lpVtbl->get_EmailAttachmentId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadAttachmentRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs";
/* [object, uuid("CCDDC46D-FFA8-4877-9F9D-FED7BCAF4104"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadAttachmentRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest";
/* [object, uuid("497B4187-5B4D-4B23-816C-F3842BEB753E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_get_EmailMessageId(This,value) \
    ( (This)->lpVtbl->get_EmailMessageId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxDownloadMessageRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs";
/* [object, uuid("470409AD-D0A0-4A5B-BB2A-37621039C53E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxDownloadMessageRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest";
/* [object, uuid("FE4B03AB-F86D-46D9-B4CE-BC8A6D9E9268"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxEmptyFolderStatus status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_get_EmailFolderId(This,value) \
    ( (This)->lpVtbl->get_EmailFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_ReportFailedAsync(This,status,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxEmptyFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs";
/* [object, uuid("7183F484-985A-4AC0-B33F-EE0E2627A3C0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxEmptyFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest";
/* [object, uuid("616D6AF1-70D4-4832-B869-B80542AE9BE8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CEmail__CEmailRecipient * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForwardHeaderType )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMessageBodyKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForwardHeader )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_EmailMessageId(This,value) \
    ( (This)->lpVtbl->get_EmailMessageId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_Recipients(This,value) \
    ( (This)->lpVtbl->get_Recipients(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_ForwardHeaderType(This,value) \
    ( (This)->lpVtbl->get_ForwardHeaderType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_ForwardHeader(This,value) \
    ( (This)->lpVtbl->get_ForwardHeader(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs";
/* [object, uuid("2BD8F33A-2974-4759-A5A5-58F44D3C0275"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxForwardMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest";
/* [object, uuid("9B380789-1E88-4E01-84CC-1386AD9A2C2F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedFormat )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMailboxAutoReplyMessageResponseKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * autoReplySettings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_get_RequestedFormat(This,value) \
    ( (This)->lpVtbl->get_RequestedFormat(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_ReportCompletedAsync(This,autoReplySettings,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,autoReplySettings,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxGetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs";
/* [object, uuid("D79F55C2-FD45-4004-8A91-9BACF38B7022"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxGetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest";
/* [object, uuid("10BA2856-4A95-4068-91CC-67CC7ACF454F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewParentFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewFolderName )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_get_EmailFolderId(This,value) \
    ( (This)->lpVtbl->get_EmailFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_get_NewParentFolderId(This,value) \
    ( (This)->lpVtbl->get_NewParentFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_get_NewFolderName(This,value) \
    ( (This)->lpVtbl->get_NewFolderName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxMoveFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs";
/* [object, uuid("38623020-14BA-4C88-8698-7239E3C8AAA7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxMoveFolderRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest";
/* [object, uuid("5AEFF152-9799-4F9F-A399-FF07F3EEF04E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewStartTime )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewDuration )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_EmailMessageId(This,value) \
    ( (This)->lpVtbl->get_EmailMessageId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_NewStartTime(This,value) \
    ( (This)->lpVtbl->get_NewStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_NewDuration(This,value) \
    ( (This)->lpVtbl->get_NewDuration(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs";
/* [object, uuid("FB480B98-33AD-4A67-8251-0F9C249B6A20"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest";
/* [object, uuid("EFA4CF70-7B39-4C9B-811E-41EAF43A332D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recipients )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailRecipientResolutionResult * resolutionResults,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_get_Recipients(This,value) \
    ( (This)->lpVtbl->get_Recipients(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_ReportCompletedAsync(This,resolutionResults,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,resolutionResults,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxResolveRecipientsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs";
/* [object, uuid("260F9E02-B2CF-40F8-8C28-E3ED43B1E89A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxResolveRecipientsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest";
/* [object, uuid("090EEBDF-5A96-41D3-8AD8-34912F9AA60E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailFolderId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailQueryOptions * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuggestedBatchSize )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveMessageAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMessage * message,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CEmail_CEmailBatchStatus batchStatus,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_get_EmailFolderId(This,value) \
    ( (This)->lpVtbl->get_EmailFolderId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_get_SuggestedBatchSize(This,value) \
    ( (This)->lpVtbl->get_SuggestedBatchSize(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_SaveMessageAsync(This,message,result) \
    ( (This)->lpVtbl->SaveMessageAsync(This,message,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_ReportFailedAsync(This,batchStatus,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,batchStatus,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs";
/* [object, uuid("14101B4E-ED9E-45D1-AD7A-CC9B7F643AE2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxServerSearchReadBatchRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest";
/* [object, uuid("75A422D0-A88E-4E54-8DC7-C243186B774E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoReplySettings )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CIEmailMailboxAutoReplySettings * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_get_AutoReplySettings(This,value) \
    ( (This)->lpVtbl->get_AutoReplySettings(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs";
/* [object, uuid("09DA11AD-D7CA-4087-AC86-53FA67F76246"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSetAutoReplySettingsRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest";
/* [object, uuid("4E10E8E4-7E67-405A-B673-DC60C91090FC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs";
/* [object, uuid("439A031A-8FCC-4AE5-B9B5-D434E0A65AA8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest";
/* [object, uuid("5B99AC93-B2CF-4888-BA4F-306B6B66DF30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMessageId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CEmail_CEmailMeetingResponseType * response
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SendUpdate )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_EmailMessageId(This,value) \
    ( (This)->lpVtbl->get_EmailMessageId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_Response(This,response) \
    ( (This)->lpVtbl->get_Response(This,response) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_get_SendUpdate(This,value) \
    ( (This)->lpVtbl->get_SendUpdate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs";
/* [object, uuid("6898D761-56C9-4F17-BE31-66FDA94BA159"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequest[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest";
/* [object, uuid("A94D3931-E11A-4F97-B81A-187A70A8F41A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailMailboxId )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CEmail__CEmailCertificateValidationStatus * validationStatuses,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_get_EmailMailboxId(This,value) \
    ( (This)->lpVtbl->get_EmailMailboxId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_get_Certificates(This,value) \
    ( (This)->lpVtbl->get_Certificates(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_ReportCompletedAsync(This,validationStatuses,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,validationStatuses,result) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Email_DataProvider_IEmailMailboxValidateCertificatesRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs";
/* [object, uuid("2583BF17-02FF-49FE-A73C-03F37566C691"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CEmail_CDataProvider_CIEmailMailboxValidateCertificatesRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection[] = L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Email.DataProvider.EmailDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxCreateFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxCreateFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDeleteFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDeleteFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadAttachmentRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadAttachmentRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxDownloadMessageRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxDownloadMessageRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxEmptyFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxEmptyFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxForwardMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxForwardMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxGetAutoReplySettingsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxGetAutoReplySettingsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxMoveFolderRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxMoveFolderRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxProposeNewTimeForMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxProposeNewTimeForMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxResolveRecipientsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxResolveRecipientsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxServerSearchReadBatchRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxServerSearchReadBatchRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSetAutoReplySettingsRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSetAutoReplySettingsRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxUpdateMeetingResponseRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxUpdateMeetingResponseRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Email.DataProvider.IEmailMailboxValidateCertificatesRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs[] = L"Windows.ApplicationModel.Email.DataProvider.EmailMailboxValidateCertificatesRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Eemail2Edataprovider_p_h__

#endif // __windows2Eapplicationmodel2Eemail2Edataprovider_h__
