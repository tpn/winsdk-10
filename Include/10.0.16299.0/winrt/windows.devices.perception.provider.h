/* Header file automatically generated from windows.devices.perception.provider.idl */
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
#ifndef __windows2Edevices2Eperception2Eprovider_h__
#define __windows2Edevices2Eperception2Eprovider_h__
#ifndef __windows2Edevices2Eperception2Eprovider_p_h__
#define __windows2Edevices2Eperception2Eprovider_p_h__


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
#include "Windows.Devices.Perception.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionStartFaceAuthenticationHandler;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler ABI::Windows::Devices::Perception::Provider::IPerceptionStartFaceAuthenticationHandler

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionStopFaceAuthenticationHandler;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler ABI::Windows::Devices::Perception::Provider::IPerceptionStopFaceAuthenticationHandler

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IKnownPerceptionFrameKindStatics;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics ABI::Windows::Devices::Perception::Provider::IKnownPerceptionFrameKindStatics

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionControlGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup ABI::Windows::Devices::Perception::Provider::IPerceptionControlGroup

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionControlGroupFactory;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory ABI::Windows::Devices::Perception::Provider::IPerceptionControlGroupFactory

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionCorrelation;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionCorrelationFactory;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationFactory

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionCorrelationGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionCorrelationGroupFactory;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroupFactory

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFaceAuthenticationGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFaceAuthenticationGroupFactory;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroupFactory

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFrame;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame ABI::Windows::Devices::Perception::Provider::IPerceptionFrame

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFrameProvider;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProvider

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFrameProviderInfo;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFrameProviderManager;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionFrameProviderManagerServiceStatics;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManagerServiceStatics

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionPropertyChangeRequest;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest ABI::Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionVideoFrameAllocator;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator ABI::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    interface IPerceptionVideoFrameAllocatorFactory;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory ABI::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocatorFactory

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionCorrelation;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#define DEF___FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c4db1093-d705-5503-8bce-68535cd42ffa"))
IIterator<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*, ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Devices.Perception.Provider.PerceptionCorrelation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t;
#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
//#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#define DEF___FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ca6bf87e-1745-5cd0-aee2-59736f5a206d"))
IIterable<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*, ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Devices.Perception.Provider.PerceptionCorrelation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t;
#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
//#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#define DEF___FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("244cad66-afbe-5394-b7b7-43a61fcbfc6d"))
IVectorView<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*, ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Perception.Provider.PerceptionCorrelation>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Devices::Perception::Provider::PerceptionCorrelation*> __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t;
#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
//#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_USE */


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





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                
                typedef enum PerceptionFrameSourcePropertyChangeStatus : int PerceptionFrameSourcePropertyChangeStatus;
                
            } /* Windows */
        } /* Devices */
    } /* Perception */} /* ABI */




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


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */





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


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IMemoryBuffer;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIMemoryBuffer ABI::Windows::Foundation::IMemoryBuffer

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Quaternion Quaternion;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapAlphaMode : int BitmapAlphaMode;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                
                typedef enum BitmapPixelFormat : int BitmapPixelFormat;
                
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Media {
            class VideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            interface IVideoFrame;
        } /* Windows */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CMedia_CIVideoFrame ABI::Windows::Media::IVideoFrame

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
























namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionControlGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionCorrelationGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionFaceAuthenticationGroup;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionFrame;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionFrameProviderInfo;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionPropertyChangeRequest;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    class PerceptionVideoFrameAllocator;
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */












/*
 *
 * Delegate Windows.Devices.Perception.Provider.PerceptionStartFaceAuthenticationHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("74816D2A-2090-4670-8C48-EF39E7FF7C26"), deprecated, contract] */
                    MIDL_INTERFACE("74816D2A-2090-4670-8C48-EF39E7FF7C26")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionStartFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionStartFaceAuthenticationHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup * sender,
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionStartFaceAuthenticationHandler=_uuidof(IPerceptionStartFaceAuthenticationHandler);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Devices.Perception.Provider.PerceptionStopFaceAuthenticationHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("387EE6AA-89CD-481E-AADE-DD92F70B2AD7"), deprecated, contract] */
                    MIDL_INTERFACE("387EE6AA-89CD-481E-AADE-DD92F70B2AD7")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionStopFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionStopFaceAuthenticationHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup * sender
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionStopFaceAuthenticationHandler=_uuidof(IPerceptionStopFaceAuthenticationHandler);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.KnownPerceptionFrameKind
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics[] = L"Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("3AE651D6-9669-4106-9FAE-4835C1B96104"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("3AE651D6-9669-4106-9FAE-4835C1B96104")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IKnownPerceptionFrameKindStatics : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Depth(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Infrared(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKnownPerceptionFrameKindStatics=_uuidof(IKnownPerceptionFrameKindStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionControlGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroup";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("172C4882-2FD9-4C4E-BA34-FDF20A73DDE5"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("172C4882-2FD9-4C4E-BA34-FDF20A73DDE5")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionControlGroup : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_FrameProviderIds(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionControlGroup=_uuidof(IPerceptionControlGroup);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("2F1AF2E0-BAF1-453B-BED4-CD9D4619154C"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("2F1AF2E0-BAF1-453B-BED4-CD9D4619154C")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionControlGroupFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * ids,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionControlGroup * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionControlGroupFactory=_uuidof(IPerceptionControlGroupFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelation";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("B4131A82-DFF5-4047-8A19-3B4D805F7176"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("B4131A82-DFF5-4047-8A19-3B4D805F7176")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionCorrelation : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_TargetId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Quaternion * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionCorrelation=_uuidof(IPerceptionCorrelation);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("D4A6C425-2884-4A8F-8134-2835D7286CBF"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("D4A6C425-2884-4A8F-8134-2835D7286CBF")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionCorrelationFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in HSTRING targetId,
                            /* [in] */ABI::Windows::Foundation::Numerics::Vector3 position,
                            /* [in] */ABI::Windows::Foundation::Numerics::Quaternion orientation,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelation * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionCorrelationFactory=_uuidof(IPerceptionCorrelationFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("752A0906-36A7-47BB-9B79-56CC6B746770"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("752A0906-36A7-47BB-9B79-56CC6B746770")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionCorrelationGroup : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_RelativeLocations(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionCorrelationGroup=_uuidof(IPerceptionCorrelationGroup);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("7DFE2088-63DF-48ED-83B1-4AB829132995"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("7DFE2088-63DF-48ED-83B1-4AB829132995")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionCorrelationGroupFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * relativeLocations,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionCorrelationGroupFactory=_uuidof(IPerceptionCorrelationGroupFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("E8019814-4A91-41B0-83A6-881A1775353E"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("E8019814-4A91-41B0-83A6-881A1775353E")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFaceAuthenticationGroup : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_FrameProviderIds(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFaceAuthenticationGroup=_uuidof(IPerceptionFaceAuthenticationGroup);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("E68A05D4-B60C-40F4-BCB9-F24D46467320"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("E68A05D4-B60C-40F4-BCB9-F24D46467320")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFaceAuthenticationGroupFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * ids,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionStartFaceAuthenticationHandler  * startHandler,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionStopFaceAuthenticationHandler  * stopHandler,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFaceAuthenticationGroupFactory=_uuidof(IPerceptionFaceAuthenticationGroupFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrame[] = L"Windows.Devices.Perception.Provider.IPerceptionFrame";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("7CFE7825-54BB-4D9D-BEC5-8EF66151D2AC"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("7CFE7825-54BB-4D9D-BEC5-8EF66151D2AC")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFrame : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_RelativeTime(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_RelativeTime(
                            /* [in] */ABI::Windows::Foundation::TimeSpan value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_FrameData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IMemoryBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFrame=_uuidof(IPerceptionFrame);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProvider[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProvider";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("794F7AB9-B37D-3B33-A10D-30626419CE65"), deprecated, contract] */
                    MIDL_INTERFACE("794F7AB9-B37D-3B33-A10D-30626419CE65")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFrameProvider : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_FrameProviderInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo * * result
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Available(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Start(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE SetProperty(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionPropertyChangeRequest * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFrameProvider=_uuidof(IPerceptionFrameProvider);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("CCA959E8-797E-4E83-9B87-036A74142FC4"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("CCA959E8-797E-4E83-9B87-036A74142FC4")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFrameProviderInfo : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_DisplayName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_DeviceKind(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_DeviceKind(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_FrameKind(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_FrameKind(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Hidden(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Hidden(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFrameProviderInfo=_uuidof(IPerceptionFrameProviderInfo);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("A959CE07-EAD3-33DF-8EC1-B924ABE019C4"), deprecated, contract] */
                    MIDL_INTERFACE("A959CE07-EAD3-33DF-8EC1-B924ABE019C4")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFrameProviderManager : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetFrameProvider(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo * frameProviderInfo,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProvider * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFrameProviderManager=_uuidof(IPerceptionFrameProviderManager);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("AE8386E6-CAD9-4359-8F96-8EAE51810526"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("AE8386E6-CAD9-4359-8F96-8EAE51810526")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionFrameProviderManagerServiceStatics : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RegisterFrameProviderInfo(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo * frameProviderInfo
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UnregisterFrameProviderInfo(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderInfo * frameProviderInfo
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RegisterFaceAuthenticationGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UnregisterFaceAuthenticationGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RegisterControlGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionControlGroup * controlGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UnregisterControlGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionControlGroup * controlGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE RegisterCorrelationGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup * correlationGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UnregisterCorrelationGroup(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProviderManager * manager,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionCorrelationGroup * correlationGroup
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE UpdateAvailabilityForProvider(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProvider * provider,
                            /* [in] */boolean available
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE PublishFrameForProvider(
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrameProvider * provider,
                            /* [in] */__RPC__in_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrame * frame
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionFrameProviderManagerServiceStatics=_uuidof(IPerceptionFrameProviderManagerServiceStatics);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("3C5AEB51-350B-4DF8-9414-59E09815510B"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("3C5AEB51-350B-4DF8-9414-59E09815510B")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionPropertyChangeRequest : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propget, deprecated] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Status(
                            /* [in] */ABI::Windows::Devices::Perception::PerceptionFrameSourcePropertyChangeStatus value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionPropertyChangeRequest=_uuidof(IPerceptionPropertyChangeRequest);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("4C38A7DA-FDD8-4ED4-A039-2A6F9B235038"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("4C38A7DA-FDD8-4ED4-A039-2A6F9B235038")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionVideoFrameAllocator : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE AllocateFrame(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrame * * value
                            ) = 0;
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CopyFromVideoFrame(
                            /* [in] */__RPC__in_opt ABI::Windows::Media::IVideoFrame * frame,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionFrame * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionVideoFrameAllocator=_uuidof(IPerceptionVideoFrameAllocator);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Perception {
                namespace Provider {
                    /* [object, uuid("1A58B0E1-E91A-481E-B876-A89E2BBC6B33"), exclusiveto, deprecated, contract] */
                    MIDL_INTERFACE("1A58B0E1-E91A-481E-B876-A89E2BBC6B33")
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    IPerceptionVideoFrameAllocatorFactory : IInspectable
                    {
                        
                        #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
                        #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */UINT32 maxOutstandingFrameCountForWrite,
                            /* [in] */ABI::Windows::Graphics::Imaging::BitmapPixelFormat format,
                            /* [in] */ABI::Windows::Foundation::Size resolution,
                            /* [in] */ABI::Windows::Graphics::Imaging::BitmapAlphaMode alpha,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Perception::Provider::IPerceptionVideoFrameAllocator * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPerceptionVideoFrameAllocatorFactory=_uuidof(IPerceptionVideoFrameAllocatorFactory);
                    
                } /* Windows */
            } /* Devices */
        } /* Perception */
    } /* Provider */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.KnownPerceptionFrameKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind[] = L"Windows.Devices.Perception.Provider.KnownPerceptionFrameKind";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionControlGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionControlGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionControlGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.PerceptionControlGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionCorrelation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelation_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelationGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrame_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrame_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrame[] = L"Windows.Devices.Perception.Provider.PerceptionFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory;

#endif // ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

typedef struct __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;

interface __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

typedef  struct __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation **first);

    END_INTERFACE
} __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;

interface __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation;

typedef struct __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
            /* [in] */ __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl;

interface __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelationVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation_INTERFACE_DEFINED__

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



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__




typedef enum __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus;




#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;

#endif // ____x_ABI_CWindows_CFoundation_CIMemoryBuffer_FWD_DEFINED__





typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;





typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;


typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;




#ifndef ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;

#endif // ____x_ABI_CWindows_CMedia_CIVideoFrame_FWD_DEFINED__











































/*
 *
 * Delegate Windows.Devices.Perception.Provider.PerceptionStartFaceAuthenticationHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__
/* [object, uuid("74816D2A-2090-4670-8C48-EF39E7FF7C26"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionStartFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * sender,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_Invoke(This,sender,result) \
    ( (This)->lpVtbl->Invoke(This,sender,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Devices.Perception.Provider.PerceptionStopFaceAuthenticationHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__
/* [object, uuid("387EE6AA-89CD-481E-AADE-DD92F70B2AD7"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionStopFaceAuthenticationHandler may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * sender
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_Invoke(This,sender) \
    ( (This)->lpVtbl->Invoke(This,sender) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.KnownPerceptionFrameKind
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IKnownPerceptionFrameKindStatics[] = L"Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics";
/* [object, uuid("3AE651D6-9669-4106-9FAE-4835C1B96104"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Depth )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Infrared )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_get_Depth(This,value) \
    ( (This)->lpVtbl->get_Depth(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_get_Infrared(This,value) \
    ( (This)->lpVtbl->get_Infrared(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIKnownPerceptionFrameKindStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionControlGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroup";
/* [object, uuid("172C4882-2FD9-4C4E-BA34-FDF20A73DDE5"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_FrameProviderIds )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_get_FrameProviderIds(This,value) \
    ( (This)->lpVtbl->get_FrameProviderIds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionControlGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory";
/* [object, uuid("2F1AF2E0-BAF1-453B-BED4-CD9D4619154C"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * ids,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_Create(This,ids,result) \
    ( (This)->lpVtbl->Create(This,ids,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelation";
/* [object, uuid("B4131A82-DFF5-4047-8A19-3B4D805F7176"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_TargetId )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_get_TargetId(This,value) \
    ( (This)->lpVtbl->get_TargetId(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory";
/* [object, uuid("D4A6C425-2884-4A8F-8134-2835D7286CBF"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory * This,
        /* [in] */__RPC__in HSTRING targetId,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelation * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_Create(This,targetId,position,orientation,result) \
    ( (This)->lpVtbl->Create(This,targetId,position,orientation,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup";
/* [object, uuid("752A0906-36A7-47BB-9B79-56CC6B746770"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_RelativeLocations )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_get_RelativeLocations(This,value) \
    ( (This)->lpVtbl->get_RelativeLocations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionCorrelationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory";
/* [object, uuid("7DFE2088-63DF-48ED-83B1-4AB829132995"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CDevices__CPerception__CProvider__CPerceptionCorrelation * relativeLocations,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_Create(This,relativeLocations,result) \
    ( (This)->lpVtbl->Create(This,relativeLocations,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup";
/* [object, uuid("E8019814-4A91-41B0-83A6-881A1775353E"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_FrameProviderIds )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_get_FrameProviderIds(This,value) \
    ( (This)->lpVtbl->get_FrameProviderIds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFaceAuthenticationGroupFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory";
/* [object, uuid("E68A05D4-B60C-40F4-BCB9-F24D46467320"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * ids,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStartFaceAuthenticationHandler  * startHandler,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionStopFaceAuthenticationHandler  * stopHandler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_Create(This,ids,startHandler,stopHandler,result) \
    ( (This)->lpVtbl->Create(This,ids,startHandler,stopHandler,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrame
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrame[] = L"Windows.Devices.Perception.Provider.IPerceptionFrame";
/* [object, uuid("7CFE7825-54BB-4D9D-BEC5-8EF66151D2AC"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_RelativeTime )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_FrameData )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIMemoryBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_get_RelativeTime(This,value) \
    ( (This)->lpVtbl->get_RelativeTime(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_put_RelativeTime(This,value) \
    ( (This)->lpVtbl->put_RelativeTime(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_get_FrameData(This,value) \
    ( (This)->lpVtbl->get_FrameData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProvider[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProvider";
/* [object, uuid("794F7AB9-B37D-3B33-A10D-30626419CE65"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_FrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * * result
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Available )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *SetProperty )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_get_FrameProviderInfo(This,result) \
    ( (This)->lpVtbl->get_FrameProviderInfo(This,result) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_get_Available(This,value) \
    ( (This)->lpVtbl->get_Available(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_Start(This) \
    ( (This)->lpVtbl->Start(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProvider may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_SetProperty(This,value) \
    ( (This)->lpVtbl->SetProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo";
/* [object, uuid("CCA959E8-797E-4E83-9B87-036A74142FC4"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_DeviceKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_FrameKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_FrameKind )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_put_DisplayName(This,value) \
    ( (This)->lpVtbl->put_DisplayName(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_get_DeviceKind(This,value) \
    ( (This)->lpVtbl->get_DeviceKind(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_put_DeviceKind(This,value) \
    ( (This)->lpVtbl->put_DeviceKind(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_get_FrameKind(This,value) \
    ( (This)->lpVtbl->get_FrameKind(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_put_FrameKind(This,value) \
    ( (This)->lpVtbl->put_FrameKind(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_get_Hidden(This,value) \
    ( (This)->lpVtbl->get_Hidden(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_put_Hidden(This,value) \
    ( (This)->lpVtbl->put_Hidden(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManager[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManager";
/* [object, uuid("A959CE07-EAD3-33DF-8EC1-B924ABE019C4"), deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetFrameProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("IPerceptionFrameProviderManager may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_GetFrameProvider(This,frameProviderInfo,result) \
    ( (This)->lpVtbl->GetFrameProvider(This,frameProviderInfo,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionFrameProviderManagerServiceStatics[] = L"Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics";
/* [object, uuid("AE8386E6-CAD9-4359-8F96-8EAE51810526"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RegisterFrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UnregisterFrameProviderInfo )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderInfo * frameProviderInfo
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RegisterFaceAuthenticationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UnregisterFaceAuthenticationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFaceAuthenticationGroup * faceAuthenticationGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RegisterControlGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * controlGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UnregisterControlGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionControlGroup * controlGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *RegisterCorrelationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * correlationGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UnregisterCorrelationGroup )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManager * manager,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionCorrelationGroup * correlationGroup
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *UpdateAvailabilityForProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * provider,
        /* [in] */boolean available
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *PublishFrameForProvider )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProvider * provider,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * frame
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_RegisterFrameProviderInfo(This,manager,frameProviderInfo) \
    ( (This)->lpVtbl->RegisterFrameProviderInfo(This,manager,frameProviderInfo) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_UnregisterFrameProviderInfo(This,manager,frameProviderInfo) \
    ( (This)->lpVtbl->UnregisterFrameProviderInfo(This,manager,frameProviderInfo) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_RegisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) \
    ( (This)->lpVtbl->RegisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_UnregisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) \
    ( (This)->lpVtbl->UnregisterFaceAuthenticationGroup(This,manager,faceAuthenticationGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_RegisterControlGroup(This,manager,controlGroup) \
    ( (This)->lpVtbl->RegisterControlGroup(This,manager,controlGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_UnregisterControlGroup(This,manager,controlGroup) \
    ( (This)->lpVtbl->UnregisterControlGroup(This,manager,controlGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_RegisterCorrelationGroup(This,manager,correlationGroup) \
    ( (This)->lpVtbl->RegisterCorrelationGroup(This,manager,correlationGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_UnregisterCorrelationGroup(This,manager,correlationGroup) \
    ( (This)->lpVtbl->UnregisterCorrelationGroup(This,manager,correlationGroup) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_UpdateAvailabilityForProvider(This,provider,available) \
    ( (This)->lpVtbl->UpdateAvailabilityForProvider(This,provider,available) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_PublishFrameForProvider(This,provider,frame) \
    ( (This)->lpVtbl->PublishFrameForProvider(This,provider,frame) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrameProviderManagerServiceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest";
/* [object, uuid("3C5AEB51-350B-4DF8-9414-59E09815510B"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propget, deprecated] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
        /* [in] */__x_ABI_CWindows_CDevices_CPerception_CPerceptionFrameSourcePropertyChangeStatus value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_put_Status(This,value) \
    ( (This)->lpVtbl->put_Status(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_GetDeferral(This,result) \
    ( (This)->lpVtbl->GetDeferral(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionPropertyChangeRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator";
/* [object, uuid("4C38A7DA-FDD8-4ED4-A039-2A6F9B235038"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *AllocateFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CopyFromVideoFrame )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * frame,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionFrame * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_AllocateFrame(This,value) \
    ( (This)->lpVtbl->AllocateFrame(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_CopyFromVideoFrame(This,frame,value) \
    ( (This)->lpVtbl->CopyFromVideoFrame(This,frame,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Perception_Provider_IPerceptionVideoFrameAllocatorFactory[] = L"Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory";
/* [object, uuid("1A58B0E1-E91A-481E-B876-A89E2BBC6B33"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
__x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory * This,
        /* [in] */UINT32 maxOutstandingFrameCountForWrite,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize resolution,
        /* [in] */__x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocator * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#define __x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_Create(This,maxOutstandingFrameCountForWrite,format,resolution,alpha,result) \
    ( (This)->lpVtbl->Create(This,maxOutstandingFrameCountForWrite,format,resolution,alpha,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CPerception_CProvider_CIPerceptionVideoFrameAllocatorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.KnownPerceptionFrameKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Perception.Provider.IKnownPerceptionFrameKindStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("KnownPerceptionFrameKind may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_KnownPerceptionFrameKind[] = L"Windows.Devices.Perception.Provider.KnownPerceptionFrameKind";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionControlGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionControlGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionControlGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionControlGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionControlGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionControlGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionControlGroup[] = L"Windows.Devices.Perception.Provider.PerceptionControlGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionCorrelation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionCorrelationFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionCorrelation ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelation_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelation_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelation may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelation[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionCorrelationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionCorrelationGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionCorrelationGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionCorrelationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionCorrelationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionCorrelationGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFaceAuthenticationGroup ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFaceAuthenticationGroup may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFaceAuthenticationGroup[] = L"Windows.Devices.Perception.Provider.PerceptionFaceAuthenticationGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrame
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFrame ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrame_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrame_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrame may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrame[] = L"Windows.Devices.Perception.Provider.PerceptionFrame";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionFrameProviderInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderInfo may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderInfo[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Perception.Provider.IPerceptionFrameProviderManagerServiceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionFrameProviderManagerService may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionFrameProviderManagerService[] = L"Windows.Devices.Perception.Provider.PerceptionFrameProviderManagerService";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionPropertyChangeRequest ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionPropertyChangeRequest may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionPropertyChangeRequest[] = L"Windows.Devices.Perception.Provider.PerceptionPropertyChangeRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocatorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Perception.Provider.IPerceptionVideoFrameAllocator ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator_DEFINED
#define RUNTIMECLASS_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator_DEFINED

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
DEPRECATED("PerceptionVideoFrameAllocator may be unavailable after Windows Creator Update. Please refer to AVStream on MSDN.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Perception_Provider_PerceptionVideoFrameAllocator[] = L"Windows.Devices.Perception.Provider.PerceptionVideoFrameAllocator";
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
#endif // __windows2Edevices2Eperception2Eprovider_p_h__

#endif // __windows2Edevices2Eperception2Eprovider_h__
