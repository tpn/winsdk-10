/* Header file automatically generated from windows.devices.alljoyn.idl */
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
#ifndef __windows2Edevices2Ealljoyn_h__
#define __windows2Edevices2Ealljoyn_h__
#ifndef __windows2Edevices2Ealljoyn_p_h__
#define __windows2Edevices2Ealljoyn_p_h__


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
#include "Windows.Globalization.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAboutData;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData ABI::Windows::Devices::AllJoyn::IAllJoynAboutData

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAboutDataView;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAboutDataViewStatics;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataViewStatics

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAcceptSessionJoiner;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAcceptSessionJoinerEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAcceptSessionJoinerEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynAuthenticationCompleteEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusAttachment;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusAttachment2;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment2

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusAttachmentFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusAttachmentStateChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusAttachmentStatics;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStatics

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusObject;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject ABI::Windows::Devices::AllJoyn::IAllJoynBusObject

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusObjectFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusObjectStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynBusObjectStoppedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynCredentials;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials ABI::Windows::Devices::AllJoyn::IAllJoynCredentials

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynCredentialsRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynCredentialsVerificationRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynMessageInfo;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo ABI::Windows::Devices::AllJoyn::IAllJoynMessageInfo

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynMessageInfoFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory ABI::Windows::Devices::AllJoyn::IAllJoynMessageInfoFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynProducer;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer ABI::Windows::Devices::AllJoyn::IAllJoynProducer

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynProducerStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynProducerStoppedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynServiceInfo;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynServiceInfoFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynServiceInfoRemovedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynServiceInfoRemovedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynServiceInfoStatics;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoStatics

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSession;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession ABI::Windows::Devices::AllJoyn::IAllJoynSession

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionJoinedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionJoinedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionLostEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionLostEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionMemberAddedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionMemberAddedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionMemberRemovedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionMemberRemovedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynSessionStatics;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics ABI::Windows::Devices::AllJoyn::IAllJoynSessionStatics

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynStatusStatics;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics ABI::Windows::Devices::AllJoyn::IAllJoynStatusStatics

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynWatcherStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs ABI::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                interface IAllJoynWatcherStoppedEventArgsFactory;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory ABI::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgsFactory

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                enum AllJoynAuthenticationMechanism : int;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#define DEF___FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0fbc36d2-f46e-5a4d-aa10-4c806b4945d6"))
IIterator<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> : IIterator_impl<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t;
#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
//#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE */





#ifndef DEF___FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#define DEF___FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d307c7af-4106-5d1c-b06c-5eb593d9be34"))
IIterable<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> : IIterable_impl<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t;
#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
//#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE */





#ifndef DEF___FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#define DEF___FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("eaf57f86-b059-5ac2-9c1f-d3c65eac67a3"))
IVectorView<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> : IVectorView_impl<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t;
#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
//#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE */





#ifndef DEF___FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#define DEF___FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("19c16b93-f9ca-5c05-bf73-e74cd054c587"))
IVector<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> : IVector_impl<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism> __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t;
#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
//#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_USE */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynAboutDataView;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ba2da2f5-f9b0-5c66-8fc9-7d437a67f28a"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*, ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.AllJoyn.AllJoynAboutDataView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3757414e-f54b-51c4-8f2f-e0477559b2ad"))
IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*, ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.AllJoyn.AllJoynAboutDataView>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynAboutDataView*> __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t;
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynAboutDataView*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynServiceInfo;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ffb22299-a9c9-5c2a-ace3-0cd0a6dd1039"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*, ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.AllJoyn.AllJoynServiceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b9ce48c1-16cc-5e46-91d5-e5cd06f8026e"))
IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*, ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.AllJoyn.AllJoynServiceInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynServiceInfo*> __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t;
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynSession;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("52490f64-c98f-5019-8361-b2a3e1679f27"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSession*, ABI::Windows::Devices::AllJoyn::IAllJoynSession*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.AllJoyn.AllJoynSession>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("74ae55f8-3d63-5472-913d-74e9a1125dd3"))
IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynSession*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSession*, ABI::Windows::Devices::AllJoyn::IAllJoynSession*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.AllJoyn.AllJoynSession>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::AllJoyn::AllJoynSession*> __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t;
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynSession*>
//#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::AllJoyn::IAllJoynSession*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynBusAttachment;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynAcceptSessionJoinerEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd224d96-f45c-5e3d-8860-8596d0e474f0"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynAcceptSessionJoinerEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynAuthenticationCompleteEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e4fd18b4-4cde-508e-8084-63e7283262c5"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationCompleteEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynAuthenticationCompleteEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynBusAttachmentStateChangedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("82a8561d-3693-5c90-8cf2-58de83d80243"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentStateChangedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachmentStateChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynCredentialsRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab2196e7-4b41-53bd-95b1-b80cad824795"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynCredentialsRequestedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynCredentialsVerificationRequestedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7ef99c96-51b1-5670-a41f-ae404f2ff53f"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynCredentialsVerificationRequestedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynCredentialsVerificationRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynSessionJoinedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("56bb8d26-39b6-53fa-8013-3781aa27a0bc"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*, ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusAttachment, Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::AllJoynSessionJoinedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynBusObject;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynBusObjectStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9871592f-823d-5630-be72-ca8f17846b71"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusObject*,ABI::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusObject*, ABI::Windows::Devices::AllJoyn::IAllJoynBusObject*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynBusObject, Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynBusObject*,ABI::Windows::Devices::AllJoyn::AllJoynBusObjectStoppedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusObject*,ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynBusObject*,ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynSessionLostEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dffc2b25-5ae2-52f1-bbc4-363cefeda03f"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSession*, ABI::Windows::Devices::AllJoyn::IAllJoynSession*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynSession, Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionLostEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynSessionMemberAddedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("330baa61-1c24-5faa-af3c-4d69ad2f1e31"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSession*, ABI::Windows::Devices::AllJoyn::IAllJoynSession*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynSession, Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberAddedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynSessionMemberRemovedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2969ed7c-db6c-58aa-9f6d-89e7fe089fc1"))
ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSession*, ABI::Windows::Devices::AllJoyn::IAllJoynSession*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs*, ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.AllJoyn.AllJoynSession, Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::AllJoyn::AllJoynSession*,ABI::Windows::Devices::AllJoyn::AllJoynSessionMemberRemovedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::AllJoyn::IAllJoynSession*,ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60310303-49c5-52e6-abc6-a9b36eccc716"))
IKeyValuePair<HSTRING,HSTRING> : IKeyValuePair_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,HSTRING> __FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
//#define __FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("05eb86f1-7140-5517-b88d-cbaebe57e6b1"))
IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e9bdaaf0-cbf6-5c72-be90-29cbf3a1319b"))
IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMapView_2_HSTRING_HSTRING_USE
#define DEF___FIMapView_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac7f26f2-feb7-5b2a-8ac4-345bc62caede"))
IMapView<HSTRING,HSTRING> : IMapView_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,HSTRING> __FIMapView_2_HSTRING_HSTRING_t;
#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
//#define __FIMapView_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_HSTRING_USE */




#ifndef DEF___FIMap_2_HSTRING_HSTRING_USE
#define DEF___FIMap_2_HSTRING_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f6d1f700-49c2-52ae-8154-826f9908773c"))
IMap<HSTRING,HSTRING> : IMap_impl<HSTRING,HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,HSTRING> __FIMap_2_HSTRING_HSTRING_t;
#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_HSTRING ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
//#define __FIMap_2_HSTRING_HSTRING_t ABI::Windows::Foundation::Collections::IMap<HSTRING,HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_HSTRING_USE */



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



namespace ABI {
    namespace Windows {
        namespace Globalization {
            class Language;
        } /* Windows */
    } /* Globalization */} /* ABI */

#ifndef ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            interface ILanguage;
        } /* Windows */
    } /* Globalization */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CILanguage ABI::Windows::Globalization::ILanguage

#endif // ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGlobalization__CLanguage_USE
#define DEF___FIIterator_1_Windows__CGlobalization__CLanguage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("30e99ae6-f414-5243-8db2-aab38ea3f1f1"))
IIterator<ABI::Windows::Globalization::Language*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Language*, ABI::Windows::Globalization::ILanguage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Globalization.Language>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Globalization::Language*> __FIIterator_1_Windows__CGlobalization__CLanguage_t;
#define __FIIterator_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGlobalization__CLanguage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Globalization::ILanguage*>
//#define __FIIterator_1_Windows__CGlobalization__CLanguage_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Globalization::ILanguage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGlobalization__CLanguage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGlobalization__CLanguage_USE
#define DEF___FIIterable_1_Windows__CGlobalization__CLanguage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("48409a10-61b6-5db1-a69d-8abc46ac608a"))
IIterable<ABI::Windows::Globalization::Language*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Language*, ABI::Windows::Globalization::ILanguage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Globalization.Language>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Globalization::Language*> __FIIterable_1_Windows__CGlobalization__CLanguage_t;
#define __FIIterable_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGlobalization__CLanguage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Globalization::ILanguage*>
//#define __FIIterable_1_Windows__CGlobalization__CLanguage_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Globalization::ILanguage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGlobalization__CLanguage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGlobalization__CLanguage_USE
#define DEF___FIVectorView_1_Windows__CGlobalization__CLanguage_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("144b0f3d-2d59-5dd2-b012-908ec3e06435"))
IVectorView<ABI::Windows::Globalization::Language*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Globalization::Language*, ABI::Windows::Globalization::ILanguage*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Globalization.Language>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Globalization::Language*> __FIVectorView_1_Windows__CGlobalization__CLanguage_t;
#define __FIVectorView_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGlobalization__CLanguage_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGlobalization__CLanguage ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Globalization::ILanguage*>
//#define __FIVectorView_1_Windows__CGlobalization__CLanguage_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Globalization::ILanguage*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGlobalization__CLanguage_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_int_USE
#define DEF___FIAsyncOperationCompletedHandler_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d60cae9d-88cb-59f1-8576-3fba44796be8"))
IAsyncOperationCompletedHandler<int> : IAsyncOperationCompletedHandler_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<int> __FIAsyncOperationCompletedHandler_1_int_t;
#define __FIAsyncOperationCompletedHandler_1_int ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_int ABI::Windows::Foundation::IAsyncOperationCompletedHandler<INT32>
//#define __FIAsyncOperationCompletedHandler_1_int_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_int_USE */




#ifndef DEF___FIAsyncOperation_1_int_USE
#define DEF___FIAsyncOperation_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("968b9665-06ed-5774-8f53-8edeabd5f7b5"))
IAsyncOperation<int> : IAsyncOperation_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<int> __FIAsyncOperation_1_int_t;
#define __FIAsyncOperation_1_int ABI::Windows::Foundation::__FIAsyncOperation_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_int ABI::Windows::Foundation::IAsyncOperation<INT32>
//#define __FIAsyncOperation_1_int_t ABI::Windows::Foundation::IAsyncOperation<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_int_USE */




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
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    enum ChainValidationResult : int;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcad2b7-0e3b-5eae-bf69-e1f6d9c888f8"))
IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterator_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628f58f-3f02-54f2-808f-e1117709d6d0"))
IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterable_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb383486-c2bc-5756-912d-6a708a07e5bd"))
IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVectorView_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */



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
        namespace Devices {
            namespace Enumeration {
                class DeviceWatcher;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceWatcher;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher ABI::Windows::Devices::Enumeration::IDeviceWatcher

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__





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


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
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







namespace ABI {
    namespace Windows {
        namespace Networking {
            namespace Sockets {
                
                typedef enum SocketSslErrorSeverity : int SocketSslErrorSeverity;
                
            } /* Windows */
        } /* Networking */
    } /* Sockets */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                class PasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */

#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Credentials {
                interface IPasswordCredential;
            } /* Windows */
        } /* Security */
    } /* Credentials */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential ABI::Windows::Security::Credentials::IPasswordCredential

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ChainValidationResult : int ChainValidationResult;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                
                typedef enum AllJoynAuthenticationMechanism : int AllJoynAuthenticationMechanism;
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                
                typedef enum AllJoynBusAttachmentState : int AllJoynBusAttachmentState;
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                
                typedef enum AllJoynSessionLostReason : int AllJoynSessionLostReason;
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                
                typedef enum AllJoynTrafficType : int AllJoynTrafficType;
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */











































namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynAboutData;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynCredentials;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynMessageInfo;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynProducerStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynServiceInfoRemovedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                class AllJoynWatcherStoppedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */










/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [v1_enum, contract] */
                enum AllJoynAuthenticationMechanism : int
                {
                    AllJoynAuthenticationMechanism_None = 0,
                    AllJoynAuthenticationMechanism_SrpAnonymous
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATEDENUMERATOR("SrpAnonymous is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                     = 1,
                    AllJoynAuthenticationMechanism_SrpLogon
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATEDENUMERATOR("SrpLogon is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                     = 2,
                    AllJoynAuthenticationMechanism_EcdheNull = 3,
                    AllJoynAuthenticationMechanism_EcdhePsk
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    DEPRECATEDENUMERATOR("EcdhePsk is deprecated and might not work on all platforms. For more info, see MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                     = 4,
                    AllJoynAuthenticationMechanism_EcdheEcdsa = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                    AllJoynAuthenticationMechanism_EcdheSpeke = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                    
                };
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynBusAttachmentState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [v1_enum, contract] */
                enum AllJoynBusAttachmentState : int
                {
                    AllJoynBusAttachmentState_Disconnected = 0,
                    AllJoynBusAttachmentState_Connecting = 1,
                    AllJoynBusAttachmentState_Connected = 2,
                    AllJoynBusAttachmentState_Disconnecting = 3,
                };
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynSessionLostReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [v1_enum, contract] */
                enum AllJoynSessionLostReason : int
                {
                    AllJoynSessionLostReason_None = 0,
                    AllJoynSessionLostReason_ProducerLeftSession = 1,
                    AllJoynSessionLostReason_ProducerClosedAbruptly = 2,
                    AllJoynSessionLostReason_RemovedByProducer = 3,
                    AllJoynSessionLostReason_LinkTimeout = 4,
                    AllJoynSessionLostReason_Other = 5,
                };
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynTrafficType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [v1_enum, contract] */
                enum AllJoynTrafficType : int
                {
                    AllJoynTrafficType_Unknown = 0,
                    AllJoynTrafficType_Messages = 1,
                    AllJoynTrafficType_RawUnreliable = 2,
                    AllJoynTrafficType_RawReliable = 4,
                };
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutData[] = L"Windows.Devices.AllJoyn.IAllJoynAboutData";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("E5A9BF00-1FA2-4839-93EF-F9DF404890F7"), exclusiveto, contract] */
                MIDL_INTERFACE("E5A9BF00-1FA2-4839-93EF-F9DF404890F7")
                IAllJoynAboutData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultAppName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultAppName(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppNames(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateOfManufacture(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DateOfManufacture(
                        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultDescription(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultDescription(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Descriptions(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultManufacturer(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultManufacturer(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Manufacturers(
                        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModelNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ModelNumber(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SoftwareVersion(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportUrl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SupportUrl(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppId(
                        /* [in] */GUID value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAboutData=_uuidof(IAllJoynAboutData);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutDataView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataView";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("6823111F-6212-4934-9C48-E19CA4984288"), exclusiveto, contract] */
                MIDL_INTERFACE("6823111F-6212-4934-9C48-E19CA4984288")
                IAllJoynAboutDataView : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AJSoftwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppId(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DateOfManufacture(
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultLanguage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::ILanguage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModelNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedLanguages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportUrl(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Description(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Manufacturer(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAboutDataView=_uuidof(IAllJoynAboutDataView);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("57EDB688-0C5E-416E-88B5-39B32D25C47D"), exclusiveto, contract] */
                MIDL_INTERFACE("57EDB688-0C5E-416E-88B5-39B32D25C47D")
                IAllJoynAboutDataViewStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDataBySessionPortAsync(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment,
                        /* [in] */UINT16 sessionPort,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetDataBySessionPortWithLanguageAsync(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment,
                        /* [in] */UINT16 sessionPort,
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::ILanguage * language,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAboutDataViewStatics=_uuidof(IAllJoynAboutDataViewStatics);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("4DA817D2-CD1D-4023-A7C4-16DEF89C28DF"), contract] */
                MIDL_INTERFACE("4DA817D2-CD1D-4023-A7C4-16DEF89C28DF")
                IAllJoynAcceptSessionJoiner : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAcceptSessionJoiner=_uuidof(IAllJoynAcceptSessionJoiner);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("4EFB5365-3E8A-4257-8F10-539CE0D56C0F"), exclusiveto, contract] */
                MIDL_INTERFACE("4EFB5365-3E8A-4257-8F10-539CE0D56C0F")
                IAllJoynAcceptSessionJoinerEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionPort(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrafficType(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynTrafficType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SamePhysicalNode(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SameNetwork(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAcceptSessionJoinerEventArgs=_uuidof(IAllJoynAcceptSessionJoinerEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("B4435BC0-6145-429E-84DB-D5BFE772B14F"), exclusiveto, contract] */
                MIDL_INTERFACE("B4435BC0-6145-429E-84DB-D5BFE772B14F")
                IAllJoynAcceptSessionJoinerEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [in] */UINT16 sessionPort,
                        /* [in] */ABI::Windows::Devices::AllJoyn::AllJoynTrafficType trafficType,
                        /* [in] */BYTE proximity,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoiner * acceptSessionJoiner,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynAcceptSessionJoinerEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAcceptSessionJoinerEventArgsFactory=_uuidof(IAllJoynAcceptSessionJoinerEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("97B4701C-15DC-4B53-B6A4-7D134300D7BF"), exclusiveto, contract] */
                MIDL_INTERFACE("97B4701C-15DC-4B53-B6A4-7D134300D7BF")
                IAllJoynAuthenticationCompleteEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationMechanism(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerUniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Succeeded(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynAuthenticationCompleteEventArgs=_uuidof(IAllJoynAuthenticationCompleteEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("F309F153-1EED-42C3-A20E-436D41FE62F6"), exclusiveto, contract] */
                MIDL_INTERFACE("F309F153-1EED-42C3-A20E-436D41FE62F6")
                IAllJoynBusAttachment : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AboutData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynAboutData * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionSpecification(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE PingAsync(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Connect(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Disconnect(void) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StateChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StateChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationMechanisms(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CredentialsRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CredentialsRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CredentialsVerificationRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CredentialsVerificationRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AuthenticationComplete(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AuthenticationComplete(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusAttachment=_uuidof(IAllJoynBusAttachment);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachment2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment2[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment2";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("3474CB1E-2368-43B2-B43E-6A3AC1278D98"), exclusiveto, contract] */
                MIDL_INTERFACE("3474CB1E-2368-43B2-B43E-6A3AC1278D98")
                IAllJoynBusAttachment2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAboutDataAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetAboutDataWithLanguageAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo,
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::ILanguage * language,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AcceptSessionJoinerRequested(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AcceptSessionJoinerRequested(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SessionJoined(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SessionJoined(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusAttachment2=_uuidof(IAllJoynBusAttachment2);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("642EF1A4-AD85-4DDF-90AE-604452B22288"), exclusiveto, contract] */
                MIDL_INTERFACE("642EF1A4-AD85-4DDF-90AE-604452B22288")
                IAllJoynBusAttachmentFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING connectionSpecification,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusAttachmentFactory=_uuidof(IAllJoynBusAttachmentFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("D82E75F4-C02A-41EC-A8D5-EAB1558953AA"), exclusiveto, contract] */
                MIDL_INTERFACE("D82E75F4-C02A-41EC-A8D5-EAB1558953AA")
                IAllJoynBusAttachmentStateChangedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynBusAttachmentState * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusAttachmentStateChangedEventArgs=_uuidof(IAllJoynBusAttachmentStateChangedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("839D4D3D-1051-40D7-872A-8D0141115B1F"), exclusiveto, contract] */
                MIDL_INTERFACE("839D4D3D-1051-40D7-872A-8D0141115B1F")
                IAllJoynBusAttachmentStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * * defaultBusAttachment
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetWatcher(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requiredInterfaces,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceWatcher * * deviceWatcher
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusAttachmentStatics=_uuidof(IAllJoynBusAttachmentStatics);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObject[] = L"Windows.Devices.AllJoyn.IAllJoynBusObject";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("E8FD825E-F73A-490C-8804-04E026643047"), exclusiveto, contract] */
                MIDL_INTERFACE("E8FD825E-F73A-490C-8804-04E026643047")
                IAllJoynBusObject : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddProducer(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynProducer * producer
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BusAttachment(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSession * * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Stopped(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Stopped(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusObject=_uuidof(IAllJoynBusObject);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("2C2F9F0B-8E02-4F9C-AC27-EA6DAD5D3B50"), exclusiveto, contract] */
                MIDL_INTERFACE("2C2F9F0B-8E02-4F9C-AC27-EA6DAD5D3B50")
                IAllJoynBusObjectFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING objectPath,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusObject * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithBusAttachment(
                        /* [in] */__RPC__in HSTRING objectPath,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusObject * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusObjectFactory=_uuidof(IAllJoynBusObjectFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("DE102115-EF8E-4D42-B93B-A2AE74519766"), exclusiveto, contract] */
                MIDL_INTERFACE("DE102115-EF8E-4D42-B93B-A2AE74519766")
                IAllJoynBusObjectStoppedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusObjectStoppedEventArgs=_uuidof(IAllJoynBusObjectStoppedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("6B22FD48-D0A3-4255-953A-4772B4028073"), exclusiveto, contract] */
                MIDL_INTERFACE("6B22FD48-D0A3-4255-953A-4772B4028073")
                IAllJoynBusObjectStoppedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */INT32 status,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusObjectStoppedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynBusObjectStoppedEventArgsFactory=_uuidof(IAllJoynBusObjectStoppedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentials
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentials
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentials[] = L"Windows.Devices.AllJoyn.IAllJoynCredentials";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("824650F2-A190-40B1-ABAB-349EC244DFAA"), exclusiveto, contract] */
                MIDL_INTERFACE("824650F2-A190-40B1-ABAB-349EC244DFAA")
                IAllJoynCredentials : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationMechanism(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Certificate(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordCredential(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Credentials::IPasswordCredential * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PasswordCredential(
                        /* [in] */__RPC__in_opt ABI::Windows::Security::Credentials::IPasswordCredential * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timeout(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Timeout(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynCredentials=_uuidof(IAllJoynCredentials);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("6A87E34E-B069-4B80-9E1A-41BC837C65D2"), exclusiveto, contract] */
                MIDL_INTERFACE("6A87E34E-B069-4B80-9E1A-41BC837C65D2")
                IAllJoynCredentialsRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttemptCount(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Credentials(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynCredentials * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerUniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestedUserName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynCredentialsRequestedEventArgs=_uuidof(IAllJoynCredentialsRequestedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("800A7612-B805-44AF-A2E1-792AB655A2D0"), exclusiveto, contract] */
                MIDL_INTERFACE("800A7612-B805-44AF-A2E1-792AB655A2D0")
                IAllJoynCredentialsVerificationRequestedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationMechanism(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynAuthenticationMechanism * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerUniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerCertificate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerCertificateErrorSeverity(
                        /* [retval, out] */__RPC__out ABI::Windows::Networking::Sockets::SocketSslErrorSeverity * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerCertificateErrors(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeerIntermediateCertificates(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Accept(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynCredentialsVerificationRequestedEventArgs=_uuidof(IAllJoynCredentialsVerificationRequestedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynMessageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfo";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("FF2B0127-2C12-4859-AA3A-C74461EE814C"), exclusiveto, contract] */
                MIDL_INTERFACE("FF2B0127-2C12-4859-AA3A-C74461EE814C")
                IAllJoynMessageInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SenderUniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynMessageInfo=_uuidof(IAllJoynMessageInfo);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("34664C2A-8289-43D4-B4A8-3F4DE359F043"), exclusiveto, contract] */
                MIDL_INTERFACE("34664C2A-8289-43D4-B4A8-3F4DE359F043")
                IAllJoynMessageInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING senderUniqueName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynMessageInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynMessageInfoFactory=_uuidof(IAllJoynMessageInfoFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducer[] = L"Windows.Devices.AllJoyn.IAllJoynProducer";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("9D084679-469B-495A-A710-AC50F123069F"), contract] */
                MIDL_INTERFACE("9D084679-469B-495A-A710-AC50F123069F")
                IAllJoynProducer : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SetBusObject(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusObject * busObject
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynProducer=_uuidof(IAllJoynProducer);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("51309770-4937-492D-8080-236439987CEB"), exclusiveto, contract] */
                MIDL_INTERFACE("51309770-4937-492D-8080-236439987CEB")
                IAllJoynProducerStoppedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynProducerStoppedEventArgs=_uuidof(IAllJoynProducerStoppedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("56529961-B219-4D6E-9F78-FA3F99FA8FE5"), exclusiveto, contract] */
                MIDL_INTERFACE("56529961-B219-4D6E-9F78-FA3F99FA8FE5")
                IAllJoynProducerStoppedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */INT32 status,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynProducerStoppedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynProducerStoppedEventArgsFactory=_uuidof(IAllJoynProducerStoppedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfo";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("4CBE8209-B93E-4182-999B-DDD000F9C575"), exclusiveto, contract] */
                MIDL_INTERFACE("4CBE8209-B93E-4182-999B-DDD000F9C575")
                IAllJoynServiceInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ObjectPath(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionPort(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynServiceInfo=_uuidof(IAllJoynServiceInfo);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("7581DABD-FE03-4F4B-94A4-F02FDCBD11B8"), exclusiveto, contract] */
                MIDL_INTERFACE("7581DABD-FE03-4F4B-94A4-F02FDCBD11B8")
                IAllJoynServiceInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [in] */__RPC__in HSTRING objectPath,
                        /* [in] */UINT16 sessionPort,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynServiceInfoFactory=_uuidof(IAllJoynServiceInfoFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("3057A95F-1D3F-41F3-8969-E32792627396"), exclusiveto, contract] */
                MIDL_INTERFACE("3057A95F-1D3F-41F3-8969-E32792627396")
                IAllJoynServiceInfoRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynServiceInfoRemovedEventArgs=_uuidof(IAllJoynServiceInfoRemovedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("0DBF8627-9AFF-4955-9227-6953BAF41569"), exclusiveto, contract] */
                MIDL_INTERFACE("0DBF8627-9AFF-4955-9227-6953BAF41569")
                IAllJoynServiceInfoRemovedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfoRemovedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynServiceInfoRemovedEventArgsFactory=_uuidof(IAllJoynServiceInfoRemovedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("5678570A-603A-49FC-B750-0EF13609213C"), exclusiveto, contract] */
                MIDL_INTERFACE("5678570A-603A-49FC-B750-0EF13609213C")
                IAllJoynServiceInfoStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynServiceInfoStatics=_uuidof(IAllJoynServiceInfoStatics);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSession[] = L"Windows.Devices.AllJoyn.IAllJoynSession";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("E8D11B0C-C0D4-406C-88A9-A93EFA85D4B1"), exclusiveto, contract] */
                MIDL_INTERFACE("E8D11B0C-C0D4-406C-88A9-A93EFA85D4B1")
                IAllJoynSession : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RemoveMemberAsync(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MemberAdded(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MemberAdded(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MemberRemoved(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MemberRemoved(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Lost(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Lost(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSession=_uuidof(IAllJoynSession);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("9E9F5BD0-B5D7-47C5-8DAB-B040CC192871"), exclusiveto, contract] */
                MIDL_INTERFACE("9E9F5BD0-B5D7-47C5-8DAB-B040CC192871")
                IAllJoynSessionJoinedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Session(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSession * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionJoinedEventArgs=_uuidof(IAllJoynSessionJoinedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("6824D689-D6CB-4D9E-A09E-35806870B17F"), exclusiveto, contract] */
                MIDL_INTERFACE("6824D689-D6CB-4D9E-A09E-35806870B17F")
                IAllJoynSessionJoinedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynSession * session,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSessionJoinedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionJoinedEventArgsFactory=_uuidof(IAllJoynSessionJoinedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("E766A48A-8BB8-4954-AE67-D2FA43D1F96B"), exclusiveto, contract] */
                MIDL_INTERFACE("E766A48A-8BB8-4954-AE67-D2FA43D1F96B")
                IAllJoynSessionLostEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::AllJoyn::AllJoynSessionLostReason * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionLostEventArgs=_uuidof(IAllJoynSessionLostEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("13BBFD32-D2F4-49C9-980E-2805E13586B1"), exclusiveto, contract] */
                MIDL_INTERFACE("13BBFD32-D2F4-49C9-980E-2805E13586B1")
                IAllJoynSessionLostEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::Devices::AllJoyn::AllJoynSessionLostReason reason,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSessionLostEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionLostEventArgsFactory=_uuidof(IAllJoynSessionLostEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("49A2798A-0DD1-46C1-9CD6-27190E503A5E"), exclusiveto, contract] */
                MIDL_INTERFACE("49A2798A-0DD1-46C1-9CD6-27190E503A5E")
                IAllJoynSessionMemberAddedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionMemberAddedEventArgs=_uuidof(IAllJoynSessionMemberAddedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("341DE352-1D33-40A1-A1D3-E5777020E1F1"), exclusiveto, contract] */
                MIDL_INTERFACE("341DE352-1D33-40A1-A1D3-E5777020E1F1")
                IAllJoynSessionMemberAddedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberAddedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionMemberAddedEventArgsFactory=_uuidof(IAllJoynSessionMemberAddedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("409A219F-AA4A-4893-B430-BAA1B63C6219"), exclusiveto, contract] */
                MIDL_INTERFACE("409A219F-AA4A-4893-B430-BAA1B63C6219")
                IAllJoynSessionMemberRemovedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UniqueName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionMemberRemovedEventArgs=_uuidof(IAllJoynSessionMemberRemovedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("C4D355E8-42B8-4B67-B757-D0CFCAD59280"), exclusiveto, contract] */
                MIDL_INTERFACE("C4D355E8-42B8-4B67-B757-D0CFCAD59280")
                IAllJoynSessionMemberRemovedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING uniqueName,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynSessionMemberRemovedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionMemberRemovedEventArgsFactory=_uuidof(IAllJoynSessionMemberRemovedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionStatics[] = L"Windows.Devices.AllJoyn.IAllJoynSessionStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("9E05D604-A06C-46D4-B46C-0B0B54105B44"), exclusiveto, contract] */
                MIDL_INTERFACE("9E05D604-A06C-46D4-B46C-0B0B54105B44")
                IAllJoynSessionStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFromServiceInfoAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetFromServiceInfoAndBusAttachmentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynServiceInfo * serviceInfo,
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::AllJoyn::IAllJoynBusAttachment * busAttachment,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynSessionStatics=_uuidof(IAllJoynSessionStatics);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynStatusStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynStatusStatics[] = L"Windows.Devices.AllJoyn.IAllJoynStatusStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("D0B7A17E-0D29-4DA9-8AC6-54C554BEDBC5"), exclusiveto, contract] */
                MIDL_INTERFACE("D0B7A17E-0D29-4DA9-8AC6-54C554BEDBC5")
                IAllJoynStatusStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ok(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Fail(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OperationTimedOut(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OtherEndClosed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ConnectionRefused(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationFailed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationRejectedByUser(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SslConnectFailed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SslIdentityVerificationFailed(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InsufficientSecurity(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument1(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument2(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument3(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument4(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument5(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument6(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument7(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InvalidArgument8(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynStatusStatics=_uuidof(IAllJoynStatusStatics);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("C9FCA03B-701D-4AA8-97DD-A2BB0A8F5FA3"), exclusiveto, contract] */
                MIDL_INTERFACE("C9FCA03B-701D-4AA8-97DD-A2BB0A8F5FA3")
                IAllJoynWatcherStoppedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynWatcherStoppedEventArgs=_uuidof(IAllJoynWatcherStoppedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace AllJoyn {
                /* [object, uuid("878FA5A8-2D50-47E1-904A-20BF0D48C782"), exclusiveto, contract] */
                MIDL_INTERFACE("878FA5A8-2D50-47E1-904A-20BF0D48C782")
                IAllJoynWatcherStoppedEventArgsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */INT32 status,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::AllJoyn::IAllJoynWatcherStoppedEventArgs * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAllJoynWatcherStoppedEventArgsFactory=_uuidof(IAllJoynWatcherStoppedEventArgsFactory);
                
            } /* Windows */
        } /* Devices */
    } /* AllJoyn */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAboutData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAboutData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutData_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutData[] = L"Windows.Devices.AllJoyn.AllJoynAboutData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAboutDataView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutDataView_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutDataView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.AllJoynAboutDataView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachment ** Default Interface **
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachment2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachment_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusObjectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusObject ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObject_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObject[] = L"Windows.Devices.AllJoyn.AllJoynBusObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentials
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentials ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentials_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentials_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentials[] = L"Windows.Devices.AllJoyn.AllJoynCredentials";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynMessageInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynMessageInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynMessageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.AllJoynMessageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynServiceInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynSessionStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSession ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSession_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSession[] = L"Windows.Devices.AllJoyn.AllJoynSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynStatusStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynStatus_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynStatus[] = L"Windows.Devices.AllJoyn.AllJoynStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory;

#endif // ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism;
#if !defined(____FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

typedef struct __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;

interface __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

typedef  struct __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;

interface __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

typedef struct __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [in] */ enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;

interface __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__



#if !defined(____FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism;

typedef struct __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism *value);

    END_INTERFACE
} __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl;

interface __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism
{
    CONST_VTBL struct __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanismVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CAllJoyn__CAllJoynSession **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#if !defined(____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;

typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;

interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;

typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt HSTRING *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;

interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_HSTRING_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_HSTRING_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_HSTRING_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;

#endif // ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGlobalization__CLanguage __FIIterator_1_Windows__CGlobalization__CLanguage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CLanguage;

typedef struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CLanguage * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CLanguageVtbl;

interface __FIIterator_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGlobalization__CLanguage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGlobalization__CLanguage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGlobalization__CLanguage_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGlobalization__CLanguage_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGlobalization__CLanguage __FIIterable_1_Windows__CGlobalization__CLanguage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CLanguage;

typedef  struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CLanguage * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CLanguage **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CLanguageVtbl;

interface __FIIterable_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGlobalization__CLanguage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGlobalization__CLanguage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGlobalization__CLanguage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGlobalization__CLanguage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGlobalization__CLanguage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGlobalization__CLanguage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGlobalization__CLanguage_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGlobalization__CLanguage __FIVectorView_1_Windows__CGlobalization__CLanguage;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CLanguage;

typedef struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGlobalization_CILanguage * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CILanguage * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CLanguage * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CILanguage * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl;

interface __FIVectorView_1_Windows__CGlobalization__CLanguage
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CLanguageVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGlobalization__CLanguage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGlobalization__CLanguage_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGlobalization__CLanguage_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGlobalization__CLanguage_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGlobalization__CLanguage_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_int __FIAsyncOperationCompletedHandler_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_int;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_int __FIAsyncOperation_1_int;

typedef struct __FIAsyncOperationCompletedHandler_1_intVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_int * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_int *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_intVtbl;

interface __FIAsyncOperationCompletedHandler_1_int
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_int_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_int_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_int_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_int_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_int __FIAsyncOperation_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_int;

typedef struct __FIAsyncOperation_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_int * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_int * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_int * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_int * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_int *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_int * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_int **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_int * This, /* [retval][out] */ __RPC__out int *results);
    END_INTERFACE
} __FIAsyncOperation_1_intVtbl;

interface __FIAsyncOperation_1_int
{
    CONST_VTBL struct __FIAsyncOperation_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_int_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_int_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_int_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_int_INTERFACE_DEFINED__


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


enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__


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


#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__








typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;




#ifndef ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;

#endif // ____x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;






typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism;


typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState;


typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason;


typedef enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType;









































































/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynAuthenticationMechanism
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism
{
    AllJoynAuthenticationMechanism_None = 0,
    AllJoynAuthenticationMechanism_SrpAnonymous
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATEDENUMERATOR("SrpAnonymous is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
     = 1,
    AllJoynAuthenticationMechanism_SrpLogon
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATEDENUMERATOR("SrpLogon is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
     = 2,
    AllJoynAuthenticationMechanism_EcdheNull = 3,
    AllJoynAuthenticationMechanism_EcdhePsk
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    DEPRECATEDENUMERATOR("EcdhePsk is deprecated and might not work on all platforms. For more info, see MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
     = 4,
    AllJoynAuthenticationMechanism_EcdheEcdsa = 5,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    AllJoynAuthenticationMechanism_EcdheSpeke = 6,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynBusAttachmentState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState
{
    AllJoynBusAttachmentState_Disconnected = 0,
    AllJoynBusAttachmentState_Connecting = 1,
    AllJoynBusAttachmentState_Connected = 2,
    AllJoynBusAttachmentState_Disconnecting = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynSessionLostReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason
{
    AllJoynSessionLostReason_None = 0,
    AllJoynSessionLostReason_ProducerLeftSession = 1,
    AllJoynSessionLostReason_ProducerClosedAbruptly = 2,
    AllJoynSessionLostReason_RemovedByProducer = 3,
    AllJoynSessionLostReason_LinkTimeout = 4,
    AllJoynSessionLostReason_Other = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Devices.AllJoyn.AllJoynTrafficType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType
{
    AllJoynTrafficType_Unknown = 0,
    AllJoynTrafficType_Messages = 1,
    AllJoynTrafficType_RawUnreliable = 2,
    AllJoynTrafficType_RawReliable = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutData[] = L"Windows.Devices.AllJoyn.IAllJoynAboutData";
/* [object, uuid("E5A9BF00-1FA2-4839-93EF-F9DF404890F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultAppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultAppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppNames )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultDescription )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultDescription )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Descriptions )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultManufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultManufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Manufacturers )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * This,
        /* [in] */GUID value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_DefaultAppName(This,value) \
    ( (This)->lpVtbl->get_DefaultAppName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_DefaultAppName(This,value) \
    ( (This)->lpVtbl->put_DefaultAppName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_AppNames(This,value) \
    ( (This)->lpVtbl->get_AppNames(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_DateOfManufacture(This,value) \
    ( (This)->lpVtbl->get_DateOfManufacture(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_DateOfManufacture(This,value) \
    ( (This)->lpVtbl->put_DateOfManufacture(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_DefaultDescription(This,value) \
    ( (This)->lpVtbl->get_DefaultDescription(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_DefaultDescription(This,value) \
    ( (This)->lpVtbl->put_DefaultDescription(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_Descriptions(This,value) \
    ( (This)->lpVtbl->get_Descriptions(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_DefaultManufacturer(This,value) \
    ( (This)->lpVtbl->get_DefaultManufacturer(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_DefaultManufacturer(This,value) \
    ( (This)->lpVtbl->put_DefaultManufacturer(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_Manufacturers(This,value) \
    ( (This)->lpVtbl->get_Manufacturers(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_ModelNumber(This,value) \
    ( (This)->lpVtbl->get_ModelNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_ModelNumber(This,value) \
    ( (This)->lpVtbl->put_ModelNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_SoftwareVersion(This,value) \
    ( (This)->lpVtbl->get_SoftwareVersion(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_SoftwareVersion(This,value) \
    ( (This)->lpVtbl->put_SoftwareVersion(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_SupportUrl(This,value) \
    ( (This)->lpVtbl->get_SupportUrl(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_SupportUrl(This,value) \
    ( (This)->lpVtbl->put_SupportUrl(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_put_AppId(This,value) \
    ( (This)->lpVtbl->put_AppId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutDataView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataView";
/* [object, uuid("6823111F-6212-4934-9C48-E19CA4984288"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AJSoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DateOfManufacture )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultLanguage )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareVersion )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedLanguages )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CGlobalization__CLanguage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportUrl )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_AJSoftwareVersion(This,value) \
    ( (This)->lpVtbl->get_AJSoftwareVersion(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_AppId(This,value) \
    ( (This)->lpVtbl->get_AppId(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_DateOfManufacture(This,value) \
    ( (This)->lpVtbl->get_DateOfManufacture(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_DefaultLanguage(This,value) \
    ( (This)->lpVtbl->get_DefaultLanguage(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_HardwareVersion(This,value) \
    ( (This)->lpVtbl->get_HardwareVersion(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_ModelNumber(This,value) \
    ( (This)->lpVtbl->get_ModelNumber(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_SoftwareVersion(This,value) \
    ( (This)->lpVtbl->get_SoftwareVersion(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_SupportedLanguages(This,value) \
    ( (This)->lpVtbl->get_SupportedLanguages(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_SupportUrl(This,value) \
    ( (This)->lpVtbl->get_SupportUrl(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_AppName(This,value) \
    ( (This)->lpVtbl->get_AppName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_Description(This,value) \
    ( (This)->lpVtbl->get_Description(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_DeviceName(This,value) \
    ( (This)->lpVtbl->get_DeviceName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_get_Manufacturer(This,value) \
    ( (This)->lpVtbl->get_Manufacturer(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAboutDataViewStatics[] = L"Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics";
/* [object, uuid("57EDB688-0C5E-416E-88B5-39B32D25C47D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDataBySessionPortAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
        /* [in] */UINT16 sessionPort,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetDataBySessionPortWithLanguageAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
        /* [in] */UINT16 sessionPort,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * language,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_GetDataBySessionPortAsync(This,uniqueName,busAttachment,sessionPort,operation) \
    ( (This)->lpVtbl->GetDataBySessionPortAsync(This,uniqueName,busAttachment,sessionPort,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_GetDataBySessionPortWithLanguageAsync(This,uniqueName,busAttachment,sessionPort,language,operation) \
    ( (This)->lpVtbl->GetDataBySessionPortWithLanguageAsync(This,uniqueName,busAttachment,sessionPort,language,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutDataViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoiner[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoiner";
/* [object, uuid("4DA817D2-CD1D-4023-A7C4-16DEF89C28DF"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs";
/* [object, uuid("4EFB5365-3E8A-4257-8F10-539CE0D56C0F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionPort )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrafficType )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SamePhysicalNode )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SameNetwork )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_get_SessionPort(This,value) \
    ( (This)->lpVtbl->get_SessionPort(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_get_TrafficType(This,value) \
    ( (This)->lpVtbl->get_TrafficType(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_get_SamePhysicalNode(This,value) \
    ( (This)->lpVtbl->get_SamePhysicalNode(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_get_SameNetwork(This,value) \
    ( (This)->lpVtbl->get_SameNetwork(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAcceptSessionJoinerEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory";
/* [object, uuid("B4435BC0-6145-429E-84DB-D5BFE772B14F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [in] */UINT16 sessionPort,
        /* [in] */__x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynTrafficType trafficType,
        /* [in] */BYTE proximity,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoiner * acceptSessionJoiner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_Create(This,uniqueName,sessionPort,trafficType,proximity,acceptSessionJoiner,result) \
    ( (This)->lpVtbl->Create(This,uniqueName,sessionPort,trafficType,proximity,acceptSessionJoiner,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAcceptSessionJoinerEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs";
/* [object, uuid("97B4701C-15DC-4B53-B6A4-7D134300D7BF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_get_AuthenticationMechanism(This,value) \
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_get_PeerUniqueName(This,value) \
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_get_Succeeded(This,value) \
    ( (This)->lpVtbl->get_Succeeded(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAuthenticationCompleteEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment";
/* [object, uuid("F309F153-1EED-42C3-A20E-436D41FE62F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AboutData )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynAboutData * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionSpecification )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *PingAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynBusAttachmentStateChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanisms )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationMechanism * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CredentialsRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CredentialsRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CredentialsVerificationRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynCredentialsVerificationRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CredentialsVerificationRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AuthenticationComplete )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAuthenticationCompleteEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AuthenticationComplete )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_get_AboutData(This,value) \
    ( (This)->lpVtbl->get_AboutData(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_get_ConnectionSpecification(This,value) \
    ( (This)->lpVtbl->get_ConnectionSpecification(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_PingAsync(This,uniqueName,operation) \
    ( (This)->lpVtbl->PingAsync(This,uniqueName,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_Connect(This) \
    ( (This)->lpVtbl->Connect(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_Disconnect(This) \
    ( (This)->lpVtbl->Disconnect(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_add_StateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_StateChanged(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_remove_StateChanged(This,token) \
    ( (This)->lpVtbl->remove_StateChanged(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_get_AuthenticationMechanisms(This,value) \
    ( (This)->lpVtbl->get_AuthenticationMechanisms(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_add_CredentialsRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CredentialsRequested(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_remove_CredentialsRequested(This,token) \
    ( (This)->lpVtbl->remove_CredentialsRequested(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_add_CredentialsVerificationRequested(This,handler,token) \
    ( (This)->lpVtbl->add_CredentialsVerificationRequested(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_remove_CredentialsVerificationRequested(This,token) \
    ( (This)->lpVtbl->remove_CredentialsVerificationRequested(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_add_AuthenticationComplete(This,handler,token) \
    ( (This)->lpVtbl->add_AuthenticationComplete(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_remove_AuthenticationComplete(This,token) \
    ( (This)->lpVtbl->remove_AuthenticationComplete(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachment2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachment2[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachment2";
/* [object, uuid("3474CB1E-2368-43B2-B43E-6A3AC1278D98"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAboutDataAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetAboutDataWithLanguageAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CILanguage * language,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynAboutDataView * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AcceptSessionJoinerRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynAcceptSessionJoinerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AcceptSessionJoinerRequested )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SessionJoined )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusAttachment_Windows__CDevices__CAllJoyn__CAllJoynSessionJoinedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SessionJoined )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_GetAboutDataAsync(This,serviceInfo,operation) \
    ( (This)->lpVtbl->GetAboutDataAsync(This,serviceInfo,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_GetAboutDataWithLanguageAsync(This,serviceInfo,language,operation) \
    ( (This)->lpVtbl->GetAboutDataWithLanguageAsync(This,serviceInfo,language,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_add_AcceptSessionJoinerRequested(This,handler,token) \
    ( (This)->lpVtbl->add_AcceptSessionJoinerRequested(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_remove_AcceptSessionJoinerRequested(This,token) \
    ( (This)->lpVtbl->remove_AcceptSessionJoinerRequested(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_add_SessionJoined(This,handler,token) \
    ( (This)->lpVtbl->add_SessionJoined(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_remove_SessionJoined(This,token) \
    ( (This)->lpVtbl->remove_SessionJoined(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory";
/* [object, uuid("642EF1A4-AD85-4DDF-90AE-604452B22288"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory * This,
        /* [in] */__RPC__in HSTRING connectionSpecification,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_Create(This,connectionSpecification,result) \
    ( (This)->lpVtbl->Create(This,connectionSpecification,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs";
/* [object, uuid("D82E75F4-C02A-41EC-A8D5-EAB1558953AA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynBusAttachmentState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStateChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusAttachmentStatics[] = L"Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics";
/* [object, uuid("839D4D3D-1051-40D7-872A-8D0141115B1F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * defaultBusAttachment
        );
    HRESULT ( STDMETHODCALLTYPE *GetWatcher )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * requiredInterfaces,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceWatcher * * deviceWatcher
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_GetDefault(This,defaultBusAttachment) \
    ( (This)->lpVtbl->GetDefault(This,defaultBusAttachment) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_GetWatcher(This,requiredInterfaces,deviceWatcher) \
    ( (This)->lpVtbl->GetWatcher(This,requiredInterfaces,deviceWatcher) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachmentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObject[] = L"Windows.Devices.AllJoyn.IAllJoynBusObject";
/* [object, uuid("E8FD825E-F73A-490C-8804-04E026643047"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddProducer )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * producer
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BusAttachment )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Stopped )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynBusObject_Windows__CDevices__CAllJoyn__CAllJoynBusObjectStoppedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Stopped )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_Start(This) \
    ( (This)->lpVtbl->Start(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_AddProducer(This,producer) \
    ( (This)->lpVtbl->AddProducer(This,producer) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_get_BusAttachment(This,value) \
    ( (This)->lpVtbl->get_BusAttachment(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_add_Stopped(This,handler,token) \
    ( (This)->lpVtbl->add_Stopped(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_remove_Stopped(This,token) \
    ( (This)->lpVtbl->remove_Stopped(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObject
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectFactory";
/* [object, uuid("2C2F9F0B-8E02-4F9C-AC27-EA6DAD5D3B50"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
        /* [in] */__RPC__in HSTRING objectPath,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithBusAttachment )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory * This,
        /* [in] */__RPC__in HSTRING objectPath,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_Create(This,objectPath,result) \
    ( (This)->lpVtbl->Create(This,objectPath,result) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_CreateWithBusAttachment(This,objectPath,busAttachment,result) \
    ( (This)->lpVtbl->CreateWithBusAttachment(This,objectPath,busAttachment,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs";
/* [object, uuid("DE102115-EF8E-4D42-B93B-A2AE74519766"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynBusObjectStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory";
/* [object, uuid("6B22FD48-D0A3-4255-953A-4772B4028073"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory * This,
        /* [in] */INT32 status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_Create(This,status,result) \
    ( (This)->lpVtbl->Create(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObjectStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentials
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentials
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentials[] = L"Windows.Devices.AllJoyn.IAllJoynCredentials";
/* [object, uuid("824650F2-A190-40B1-ABAB-349EC244DFAA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordCredential )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PasswordCredential )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_get_AuthenticationMechanism(This,value) \
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_get_Certificate(This,value) \
    ( (This)->lpVtbl->get_Certificate(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_put_Certificate(This,value) \
    ( (This)->lpVtbl->put_Certificate(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_get_PasswordCredential(This,value) \
    ( (This)->lpVtbl->get_PasswordCredential(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_put_PasswordCredential(This,value) \
    ( (This)->lpVtbl->put_PasswordCredential(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_get_Timeout(This,value) \
    ( (This)->lpVtbl->get_Timeout(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_put_Timeout(This,value) \
    ( (This)->lpVtbl->put_Timeout(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs";
/* [object, uuid("6A87E34E-B069-4B80-9E1A-41BC837C65D2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttemptCount )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Credentials )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentials * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestedUserName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_get_AttemptCount(This,value) \
    ( (This)->lpVtbl->get_AttemptCount(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_get_Credentials(This,value) \
    ( (This)->lpVtbl->get_Credentials(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_get_PeerUniqueName(This,value) \
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_get_RequestedUserName(This,value) \
    ( (This)->lpVtbl->get_RequestedUserName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs";
/* [object, uuid("800A7612-B805-44AF-A2E1-792AB655A2D0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationMechanism )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynAuthenticationMechanism * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerCertificate )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerCertificateErrorSeverity )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerCertificateErrors )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeerIntermediateCertificates )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Accept )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_AuthenticationMechanism(This,value) \
    ( (This)->lpVtbl->get_AuthenticationMechanism(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_PeerUniqueName(This,value) \
    ( (This)->lpVtbl->get_PeerUniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_PeerCertificate(This,value) \
    ( (This)->lpVtbl->get_PeerCertificate(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_PeerCertificateErrorSeverity(This,value) \
    ( (This)->lpVtbl->get_PeerCertificateErrorSeverity(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_PeerCertificateErrors(This,value) \
    ( (This)->lpVtbl->get_PeerCertificateErrors(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_get_PeerIntermediateCertificates(This,value) \
    ( (This)->lpVtbl->get_PeerIntermediateCertificates(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_Accept(This) \
    ( (This)->lpVtbl->Accept(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynCredentialsVerificationRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynMessageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfo";
/* [object, uuid("FF2B0127-2C12-4859-AA3A-C74461EE814C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SenderUniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_get_SenderUniqueName(This,value) \
    ( (This)->lpVtbl->get_SenderUniqueName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynMessageInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory";
/* [object, uuid("34664C2A-8289-43D4-B4A8-3F4DE359F043"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory * This,
        /* [in] */__RPC__in HSTRING senderUniqueName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_Create(This,senderUniqueName,result) \
    ( (This)->lpVtbl->Create(This,senderUniqueName,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynMessageInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducer[] = L"Windows.Devices.AllJoyn.IAllJoynProducer";
/* [object, uuid("9D084679-469B-495A-A710-AC50F123069F"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBusObject )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusObject * busObject
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_SetBusObject(This,busObject) \
    ( (This)->lpVtbl->SetBusObject(This,busObject) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs";
/* [object, uuid("51309770-4937-492D-8080-236439987CEB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynProducerStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory";
/* [object, uuid("56529961-B219-4D6E-9F78-FA3F99FA8FE5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory * This,
        /* [in] */INT32 status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_Create(This,status,result) \
    ( (This)->lpVtbl->Create(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynProducerStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfo";
/* [object, uuid("4CBE8209-B93E-4182-999B-DDD000F9C575"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ObjectPath )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionPort )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_get_ObjectPath(This,value) \
    ( (This)->lpVtbl->get_ObjectPath(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_get_SessionPort(This,value) \
    ( (This)->lpVtbl->get_SessionPort(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory";
/* [object, uuid("7581DABD-FE03-4F4B-94A4-F02FDCBD11B8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [in] */__RPC__in HSTRING objectPath,
        /* [in] */UINT16 sessionPort,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_Create(This,uniqueName,objectPath,sessionPort,result) \
    ( (This)->lpVtbl->Create(This,uniqueName,objectPath,sessionPort,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs";
/* [object, uuid("3057A95F-1D3F-41F3-8969-E32792627396"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory";
/* [object, uuid("0DBF8627-9AFF-4955-9227-6953BAF41569"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_Create(This,uniqueName,result) \
    ( (This)->lpVtbl->Create(This,uniqueName,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoRemovedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynServiceInfoStatics[] = L"Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics";
/* [object, uuid("5678570A-603A-49FC-B750-0EF13609213C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynServiceInfo * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_FromIdAsync(This,deviceId,operation) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSession[] = L"Windows.Devices.AllJoyn.IAllJoynSession";
/* [object, uuid("E8D11B0C-C0D4-406C-88A9-A93EFA85D4B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveMemberAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_int * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MemberAdded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberAddedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MemberAdded )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MemberRemoved )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionMemberRemovedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MemberRemoved )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Lost )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CAllJoyn__CAllJoynSession_Windows__CDevices__CAllJoyn__CAllJoynSessionLostEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Lost )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_RemoveMemberAsync(This,uniqueName,operation) \
    ( (This)->lpVtbl->RemoveMemberAsync(This,uniqueName,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_add_MemberAdded(This,handler,token) \
    ( (This)->lpVtbl->add_MemberAdded(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_remove_MemberAdded(This,token) \
    ( (This)->lpVtbl->remove_MemberAdded(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_add_MemberRemoved(This,handler,token) \
    ( (This)->lpVtbl->add_MemberRemoved(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_remove_MemberRemoved(This,token) \
    ( (This)->lpVtbl->remove_MemberRemoved(This,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_add_Lost(This,handler,token) \
    ( (This)->lpVtbl->add_Lost(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_remove_Lost(This,token) \
    ( (This)->lpVtbl->remove_Lost(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs";
/* [object, uuid("9E9F5BD0-B5D7-47C5-8DAB-B040CC192871"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Session )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_get_Session(This,value) \
    ( (This)->lpVtbl->get_Session(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionJoinedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory";
/* [object, uuid("6824D689-D6CB-4D9E-A09E-35806870B17F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSession * session,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_Create(This,session,result) \
    ( (This)->lpVtbl->Create(This,session,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionJoinedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs";
/* [object, uuid("E766A48A-8BB8-4954-AE67-D2FA43D1F96B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionLostEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory";
/* [object, uuid("13BBFD32-D2F4-49C9-980E-2805E13586B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory * This,
        /* [in] */__x_ABI_CWindows_CDevices_CAllJoyn_CAllJoynSessionLostReason reason,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_Create(This,reason,result) \
    ( (This)->lpVtbl->Create(This,reason,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionLostEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs";
/* [object, uuid("49A2798A-0DD1-46C1-9CD6-27190E503A5E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberAddedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory";
/* [object, uuid("341DE352-1D33-40A1-A1D3-E5777020E1F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_Create(This,uniqueName,result) \
    ( (This)->lpVtbl->Create(This,uniqueName,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberAddedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs";
/* [object, uuid("409A219F-AA4A-4893-B430-BAA1B63C6219"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_get_UniqueName(This,value) \
    ( (This)->lpVtbl->get_UniqueName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionMemberRemovedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory";
/* [object, uuid("C4D355E8-42B8-4B67-B757-D0CFCAD59280"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory * This,
        /* [in] */__RPC__in HSTRING uniqueName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_Create(This,uniqueName,result) \
    ( (This)->lpVtbl->Create(This,uniqueName,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionMemberRemovedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynSessionStatics[] = L"Windows.Devices.AllJoyn.IAllJoynSessionStatics";
/* [object, uuid("9E05D604-A06C-46D4-B46C-0B0B54105B44"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFromServiceInfoAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetFromServiceInfoAndBusAttachmentAsync )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynServiceInfo * serviceInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynBusAttachment * busAttachment,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CAllJoyn__CAllJoynSession * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_GetFromServiceInfoAsync(This,serviceInfo,operation) \
    ( (This)->lpVtbl->GetFromServiceInfoAsync(This,serviceInfo,operation) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_GetFromServiceInfoAndBusAttachmentAsync(This,serviceInfo,busAttachment,operation) \
    ( (This)->lpVtbl->GetFromServiceInfoAndBusAttachmentAsync(This,serviceInfo,busAttachment,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynStatusStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynStatus
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynStatusStatics[] = L"Windows.Devices.AllJoyn.IAllJoynStatusStatics";
/* [object, uuid("D0B7A17E-0D29-4DA9-8AC6-54C554BEDBC5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ok )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Fail )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OperationTimedOut )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OtherEndClosed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ConnectionRefused )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationRejectedByUser )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SslConnectFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SslIdentityVerificationFailed )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InsufficientSecurity )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument1 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument2 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument3 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument4 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument5 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument6 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument7 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InvalidArgument8 )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_Ok(This,value) \
    ( (This)->lpVtbl->get_Ok(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_Fail(This,value) \
    ( (This)->lpVtbl->get_Fail(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_OperationTimedOut(This,value) \
    ( (This)->lpVtbl->get_OperationTimedOut(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_OtherEndClosed(This,value) \
    ( (This)->lpVtbl->get_OtherEndClosed(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_ConnectionRefused(This,value) \
    ( (This)->lpVtbl->get_ConnectionRefused(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_AuthenticationFailed(This,value) \
    ( (This)->lpVtbl->get_AuthenticationFailed(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_AuthenticationRejectedByUser(This,value) \
    ( (This)->lpVtbl->get_AuthenticationRejectedByUser(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_SslConnectFailed(This,value) \
    ( (This)->lpVtbl->get_SslConnectFailed(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_SslIdentityVerificationFailed(This,value) \
    ( (This)->lpVtbl->get_SslIdentityVerificationFailed(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InsufficientSecurity(This,value) \
    ( (This)->lpVtbl->get_InsufficientSecurity(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument1(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument1(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument2(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument2(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument3(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument3(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument4(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument4(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument5(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument5(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument6(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument6(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument7(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument7(This,value) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_get_InvalidArgument8(This,value) \
    ( (This)->lpVtbl->get_InvalidArgument8(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynStatusStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs";
/* [object, uuid("C9FCA03B-701D-4AA8-97DD-A2BB0A8F5FA3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_AllJoyn_IAllJoynWatcherStoppedEventArgsFactory[] = L"Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory";
/* [object, uuid("878FA5A8-2D50-47E1-904A-20BF0D48C782"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory * This,
        /* [in] */INT32 status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgs * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_Create(This,status,result) \
    ( (This)->lpVtbl->Create(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CAllJoyn_CIAllJoynWatcherStoppedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAboutData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAboutData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutData_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutData[] = L"Windows.Devices.AllJoyn.AllJoynAboutData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAboutDataView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynAboutDataViewStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAboutDataView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutDataView_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAboutDataView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAboutDataView[] = L"Windows.Devices.AllJoyn.AllJoynAboutDataView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAcceptSessionJoinerEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAcceptSessionJoinerEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAcceptSessionJoinerEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynAuthenticationCompleteEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynAuthenticationCompleteEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynAuthenticationCompleteEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusAttachment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusAttachmentFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynBusAttachmentStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachment ** Default Interface **
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachment2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachment_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachment[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusAttachmentStateChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusAttachmentStateChangedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusAttachmentStateChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusObject
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusObjectFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusObject ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObject_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObject_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObject[] = L"Windows.Devices.AllJoyn.AllJoynBusObject";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgsFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynBusObjectStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynBusObjectStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynBusObjectStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentials
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentials ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentials_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentials_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentials[] = L"Windows.Devices.AllJoyn.AllJoynCredentials";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentialsRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynCredentialsVerificationRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynCredentialsVerificationRequestedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynCredentialsVerificationRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynMessageInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynMessageInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynMessageInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynMessageInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynMessageInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynMessageInfo[] = L"Windows.Devices.AllJoyn.AllJoynMessageInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynProducerStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynProducerStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynProducerStoppedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynServiceInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynServiceInfoFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynServiceInfoStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynServiceInfo ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfo[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynServiceInfoRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynServiceInfoRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynServiceInfoRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynSessionStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSession ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSession_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSession[] = L"Windows.Devices.AllJoyn.AllJoynSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgsFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionJoinedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionJoinedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionJoinedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionLostEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionLostEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionLostEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionMemberAddedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberAddedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberAddedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynSessionMemberRemovedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynSessionMemberRemovedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynSessionMemberRemovedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.AllJoyn.IAllJoynStatusStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynStatus_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynStatus[] = L"Windows.Devices.AllJoyn.AllJoynStatus";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgsFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.AllJoyn.IAllJoynWatcherStoppedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_AllJoyn_AllJoynWatcherStoppedEventArgs[] = L"Windows.Devices.AllJoyn.AllJoynWatcherStoppedEventArgs";
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
#endif // __windows2Edevices2Ealljoyn_p_h__

#endif // __windows2Edevices2Ealljoyn_h__
