/* Header file automatically generated from windows.ui.input.inking.idl */
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
#ifndef __windows2Eui2Einput2Einking_h__
#define __windows2Eui2Einput2Einking_h__
#ifndef __windows2Eui2Einput2Einking_p_h__
#define __windows2Eui2Einput2Einking_p_h__


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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributes;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes ABI::Windows::UI::Input::Inking::IInkDrawingAttributes

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributes2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 ABI::Windows::UI::Input::Inking::IInkDrawingAttributes2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributes3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 ABI::Windows::UI::Input::Inking::IInkDrawingAttributes3

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributes4;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 ABI::Windows::UI::Input::Inking::IInkDrawingAttributes4

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributesPencilProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties ABI::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkDrawingAttributesStatics;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics ABI::Windows::UI::Input::Inking::IInkDrawingAttributesStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkInputProcessingConfiguration;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration ABI::Windows::UI::Input::Inking::IInkInputProcessingConfiguration

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkManager;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager ABI::Windows::UI::Input::Inking::IInkManager

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPoint;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint ABI::Windows::UI::Input::Inking::IInkPoint

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPoint2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 ABI::Windows::UI::Input::Inking::IInkPoint2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPointFactory;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory ABI::Windows::UI::Input::Inking::IInkPointFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPointFactory2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 ABI::Windows::UI::Input::Inking::IInkPointFactory2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenter;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter ABI::Windows::UI::Input::Inking::IInkPresenter

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenter2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 ABI::Windows::UI::Input::Inking::IInkPresenter2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterProtractor;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor ABI::Windows::UI::Input::Inking::IInkPresenterProtractor

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterProtractorFactory;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory ABI::Windows::UI::Input::Inking::IInkPresenterProtractorFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterRuler;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler ABI::Windows::UI::Input::Inking::IInkPresenterRuler

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterRuler2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 ABI::Windows::UI::Input::Inking::IInkPresenterRuler2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterRulerFactory;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory ABI::Windows::UI::Input::Inking::IInkPresenterRulerFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkPresenterStencil;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil ABI::Windows::UI::Input::Inking::IInkPresenterStencil

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkRecognitionResult;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult ABI::Windows::UI::Input::Inking::IInkRecognitionResult

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkRecognizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer ABI::Windows::UI::Input::Inking::IInkRecognizer

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkRecognizerContainer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer ABI::Windows::UI::Input::Inking::IInkRecognizerContainer

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStroke;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke ABI::Windows::UI::Input::Inking::IInkStroke

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStroke2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 ABI::Windows::UI::Input::Inking::IInkStroke2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStroke3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 ABI::Windows::UI::Input::Inking::IInkStroke3

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeBuilder;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder ABI::Windows::UI::Input::Inking::IInkStrokeBuilder

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeBuilder2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 ABI::Windows::UI::Input::Inking::IInkStrokeBuilder2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeBuilder3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 ABI::Windows::UI::Input::Inking::IInkStrokeBuilder3

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeContainer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer ABI::Windows::UI::Input::Inking::IInkStrokeContainer

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeContainer2;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 ABI::Windows::UI::Input::Inking::IInkStrokeContainer2

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeContainer3;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 ABI::Windows::UI::Input::Inking::IInkStrokeContainer3

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput ABI::Windows::UI::Input::Inking::IInkStrokeInput

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokeRenderingSegment;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokesCollectedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs ABI::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkStrokesErasedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs ABI::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkSynchronizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer ABI::Windows::UI::Input::Inking::IInkSynchronizer

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    interface IInkUnprocessedInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput ABI::Windows::UI::Input::Inking::IInkUnprocessedInput

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkPoint;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("47415452-db79-567e-84d5-e9912330f944"))
IIterator<ABI::Windows::UI::Input::Inking::InkPoint*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPoint*, ABI::Windows::UI::Input::Inking::IInkPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Inking.InkPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Inking::InkPoint*> __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_t;
#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkPoint*>
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0630c0ef-a4e2-5af6-b2e9-8e042e294e17"))
IIterable<ABI::Windows::UI::Input::Inking::InkPoint*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPoint*, ABI::Windows::UI::Input::Inking::IInkPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Inking.InkPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Inking::InkPoint*> __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_t;
#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkPoint*>
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkRecognitionResult;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9abc247f-0223-5f44-8fa1-0d6d691bf9af"))
IIterator<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognitionResult*, ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Inking.InkRecognitionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t;
#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e29b658b-7cc1-561c-9912-001dbca86651"))
IIterable<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognitionResult*, ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Inking.InkRecognitionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t;
#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkRecognizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f8bd3097-5262-5e7a-a19d-13c029d2d7e5"))
IIterator<ABI::Windows::UI::Input::Inking::InkRecognizer*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognizer*, ABI::Windows::UI::Input::Inking::IInkRecognizer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Inking.InkRecognizer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Inking::InkRecognizer*> __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_t;
#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("611b7e84-a803-5071-aaea-4f2ce0151052"))
IIterable<ABI::Windows::UI::Input::Inking::InkRecognizer*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognizer*, ABI::Windows::UI::Input::Inking::IInkRecognizer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Inking.InkRecognizer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Inking::InkRecognizer*> __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_t;
#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStroke;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5608d5a9-e7e4-5a0b-941f-b7fed76b35bf"))
IIterator<ABI::Windows::UI::Input::Inking::InkStroke*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStroke*, ABI::Windows::UI::Input::Inking::IInkStroke*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Inking.InkStroke>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Inking::InkStroke*> __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_t;
#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkStroke*>
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkStroke*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bbc11401-89d0-5305-a3b3-36c887714b9b"))
IIterable<ABI::Windows::UI::Input::Inking::InkStroke*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStroke*, ABI::Windows::UI::Input::Inking::IInkStroke*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Inking.InkStroke>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Inking::InkStroke*> __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_t;
#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkStroke*>
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkStroke*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokeRenderingSegment;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7d8c317-6f3f-5192-9210-65a263baf8d1"))
IIterator<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*, ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Inking.InkStrokeRenderingSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t;
#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
//#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("27000f47-2885-5da9-8923-16a3a58b7a55"))
IIterable<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*, ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Inking.InkStrokeRenderingSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t;
#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
//#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d1ac414b-c87d-540f-8ab1-4e0d09d9d283"))
IVectorView<ABI::Windows::UI::Input::Inking::InkPoint*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPoint*, ABI::Windows::UI::Input::Inking::IInkPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Inking::InkPoint*> __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_t;
#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkPoint*>
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ecfc4f0b-112c-5cd3-acf0-d746d6bdfeb5"))
IVectorView<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognitionResult*, ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkRecognitionResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Inking::InkRecognitionResult*> __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t;
#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8eadfa4f-27ef-5a5d-b0b8-7fd5c0ce6b39"))
IVectorView<ABI::Windows::UI::Input::Inking::InkRecognizer*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkRecognizer*, ABI::Windows::UI::Input::Inking::IInkRecognizer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkRecognizer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Inking::InkRecognizer*> __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_t;
#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognizer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6744f458-b242-5767-a643-996e01dff0e4"))
IVectorView<ABI::Windows::UI::Input::Inking::InkStroke*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStroke*, ABI::Windows::UI::Input::Inking::IInkStroke*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkStroke>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Inking::InkStroke*> __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_t;
#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkStroke*>
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkStroke*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#define DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f39ea41d-4714-5d80-87de-973dd26da269"))
IVectorView<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*, ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkStrokeRenderingSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Input::Inking::InkStrokeRenderingSegment*> __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t;
#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
//#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkStrokeRenderingSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#define DEF___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("10c47202-47ab-58bc-91de-d5000f1a74c0"))
IVector<ABI::Windows::UI::Input::Inking::InkPoint*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPoint*, ABI::Windows::UI::Input::Inking::IInkPoint*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Input.Inking.InkPoint>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Input::Inking::InkPoint*> __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_t;
#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::Inking::IInkPoint*>
//#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Input::Inking::IInkPoint*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ece8567f-8080-5ced-8988-bb0364c803d4"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkRecognitionResult>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b1923f59-d674-5365-b99a-3f1e52268c7f"))
IAsyncOperation<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Inking.InkRecognitionResult>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult*> __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Input::Inking::IInkRecognitionResult*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkPresenter;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokesCollectedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("176bfa8f-c0de-5b3a-b28c-0f3931ca52d3"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkPresenter*,ABI::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPresenter*, ABI::Windows::UI::Input::Inking::IInkPresenter*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs*, ABI::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkPresenter, Windows.UI.Input.Inking.InkStrokesCollectedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkPresenter*,ABI::Windows::UI::Input::Inking::InkStrokesCollectedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkPresenter*,ABI::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkPresenter*,ABI::Windows::UI::Input::Inking::IInkStrokesCollectedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokesErasedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("30fec929-14d0-550f-84f2-137fc6a9f08f"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkPresenter*,ABI::Windows::UI::Input::Inking::InkStrokesErasedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkPresenter*, ABI::Windows::UI::Input::Inking::IInkPresenter*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokesErasedEventArgs*, ABI::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkPresenter, Windows.UI.Input.Inking.InkStrokesErasedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkPresenter*,ABI::Windows::UI::Input::Inking::InkStrokesErasedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkPresenter*,ABI::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkPresenter*,ABI::Windows::UI::Input::Inking::IInkStrokesErasedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_USE */


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



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#define DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("604d0c4c-91de-5c2a-935f-362f13eaf800"))
IReference<struct ABI::Windows::Foundation::TimeSpan> : IReference_impl<struct ABI::Windows::Foundation::TimeSpan> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::Foundation::TimeSpan> __FIReference_1_Windows__CFoundation__CTimeSpan_t;
#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::__FIReference_1_Windows__CFoundation__CTimeSpan_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CFoundation__CTimeSpan ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
//#define __FIReference_1_Windows__CFoundation__CTimeSpan_t ABI::Windows::Foundation::IReference<ABI::Windows::Foundation::TimeSpan>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CFoundation__CTimeSpan_USE */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            struct Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CFoundation__CPoint_USE
#define DEF___FIIterator_1_Windows__CFoundation__CPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c602b59e-0a8e-5e99-b478-2b564585278d"))
IIterator<struct ABI::Windows::Foundation::Point> : IIterator_impl<struct ABI::Windows::Foundation::Point> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Point>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::Foundation::Point> __FIIterator_1_Windows__CFoundation__CPoint_t;
#define __FIIterator_1_Windows__CFoundation__CPoint ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CFoundation__CPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CFoundation__CPoint ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Point>
//#define __FIIterator_1_Windows__CFoundation__CPoint_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Point>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CFoundation__CPoint_USE */





#ifndef DEF___FIIterable_1_Windows__CFoundation__CPoint_USE
#define DEF___FIIterable_1_Windows__CFoundation__CPoint_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c192280d-3a09-5423-9dc5-67b83ebde41d"))
IIterable<struct ABI::Windows::Foundation::Point> : IIterable_impl<struct ABI::Windows::Foundation::Point> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Point>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::Foundation::Point> __FIIterable_1_Windows__CFoundation__CPoint_t;
#define __FIIterable_1_Windows__CFoundation__CPoint ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CFoundation__CPoint_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CFoundation__CPoint ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Point>
//#define __FIIterable_1_Windows__CFoundation__CPoint_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Point>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CFoundation__CPoint_USE */




#ifndef DEF___FIAsyncActionProgressHandler_1_UINT64_USE
#define DEF___FIAsyncActionProgressHandler_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("55e233ca-f243-5ae2-853b-f9cc7c0ae0cf"))
IAsyncActionProgressHandler<UINT64> : IAsyncActionProgressHandler_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionProgressHandler`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionProgressHandler<UINT64> __FIAsyncActionProgressHandler_1_UINT64_t;
#define __FIAsyncActionProgressHandler_1_UINT64 ABI::Windows::Foundation::__FIAsyncActionProgressHandler_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionProgressHandler_1_UINT64 ABI::Windows::Foundation::IAsyncActionProgressHandler<UINT64>
//#define __FIAsyncActionProgressHandler_1_UINT64_t ABI::Windows::Foundation::IAsyncActionProgressHandler<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionProgressHandler_1_UINT64_USE */




#ifndef DEF___FIAsyncActionWithProgressCompletedHandler_1_UINT64_USE
#define DEF___FIAsyncActionWithProgressCompletedHandler_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e6ff857b-f160-571a-a934-2c61f98c862d"))
IAsyncActionWithProgressCompletedHandler<UINT64> : IAsyncActionWithProgressCompletedHandler_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncActionWithProgressCompletedHandler`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgressCompletedHandler<UINT64> __FIAsyncActionWithProgressCompletedHandler_1_UINT64_t;
#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64 ABI::Windows::Foundation::__FIAsyncActionWithProgressCompletedHandler_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64 ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<UINT64>
//#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64_t ABI::Windows::Foundation::IAsyncActionWithProgressCompletedHandler<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgressCompletedHandler_1_UINT64_USE */




#ifndef DEF___FIAsyncActionWithProgress_1_UINT64_USE
#define DEF___FIAsyncActionWithProgress_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("43f713d0-c49d-5e55-aebf-af395768351e"))
IAsyncActionWithProgress<UINT64> : IAsyncActionWithProgress_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncActionWithProgress`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncActionWithProgress<UINT64> __FIAsyncActionWithProgress_1_UINT64_t;
#define __FIAsyncActionWithProgress_1_UINT64 ABI::Windows::Foundation::__FIAsyncActionWithProgress_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncActionWithProgress_1_UINT64 ABI::Windows::Foundation::IAsyncActionWithProgress<UINT64>
//#define __FIAsyncActionWithProgress_1_UINT64_t ABI::Windows::Foundation::IAsyncActionWithProgress<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncActionWithProgress_1_UINT64_USE */




#ifndef DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ea0fe405-d432-5ac7-9ef8-5a65e1f97d7e"))
IAsyncOperationProgressHandler<UINT32,UINT32> : IAsyncOperationProgressHandler_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationProgressHandler`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationProgressHandler<UINT32,UINT32> __FIAsyncOperationProgressHandler_2_UINT32_UINT32_t;
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationProgressHandler_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT32,UINT32>
//#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationProgressHandler<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationProgressHandler_2_UINT32_UINT32_USE */




#ifndef DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1e466dc5-840f-54f9-b877-5e3a9f4b6c74"))
IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32> : IAsyncOperationWithProgressCompletedHandler_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32> __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t;
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32>
//#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_USE */




#ifndef DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE
#define DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eccb574a-c684-5572-a679-6b0842cfb57f"))
IAsyncOperationWithProgress<UINT32,UINT32> : IAsyncOperationWithProgress_impl<UINT32,UINT32> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperationWithProgress`2<UInt32, UInt32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationWithProgress<UINT32,UINT32> __FIAsyncOperationWithProgress_2_UINT32_UINT32_t;
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32 ABI::Windows::Foundation::__FIAsyncOperationWithProgress_2_UINT32_UINT32_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationWithProgress_2_UINT32_UINT32 ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT32,UINT32>
//#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_t ABI::Windows::Foundation::IAsyncOperationWithProgress<UINT32,UINT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationWithProgress_2_UINT32_UINT32_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokeInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class PointerEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface IPointerEventArgs;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs ABI::Windows::UI::Core::IPointerEventArgs

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bf66b962-702d-5c07-a2d5-15f21583c43a"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkStrokeInput*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkStrokeInput*, ABI::Windows::UI::Input::Inking::IInkStrokeInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkStrokeInput, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkStrokeInput*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkStrokeInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkStrokeInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkUnprocessedInput;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4a86bd78-5bcf-5ede-8f65-a8c65235055c"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*, ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.InkUnprocessedInput, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::InkUnprocessedInput*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::IInkUnprocessedInput*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Matrix3x2 Matrix3x2;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IOutputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIOutputStream ABI::Windows::Storage::Streams::IOutputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                
                typedef enum CoreInputDeviceTypes : unsigned int CoreInputDeviceTypes;
                
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class PointerPoint;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IPointerPoint;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIPointerPoint ABI::Windows::UI::Input::IPointerPoint

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkDrawingAttributesKind : int InkDrawingAttributesKind;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkHighContrastAdjustment : int InkHighContrastAdjustment;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkInputProcessingMode : int InkInputProcessingMode;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkInputRightDragAction : int InkInputRightDragAction;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkManipulationMode : int InkManipulationMode;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkPersistenceFormat : int InkPersistenceFormat;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkPresenterPredefinedConfiguration : int InkPresenterPredefinedConfiguration;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkPresenterStencilKind : int InkPresenterStencilKind;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum InkRecognitionTarget : int InkRecognitionTarget;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    
                    typedef enum PenTipShape : int PenTipShape;
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */







































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkDrawingAttributes;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkDrawingAttributesPencilProperties;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkInputProcessingConfiguration;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkManager;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkPresenterProtractor;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkPresenterRuler;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkRecognizerContainer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokeBuilder;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkStrokeContainer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    class InkSynchronizer;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */













/*
 *
 * Struct Windows.UI.Input.Inking.InkDrawingAttributesKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkDrawingAttributesKind : int
                    {
                        InkDrawingAttributesKind_Default = 0,
                        InkDrawingAttributesKind_Pencil = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Inking.InkHighContrastAdjustment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkHighContrastAdjustment : int
                    {
                        InkHighContrastAdjustment_UseSystemColorsWhenNecessary = 0,
                        InkHighContrastAdjustment_UseSystemColors = 1,
                        InkHighContrastAdjustment_UseOriginalColors = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Inking.InkInputProcessingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkInputProcessingMode : int
                    {
                        InkInputProcessingMode_None = 0,
                        InkInputProcessingMode_Inking = 1,
                        InkInputProcessingMode_Erasing = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkInputRightDragAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkInputRightDragAction : int
                    {
                        InkInputRightDragAction_LeaveUnprocessed = 0,
                        InkInputRightDragAction_AllowProcessing = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkManipulationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkManipulationMode : int
                    {
                        InkManipulationMode_Inking = 0,
                        InkManipulationMode_Erasing = 1,
                        InkManipulationMode_Selecting = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPersistenceFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkPersistenceFormat : int
                    {
                        InkPersistenceFormat_GifWithEmbeddedIsf = 0,
                        InkPersistenceFormat_Isf = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPresenterPredefinedConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkPresenterPredefinedConfiguration : int
                    {
                        InkPresenterPredefinedConfiguration_SimpleSinglePointer = 0,
                        InkPresenterPredefinedConfiguration_SimpleMultiplePointer = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPresenterStencilKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkPresenterStencilKind : int
                    {
                        InkPresenterStencilKind_Other = 0,
                        InkPresenterStencilKind_Ruler = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                        InkPresenterStencilKind_Protractor = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                        
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Inking.InkRecognitionTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum InkRecognitionTarget : int
                    {
                        InkRecognitionTarget_All = 0,
                        InkRecognitionTarget_Selected = 1,
                        InkRecognitionTarget_Recent = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.PenTipShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [v1_enum, contract] */
                    enum PenTipShape : int
                    {
                        PenTipShape_Circle = 0,
                        PenTipShape_Rectangle = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("97A2176C-6774-48AD-84F0-48F5A9BE74F9"), exclusiveto, contract] */
                    MIDL_INTERFACE("97A2176C-6774-48AD-84F0-48F5A9BE74F9")
                    IInkDrawingAttributes : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Color(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Color(
                            /* [in] */ABI::Windows::UI::Color value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenTip(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::PenTipShape * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenTip(
                            /* [in] */ABI::Windows::UI::Input::Inking::PenTipShape value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Size * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Size(
                            /* [in] */ABI::Windows::Foundation::Size value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnorePressure(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IgnorePressure(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FitToCurve(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FitToCurve(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributes=_uuidof(IInkDrawingAttributes);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes2[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("7CAB6508-8EC4-42FD-A5A5-E4B7D1D5316D"), exclusiveto, contract] */
                    MIDL_INTERFACE("7CAB6508-8EC4-42FD-A5A5-E4B7D1D5316D")
                    IInkDrawingAttributes2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenTipTransform(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix3x2 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenTipTransform(
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DrawAsHighlighter(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DrawAsHighlighter(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributes2=_uuidof(IInkDrawingAttributes2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes3[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("72020002-7D5B-4690-8AF4-E664CBE2B74F"), exclusiveto, contract] */
                    MIDL_INTERFACE("72020002-7D5B-4690-8AF4-E664CBE2B74F")
                    IInkDrawingAttributes3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkDrawingAttributesKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PencilProperties(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributesPencilProperties * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributes3=_uuidof(IInkDrawingAttributes3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes4[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("EF65DC25-9F19-456D-91A3-BC3A3D91C5FB"), exclusiveto, contract] */
                    MIDL_INTERFACE("EF65DC25-9F19-456D-91A3-BC3A3D91C5FB")
                    IInkDrawingAttributes4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnoreTilt(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IgnoreTilt(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributes4=_uuidof(IInkDrawingAttributes4);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("4F2534CB-2D86-41BB-B0E8-E4C2A0253C52"), exclusiveto, contract] */
                    MIDL_INTERFACE("4F2534CB-2D86-41BB-B0E8-E4C2A0253C52")
                    IInkDrawingAttributesPencilProperties : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Opacity(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Opacity(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributesPencilProperties=_uuidof(IInkDrawingAttributesPencilProperties);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesStatics[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("F731E03F-1A65-4862-96CB-6E1665E17F6D"), exclusiveto, contract] */
                    MIDL_INTERFACE("F731E03F-1A65-4862-96CB-6E1665E17F6D")
                    IInkDrawingAttributesStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateForPencil(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkDrawingAttributesStatics=_uuidof(IInkDrawingAttributesStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkInputProcessingConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkInputProcessingConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("2778D85E-33CA-4B06-A6D3-AC3945116D37"), exclusiveto, contract] */
                    MIDL_INTERFACE("2778D85E-33CA-4B06-A6D3-AC3945116D37")
                    IInkInputProcessingConfiguration : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkInputProcessingMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkInputProcessingMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightDragAction(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkInputRightDragAction * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightDragAction(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkInputRightDragAction value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkInputProcessingConfiguration=_uuidof(IInkInputProcessingConfiguration);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkStrokeContainer
 *     Windows.UI.Input.Inking.IInkRecognizerContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkManager[] = L"Windows.UI.Input.Inking.IInkManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("4744737D-671B-4163-9C95-4E8D7A035FE1"), exclusiveto, contract] */
                    MIDL_INTERFACE("4744737D-671B-4163-9C95-4E8D7A035FE1")
                    IInkManager : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkManipulationMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkManipulationMode value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessPointerDown(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessPointerUpdate(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * updateInformation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ProcessPointerUp(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * updateRectangle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDefaultDrawingAttributes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * drawingAttributes
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RecognizeAsync2(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkManager=_uuidof(IInkManager);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint[] = L"Windows.UI.Input.Inking.IInkPoint";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("9F87272B-858C-46A5-9B41-D195970459FD"), exclusiveto, contract] */
                    MIDL_INTERFACE("9F87272B-858C-46A5-9B41-D195970459FD")
                    IInkPoint : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPoint=_uuidof(IInkPoint);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPoint2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint2[] = L"Windows.UI.Input.Inking.IInkPoint2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("FBA9C3F7-AE56-4D5C-BD2F-0AC45F5E4AF9"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBA9C3F7-AE56-4D5C-BD2F-0AC45F5E4AF9")
                    IInkPoint2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltX(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltY(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPoint2=_uuidof(IInkPoint2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory[] = L"Windows.UI.Input.Inking.IInkPointFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("29E5D51C-C98F-405D-9F3B-E53E31068D4D"), contract] */
                    MIDL_INTERFACE("29E5D51C-C98F-405D-9F3B-E53E31068D4D")
                    IInkPointFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInkPoint(
                            /* [in] */ABI::Windows::Foundation::Point position,
                            /* [in] */FLOAT pressure,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPoint * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPointFactory=_uuidof(IInkPointFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPointFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory2[] = L"Windows.UI.Input.Inking.IInkPointFactory2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("E0145E85-DAFF-45F2-AD69-050D8256A209"), exclusiveto, contract] */
                    MIDL_INTERFACE("E0145E85-DAFF-45F2-AD69-050D8256A209")
                    IInkPointFactory2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInkPointWithTiltAndTimestamp(
                            /* [in] */ABI::Windows::Foundation::Point position,
                            /* [in] */FLOAT pressure,
                            /* [in] */FLOAT tiltX,
                            /* [in] */FLOAT tiltY,
                            /* [in] */UINT64 timestamp,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPoint * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPointFactory2=_uuidof(IInkPointFactory2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter[] = L"Windows.UI.Input.Inking.IInkPresenter";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("A69B70E2-887B-458F-B173-4FE4438930A3"), exclusiveto, contract] */
                    MIDL_INTERFACE("A69B70E2-887B-458F-B173-4FE4438930A3")
                    IInkPresenter : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsInputEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsInputEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputDeviceTypes(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Core::CoreInputDeviceTypes * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputDeviceTypes(
                            /* [in] */ABI::Windows::UI::Core::CoreInputDeviceTypes value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnprocessedInput(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkUnprocessedInput * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StrokeInput(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStrokeInput * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputProcessingConfiguration(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkInputProcessingConfiguration * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StrokeContainer(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStrokeContainer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StrokeContainer(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkStrokeContainer * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CopyDefaultDrawingAttributes(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateDefaultDrawingAttributes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ActivateCustomDrying(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkSynchronizer * * inkSynchronizer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetPredefinedConfiguration(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkPresenterPredefinedConfiguration value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokesCollected(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokesCollected(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokesErased(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokesErased(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenter=_uuidof(IInkPresenter);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter2[] = L"Windows.UI.Input.Inking.IInkPresenter2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("CF53E612-9A34-11E6-9F33-A24FC0D9649C"), exclusiveto, contract] */
                    MIDL_INTERFACE("CF53E612-9A34-11E6-9F33-A24FC0D9649C")
                    IInkPresenter2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HighContrastAdjustment(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkHighContrastAdjustment * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HighContrastAdjustment(
                            /* [in] */ABI::Windows::UI::Input::Inking::InkHighContrastAdjustment value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenter2=_uuidof(IInkPresenter2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterProtractor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterProtractor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenterStencil
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractor[] = L"Windows.UI.Input.Inking.IInkPresenterProtractor";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("7DE3F2AA-EF6C-4E91-A73B-5B70D56FBD17"), exclusiveto, contract] */
                    MIDL_INTERFACE("7DE3F2AA-EF6C-4E91-A73B-5B70D56FBD17")
                    IInkPresenterProtractor : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreTickMarksVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreTickMarksVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreRaysVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreRaysVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCenterMarkerVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCenterMarkerVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAngleReadoutVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAngleReadoutVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsResizable(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsResizable(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Radius(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Radius(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccentColor(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccentColor(
                            /* [in] */ABI::Windows::UI::Color value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterProtractor=_uuidof(IInkPresenterProtractor);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterProtractorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterProtractor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractorFactory[] = L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("320103C9-68FA-47E9-8127-8370711FC46C"), exclusiveto, contract] */
                    MIDL_INTERFACE("320103C9-68FA-47E9-8127-8370711FC46C")
                    IInkPresenterProtractorFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkPresenter * inkPresenter,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenterProtractor * * inkPresenterProtractor
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterProtractorFactory=_uuidof(IInkPresenterProtractorFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRuler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterRuler
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenterStencil
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler[] = L"Windows.UI.Input.Inking.IInkPresenterRuler";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("6CDA7D5A-DEC7-4DD7-877A-2133F183D48A"), exclusiveto, contract] */
                    MIDL_INTERFACE("6CDA7D5A-DEC7-4DD7-877A-2133F183D48A")
                    IInkPresenterRuler : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Length(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Width(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Width(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterRuler=_uuidof(IInkPresenterRuler);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRuler2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterRuler
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler2[] = L"Windows.UI.Input.Inking.IInkPresenterRuler2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("45130DC1-BC61-44D4-A423-54712AE671C4"), exclusiveto, contract] */
                    MIDL_INTERFACE("45130DC1-BC61-44D4-A423-54712AE671C4")
                    IInkPresenterRuler2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AreTickMarksVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AreTickMarksVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCompassVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCompassVisible(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterRuler2=_uuidof(IInkPresenterRuler2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRulerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRulerFactory[] = L"Windows.UI.Input.Inking.IInkPresenterRulerFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("34361BEB-9001-4A4B-A690-69DBAF63E501"), contract] */
                    MIDL_INTERFACE("34361BEB-9001-4A4B-A690-69DBAF63E501")
                    IInkPresenterRulerFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Create(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkPresenter * inkPresenter,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenterRuler * * inkPresenterRuler
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterRulerFactory=_uuidof(IInkPresenterRulerFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterStencil
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterStencil[] = L"Windows.UI.Input.Inking.IInkPresenterStencil";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("30D12D6D-3E06-4D02-B116-277FB5D8ADDC"), contract] */
                    MIDL_INTERFACE("30D12D6D-3E06-4D02-B116-277FB5D8ADDC")
                    IInkPresenterStencil : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::InkPresenterStencilKind * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsVisible(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                            /* [in] */ABI::Windows::UI::Color value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundColor(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundColor(
                            /* [in] */ABI::Windows::UI::Color value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Transform(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix3x2 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Transform(
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkPresenterStencil=_uuidof(IInkPresenterStencil);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognitionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkRecognitionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognitionResult[] = L"Windows.UI.Input.Inking.IInkRecognitionResult";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("36461A94-5068-40EF-8A05-2C2FB60908A2"), exclusiveto, contract] */
                    MIDL_INTERFACE("36461A94-5068-40EF-8A05-2C2FB60908A2")
                    IInkRecognitionResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * boundingRect
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTextCandidates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * textCandidates
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStrokes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkRecognitionResult=_uuidof(IInkRecognitionResult);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizer[] = L"Windows.UI.Input.Inking.IInkRecognizer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("077CCEA3-904D-442A-B151-AACA3631C43B"), exclusiveto, contract] */
                    MIDL_INTERFACE("077CCEA3-904D-442A-B151-AACA3631C43B")
                    IInkRecognizer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkRecognizer=_uuidof(IInkRecognizer);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognizerContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizerContainer[] = L"Windows.UI.Input.Inking.IInkRecognizerContainer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("A74D9A31-8047-4698-A912-F82A5085012F"), contract] */
                    MIDL_INTERFACE("A74D9A31-8047-4698-A912-F82A5085012F")
                    IInkRecognizerContainer : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetDefaultRecognizer(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkRecognizer * recognizer
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RecognizeAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkStrokeContainer * strokeCollection,
                            /* [in] */ABI::Windows::UI::Input::Inking::InkRecognitionTarget recognitionTarget,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRecognizers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * * recognizerView
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkRecognizerContainer=_uuidof(IInkRecognizerContainer);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke[] = L"Windows.UI.Input.Inking.IInkStroke";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("15144D60-CCE3-4FCF-9D52-11518AB6AFD4"), exclusiveto, contract] */
                    MIDL_INTERFACE("15144D60-CCE3-4FCF-9D52-11518AB6AFD4")
                    IInkStroke : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DrawingAttributes(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DrawingAttributes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selected(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Selected(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recognized(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRenderingSegments(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * * renderingSegments
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Clone(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * clonedStroke
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStroke=_uuidof(IInkStroke);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke2[] = L"Windows.UI.Input.Inking.IInkStroke2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("5DB9E4F4-BAFA-4DE1-89D3-201B1ED7D89B"), exclusiveto, contract] */
                    MIDL_INTERFACE("5DB9E4F4-BAFA-4DE1-89D3-201B1ED7D89B")
                    IInkStroke2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointTransform(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix3x2 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointTransform(
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetInkPoints(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * * inkPoints
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStroke2=_uuidof(IInkStroke2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke3[] = L"Windows.UI.Input.Inking.IInkStroke3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("4A807374-9499-411D-A1C4-68855D03D65F"), exclusiveto, contract] */
                    MIDL_INTERFACE("4A807374-9499-411D-A1C4-68855D03D65F")
                    IInkStroke3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StrokeStartedTime(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StrokeStartedTime(
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StrokeDuration(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StrokeDuration(
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStroke3=_uuidof(IInkStroke3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("82BBD1DC-1C63-41DC-9E07-4B4A70CED801"), exclusiveto, contract] */
                    MIDL_INTERFACE("82BBD1DC-1C63-41DC-9E07-4B4A70CED801")
                    IInkStrokeBuilder : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE BeginStroke(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AppendToStroke(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IPointerPoint * * previousPointerPoint
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EndStroke(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::IPointerPoint * pointerPoint,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * stroke
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateStroke(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * points,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * stroke
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDefaultDrawingAttributes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * drawingAttributes
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeBuilder=_uuidof(IInkStrokeBuilder);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder2[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("BD82BC27-731F-4CBC-BBBF-6D468044F1E5"), exclusiveto, contract] */
                    MIDL_INTERFACE("BD82BC27-731F-4CBC-BBBF-6D468044F1E5")
                    IInkStrokeBuilder2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeFromInkPoints(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeBuilder2=_uuidof(IInkStrokeBuilder2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder3[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("B2C71FCD-5472-46B1-A81D-C37A3D169441"), exclusiveto, contract] */
                    MIDL_INTERFACE("B2C71FCD-5472-46B1-A81D-C37A3D169441")
                    IInkStrokeBuilder3 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateStrokeFromInkPoints(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                            /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 transform,
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * strokeStartedTime,
                            /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * strokeDuration,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeBuilder3=_uuidof(IInkStrokeBuilder3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer[] = L"Windows.UI.Input.Inking.IInkStrokeContainer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("22ACCBC6-FAA9-4F14-B68C-F6CEE670AE16"), contract] */
                    MIDL_INTERFACE("22ACCBC6-FAA9-4F14-B68C-F6CEE670AE16")
                    IInkStrokeContainer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AddStroke(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkStroke * stroke
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteSelected(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * invalidatedRect
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveSelected(
                            /* [in] */ABI::Windows::Foundation::Point translation,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * invalidatedRectangle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SelectWithPolyLine(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * polyline,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * invalidatedRectangle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SelectWithLine(
                            /* [in] */ABI::Windows::Foundation::Point from,
                            /* [in] */ABI::Windows::Foundation::Point to,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * invalidatedRectangle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CopySelectedToClipboard(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE PasteFromClipboard(
                            /* [in] */ABI::Windows::Foundation::Point position,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * invalidatedRectangle
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CanPasteFromClipboard(
                            /* [retval, out] */__RPC__out boolean * canPaste
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LoadAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * inputStream,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_UINT64 * * loadAction
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * outputStream,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UpdateRecognitionResults(
                            /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * recognitionResults
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStrokes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokeView
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetRecognitionResults(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeContainer=_uuidof(IInkStrokeContainer);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer2[] = L"Windows.UI.Input.Inking.IInkStrokeContainer2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("8901D364-DA36-4BCF-9E5C-D195825995B4"), exclusiveto, contract] */
                    MIDL_INTERFACE("8901D364-DA36-4BCF-9E5C-D195825995B4")
                    IInkStrokeContainer2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE AddStrokes(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * strokes
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeContainer2=_uuidof(IInkStrokeContainer2);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer3[] = L"Windows.UI.Input.Inking.IInkStrokeContainer3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("3D07BEA5-BAEA-4C82-A719-7B83DA1067D2"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D07BEA5-BAEA-4C82-A719-7B83DA1067D2")
                    IInkStrokeContainer3 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SaveWithFormatAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IOutputStream * outputStream,
                            /* [in] */ABI::Windows::UI::Input::Inking::InkPersistenceFormat inkPersistenceFormat,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStrokeById(
                            /* [in] */UINT32 id,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * stroke
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeContainer3=_uuidof(IInkStrokeContainer3);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeInput
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeInput[] = L"Windows.UI.Input.Inking.IInkStrokeInput";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("CF2FFE7B-5E10-43C6-A080-88F26E1DC67D"), exclusiveto, contract] */
                    MIDL_INTERFACE("CF2FFE7B-5E10-43C6-A080-88F26E1DC67D")
                    IInkStrokeInput : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokeStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokeStarted(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokeContinued(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokeContinued(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokeEnded(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokeEnded(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_StrokeCanceled(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_StrokeCanceled(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InkPresenter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeInput=_uuidof(IInkStrokeInput);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeRenderingSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeRenderingSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("68510F1F-88E3-477A-A2FA-569F5F1F9BD5"), exclusiveto, contract] */
                    MIDL_INTERFACE("68510F1F-88E3-477A-A2FA-569F5F1F9BD5")
                    IInkStrokeRenderingSegment : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BezierControlPoint1(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BezierControlPoint2(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Point * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltX(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltY(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Twist(
                            /* [retval, out] */__RPC__out FLOAT * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokeRenderingSegment=_uuidof(IInkStrokeRenderingSegment);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokesCollectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("C4F3F229-1938-495C-B4D9-6DE4B08D4811"), exclusiveto, contract] */
                    MIDL_INTERFACE("C4F3F229-1938-495C-B4D9-6DE4B08D4811")
                    IInkStrokesCollectedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Strokes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokesCollectedEventArgs=_uuidof(IInkStrokesCollectedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokesErasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokesErasedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("A4216A22-1503-4EBF-8FF5-2DE84584A8AA"), exclusiveto, contract] */
                    MIDL_INTERFACE("A4216A22-1503-4EBF-8FF5-2DE84584A8AA")
                    IInkStrokesErasedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Strokes(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkStrokesErasedEventArgs=_uuidof(IInkStrokesErasedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkSynchronizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkSynchronizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkSynchronizer[] = L"Windows.UI.Input.Inking.IInkSynchronizer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("9B9EA160-AE9B-45F9-8407-4B493B163661"), exclusiveto, contract] */
                    MIDL_INTERFACE("9B9EA160-AE9B-45F9-8407-4B493B163661")
                    IInkSynchronizer : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE BeginDry(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * inkStrokes
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EndDry(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkSynchronizer=_uuidof(IInkSynchronizer);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkUnprocessedInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkUnprocessedInput
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkUnprocessedInput[] = L"Windows.UI.Input.Inking.IInkUnprocessedInput";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    /* [object, uuid("DB4445E0-8398-4921-AC3B-AB978C5BA256"), exclusiveto, contract] */
                    MIDL_INTERFACE("DB4445E0-8398-4921-AC3B-AB978C5BA256")
                    IInkUnprocessedInput : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntered(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntered(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerHovered(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerHovered(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExited(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExited(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressed(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoved(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoved(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleased(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleased(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerLost(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerLost(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InkPresenter(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkUnprocessedInput=_uuidof(IInkUnprocessedInput);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Inking */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkDrawingAttributes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.IInkDrawingAttributesStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkDrawingAttributes ** Default Interface **
 *    Windows.UI.Input.Inking.IInkDrawingAttributes2
 *    Windows.UI.Input.Inking.IInkDrawingAttributes3
 *    Windows.UI.Input.Inking.IInkDrawingAttributes4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributes_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributes[] = L"Windows.UI.Input.Inking.InkDrawingAttributes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.InkInputProcessingConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkInputProcessingConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkInputProcessingConfiguration_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkInputProcessingConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.InkInputProcessingConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkManager ** Default Interface **
 *    Windows.UI.Input.Inking.IInkRecognizerContainer
 *    Windows.UI.Input.Inking.IInkStrokeContainer
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkManager[] = L"Windows.UI.Input.Inking.InkManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPointFactory2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPointFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPoint ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPoint2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPoint_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPoint[] = L"Windows.UI.Input.Inking.InkPoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenter ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenter2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenter_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenter[] = L"Windows.UI.Input.Inking.InkPresenter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenterProtractor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPresenterProtractorFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenterProtractor ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenterStencil
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterProtractor_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterProtractor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterProtractor[] = L"Windows.UI.Input.Inking.InkPresenterProtractor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenterRuler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPresenterRulerFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenterRuler ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenterStencil
 *    Windows.UI.Input.Inking.IInkPresenterRuler2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterRuler_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterRuler_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterRuler[] = L"Windows.UI.Input.Inking.InkPresenterRuler";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognitionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognitionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognitionResult_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognitionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognitionResult[] = L"Windows.UI.Input.Inking.InkRecognitionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizer[] = L"Windows.UI.Input.Inking.InkRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognizerContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognizerContainer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizerContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizerContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizerContainer[] = L"Windows.UI.Input.Inking.InkRecognizerContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStroke ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStroke2
 *    Windows.UI.Input.Inking.IInkStroke3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStroke_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStroke_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStroke[] = L"Windows.UI.Input.Inking.InkStroke";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeBuilder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeBuilder ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStrokeBuilder2
 *    Windows.UI.Input.Inking.IInkStrokeBuilder3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeBuilder_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeBuilder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeBuilder[] = L"Windows.UI.Input.Inking.InkStrokeBuilder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeContainer ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStrokeContainer2
 *    Windows.UI.Input.Inking.IInkStrokeContainer3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeContainer[] = L"Windows.UI.Input.Inking.InkStrokeContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeInput ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeInput_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeInput[] = L"Windows.UI.Input.Inking.InkStrokeInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeRenderingSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeRenderingSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeRenderingSegment_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeRenderingSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.InkStrokeRenderingSegment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokesCollectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokesErasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokesErasedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesErasedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesErasedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkSynchronizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkSynchronizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkSynchronizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkSynchronizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkSynchronizer[] = L"Windows.UI.Input.Inking.InkSynchronizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkUnprocessedInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkUnprocessedInput ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkUnprocessedInput_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkUnprocessedInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkUnprocessedInput[] = L"Windows.UI.Input.Inking.InkUnprocessedInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;

typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer;

typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;

typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;

typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
            /* [in] */ __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;

interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;

typedef struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl;

interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CInput__CInking__CInkPoint_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs_INTERFACE_DEFINED__

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


struct __x_ABI_CWindows_CFoundation_CTimeSpan;

#if !defined(____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;

typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;

interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CFoundation__CTimeSpan_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CFoundation__CTimeSpan_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CFoundation__CTimeSpan_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CFoundation__CTimeSpan_INTERFACE_DEFINED__


struct __x_ABI_CWindows_CFoundation_CPoint;

#if !defined(____FIIterator_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CFoundation__CPoint __FIIterator_1_Windows__CFoundation__CPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CPoint;

typedef struct __FIIterator_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CPointVtbl;

interface __FIIterator_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CFoundation__CPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CFoundation__CPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CFoundation__CPoint_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CFoundation__CPoint_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1_Windows__CFoundation__CPoint;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CPoint;

typedef  struct __FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CPoint **first);

    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CPointVtbl;

interface __FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CFoundation__CPoint_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CFoundation__CPoint_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CFoundation__CPoint_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CFoundation__CPoint_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CFoundation__CPoint_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CFoundation__CPoint_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CFoundation__CPoint_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CFoundation__CPoint_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionProgressHandler_1_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncActionProgressHandler_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncActionProgressHandler_1_UINT64 __FIAsyncActionProgressHandler_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_UINT64;

typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;

typedef struct __FIAsyncActionProgressHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_UINT64 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_UINT64Vtbl;

interface __FIAsyncActionProgressHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionProgressHandler_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionProgressHandler_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionProgressHandler_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionProgressHandler_1_UINT64_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionProgressHandler_1_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionWithProgressCompletedHandler_1_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgressCompletedHandler_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgressCompletedHandler_1_UINT64 __FIAsyncActionWithProgressCompletedHandler_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_UINT64;

typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;

typedef struct __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgress_1_UINT64 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl;

interface __FIAsyncActionWithProgressCompletedHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgressCompletedHandler_1_UINT64_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgressCompletedHandler_1_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncActionWithProgress_1_UINT64_INTERFACE_DEFINED__)
#define ____FIAsyncActionWithProgress_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_UINT64;

typedef struct __FIAsyncActionWithProgress_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,/* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncActionProgressHandler_1_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_UINT64 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, /* [in] */ __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_UINT64 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_UINT64Vtbl;

interface __FIAsyncActionWithProgress_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncActionWithProgress_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncActionWithProgress_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncActionWithProgress_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncActionWithProgress_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncActionWithProgress_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncActionWithProgress_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncActionWithProgress_1_UINT64_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_UINT64_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncActionWithProgress_1_UINT64_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_UINT64_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncActionWithProgress_1_UINT64_GetResults(This)	\
    ( (This)->lpVtbl -> GetResults(This) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncActionWithProgress_1_UINT64_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32 __FIAsyncOperationProgressHandler_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_UINT32_UINT32;

typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, /* [in] */ UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationProgressHandler_2_UINT32_UINT32_Invoke(This,asyncInfo,progressInfo)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationProgressHandler_2_UINT32_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;

//  Forward declare the async operation.
typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};



#ifdef COBJMACROS
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__)
#define ____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_UINT32_UINT32;

typedef struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 **handler);
    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [in] */ __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, /* [retval][out] */ __RPC__deref_out_opt int *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl;

interface __FIAsyncOperationWithProgress_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_put_Progress(This,handler)	\
    ( (This)->lpVtbl -> put_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_get_Progress(This,handler)	\
    ( (This)->lpVtbl -> get_Progress(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperationWithProgress_2_UINT32_UINT32_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */



#endif // ____FIAsyncOperationWithProgress_2_UINT32_UINT32_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;




typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;





typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIOutputStream_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes;





#ifndef ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;

#endif // ____x_ABI_CWindows_CUI_CInput_CIPointerPoint_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget;


typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape;





































































/*
 *
 * Struct Windows.UI.Input.Inking.InkDrawingAttributesKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind
{
    InkDrawingAttributesKind_Default = 0,
    InkDrawingAttributesKind_Pencil = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Inking.InkHighContrastAdjustment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment
{
    InkHighContrastAdjustment_UseSystemColorsWhenNecessary = 0,
    InkHighContrastAdjustment_UseSystemColors = 1,
    InkHighContrastAdjustment_UseOriginalColors = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Inking.InkInputProcessingMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode
{
    InkInputProcessingMode_None = 0,
    InkInputProcessingMode_Inking = 1,
    InkInputProcessingMode_Erasing = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkInputRightDragAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction
{
    InkInputRightDragAction_LeaveUnprocessed = 0,
    InkInputRightDragAction_AllowProcessing = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkManipulationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode
{
    InkManipulationMode_Inking = 0,
    InkManipulationMode_Erasing = 1,
    InkManipulationMode_Selecting = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPersistenceFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat
{
    InkPersistenceFormat_GifWithEmbeddedIsf = 0,
    InkPersistenceFormat_Isf = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPresenterPredefinedConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration
{
    InkPresenterPredefinedConfiguration_SimpleSinglePointer = 0,
    InkPresenterPredefinedConfiguration_SimpleMultiplePointer = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.InkPresenterStencilKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind
{
    InkPresenterStencilKind_Other = 0,
    InkPresenterStencilKind_Ruler = 1,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    InkPresenterStencilKind_Protractor = 2,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Inking.InkRecognitionTarget
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget
{
    InkRecognitionTarget_All = 0,
    InkRecognitionTarget_Selected = 1,
    InkRecognitionTarget_Recent = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Input.Inking.PenTipShape
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape
{
    PenTipShape_Circle = 0,
    PenTipShape_Rectangle = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes";
/* [object, uuid("97A2176C-6774-48AD-84F0-48F5A9BE74F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenTip )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenTip )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnorePressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IgnorePressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FitToCurve )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FitToCurve )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_get_Color(This,value) \
    ( (This)->lpVtbl->get_Color(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_put_Color(This,value) \
    ( (This)->lpVtbl->put_Color(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_get_PenTip(This,value) \
    ( (This)->lpVtbl->get_PenTip(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_put_PenTip(This,value) \
    ( (This)->lpVtbl->put_PenTip(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_put_Size(This,value) \
    ( (This)->lpVtbl->put_Size(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_get_IgnorePressure(This,value) \
    ( (This)->lpVtbl->get_IgnorePressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_put_IgnorePressure(This,value) \
    ( (This)->lpVtbl->put_IgnorePressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_get_FitToCurve(This,value) \
    ( (This)->lpVtbl->get_FitToCurve(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_put_FitToCurve(This,value) \
    ( (This)->lpVtbl->put_FitToCurve(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes2[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes2";
/* [object, uuid("7CAB6508-8EC4-42FD-A5A5-E4B7D1D5316D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenTipTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenTipTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DrawAsHighlighter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DrawAsHighlighter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_get_PenTipTransform(This,value) \
    ( (This)->lpVtbl->get_PenTipTransform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_put_PenTipTransform(This,value) \
    ( (This)->lpVtbl->put_PenTipTransform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_get_DrawAsHighlighter(This,value) \
    ( (This)->lpVtbl->get_DrawAsHighlighter(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_put_DrawAsHighlighter(This,value) \
    ( (This)->lpVtbl->put_DrawAsHighlighter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes3[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes3";
/* [object, uuid("72020002-7D5B-4690-8AF4-E664CBE2B74F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PencilProperties )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_get_PencilProperties(This,value) \
    ( (This)->lpVtbl->get_PencilProperties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributes4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes4[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes4";
/* [object, uuid("EF65DC25-9F19-456D-91A3-BC3A3D91C5FB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnoreTilt )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IgnoreTilt )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_get_IgnoreTilt(This,value) \
    ( (This)->lpVtbl->get_IgnoreTilt(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_put_IgnoreTilt(This,value) \
    ( (This)->lpVtbl->put_IgnoreTilt(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties";
/* [object, uuid("4F2534CB-2D86-41BB-B0E8-E4C2A0253C52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_get_Opacity(This,value) \
    ( (This)->lpVtbl->get_Opacity(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_put_Opacity(This,value) \
    ( (This)->lpVtbl->put_Opacity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkDrawingAttributesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkDrawingAttributes
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesStatics[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics";
/* [object, uuid("F731E03F-1A65-4862-96CB-6E1665E17F6D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForPencil )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_CreateForPencil(This,result) \
    ( (This)->lpVtbl->CreateForPencil(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkInputProcessingConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkInputProcessingConfiguration
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration";
/* [object, uuid("2778D85E-33CA-4B06-A6D3-AC3945116D37"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightDragAction )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightDragAction )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_get_RightDragAction(This,value) \
    ( (This)->lpVtbl->get_RightDragAction(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_put_RightDragAction(This,value) \
    ( (This)->lpVtbl->put_RightDragAction(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkManager
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkStrokeContainer
 *     Windows.UI.Input.Inking.IInkRecognizerContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkManager[] = L"Windows.UI.Input.Inking.IInkManager";
/* [object, uuid("4744737D-671B-4163-9C95-4E8D7A035FE1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerDown )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerUpdate )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * updateInformation
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerUp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * updateRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RecognizeAsync2 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget recognitionTarget,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_ProcessPointerDown(This,pointerPoint) \
    ( (This)->lpVtbl->ProcessPointerDown(This,pointerPoint) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_ProcessPointerUpdate(This,pointerPoint,updateInformation) \
    ( (This)->lpVtbl->ProcessPointerUpdate(This,pointerPoint,updateInformation) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_ProcessPointerUp(This,pointerPoint,updateRectangle) \
    ( (This)->lpVtbl->ProcessPointerUp(This,pointerPoint,updateRectangle) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_SetDefaultDrawingAttributes(This,drawingAttributes) \
    ( (This)->lpVtbl->SetDefaultDrawingAttributes(This,drawingAttributes) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_RecognizeAsync2(This,recognitionTarget,recognitionResults) \
    ( (This)->lpVtbl->RecognizeAsync2(This,recognitionTarget,recognitionResults) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint[] = L"Windows.UI.Input.Inking.IInkPoint";
/* [object, uuid("9F87272B-858C-46A5-9B41-D195970459FD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPoint2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint2[] = L"Windows.UI.Input.Inking.IInkPoint2";
/* [object, uuid("FBA9C3F7-AE56-4D5C-BD2F-0AC45F5E4AF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_get_TiltX(This,value) \
    ( (This)->lpVtbl->get_TiltX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_get_TiltY(This,value) \
    ( (This)->lpVtbl->get_TiltY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPointFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory[] = L"Windows.UI.Input.Inking.IInkPointFactory";
/* [object, uuid("29E5D51C-C98F-405D-9F3B-E53E31068D4D"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInkPoint )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint position,
        /* [in] */FLOAT pressure,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_CreateInkPoint(This,position,pressure,result) \
    ( (This)->lpVtbl->CreateInkPoint(This,position,pressure,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPointFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPoint
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory2[] = L"Windows.UI.Input.Inking.IInkPointFactory2";
/* [object, uuid("E0145E85-DAFF-45F2-AD69-050D8256A209"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInkPointWithTiltAndTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint position,
        /* [in] */FLOAT pressure,
        /* [in] */FLOAT tiltX,
        /* [in] */FLOAT tiltY,
        /* [in] */UINT64 timestamp,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_CreateInkPointWithTiltAndTimestamp(This,position,pressure,tiltX,tiltY,timestamp,result) \
    ( (This)->lpVtbl->CreateInkPointWithTiltAndTimestamp(This,position,pressure,tiltX,tiltY,timestamp,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter[] = L"Windows.UI.Input.Inking.IInkPresenter";
/* [object, uuid("A69B70E2-887B-458F-B173-4FE4438930A3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputDeviceTypes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputDeviceTypes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnprocessedInput )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StrokeInput )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputProcessingConfiguration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StrokeContainer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StrokeContainer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * value
        );
    HRESULT ( STDMETHODCALLTYPE *ActivateCustomDrying )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * * inkSynchronizer
        );
    HRESULT ( STDMETHODCALLTYPE *SetPredefinedConfiguration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokesCollected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokesCollected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokesErased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokesErased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_put_IsInputEnabled(This,value) \
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_InputDeviceTypes(This,value) \
    ( (This)->lpVtbl->get_InputDeviceTypes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_put_InputDeviceTypes(This,value) \
    ( (This)->lpVtbl->put_InputDeviceTypes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_UnprocessedInput(This,value) \
    ( (This)->lpVtbl->get_UnprocessedInput(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_StrokeInput(This,value) \
    ( (This)->lpVtbl->get_StrokeInput(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_InputProcessingConfiguration(This,value) \
    ( (This)->lpVtbl->get_InputProcessingConfiguration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_get_StrokeContainer(This,value) \
    ( (This)->lpVtbl->get_StrokeContainer(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_put_StrokeContainer(This,value) \
    ( (This)->lpVtbl->put_StrokeContainer(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_CopyDefaultDrawingAttributes(This,value) \
    ( (This)->lpVtbl->CopyDefaultDrawingAttributes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_UpdateDefaultDrawingAttributes(This,value) \
    ( (This)->lpVtbl->UpdateDefaultDrawingAttributes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_ActivateCustomDrying(This,inkSynchronizer) \
    ( (This)->lpVtbl->ActivateCustomDrying(This,inkSynchronizer) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_SetPredefinedConfiguration(This,value) \
    ( (This)->lpVtbl->SetPredefinedConfiguration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_add_StrokesCollected(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokesCollected(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_remove_StrokesCollected(This,cookie) \
    ( (This)->lpVtbl->remove_StrokesCollected(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_add_StrokesErased(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokesErased(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_remove_StrokesErased(This,cookie) \
    ( (This)->lpVtbl->remove_StrokesErased(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter2[] = L"Windows.UI.Input.Inking.IInkPresenter2";
/* [object, uuid("CF53E612-9A34-11E6-9F33-A24FC0D9649C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_get_HighContrastAdjustment(This,value) \
    ( (This)->lpVtbl->get_HighContrastAdjustment(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_put_HighContrastAdjustment(This,value) \
    ( (This)->lpVtbl->put_HighContrastAdjustment(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterProtractor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterProtractor
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenterStencil
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractor[] = L"Windows.UI.Input.Inking.IInkPresenterProtractor";
/* [object, uuid("7DE3F2AA-EF6C-4E91-A73B-5B70D56FBD17"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreRaysVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreRaysVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCenterMarkerVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCenterMarkerVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAngleReadoutVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAngleReadoutVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsResizable )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsResizable )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Radius )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccentColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccentColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_AreTickMarksVisible(This,value) \
    ( (This)->lpVtbl->get_AreTickMarksVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_AreTickMarksVisible(This,value) \
    ( (This)->lpVtbl->put_AreTickMarksVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_AreRaysVisible(This,value) \
    ( (This)->lpVtbl->get_AreRaysVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_AreRaysVisible(This,value) \
    ( (This)->lpVtbl->put_AreRaysVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_IsCenterMarkerVisible(This,value) \
    ( (This)->lpVtbl->get_IsCenterMarkerVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_IsCenterMarkerVisible(This,value) \
    ( (This)->lpVtbl->put_IsCenterMarkerVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_IsAngleReadoutVisible(This,value) \
    ( (This)->lpVtbl->get_IsAngleReadoutVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_IsAngleReadoutVisible(This,value) \
    ( (This)->lpVtbl->put_IsAngleReadoutVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_IsResizable(This,value) \
    ( (This)->lpVtbl->get_IsResizable(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_IsResizable(This,value) \
    ( (This)->lpVtbl->put_IsResizable(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_Radius(This,value) \
    ( (This)->lpVtbl->get_Radius(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_Radius(This,value) \
    ( (This)->lpVtbl->put_Radius(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_get_AccentColor(This,value) \
    ( (This)->lpVtbl->get_AccentColor(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_put_AccentColor(This,value) \
    ( (This)->lpVtbl->put_AccentColor(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterProtractorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterProtractor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractorFactory[] = L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory";
/* [object, uuid("320103C9-68FA-47E9-8127-8370711FC46C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * * inkPresenterProtractor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_Create(This,inkPresenter,inkPresenterProtractor) \
    ( (This)->lpVtbl->Create(This,inkPresenter,inkPresenterProtractor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRuler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterRuler
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Inking.IInkPresenterStencil
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler[] = L"Windows.UI.Input.Inking.IInkPresenterRuler";
/* [object, uuid("6CDA7D5A-DEC7-4DD7-877A-2133F183D48A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_put_Length(This,value) \
    ( (This)->lpVtbl->put_Length(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_get_Width(This,value) \
    ( (This)->lpVtbl->get_Width(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_put_Width(This,value) \
    ( (This)->lpVtbl->put_Width(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRuler2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkPresenterRuler
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler2[] = L"Windows.UI.Input.Inking.IInkPresenterRuler2";
/* [object, uuid("45130DC1-BC61-44D4-A423-54712AE671C4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCompassVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCompassVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_get_AreTickMarksVisible(This,value) \
    ( (This)->lpVtbl->get_AreTickMarksVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_put_AreTickMarksVisible(This,value) \
    ( (This)->lpVtbl->put_AreTickMarksVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_get_IsCompassVisible(This,value) \
    ( (This)->lpVtbl->get_IsCompassVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_put_IsCompassVisible(This,value) \
    ( (This)->lpVtbl->put_IsCompassVisible(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterRulerFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRulerFactory[] = L"Windows.UI.Input.Inking.IInkPresenterRulerFactory";
/* [object, uuid("34361BEB-9001-4A4B-A690-69DBAF63E501"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * * inkPresenterRuler
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_Create(This,inkPresenter,inkPresenterRuler) \
    ( (This)->lpVtbl->Create(This,inkPresenter,inkPresenterRuler) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkPresenterStencil
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterStencil[] = L"Windows.UI.Input.Inking.IInkPresenterStencil";
/* [object, uuid("30D12D6D-3E06-4D02-B116-277FB5D8ADDC"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Transform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Transform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_get_Kind(This,value) \
    ( (This)->lpVtbl->get_Kind(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_get_IsVisible(This,value) \
    ( (This)->lpVtbl->get_IsVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_put_IsVisible(This,value) \
    ( (This)->lpVtbl->put_IsVisible(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_get_ForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_put_ForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_get_Transform(This,value) \
    ( (This)->lpVtbl->get_Transform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_put_Transform(This,value) \
    ( (This)->lpVtbl->put_Transform(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognitionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkRecognitionResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognitionResult[] = L"Windows.UI.Input.Inking.IInkRecognitionResult";
/* [object, uuid("36461A94-5068-40EF-8A05-2C2FB60908A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * boundingRect
        );
    HRESULT ( STDMETHODCALLTYPE *GetTextCandidates )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * textCandidates
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_get_BoundingRect(This,boundingRect) \
    ( (This)->lpVtbl->get_BoundingRect(This,boundingRect) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_GetTextCandidates(This,textCandidates) \
    ( (This)->lpVtbl->GetTextCandidates(This,textCandidates) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_GetStrokes(This,strokes) \
    ( (This)->lpVtbl->GetStrokes(This,strokes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkRecognizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizer[] = L"Windows.UI.Input.Inking.IInkRecognizer";
/* [object, uuid("077CCEA3-904D-442A-B151-AACA3631C43B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkRecognizerContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizerContainer[] = L"Windows.UI.Input.Inking.IInkRecognizerContainer";
/* [object, uuid("A74D9A31-8047-4698-A912-F82A5085012F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDefaultRecognizer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * recognizer
        );
    HRESULT ( STDMETHODCALLTYPE *RecognizeAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * strokeCollection,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget recognitionTarget,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecognizers )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * * recognizerView
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_SetDefaultRecognizer(This,recognizer) \
    ( (This)->lpVtbl->SetDefaultRecognizer(This,recognizer) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_RecognizeAsync(This,strokeCollection,recognitionTarget,recognitionResults) \
    ( (This)->lpVtbl->RecognizeAsync(This,strokeCollection,recognitionTarget,recognitionResults) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_GetRecognizers(This,recognizerView) \
    ( (This)->lpVtbl->GetRecognizers(This,recognizerView) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke[] = L"Windows.UI.Input.Inking.IInkStroke";
/* [object, uuid("15144D60-CCE3-4FCF-9D52-11518AB6AFD4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Selected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recognized )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRenderingSegments )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * * renderingSegments
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * clonedStroke
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_get_DrawingAttributes(This,value) \
    ( (This)->lpVtbl->get_DrawingAttributes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_put_DrawingAttributes(This,value) \
    ( (This)->lpVtbl->put_DrawingAttributes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_get_BoundingRect(This,value) \
    ( (This)->lpVtbl->get_BoundingRect(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_get_Selected(This,value) \
    ( (This)->lpVtbl->get_Selected(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_put_Selected(This,value) \
    ( (This)->lpVtbl->put_Selected(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_get_Recognized(This,value) \
    ( (This)->lpVtbl->get_Recognized(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_GetRenderingSegments(This,renderingSegments) \
    ( (This)->lpVtbl->GetRenderingSegments(This,renderingSegments) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_Clone(This,clonedStroke) \
    ( (This)->lpVtbl->Clone(This,clonedStroke) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke2[] = L"Windows.UI.Input.Inking.IInkStroke2";
/* [object, uuid("5DB9E4F4-BAFA-4DE1-89D3-201B1ED7D89B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * * inkPoints
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_get_PointTransform(This,value) \
    ( (This)->lpVtbl->get_PointTransform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_put_PointTransform(This,value) \
    ( (This)->lpVtbl->put_PointTransform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_GetInkPoints(This,inkPoints) \
    ( (This)->lpVtbl->GetInkPoints(This,inkPoints) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStroke3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke3[] = L"Windows.UI.Input.Inking.IInkStroke3";
/* [object, uuid("4A807374-9499-411D-A1C4-68855D03D65F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StrokeStartedTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StrokeStartedTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StrokeDuration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StrokeDuration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_get_StrokeStartedTime(This,value) \
    ( (This)->lpVtbl->get_StrokeStartedTime(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_put_StrokeStartedTime(This,value) \
    ( (This)->lpVtbl->put_StrokeStartedTime(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_get_StrokeDuration(This,value) \
    ( (This)->lpVtbl->get_StrokeDuration(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_put_StrokeDuration(This,value) \
    ( (This)->lpVtbl->put_StrokeDuration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder";
/* [object, uuid("82BBD1DC-1C63-41DC-9E07-4B4A70CED801"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BeginStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *AppendToStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * previousPointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *EndStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * points,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_BeginStroke(This,pointerPoint) \
    ( (This)->lpVtbl->BeginStroke(This,pointerPoint) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_AppendToStroke(This,pointerPoint,previousPointerPoint) \
    ( (This)->lpVtbl->AppendToStroke(This,pointerPoint,previousPointerPoint) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_EndStroke(This,pointerPoint,stroke) \
    ( (This)->lpVtbl->EndStroke(This,pointerPoint,stroke) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_CreateStroke(This,points,stroke) \
    ( (This)->lpVtbl->CreateStroke(This,points,stroke) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_SetDefaultDrawingAttributes(This,drawingAttributes) \
    ( (This)->lpVtbl->SetDefaultDrawingAttributes(This,drawingAttributes) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder2[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder2";
/* [object, uuid("BD82BC27-731F-4CBC-BBBF-6D468044F1E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateStrokeFromInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_CreateStrokeFromInkPoints(This,inkPoints,transform,result) \
    ( (This)->lpVtbl->CreateStrokeFromInkPoints(This,inkPoints,transform,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeBuilder3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeBuilder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder3[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder3";
/* [object, uuid("B2C71FCD-5472-46B1-A81D-C37A3D169441"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateStrokeFromInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * strokeStartedTime,
        /* [in] */__RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * strokeDuration,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_CreateStrokeFromInkPoints(This,inkPoints,transform,strokeStartedTime,strokeDuration,result) \
    ( (This)->lpVtbl->CreateStrokeFromInkPoints(This,inkPoints,transform,strokeStartedTime,strokeDuration,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer[] = L"Windows.UI.Input.Inking.IInkStrokeContainer";
/* [object, uuid("22ACCBC6-FAA9-4F14-B68C-F6CEE670AE16"), contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteSelected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRect
        );
    HRESULT ( STDMETHODCALLTYPE *MoveSelected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint translation,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SelectWithPolyLine )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * polyline,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SelectWithLine )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint from,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint to,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *CopySelectedToClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
        );
    HRESULT ( STDMETHODCALLTYPE *PasteFromClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint position,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *CanPasteFromClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [retval, out] */__RPC__out boolean * canPaste
        );
    HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * inputStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncActionWithProgress_1_UINT64 * * loadAction
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateRecognitionResults )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * recognitionResults
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokeView
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecognitionResults )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_get_BoundingRect(This,value) \
    ( (This)->lpVtbl->get_BoundingRect(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_AddStroke(This,stroke) \
    ( (This)->lpVtbl->AddStroke(This,stroke) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_DeleteSelected(This,invalidatedRect) \
    ( (This)->lpVtbl->DeleteSelected(This,invalidatedRect) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_MoveSelected(This,translation,invalidatedRectangle) \
    ( (This)->lpVtbl->MoveSelected(This,translation,invalidatedRectangle) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_SelectWithPolyLine(This,polyline,invalidatedRectangle) \
    ( (This)->lpVtbl->SelectWithPolyLine(This,polyline,invalidatedRectangle) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_SelectWithLine(This,from,to,invalidatedRectangle) \
    ( (This)->lpVtbl->SelectWithLine(This,from,to,invalidatedRectangle) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_CopySelectedToClipboard(This) \
    ( (This)->lpVtbl->CopySelectedToClipboard(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_PasteFromClipboard(This,position,invalidatedRectangle) \
    ( (This)->lpVtbl->PasteFromClipboard(This,position,invalidatedRectangle) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_CanPasteFromClipboard(This,canPaste) \
    ( (This)->lpVtbl->CanPasteFromClipboard(This,canPaste) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_LoadAsync(This,inputStream,loadAction) \
    ( (This)->lpVtbl->LoadAsync(This,inputStream,loadAction) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_SaveAsync(This,outputStream,outputStreamOperation) \
    ( (This)->lpVtbl->SaveAsync(This,outputStream,outputStreamOperation) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_UpdateRecognitionResults(This,recognitionResults) \
    ( (This)->lpVtbl->UpdateRecognitionResults(This,recognitionResults) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_GetStrokes(This,strokeView) \
    ( (This)->lpVtbl->GetStrokes(This,strokeView) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_GetRecognitionResults(This,recognitionResults) \
    ( (This)->lpVtbl->GetRecognitionResults(This,recognitionResults) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer2[] = L"Windows.UI.Input.Inking.IInkStrokeContainer2";
/* [object, uuid("8901D364-DA36-4BCF-9E5C-D195825995B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * strokes
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_AddStrokes(This,strokes) \
    ( (This)->lpVtbl->AddStrokes(This,strokes) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeContainer3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer3[] = L"Windows.UI.Input.Inking.IInkStrokeContainer3";
/* [object, uuid("3D07BEA5-BAEA-4C82-A719-7B83DA1067D2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *SaveWithFormatAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat inkPersistenceFormat,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokeById )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
        /* [in] */UINT32 id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_SaveWithFormatAsync(This,outputStream,inkPersistenceFormat,outputStreamOperation) \
    ( (This)->lpVtbl->SaveWithFormatAsync(This,outputStream,inkPersistenceFormat,outputStreamOperation) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_GetStrokeById(This,id,stroke) \
    ( (This)->lpVtbl->GetStrokeById(This,id,stroke) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeInput
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeInput[] = L"Windows.UI.Input.Inking.IInkStrokeInput";
/* [object, uuid("CF2FFE7B-5E10-43C6-A080-88F26E1DC67D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokeStarted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokeStarted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokeContinued )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokeContinued )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokeEnded )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokeEnded )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_StrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_StrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_add_StrokeStarted(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokeStarted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_remove_StrokeStarted(This,cookie) \
    ( (This)->lpVtbl->remove_StrokeStarted(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_add_StrokeContinued(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokeContinued(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_remove_StrokeContinued(This,cookie) \
    ( (This)->lpVtbl->remove_StrokeContinued(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_add_StrokeEnded(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokeEnded(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_remove_StrokeEnded(This,cookie) \
    ( (This)->lpVtbl->remove_StrokeEnded(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_add_StrokeCanceled(This,handler,cookie) \
    ( (This)->lpVtbl->add_StrokeCanceled(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_remove_StrokeCanceled(This,cookie) \
    ( (This)->lpVtbl->remove_StrokeCanceled(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_get_InkPresenter(This,value) \
    ( (This)->lpVtbl->get_InkPresenter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokeRenderingSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokeRenderingSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment";
/* [object, uuid("68510F1F-88E3-477A-A2FA-569F5F1F9BD5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BezierControlPoint1 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BezierControlPoint2 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Twist )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_BezierControlPoint1(This,value) \
    ( (This)->lpVtbl->get_BezierControlPoint1(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_BezierControlPoint2(This,value) \
    ( (This)->lpVtbl->get_BezierControlPoint2(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_TiltX(This,value) \
    ( (This)->lpVtbl->get_TiltX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_TiltY(This,value) \
    ( (This)->lpVtbl->get_TiltY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_get_Twist(This,value) \
    ( (This)->lpVtbl->get_Twist(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokesCollectedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs";
/* [object, uuid("C4F3F229-1938-495C-B4D9-6DE4B08D4811"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_get_Strokes(This,value) \
    ( (This)->lpVtbl->get_Strokes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkStrokesErasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkStrokesErasedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs";
/* [object, uuid("A4216A22-1503-4EBF-8FF5-2DE84584A8AA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_get_Strokes(This,value) \
    ( (This)->lpVtbl->get_Strokes(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkSynchronizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkSynchronizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkSynchronizer[] = L"Windows.UI.Input.Inking.IInkSynchronizer";
/* [object, uuid("9B9EA160-AE9B-45F9-8407-4B493B163661"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BeginDry )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * inkStrokes
        );
    HRESULT ( STDMETHODCALLTYPE *EndDry )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_BeginDry(This,inkStrokes) \
    ( (This)->lpVtbl->BeginDry(This,inkStrokes) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_EndDry(This) \
    ( (This)->lpVtbl->EndDry(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.IInkUnprocessedInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.InkUnprocessedInput
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkUnprocessedInput[] = L"Windows.UI.Input.Inking.IInkUnprocessedInput";
/* [object, uuid("DB4445E0-8398-4921-AC3B-AB978C5BA256"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerHovered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerHovered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerEntered(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerEntered(This,cookie) \
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerHovered(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerHovered(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerHovered(This,cookie) \
    ( (This)->lpVtbl->remove_PointerHovered(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerExited(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerExited(This,cookie) \
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerPressed(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerPressed(This,cookie) \
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerMoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerMoved(This,cookie) \
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerReleased(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerReleased(This,cookie) \
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_add_PointerLost(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerLost(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_remove_PointerLost(This,cookie) \
    ( (This)->lpVtbl->remove_PointerLost(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_get_InkPresenter(This,value) \
    ( (This)->lpVtbl->get_InkPresenter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkDrawingAttributes
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.IInkDrawingAttributesStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkDrawingAttributes ** Default Interface **
 *    Windows.UI.Input.Inking.IInkDrawingAttributes2
 *    Windows.UI.Input.Inking.IInkDrawingAttributes3
 *    Windows.UI.Input.Inking.IInkDrawingAttributes4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributes_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributes_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributes[] = L"Windows.UI.Input.Inking.InkDrawingAttributes";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.InkInputProcessingConfiguration
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkInputProcessingConfiguration ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkInputProcessingConfiguration_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkInputProcessingConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.InkInputProcessingConfiguration";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkManager ** Default Interface **
 *    Windows.UI.Input.Inking.IInkRecognizerContainer
 *    Windows.UI.Input.Inking.IInkStrokeContainer
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkManager[] = L"Windows.UI.Input.Inking.InkManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPointFactory2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPointFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPoint ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPoint2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPoint_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPoint_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPoint[] = L"Windows.UI.Input.Inking.InkPoint";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenter ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenter2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenter_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenter[] = L"Windows.UI.Input.Inking.InkPresenter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenterProtractor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPresenterProtractorFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenterProtractor ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenterStencil
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterProtractor_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterProtractor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterProtractor[] = L"Windows.UI.Input.Inking.InkPresenterProtractor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Inking.InkPresenterRuler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.IInkPresenterRulerFactory interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkPresenterRuler ** Default Interface **
 *    Windows.UI.Input.Inking.IInkPresenterStencil
 *    Windows.UI.Input.Inking.IInkPresenterRuler2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterRuler_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkPresenterRuler_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterRuler[] = L"Windows.UI.Input.Inking.InkPresenterRuler";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognitionResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognitionResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognitionResult_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognitionResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognitionResult[] = L"Windows.UI.Input.Inking.InkRecognitionResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizer[] = L"Windows.UI.Input.Inking.InkRecognizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkRecognizerContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkRecognizerContainer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizerContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkRecognizerContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizerContainer[] = L"Windows.UI.Input.Inking.InkRecognizerContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStroke ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStroke2
 *    Windows.UI.Input.Inking.IInkStroke3
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStroke_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStroke_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStroke[] = L"Windows.UI.Input.Inking.InkStroke";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeBuilder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeBuilder ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStrokeBuilder2
 *    Windows.UI.Input.Inking.IInkStrokeBuilder3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeBuilder_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeBuilder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeBuilder[] = L"Windows.UI.Input.Inking.InkStrokeBuilder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeContainer ** Default Interface **
 *    Windows.UI.Input.Inking.IInkStrokeContainer2
 *    Windows.UI.Input.Inking.IInkStrokeContainer3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeContainer[] = L"Windows.UI.Input.Inking.InkStrokeContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeInput ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeInput_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeInput[] = L"Windows.UI.Input.Inking.InkStrokeInput";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokeRenderingSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokeRenderingSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeRenderingSegment_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokeRenderingSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.InkStrokeRenderingSegment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokesCollectedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkStrokesErasedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkStrokesErasedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesErasedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkStrokesErasedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkSynchronizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkSynchronizer ** Default Interface **
 *
 * Class Marshaling Behavior:  None - Class cannot be marshaled
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkSynchronizer_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkSynchronizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkSynchronizer[] = L"Windows.UI.Input.Inking.InkSynchronizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.InkUnprocessedInput
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.IInkUnprocessedInput ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_InkUnprocessedInput_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_InkUnprocessedInput_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkUnprocessedInput[] = L"Windows.UI.Input.Inking.InkUnprocessedInput";
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
#endif // __windows2Eui2Einput2Einking_p_h__

#endif // __windows2Eui2Einput2Einking_h__
