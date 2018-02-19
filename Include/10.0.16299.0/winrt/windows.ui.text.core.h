/* Header file automatically generated from windows.ui.text.core.idl */
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
#ifndef __windows2Eui2Etext2Ecore_h__
#define __windows2Eui2Etext2Ecore_h__
#ifndef __windows2Eui2Etext2Ecore_p_h__
#define __windows2Eui2Etext2Ecore_p_h__


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
#include "Windows.Globalization.h"
#include "Windows.UI.Text.h"
#include "Windows.UI.ViewManagement.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextCompositionCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs ABI::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextCompositionSegment;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextCompositionStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs ABI::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextEditContext;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext ABI::Windows::UI::Text::Core::ICoreTextEditContext

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextEditContext2;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 ABI::Windows::UI::Text::Core::ICoreTextEditContext2

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextFormatUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs ABI::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextLayoutBounds;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds ABI::Windows::UI::Text::Core::ICoreTextLayoutBounds

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextLayoutRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest ABI::Windows::UI::Text::Core::ICoreTextLayoutRequest

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextLayoutRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs ABI::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextSelectionRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest ABI::Windows::UI::Text::Core::ICoreTextSelectionRequest

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextSelectionRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs ABI::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextSelectionUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs ABI::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextServicesManager;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager ABI::Windows::UI::Text::Core::ICoreTextServicesManager

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextServicesManagerStatics;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics ABI::Windows::UI::Text::Core::ICoreTextServicesManagerStatics

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextServicesStatics;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics ABI::Windows::UI::Text::Core::ICoreTextServicesStatics

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextTextRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest ABI::Windows::UI::Text::Core::ICoreTextTextRequest

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextTextRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs ABI::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    interface ICoreTextTextUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs ABI::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextCompositionSegment;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#define DEF___FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("39b4528d-2370-57fa-b5d4-b5a2079a7cea"))
IIterator<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*, ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Text.Core.CoreTextCompositionSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t;
#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
//#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#define DEF___FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("38372bd2-d3fe-5ad2-9d39-d166b68e78e7"))
IIterable<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*, ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Text.Core.CoreTextCompositionSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t;
#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
//#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#define DEF___FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("214b64ff-cf4d-5dd4-932a-7bc66e69036e"))
IVectorView<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*, ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Text.Core.CoreTextCompositionSegment>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Text::Core::CoreTextCompositionSegment*> __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t;
#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
//#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Text::Core::ICoreTextCompositionSegment*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextEditContext;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ef53b467-c472-5b59-a827-38adc3a9d326"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextCompositionCompletedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a2d7059e-68ed-5260-8d8e-1dcf3d25d663"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextCompositionCompletedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextCompositionStartedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e671d625-5b59-57e6-a92e-40009507853a"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextCompositionStartedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextFormatUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e4ef599-4cc2-5248-bf2d-13f17613b0a6"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextLayoutRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1a5f5596-561c-57f6-a4ff-cb85013c6544"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextLayoutRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextSelectionRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("882e51e1-f4a3-57e5-9392-6a8c38579181"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextSelectionRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextSelectionUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6b140a40-d461-555a-b6eb-5dbb8e2101e5"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextSelectionUpdatingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextTextRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c7e08176-4134-50b7-bc73-729e9f9ad22a"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextTextRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextTextRequestedEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextTextRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextTextRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextTextUpdatingEventArgs;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fd896a84-df7c-50d5-9167-58f616bddb6e"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextEditContext*, ABI::Windows::UI::Text::Core::ICoreTextEditContext*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs*, ABI::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextEditContext, Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextEditContext*,ABI::Windows::UI::Text::Core::CoreTextTextUpdatingEventArgs*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextEditContext*,ABI::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextServicesManager;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("112fb01d-260a-51c6-9198-5db3e6e9ef3d"))
ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextServicesManager*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Text::Core::CoreTextServicesManager*, ABI::Windows::UI::Text::Core::ICoreTextServicesManager*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Text.Core.CoreTextServicesManager, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Text::Core::CoreTextServicesManager*,IInspectable*> __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextServicesManager*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Text::Core::ICoreTextServicesManager*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                enum UIElementType : int;
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE
#define DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("e17e08c9-7deb-51d1-8487-334eb3fe4691"))
IReference<enum ABI::Windows::UI::ViewManagement::UIElementType> : IReference_impl<enum ABI::Windows::UI::ViewManagement::UIElementType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.ViewManagement.UIElementType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::UI::ViewManagement::UIElementType> __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t;
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType ABI::Windows::Foundation::IReference<ABI::Windows::UI::ViewManagement::UIElementType>
//#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::ViewManagement::UIElementType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CViewManagement__CUIElementType_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                enum UnderlineType : int;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE
#define DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b63ec17-7b2b-59fe-ab9d-b60ea4f9c9b8"))
IReference<enum ABI::Windows::UI::Text::UnderlineType> : IReference_impl<enum ABI::Windows::UI::Text::UnderlineType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.Text.UnderlineType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::UI::Text::UnderlineType> __FIReference_1_Windows__CUI__CText__CUnderlineType_t;
#define __FIReference_1_Windows__CUI__CText__CUnderlineType ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CText__CUnderlineType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CText__CUnderlineType ABI::Windows::Foundation::IReference<ABI::Windows::UI::Text::UnderlineType>
//#define __FIReference_1_Windows__CUI__CText__CUnderlineType_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::Text::UnderlineType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE */





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
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum UnderlineType : int UnderlineType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                
                typedef enum UIElementType : int UIElementType;
                
            } /* Windows */
        } /* UI */
    } /* ViewManagement */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextFormatUpdatingReason : int CoreTextFormatUpdatingReason;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextFormatUpdatingResult : int CoreTextFormatUpdatingResult;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextInputPaneDisplayPolicy : int CoreTextInputPaneDisplayPolicy;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextInputScope : int CoreTextInputScope;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextSelectionUpdatingResult : int CoreTextSelectionUpdatingResult;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef enum CoreTextTextUpdatingResult : int CoreTextTextUpdatingResult;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    
                    typedef struct CoreTextRange CoreTextRange;
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextLayoutBounds;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextLayoutRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextSelectionRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    class CoreTextTextRequest;
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */














/*
 *
 * Struct Windows.UI.Text.Core.CoreTextFormatUpdatingReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextFormatUpdatingReason : int
                    {
                        CoreTextFormatUpdatingReason_None = 0,
                        CoreTextFormatUpdatingReason_CompositionUnconverted = 1,
                        CoreTextFormatUpdatingReason_CompositionConverted = 2,
                        CoreTextFormatUpdatingReason_CompositionTargetUnconverted = 3,
                        CoreTextFormatUpdatingReason_CompositionTargetConverted = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextFormatUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextFormatUpdatingResult : int
                    {
                        CoreTextFormatUpdatingResult_Succeeded = 0,
                        CoreTextFormatUpdatingResult_Failed = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextInputPaneDisplayPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextInputPaneDisplayPolicy : int
                    {
                        CoreTextInputPaneDisplayPolicy_Automatic = 0,
                        CoreTextInputPaneDisplayPolicy_Manual = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextInputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextInputScope : int
                    {
                        CoreTextInputScope_Default = 0,
                        CoreTextInputScope_Url = 1,
                        CoreTextInputScope_FilePath = 2,
                        CoreTextInputScope_FileName = 3,
                        CoreTextInputScope_EmailUserName = 4,
                        CoreTextInputScope_EmailAddress = 5,
                        CoreTextInputScope_UserName = 6,
                        CoreTextInputScope_PersonalFullName = 7,
                        CoreTextInputScope_PersonalNamePrefix = 8,
                        CoreTextInputScope_PersonalGivenName = 9,
                        CoreTextInputScope_PersonalMiddleName = 10,
                        CoreTextInputScope_PersonalSurname = 11,
                        CoreTextInputScope_PersonalNameSuffix = 12,
                        CoreTextInputScope_Address = 13,
                        CoreTextInputScope_AddressPostalCode = 14,
                        CoreTextInputScope_AddressStreet = 15,
                        CoreTextInputScope_AddressStateOrProvince = 16,
                        CoreTextInputScope_AddressCity = 17,
                        CoreTextInputScope_AddressCountryName = 18,
                        CoreTextInputScope_AddressCountryShortName = 19,
                        CoreTextInputScope_CurrencyAmountAndSymbol = 20,
                        CoreTextInputScope_CurrencyAmount = 21,
                        CoreTextInputScope_Date = 22,
                        CoreTextInputScope_DateMonth = 23,
                        CoreTextInputScope_DateDay = 24,
                        CoreTextInputScope_DateYear = 25,
                        CoreTextInputScope_DateMonthName = 26,
                        CoreTextInputScope_DateDayName = 27,
                        CoreTextInputScope_Number = 29,
                        CoreTextInputScope_SingleCharacter = 30,
                        CoreTextInputScope_Password = 31,
                        CoreTextInputScope_TelephoneNumber = 32,
                        CoreTextInputScope_TelephoneCountryCode = 33,
                        CoreTextInputScope_TelephoneAreaCode = 34,
                        CoreTextInputScope_TelephoneLocalNumber = 35,
                        CoreTextInputScope_Time = 36,
                        CoreTextInputScope_TimeHour = 37,
                        CoreTextInputScope_TimeMinuteOrSecond = 38,
                        CoreTextInputScope_NumberFullWidth = 39,
                        CoreTextInputScope_AlphanumericHalfWidth = 40,
                        CoreTextInputScope_AlphanumericFullWidth = 41,
                        CoreTextInputScope_CurrencyChinese = 42,
                        CoreTextInputScope_Bopomofo = 43,
                        CoreTextInputScope_Hiragana = 44,
                        CoreTextInputScope_KatakanaHalfWidth = 45,
                        CoreTextInputScope_KatakanaFullWidth = 46,
                        CoreTextInputScope_Hanja = 47,
                        CoreTextInputScope_HangulHalfWidth = 48,
                        CoreTextInputScope_HangulFullWidth = 49,
                        CoreTextInputScope_Search = 50,
                        CoreTextInputScope_Formula = 51,
                        CoreTextInputScope_SearchIncremental = 52,
                        CoreTextInputScope_ChineseHalfWidth = 53,
                        CoreTextInputScope_ChineseFullWidth = 54,
                        CoreTextInputScope_NativeScript = 55,
                        CoreTextInputScope_Text = 57,
                        CoreTextInputScope_Chat = 58,
                        CoreTextInputScope_NameOrPhoneNumber = 59,
                        CoreTextInputScope_EmailUserNameOrAddress = 60,
                        CoreTextInputScope_Private = 61,
                        CoreTextInputScope_Maps = 62,
                        CoreTextInputScope_PasswordNumeric = 63,
                        CoreTextInputScope_FormulaNumber = 67,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
                        CoreTextInputScope_ChatWithoutEmoji = 68,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
                        
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        CoreTextInputScope_Digits = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
                        
                        CoreTextInputScope_PinNumeric = 64,
                        CoreTextInputScope_PinAlphanumeric = 65,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextSelectionUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextSelectionUpdatingResult : int
                    {
                        CoreTextSelectionUpdatingResult_Succeeded = 0,
                        CoreTextSelectionUpdatingResult_Failed = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextTextUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreTextTextUpdatingResult : int
                    {
                        CoreTextTextUpdatingResult_Succeeded = 0,
                        CoreTextTextUpdatingResult_Failed = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [contract] */
                    struct CoreTextRange
                    {
                        INT32 StartCaretPosition;
                        INT32 EndCaretPosition;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("1F34EBB6-B79F-4121-A5E7-FDA9B8616E30"), exclusiveto, contract] */
                    MIDL_INTERFACE("1F34EBB6-B79F-4121-A5E7-FDA9B8616E30")
                    ICoreTextCompositionCompletedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CompositionSegments(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextCompositionCompletedEventArgs=_uuidof(ICoreTextCompositionCompletedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionSegment[] = L"Windows.UI.Text.Core.ICoreTextCompositionSegment";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("776C6BD9-4EAD-4DA7-8F47-3A88B523CC34"), exclusiveto, contract] */
                    MIDL_INTERFACE("776C6BD9-4EAD-4DA7-8F47-3A88B523CC34")
                    ICoreTextCompositionSegment : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreconversionString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Range(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextCompositionSegment=_uuidof(ICoreTextCompositionSegment);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("276B16A9-64E7-4AB0-BC4B-A02D73835BFB"), exclusiveto, contract] */
                    MIDL_INTERFACE("276B16A9-64E7-4AB0-BC4B-A02D73835BFB")
                    ICoreTextCompositionStartedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextCompositionStartedEventArgs=_uuidof(ICoreTextCompositionStartedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextEditContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextEditContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext[] = L"Windows.UI.Text.Core.ICoreTextEditContext";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("BF6608AF-4041-47C3-B263-A918EB5EAEF2"), exclusiveto, contract] */
                    MIDL_INTERFACE("BF6608AF-4041-47C3-B263-A918EB5EAEF2")
                    ICoreTextEditContext : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputScope(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextInputScope * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputScope(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextInputScope value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsReadOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsReadOnly(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputPaneDisplayPolicy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InputPaneDisplayPolicy(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextInputPaneDisplayPolicy value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TextRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TextRequested(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SelectionRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SelectionRequested(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LayoutRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LayoutRequested(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_TextUpdating(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_TextUpdating(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SelectionUpdating(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SelectionUpdating(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FormatUpdating(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FormatUpdating(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CompositionStarted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CompositionStarted(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CompositionCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CompositionCompleted(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_FocusRemoved(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_FocusRemoved(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyFocusEnter(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyFocusLeave(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyTextChanged(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextRange modifiedRange,
                            /* [in] */INT32 newLength,
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextRange newSelection
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifySelectionChanged(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextRange selection
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE NotifyLayoutChanged(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextEditContext=_uuidof(ICoreTextEditContext);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextEditContext2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextEditContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext2[] = L"Windows.UI.Text.Core.ICoreTextEditContext2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("B1867DBB-083B-49E1-B281-2B35D62BF466"), exclusiveto, contract] */
                    MIDL_INTERFACE("B1867DBB-083B-49E1-B281-2B35D62BF466")
                    ICoreTextEditContext2 : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NotifyFocusLeaveCompleted(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NotifyFocusLeaveCompleted(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextEditContext2=_uuidof(ICoreTextEditContext2);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("7310BD33-B4A8-43B1-B37B-0724D4ACA7AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("7310BD33-B4A8-43B1-B37B-0724D4ACA7AB")
                    ICoreTextFormatUpdatingEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Range(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextColor(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnderlineColor(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnderlineType(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CText__CUnderlineType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingReason * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingResult * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Result(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextFormatUpdatingResult value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextFormatUpdatingEventArgs=_uuidof(ICoreTextFormatUpdatingEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutBounds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutBounds[] = L"Windows.UI.Text.Core.ICoreTextLayoutBounds";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("E972C974-4436-4917-80D0-A525E4CA6780"), exclusiveto, contract] */
                    MIDL_INTERFACE("E972C974-4436-4917-80D0-A525E4CA6780")
                    ICoreTextLayoutBounds : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextBounds(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextBounds(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlBounds(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ControlBounds(
                            /* [in] */ABI::Windows::Foundation::Rect value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextLayoutBounds=_uuidof(ICoreTextLayoutBounds);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequest[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("2555A8CC-51FD-4F03-98BF-AC78174D68E0"), exclusiveto, contract] */
                    MIDL_INTERFACE("2555A8CC-51FD-4F03-98BF-AC78174D68E0")
                    ICoreTextLayoutRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Range(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LayoutBounds(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextLayoutBounds * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextLayoutRequest=_uuidof(ICoreTextLayoutRequest);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("B1DC6AE0-9A7B-4E9E-A566-4A6B5F8AD676"), exclusiveto, contract] */
                    MIDL_INTERFACE("B1DC6AE0-9A7B-4E9E-A566-4A6B5F8AD676")
                    ICoreTextLayoutRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextLayoutRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextLayoutRequestedEventArgs=_uuidof(ICoreTextLayoutRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequest[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("F0A70403-208B-4301-883C-74CA7485FD8D"), exclusiveto, contract] */
                    MIDL_INTERFACE("F0A70403-208B-4301-883C-74CA7485FD8D")
                    ICoreTextSelectionRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selection(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Selection(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextRange value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextSelectionRequest=_uuidof(ICoreTextSelectionRequest);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("13C6682B-F614-421A-8F4B-9EC8A5A37FCD"), exclusiveto, contract] */
                    MIDL_INTERFACE("13C6682B-F614-421A-8F4B-9EC8A5A37FCD")
                    ICoreTextSelectionRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextSelectionRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextSelectionRequestedEventArgs=_uuidof(ICoreTextSelectionRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("D445839F-FE7F-4BD5-8A26-0922C1B3E639"), exclusiveto, contract] */
                    MIDL_INTERFACE("D445839F-FE7F-4BD5-8A26-0922C1B3E639")
                    ICoreTextSelectionUpdatingEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selection(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextSelectionUpdatingResult * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Result(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextSelectionUpdatingResult value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextSelectionUpdatingEventArgs=_uuidof(ICoreTextSelectionUpdatingEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManager[] = L"Windows.UI.Text.Core.ICoreTextServicesManager";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("C2507D83-6E0A-4A8A-BDF8-1948874854BA"), exclusiveto, contract] */
                    MIDL_INTERFACE("C2507D83-6E0A-4A8A-BDF8-1948874854BA")
                    ICoreTextServicesManager : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputLanguage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::ILanguage * * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_InputLanguageChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_InputLanguageChanged(
                            /* [in] */EventRegistrationToken cookie
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateEditContext(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextEditContext * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextServicesManager=_uuidof(ICoreTextServicesManager);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManagerStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesManagerStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("1520A388-E2CF-4D65-AEB9-B32D86FE39B9"), exclusiveto, contract] */
                    MIDL_INTERFACE("1520A388-E2CF-4D65-AEB9-B32D86FE39B9")
                    ICoreTextServicesManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextServicesManager * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextServicesManagerStatics=_uuidof(ICoreTextServicesManagerStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesConstants
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("91859A46-ECCF-47A4-8AE7-098A9C6FBB15"), exclusiveto, contract] */
                    MIDL_INTERFACE("91859A46-ECCF-47A4-8AE7-098A9C6FBB15")
                    ICoreTextServicesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HiddenCharacter(
                            /* [retval, out] */__RPC__out WCHAR * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextServicesStatics=_uuidof(ICoreTextServicesStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequest[] = L"Windows.UI.Text.Core.ICoreTextTextRequest";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("50D950A9-F51E-4CC1-8CA1-E6346D1A61BE"), exclusiveto, contract] */
                    MIDL_INTERFACE("50D950A9-F51E-4CC1-8CA1-E6346D1A61BE")
                    ICoreTextTextRequest : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Range(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextTextRequest=_uuidof(ICoreTextTextRequest);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("F096A2D0-41C6-4C02-8B1A-D953B00CABB3"), exclusiveto, contract] */
                    MIDL_INTERFACE("F096A2D0-41C6-4C02-8B1A-D953B00CABB3")
                    ICoreTextTextRequestedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Request(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::Core::ICoreTextTextRequest * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextTextRequestedEventArgs=_uuidof(ICoreTextTextRequestedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                namespace Core {
                    /* [object, uuid("EEA7918D-CC2B-4F03-8FF6-02FD217DB450"), exclusiveto, contract] */
                    MIDL_INTERFACE("EEA7918D-CC2B-4F03-8FF6-02FD217DB450")
                    ICoreTextTextUpdatingEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Range(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewSelection(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextRange * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InputLanguage(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::ILanguage * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Result(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::Core::CoreTextTextUpdatingResult * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Result(
                            /* [in] */ABI::Windows::UI::Text::Core::CoreTextTextUpdatingResult value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCanceled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDeferral(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IDeferral * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreTextTextUpdatingEventArgs=_uuidof(ICoreTextTextUpdatingEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Text */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionSegment_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionSegment[] = L"Windows.UI.Text.Core.CoreTextCompositionSegment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextEditContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextEditContext ** Default Interface **
 *    Windows.UI.Text.Core.ICoreTextEditContext2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextEditContext_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextEditContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextEditContext[] = L"Windows.UI.Text.Core.CoreTextEditContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutBounds ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutBounds_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutBounds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutBounds[] = L"Windows.UI.Text.Core.CoreTextLayoutBounds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequest[] = L"Windows.UI.Text.Core.CoreTextLayoutRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequest[] = L"Windows.UI.Text.Core.CoreTextSelectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextServicesConstants
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.Core.ICoreTextServicesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesConstants_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesConstants_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesConstants[] = L"Windows.UI.Text.Core.CoreTextServicesConstants";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextServicesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.Core.ICoreTextServicesManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextServicesManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesManager[] = L"Windows.UI.Text.Core.CoreTextServicesManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequest[] = L"Windows.UI.Text.Core.CoreTextTextRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs;

#endif // ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

typedef struct __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;

interface __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

typedef  struct __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;

interface __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment;

typedef struct __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
            /* [in] */ __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl;

interface __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegmentVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
#if !defined(____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType __FIReference_1_Windows__CUI__CViewManagement__CUIElementType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CViewManagement__CUIElementType;

typedef struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl;

interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CViewManagement__CUIElementType_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CViewManagement__CUIElementType_INTERFACE_DEFINED__


enum __x_ABI_CWindows_CUI_CText_CUnderlineType;
#if !defined(____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CText__CUnderlineType __FIReference_1_Windows__CUI__CText__CUnderlineType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CText__CUnderlineType;

typedef struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CText_CUnderlineType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl;

interface __FIReference_1_Windows__CUI__CText__CUnderlineType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CText__CUnderlineType_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;

#endif // ____x_ABI_CWindows_CFoundation_CIDeferral_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;




#ifndef ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;

#endif // ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CUI_CText_CUnderlineType __x_ABI_CWindows_CUI_CText_CUnderlineType;





typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;





typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason;


typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult;


typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy;


typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope;


typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult;


typedef enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult;


typedef struct __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange;













































/*
 *
 * Struct Windows.UI.Text.Core.CoreTextFormatUpdatingReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason
{
    CoreTextFormatUpdatingReason_None = 0,
    CoreTextFormatUpdatingReason_CompositionUnconverted = 1,
    CoreTextFormatUpdatingReason_CompositionConverted = 2,
    CoreTextFormatUpdatingReason_CompositionTargetUnconverted = 3,
    CoreTextFormatUpdatingReason_CompositionTargetConverted = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextFormatUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult
{
    CoreTextFormatUpdatingResult_Succeeded = 0,
    CoreTextFormatUpdatingResult_Failed = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextInputPaneDisplayPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy
{
    CoreTextInputPaneDisplayPolicy_Automatic = 0,
    CoreTextInputPaneDisplayPolicy_Manual = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextInputScope
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope
{
    CoreTextInputScope_Default = 0,
    CoreTextInputScope_Url = 1,
    CoreTextInputScope_FilePath = 2,
    CoreTextInputScope_FileName = 3,
    CoreTextInputScope_EmailUserName = 4,
    CoreTextInputScope_EmailAddress = 5,
    CoreTextInputScope_UserName = 6,
    CoreTextInputScope_PersonalFullName = 7,
    CoreTextInputScope_PersonalNamePrefix = 8,
    CoreTextInputScope_PersonalGivenName = 9,
    CoreTextInputScope_PersonalMiddleName = 10,
    CoreTextInputScope_PersonalSurname = 11,
    CoreTextInputScope_PersonalNameSuffix = 12,
    CoreTextInputScope_Address = 13,
    CoreTextInputScope_AddressPostalCode = 14,
    CoreTextInputScope_AddressStreet = 15,
    CoreTextInputScope_AddressStateOrProvince = 16,
    CoreTextInputScope_AddressCity = 17,
    CoreTextInputScope_AddressCountryName = 18,
    CoreTextInputScope_AddressCountryShortName = 19,
    CoreTextInputScope_CurrencyAmountAndSymbol = 20,
    CoreTextInputScope_CurrencyAmount = 21,
    CoreTextInputScope_Date = 22,
    CoreTextInputScope_DateMonth = 23,
    CoreTextInputScope_DateDay = 24,
    CoreTextInputScope_DateYear = 25,
    CoreTextInputScope_DateMonthName = 26,
    CoreTextInputScope_DateDayName = 27,
    CoreTextInputScope_Number = 29,
    CoreTextInputScope_SingleCharacter = 30,
    CoreTextInputScope_Password = 31,
    CoreTextInputScope_TelephoneNumber = 32,
    CoreTextInputScope_TelephoneCountryCode = 33,
    CoreTextInputScope_TelephoneAreaCode = 34,
    CoreTextInputScope_TelephoneLocalNumber = 35,
    CoreTextInputScope_Time = 36,
    CoreTextInputScope_TimeHour = 37,
    CoreTextInputScope_TimeMinuteOrSecond = 38,
    CoreTextInputScope_NumberFullWidth = 39,
    CoreTextInputScope_AlphanumericHalfWidth = 40,
    CoreTextInputScope_AlphanumericFullWidth = 41,
    CoreTextInputScope_CurrencyChinese = 42,
    CoreTextInputScope_Bopomofo = 43,
    CoreTextInputScope_Hiragana = 44,
    CoreTextInputScope_KatakanaHalfWidth = 45,
    CoreTextInputScope_KatakanaFullWidth = 46,
    CoreTextInputScope_Hanja = 47,
    CoreTextInputScope_HangulHalfWidth = 48,
    CoreTextInputScope_HangulFullWidth = 49,
    CoreTextInputScope_Search = 50,
    CoreTextInputScope_Formula = 51,
    CoreTextInputScope_SearchIncremental = 52,
    CoreTextInputScope_ChineseHalfWidth = 53,
    CoreTextInputScope_ChineseFullWidth = 54,
    CoreTextInputScope_NativeScript = 55,
    CoreTextInputScope_Text = 57,
    CoreTextInputScope_Chat = 58,
    CoreTextInputScope_NameOrPhoneNumber = 59,
    CoreTextInputScope_EmailUserNameOrAddress = 60,
    CoreTextInputScope_Private = 61,
    CoreTextInputScope_Maps = 62,
    CoreTextInputScope_PasswordNumeric = 63,
    CoreTextInputScope_FormulaNumber = 67,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
    CoreTextInputScope_ChatWithoutEmoji = 68,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
    
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    CoreTextInputScope_Digits = 28,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
    
    CoreTextInputScope_PinNumeric = 64,
    CoreTextInputScope_PinAlphanumeric = 65,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextSelectionUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult
{
    CoreTextSelectionUpdatingResult_Succeeded = 0,
    CoreTextSelectionUpdatingResult_Failed = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextTextUpdatingResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult
{
    CoreTextTextUpdatingResult_Succeeded = 0,
    CoreTextTextUpdatingResult_Failed = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.Core.CoreTextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange
{
    INT32 StartCaretPosition;
    INT32 EndCaretPosition;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs";
/* [object, uuid("1F34EBB6-B79F-4121-A5E7-FDA9B8616E30"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CompositionSegments )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CText__CCore__CCoreTextCompositionSegment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_get_CompositionSegments(This,value) \
    ( (This)->lpVtbl->get_CompositionSegments(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionSegment
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionSegment[] = L"Windows.UI.Text.Core.ICoreTextCompositionSegment";
/* [object, uuid("776C6BD9-4EAD-4DA7-8F47-3A88B523CC34"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreconversionString )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_get_PreconversionString(This,value) \
    ( (This)->lpVtbl->get_PreconversionString(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_get_Range(This,value) \
    ( (This)->lpVtbl->get_Range(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionSegment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs";
/* [object, uuid("276B16A9-64E7-4AB0-BC4B-A02D73835BFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextCompositionStartedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextEditContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextEditContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext[] = L"Windows.UI.Text.Core.ICoreTextEditContext";
/* [object, uuid("BF6608AF-4041-47C3-B263-A918EB5EAEF2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputScope )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputScope )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputScope value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsReadOnly )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputPaneDisplayPolicy )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InputPaneDisplayPolicy )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextInputPaneDisplayPolicy value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TextRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TextRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SelectionRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SelectionRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LayoutRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextLayoutRequestedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LayoutRequested )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_TextUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextTextUpdatingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_TextUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SelectionUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextSelectionUpdatingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SelectionUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FormatUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextFormatUpdatingEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FormatUpdating )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CompositionStarted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionStartedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CompositionStarted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CompositionCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_Windows__CUI__CText__CCore__CCoreTextCompositionCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CompositionCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_FocusRemoved )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_FocusRemoved )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyFocusEnter )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyFocusLeave )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyTextChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange modifiedRange,
        /* [in] */INT32 newLength,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange newSelection
        );
    HRESULT ( STDMETHODCALLTYPE *NotifySelectionChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange selection
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyLayoutChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_get_InputScope(This,value) \
    ( (This)->lpVtbl->get_InputScope(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_put_InputScope(This,value) \
    ( (This)->lpVtbl->put_InputScope(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_get_IsReadOnly(This,value) \
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_put_IsReadOnly(This,value) \
    ( (This)->lpVtbl->put_IsReadOnly(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_get_InputPaneDisplayPolicy(This,value) \
    ( (This)->lpVtbl->get_InputPaneDisplayPolicy(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_put_InputPaneDisplayPolicy(This,value) \
    ( (This)->lpVtbl->put_InputPaneDisplayPolicy(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_TextRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_TextRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_TextRequested(This,cookie) \
    ( (This)->lpVtbl->remove_TextRequested(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_SelectionRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_SelectionRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_SelectionRequested(This,cookie) \
    ( (This)->lpVtbl->remove_SelectionRequested(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_LayoutRequested(This,handler,cookie) \
    ( (This)->lpVtbl->add_LayoutRequested(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_LayoutRequested(This,cookie) \
    ( (This)->lpVtbl->remove_LayoutRequested(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_TextUpdating(This,handler,cookie) \
    ( (This)->lpVtbl->add_TextUpdating(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_TextUpdating(This,cookie) \
    ( (This)->lpVtbl->remove_TextUpdating(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_SelectionUpdating(This,handler,cookie) \
    ( (This)->lpVtbl->add_SelectionUpdating(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_SelectionUpdating(This,cookie) \
    ( (This)->lpVtbl->remove_SelectionUpdating(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_FormatUpdating(This,handler,cookie) \
    ( (This)->lpVtbl->add_FormatUpdating(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_FormatUpdating(This,cookie) \
    ( (This)->lpVtbl->remove_FormatUpdating(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_CompositionStarted(This,handler,cookie) \
    ( (This)->lpVtbl->add_CompositionStarted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_CompositionStarted(This,cookie) \
    ( (This)->lpVtbl->remove_CompositionStarted(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_CompositionCompleted(This,handler,cookie) \
    ( (This)->lpVtbl->add_CompositionCompleted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_CompositionCompleted(This,cookie) \
    ( (This)->lpVtbl->remove_CompositionCompleted(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_add_FocusRemoved(This,handler,cookie) \
    ( (This)->lpVtbl->add_FocusRemoved(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_remove_FocusRemoved(This,cookie) \
    ( (This)->lpVtbl->remove_FocusRemoved(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_NotifyFocusEnter(This) \
    ( (This)->lpVtbl->NotifyFocusEnter(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_NotifyFocusLeave(This) \
    ( (This)->lpVtbl->NotifyFocusLeave(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_NotifyTextChanged(This,modifiedRange,newLength,newSelection) \
    ( (This)->lpVtbl->NotifyTextChanged(This,modifiedRange,newLength,newSelection) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_NotifySelectionChanged(This,selection) \
    ( (This)->lpVtbl->NotifySelectionChanged(This,selection) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_NotifyLayoutChanged(This) \
    ( (This)->lpVtbl->NotifyLayoutChanged(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextEditContext2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextEditContext
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextEditContext2[] = L"Windows.UI.Text.Core.ICoreTextEditContext2";
/* [object, uuid("B1867DBB-083B-49E1-B281-2B35D62BF466"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NotifyFocusLeaveCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextEditContext_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NotifyFocusLeaveCompleted )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2 * This,
        /* [in] */EventRegistrationToken cookie
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_add_NotifyFocusLeaveCompleted(This,handler,cookie) \
    ( (This)->lpVtbl->add_NotifyFocusLeaveCompleted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_remove_NotifyFocusLeaveCompleted(This,cookie) \
    ( (This)->lpVtbl->remove_NotifyFocusLeaveCompleted(This,cookie) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs";
/* [object, uuid("7310BD33-B4A8-43B1-B37B-0724D4ACA7AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnderlineColor )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnderlineType )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_Windows__CUI__CText__CUnderlineType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingReason * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextFormatUpdatingResult value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_Range(This,value) \
    ( (This)->lpVtbl->get_Range(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_TextColor(This,value) \
    ( (This)->lpVtbl->get_TextColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_UnderlineColor(This,value) \
    ( (This)->lpVtbl->get_UnderlineColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_UnderlineType(This,value) \
    ( (This)->lpVtbl->get_UnderlineType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_put_Result(This,value) \
    ( (This)->lpVtbl->put_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextFormatUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutBounds
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutBounds[] = L"Windows.UI.Text.Core.ICoreTextLayoutBounds";
/* [object, uuid("E972C974-4436-4917-80D0-A525E4CA6780"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ControlBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBoundsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_get_TextBounds(This,value) \
    ( (This)->lpVtbl->get_TextBounds(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_put_TextBounds(This,value) \
    ( (This)->lpVtbl->put_TextBounds(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_get_ControlBounds(This,value) \
    ( (This)->lpVtbl->get_ControlBounds(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_put_ControlBounds(This,value) \
    ( (This)->lpVtbl->put_ControlBounds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequest[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequest";
/* [object, uuid("2555A8CC-51FD-4F03-98BF-AC78174D68E0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LayoutBounds )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutBounds * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_get_Range(This,value) \
    ( (This)->lpVtbl->get_Range(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_get_LayoutBounds(This,value) \
    ( (This)->lpVtbl->get_LayoutBounds(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs";
/* [object, uuid("B1DC6AE0-9A7B-4E9E-A566-4A6B5F8AD676"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextLayoutRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequest[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequest";
/* [object, uuid("F0A70403-208B-4301-883C-74CA7485FD8D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_get_Selection(This,value) \
    ( (This)->lpVtbl->get_Selection(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_put_Selection(This,value) \
    ( (This)->lpVtbl->put_Selection(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs";
/* [object, uuid("13C6682B-F614-421A-8F4B-9EC8A5A37FCD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs";
/* [object, uuid("D445839F-FE7F-4BD5-8A26-0922C1B3E639"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextSelectionUpdatingResult value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_get_Selection(This,value) \
    ( (This)->lpVtbl->get_Selection(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_put_Result(This,value) \
    ( (This)->lpVtbl->put_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextSelectionUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManager[] = L"Windows.UI.Text.Core.ICoreTextServicesManager";
/* [object, uuid("C2507D83-6E0A-4A8A-BDF8-1948874854BA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputLanguage )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_InputLanguageChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CText__CCore__CCoreTextServicesManager_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_InputLanguageChanged )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
        /* [in] */EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEditContext )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextEditContext * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_get_InputLanguage(This,value) \
    ( (This)->lpVtbl->get_InputLanguage(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_add_InputLanguageChanged(This,handler,cookie) \
    ( (This)->lpVtbl->add_InputLanguageChanged(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_remove_InputLanguageChanged(This,cookie) \
    ( (This)->lpVtbl->remove_InputLanguageChanged(This,cookie) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_CreateEditContext(This,value) \
    ( (This)->lpVtbl->CreateEditContext(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesManagerStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesManagerStatics";
/* [object, uuid("1520A388-E2CF-4D65-AEB9-B32D86FE39B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_GetForCurrentView(This,value) \
    ( (This)->lpVtbl->GetForCurrentView(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextServicesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextServicesConstants
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextServicesStatics[] = L"Windows.UI.Text.Core.ICoreTextServicesStatics";
/* [object, uuid("91859A46-ECCF-47A4-8AE7-098A9C6FBB15"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HiddenCharacter )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics * This,
        /* [retval, out] */__RPC__out WCHAR * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_get_HiddenCharacter(This,value) \
    ( (This)->lpVtbl->get_HiddenCharacter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextServicesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequest[] = L"Windows.UI.Text.Core.ICoreTextTextRequest";
/* [object, uuid("50D950A9-F51E-4CC1-8CA1-E6346D1A61BE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_get_Range(This,value) \
    ( (This)->lpVtbl->get_Range(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextRequestedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs";
/* [object, uuid("F096A2D0-41C6-4C02-8B1A-D953B00CABB3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Request )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequest * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_get_Request(This,value) \
    ( (This)->lpVtbl->get_Request(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextRequestedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_Core_ICoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs";
/* [object, uuid("EEA7918D-CC2B-4F03-8FF6-02FD217DB450"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Range )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewSelection )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InputLanguage )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Result )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCore_CCoreTextTextUpdatingResult value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_Range(This,value) \
    ( (This)->lpVtbl->get_Range(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_NewSelection(This,value) \
    ( (This)->lpVtbl->get_NewSelection(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_InputLanguage(This,value) \
    ( (This)->lpVtbl->get_InputLanguage(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_Result(This,value) \
    ( (This)->lpVtbl->get_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_put_Result(This,value) \
    ( (This)->lpVtbl->put_Result(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_get_IsCanceled(This,value) \
    ( (This)->lpVtbl->get_IsCanceled(This,value) )

#define __x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_GetDeferral(This,value) \
    ( (This)->lpVtbl->GetDeferral(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CCore_CICoreTextTextUpdatingEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionCompletedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionSegment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionSegment ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionSegment_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionSegment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionSegment[] = L"Windows.UI.Text.Core.CoreTextCompositionSegment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextCompositionStartedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextCompositionStartedEventArgs[] = L"Windows.UI.Text.Core.CoreTextCompositionStartedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextEditContext
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextEditContext ** Default Interface **
 *    Windows.UI.Text.Core.ICoreTextEditContext2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextEditContext_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextEditContext_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextEditContext[] = L"Windows.UI.Text.Core.CoreTextEditContext";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextFormatUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextFormatUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextFormatUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutBounds
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutBounds ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutBounds_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutBounds_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutBounds[] = L"Windows.UI.Text.Core.CoreTextLayoutBounds";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequest[] = L"Windows.UI.Text.Core.CoreTextLayoutRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextLayoutRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextLayoutRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextLayoutRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequest[] = L"Windows.UI.Text.Core.CoreTextSelectionRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextSelectionUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextSelectionUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextSelectionUpdatingEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextServicesConstants
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.Core.ICoreTextServicesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesConstants_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesConstants_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesConstants[] = L"Windows.UI.Text.Core.CoreTextServicesConstants";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextServicesManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.Core.ICoreTextServicesManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextServicesManager ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesManager_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextServicesManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextServicesManager[] = L"Windows.UI.Text.Core.CoreTextServicesManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextRequest ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequest_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequest[] = L"Windows.UI.Text.Core.CoreTextTextRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextRequestedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextRequestedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextRequestedEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextRequestedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.Core.ICoreTextTextUpdatingEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_Core_CoreTextTextUpdatingEventArgs[] = L"Windows.UI.Text.Core.CoreTextTextUpdatingEventArgs";
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
#endif // __windows2Eui2Etext2Ecore_p_h__

#endif // __windows2Eui2Etext2Ecore_h__
