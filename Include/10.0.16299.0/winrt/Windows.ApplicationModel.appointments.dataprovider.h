/* Header file automatically generated from windows.applicationmodel.appointments.dataprovider.idl */
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
#ifndef __windows2Eapplicationmodel2Eappointments2Edataprovider_h__
#define __windows2Eapplicationmodel2Eappointments2Edataprovider_h__
#ifndef __windows2Eapplicationmodel2Eappointments2Edataprovider_p_h__
#define __windows2Eapplicationmodel2Eappointments2Edataprovider_p_h__


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
#include "Windows.ApplicationModel.Appointments.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarCancelMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarCancelMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarCreateOrUpdateAppointmentRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarForwardMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarForwardMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarProposeNewTimeForMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarUpdateMeetingResponseRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    interface IAppointmentDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentDataProviderConnection;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarCancelMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0e9cc1d8-0d26-5207-b7d9-9ad1bf66e1e6"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCancelMeetingRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b45150b9-df09-5c86-b57d-3e6deff24767"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarForwardMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8961d738-ecdc-53c8-b0ec-e729d8109459"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarForwardMeetingRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4fe460a4-e875-5836-9eec-273d52c86ab3"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarSyncManagerSyncRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("37f52677-5f3a-57e6-82f5-cbab2e4dbe8e"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarSyncManagerSyncRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarUpdateMeetingResponseRequestEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5370df2b-62cd-5133-93e6-fc80a502af64"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs*, ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection, Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::AppointmentCalendarUpdateMeetingResponseRequestEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection*,ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequestEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#define DEF___FIReference_1_Windows__CFoundation__CDateTime_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5541d8a7-497c-5aa4-86fc-7713adbf2a2c"))
IReference<struct ABI::Windows::Foundation::DateTime> : IReference_impl<struct ABI::Windows::Foundation::DateTime> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.DateTime>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::DateTime> __FIReference_1_Windows__CFoundation__CDateTime_t;
#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CDateTime_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CDateTime ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
//#define __FIReference_1_Windows__CFoundation__CDateTime_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::DateTime>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CDateTime_USE */




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
            namespace Appointments {
                class AppointmentInvitee;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointmentInvitee;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("57e35198-1b41-54da-adaf-50ef1e93fded"))
IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fb9718a9-f059-52b0-a904-1a65e4281e40"))
IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba2f633a-5182-5eda-8e2e-a66e55b320ce"))
IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*, ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Appointments.AppointmentInvitee>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Appointments::AppointmentInvitee*> __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t;
#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
//#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Appointments::IAppointmentInvitee*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                class Appointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                interface IAppointment;
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment ABI::Windows::ApplicationModel::Appointments::IAppointment

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                
                typedef enum AppointmentParticipantResponse : int AppointmentParticipantResponse;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Appointments */} /* ABI */




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
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarCancelMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarCreateOrUpdateAppointmentRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarForwardMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarProposeNewTimeForMeetingRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarSyncManagerSyncRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentCalendarUpdateMeetingResponseRequest;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    class AppointmentDataProviderTriggerDetails;
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */












/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("49460F8D-6434-40D7-AD46-6297419314D1"), exclusiveto, contract] */
                    MIDL_INTERFACE("49460F8D-6434-40D7-AD46-6297419314D1")
                    IAppointmentCalendarCancelMeetingRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentOriginalStartTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Comment(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotifyInvitees(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarCancelMeetingRequest=_uuidof(IAppointmentCalendarCancelMeetingRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("1A79BE16-7F30-4E35-BEEF-9D2C7B6DCAE1"), exclusiveto, contract] */
                    MIDL_INTERFACE("1A79BE16-7F30-4E35-BEEF-9D2C7B6DCAE1")
                    IAppointmentCalendarCancelMeetingRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCancelMeetingRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarCancelMeetingRequestEventArgs=_uuidof(IAppointmentCalendarCancelMeetingRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("2E62F2B2-CA96-48AC-9124-406B19FEFA70"), exclusiveto, contract] */
                    MIDL_INTERFACE("2E62F2B2-CA96-48AC-9124-406B19FEFA70")
                    IAppointmentCalendarCreateOrUpdateAppointmentRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Appointment(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotifyInvitees(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangedProperties(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Appointments::IAppointment * createdOrUpdatedAppointment,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarCreateOrUpdateAppointmentRequest=_uuidof(IAppointmentCalendarCreateOrUpdateAppointmentRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("CF8DED28-002E-4BF7-8E9D-5E20D49AA3BA"), exclusiveto, contract] */
                    MIDL_INTERFACE("CF8DED28-002E-4BF7-8E9D-5E20D49AA3BA")
                    IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarCreateOrUpdateAppointmentRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs=_uuidof(IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("82E5EE56-26B6-4253-8A8F-6CF5F2FF7884"), exclusiveto, contract] */
                    MIDL_INTERFACE("82E5EE56-26B6-4253-8A8F-6CF5F2FF7884")
                    IAppointmentCalendarForwardMeetingRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentOriginalStartTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invitees(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
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

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarForwardMeetingRequest=_uuidof(IAppointmentCalendarForwardMeetingRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("3109151A-23A2-42FD-9C82-C9A60D59F8A8"), exclusiveto, contract] */
                    MIDL_INTERFACE("3109151A-23A2-42FD-9C82-C9A60D59F8A8")
                    IAppointmentCalendarForwardMeetingRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarForwardMeetingRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarForwardMeetingRequestEventArgs=_uuidof(IAppointmentCalendarForwardMeetingRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("CE1C63F5-EDF6-43C3-82B7-BE6B368C6900"), exclusiveto, contract] */
                    MIDL_INTERFACE("CE1C63F5-EDF6-43C3-82B7-BE6B368C6900")
                    IAppointmentCalendarProposeNewTimeForMeetingRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentOriginalStartTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
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

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarProposeNewTimeForMeetingRequest=_uuidof(IAppointmentCalendarProposeNewTimeForMeetingRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("D2D777D8-FED1-4280-A3BA-2E1F47609AA2"), exclusiveto, contract] */
                    MIDL_INTERFACE("D2D777D8-FED1-4280-A3BA-2E1F47609AA2")
                    IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarProposeNewTimeForMeetingRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs=_uuidof(IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("12AB382B-7163-4A56-9A4E-7223A84ADF46"), exclusiveto, contract] */
                    MIDL_INTERFACE("12AB382B-7163-4A56-9A4E-7223A84ADF46")
                    IAppointmentCalendarSyncManagerSyncRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportCompletedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReportFailedAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarSyncManagerSyncRequest=_uuidof(IAppointmentCalendarSyncManagerSyncRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("CA17C6F7-0284-4EDD-87BA-4D8F69DCF5C0"), exclusiveto, contract] */
                    MIDL_INTERFACE("CA17C6F7-0284-4EDD-87BA-4D8F69DCF5C0")
                    IAppointmentCalendarSyncManagerSyncRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarSyncManagerSyncRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarSyncManagerSyncRequestEventArgs=_uuidof(IAppointmentCalendarSyncManagerSyncRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("A36D608C-C29D-4B94-B086-7E9FF7BD84A0"), exclusiveto, contract] */
                    MIDL_INTERFACE("A36D608C-C29D-4B94-B086-7E9FF7BD84A0")
                    IAppointmentCalendarUpdateMeetingResponseRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentCalendarLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentLocalId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppointmentOriginalStartTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                            /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Appointments::AppointmentParticipantResponse * response
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

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarUpdateMeetingResponseRequest=_uuidof(IAppointmentCalendarUpdateMeetingResponseRequest);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("88759883-97BF-479D-AED5-0BE8CE567D1E"), exclusiveto, contract] */
                    MIDL_INTERFACE("88759883-97BF-479D-AED5-0BE8CE567D1E")
                    IAppointmentCalendarUpdateMeetingResponseRequestEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentCalendarUpdateMeetingResponseRequest * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs=_uuidof(IAppointmentCalendarUpdateMeetingResponseRequestEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("F3DD9D83-3254-465F-ABDB-928046552CF4"), exclusiveto, contract] */
                    MIDL_INTERFACE("F3DD9D83-3254-465F-ABDB-928046552CF4")
                    IAppointmentDataProviderConnection : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SyncRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SyncRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CreateOrUpdateAppointmentRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CreateOrUpdateAppointmentRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CancelMeetingRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CancelMeetingRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ForwardMeetingRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ForwardMeetingRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ProposeNewTimeForMeetingRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ProposeNewTimeForMeetingRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_UpdateMeetingResponseRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_UpdateMeetingResponseRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentDataProviderConnection=_uuidof(IAppointmentDataProviderConnection);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Appointments {
                namespace DataProvider {
                    /* [object, uuid("B3283C01-7E12-4E5E-B1EF-74FB68AC6F2A"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3283C01-7E12-4E5E-B1EF-74FB68AC6F2A")
                    IAppointmentDataProviderTriggerDetails : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Connection(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Appointments::DataProvider::IAppointmentDataProviderConnection * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAppointmentDataProviderTriggerDetails=_uuidof(IAppointmentDataProviderTriggerDetails);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Appointments */
    } /* DataProvider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

struct __x_ABI_CWindows_CFoundation_CDateTime;

#if !defined(____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;

typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;

interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CDateTime_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CDateTime_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CDateTime_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CDateTime_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointmentInvitee * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInviteeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment_FWD_DEFINED__




typedef enum __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse;





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
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest";
/* [object, uuid("49460F8D-6434-40D7-AD46-6297419314D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_AppointmentLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_AppointmentOriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_get_NotifyInvitees(This,value) \
    ( (This)->lpVtbl->get_NotifyInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs";
/* [object, uuid("1A79BE16-7F30-4E35-BEEF-9D2C7B6DCAE1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCancelMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest";
/* [object, uuid("2E62F2B2-CA96-48AC-9124-406B19FEFA70"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Appointment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotifyInvitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangedProperties )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CIAppointment * createdOrUpdatedAppointment,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_get_Appointment(This,value) \
    ( (This)->lpVtbl->get_Appointment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_get_NotifyInvitees(This,value) \
    ( (This)->lpVtbl->get_NotifyInvitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_get_ChangedProperties(This,value) \
    ( (This)->lpVtbl->get_ChangedProperties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_ReportCompletedAsync(This,createdOrUpdatedAppointment,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,createdOrUpdatedAppointment,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
/* [object, uuid("CF8DED28-002E-4BF7-8E9D-5E20D49AA3BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest";
/* [object, uuid("82E5EE56-26B6-4253-8A8F-6CF5F2FF7884"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invitees )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CAppointments__CAppointmentInvitee * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForwardHeader )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_AppointmentLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_AppointmentOriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_Invitees(This,value) \
    ( (This)->lpVtbl->get_Invitees(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_ForwardHeader(This,value) \
    ( (This)->lpVtbl->get_ForwardHeader(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs";
/* [object, uuid("3109151A-23A2-42FD-9C82-C9A60D59F8A8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarForwardMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest";
/* [object, uuid("CE1C63F5-EDF6-43C3-82B7-BE6B368C6900"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewDuration )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_AppointmentLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_AppointmentOriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_NewStartTime(This,value) \
    ( (This)->lpVtbl->get_NewStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_NewDuration(This,value) \
    ( (This)->lpVtbl->get_NewDuration(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
/* [object, uuid("D2D777D8-FED1-4280-A3BA-2E1F47609AA2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest";
/* [object, uuid("12AB382B-7163-4A56-9A4E-7223A84ADF46"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs";
/* [object, uuid("CA17C6F7-0284-4EDD-87BA-4D8F69DCF5C0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarSyncManagerSyncRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest";
/* [object, uuid("A36D608C-C29D-4B94-B086-7E9FF7BD84A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentCalendarLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentLocalId )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppointmentOriginalStartTime )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CAppointments_CAppointmentParticipantResponse * response
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Comment )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SendUpdate )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ReportCompletedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailedAsync )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_AppointmentCalendarLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentCalendarLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_AppointmentLocalId(This,value) \
    ( (This)->lpVtbl->get_AppointmentLocalId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_AppointmentOriginalStartTime(This,value) \
    ( (This)->lpVtbl->get_AppointmentOriginalStartTime(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_Response(This,response) \
    ( (This)->lpVtbl->get_Response(This,response) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_Comment(This,value) \
    ( (This)->lpVtbl->get_Comment(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_get_SendUpdate(This,value) \
    ( (This)->lpVtbl->get_SendUpdate(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_ReportCompletedAsync(This,result) \
    ( (This)->lpVtbl->ReportCompletedAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_ReportFailedAsync(This,result) \
    ( (This)->lpVtbl->ReportFailedAsync(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs";
/* [object, uuid("88759883-97BF-479D-AED5-0BE8CE567D1E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequest * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentCalendarUpdateMeetingResponseRequestEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection";
/* [object, uuid("F3DD9D83-3254-465F-ABDB-928046552CF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarSyncManagerSyncRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SyncRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CreateOrUpdateAppointmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CreateOrUpdateAppointmentRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CancelMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarCancelMeetingRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CancelMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarForwardMeetingRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ForwardMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ProposeNewTimeForMeetingRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentDataProviderConnection_Windows__CApplicationModel__CAppointments__CDataProvider__CAppointmentCalendarUpdateMeetingResponseRequestEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_UpdateMeetingResponseRequested )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_SyncRequested(This,handler,token) \
    ( (This)->lpVtbl->add_SyncRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_SyncRequested(This,token) \
    ( (This)->lpVtbl->remove_SyncRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_CreateOrUpdateAppointmentRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CreateOrUpdateAppointmentRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_CreateOrUpdateAppointmentRequested(This,token) \
    ( (This)->lpVtbl->remove_CreateOrUpdateAppointmentRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_CancelMeetingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CancelMeetingRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_CancelMeetingRequested(This,token) \
    ( (This)->lpVtbl->remove_CancelMeetingRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_ForwardMeetingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ForwardMeetingRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_ForwardMeetingRequested(This,token) \
    ( (This)->lpVtbl->remove_ForwardMeetingRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_ProposeNewTimeForMeetingRequested(This,handler,token) \
    ( (This)->lpVtbl->add_ProposeNewTimeForMeetingRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_ProposeNewTimeForMeetingRequested(This,token) \
    ( (This)->lpVtbl->remove_ProposeNewTimeForMeetingRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_add_UpdateMeetingResponseRequested(This,handler,token) \
    ( (This)->lpVtbl->add_UpdateMeetingResponseRequested(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_remove_UpdateMeetingResponseRequested(This,token) \
    ( (This)->lpVtbl->remove_UpdateMeetingResponseRequested(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Appointments_DataProvider_IAppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails";
/* [object, uuid("B3283C01-7E12-4E5E-B1EF-74FB68AC6F2A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Connection )(
        __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_get_Connection(This,value) \
    ( (This)->lpVtbl->get_Connection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CAppointments_CDataProvider_CIAppointmentDataProviderTriggerDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCancelMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCancelMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCancelMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarCreateOrUpdateAppointmentRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarForwardMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarForwardMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarForwardMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarProposeNewTimeForMeetingRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarProposeNewTimeForMeetingRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarSyncManagerSyncRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarSyncManagerSyncRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarSyncManagerSyncRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequest[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentCalendarUpdateMeetingResponseRequestEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentCalendarUpdateMeetingResponseRequestEventArgs[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentCalendarUpdateMeetingResponseRequestEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderConnection ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderConnection[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Appointments.DataProvider.IAppointmentDataProviderTriggerDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Appointments_DataProvider_AppointmentDataProviderTriggerDetails[] = L"Windows.ApplicationModel.Appointments.DataProvider.AppointmentDataProviderTriggerDetails";
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
#endif // __windows2Eapplicationmodel2Eappointments2Edataprovider_p_h__

#endif // __windows2Eapplicationmodel2Eappointments2Edataprovider_h__
