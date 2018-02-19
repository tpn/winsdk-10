/* Header file automatically generated from windows.ui.input.preview.injection.idl */
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
#ifndef __windows2Eui2Einput2Epreview2Einjection_h__
#define __windows2Eui2Einput2Epreview2Einjection_h__
#ifndef __windows2Eui2Einput2Epreview2Einjection_p_h__
#define __windows2Eui2Einput2Epreview2Einjection_p_h__


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
#include "Windows.Gaming.Input.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputGamepadInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo ABI::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputGamepadInfoFactory;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory ABI::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfoFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputKeyboardInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputMouseInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputPenInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo ABI::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInjectedInputTouchInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInputInjector;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector ABI::Windows::UI::Input::Preview::Injection::IInputInjector

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInputInjector2;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 ABI::Windows::UI::Input::Preview::Injection::IInputInjector2

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInputInjectorStatics;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics ABI::Windows::UI::Input::Preview::Injection::IInputInjectorStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        interface IInputInjectorStatics2;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 ABI::Windows::UI::Input::Preview::Injection::IInputInjectorStatics2

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InjectedInputKeyboardInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("500e5efe-3bc1-5d9b-bcfc-c1f439505f12"))
IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*> __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t;
#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("15d6330f-9c97-5705-b677-872585664fb5"))
IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyboardInfo*> __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t;
#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputKeyboardInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InjectedInputMouseInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9604d1d9-1744-5bd3-b5b9-d47b9434facb"))
IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*> __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t;
#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6c34e5bd-0fa4-5244-89fb-04bfd480ecd8"))
IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseInfo*> __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t;
#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputMouseInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InjectedInputTouchInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE
#define DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4bc92e92-d32e-597a-ae24-b38861c5fb08"))
IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*> __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t;
#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>
//#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE
#define DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ac5fac0b-82a0-5436-9284-e7db0bf4e615"))
IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*, ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchInfo*> __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t;
#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>
//#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Input::Preview::Injection::IInjectedInputTouchInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef enum GamepadButtons : unsigned int GamepadButtons;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                
                typedef struct GamepadReading GamepadReading;
                
            } /* Windows */
        } /* Gaming */
    } /* Input */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputButtonChangeKind : int InjectedInputButtonChangeKind;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputKeyOptions : unsigned int InjectedInputKeyOptions;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputMouseOptions : unsigned int InjectedInputMouseOptions;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputPenButtons : unsigned int InjectedInputPenButtons;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputPenParameters : unsigned int InjectedInputPenParameters;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputPointerOptions : unsigned int InjectedInputPointerOptions;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputShortcut : int InjectedInputShortcut;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputTouchParameters : unsigned int InjectedInputTouchParameters;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef enum InjectedInputVisualizationMode : int InjectedInputVisualizationMode;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef struct InjectedInputPoint InjectedInputPoint;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef struct InjectedInputPointerInfo InjectedInputPointerInfo;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        
                        typedef struct InjectedInputRectangle InjectedInputRectangle;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InjectedInputGamepadInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InjectedInputPenInfo;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        class InputInjector;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */














/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputButtonChangeKind
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, contract] */
                        enum InjectedInputButtonChangeKind : int
                        {
                            InjectedInputButtonChangeKind_None = 0,
                            InjectedInputButtonChangeKind_FirstButtonDown = 1,
                            InjectedInputButtonChangeKind_FirstButtonUp = 2,
                            InjectedInputButtonChangeKind_SecondButtonDown = 3,
                            InjectedInputButtonChangeKind_SecondButtonUp = 4,
                            InjectedInputButtonChangeKind_ThirdButtonDown = 5,
                            InjectedInputButtonChangeKind_ThirdButtonUp = 6,
                            InjectedInputButtonChangeKind_FourthButtonDown = 7,
                            InjectedInputButtonChangeKind_FourthButtonUp = 8,
                            InjectedInputButtonChangeKind_FifthButtonDown = 9,
                            InjectedInputButtonChangeKind_FifthButtonUp = 10,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputKeyOptions
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputKeyOptions : unsigned int
                        {
                            InjectedInputKeyOptions_None = 0,
                            InjectedInputKeyOptions_ExtendedKey = 0x1,
                            InjectedInputKeyOptions_KeyUp = 0x2,
                            InjectedInputKeyOptions_ScanCode = 0x8,
                            InjectedInputKeyOptions_Unicode = 0x4,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputKeyOptions)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputMouseOptions
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputMouseOptions : unsigned int
                        {
                            InjectedInputMouseOptions_None = 0,
                            InjectedInputMouseOptions_Move = 0x1,
                            InjectedInputMouseOptions_LeftDown = 0x2,
                            InjectedInputMouseOptions_LeftUp = 0x4,
                            InjectedInputMouseOptions_RightDown = 0x8,
                            InjectedInputMouseOptions_RightUp = 0x10,
                            InjectedInputMouseOptions_MiddleDown = 0x20,
                            InjectedInputMouseOptions_MiddleUp = 0x40,
                            InjectedInputMouseOptions_XDown = 0x80,
                            InjectedInputMouseOptions_XUp = 0x100,
                            InjectedInputMouseOptions_Wheel = 0x800,
                            InjectedInputMouseOptions_HWheel = 0x1000,
                            InjectedInputMouseOptions_MoveNoCoalesce = 0x2000,
                            InjectedInputMouseOptions_VirtualDesk = 0x4000,
                            InjectedInputMouseOptions_Absolute = 0x8000,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputMouseOptions)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPenButtons
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputPenButtons : unsigned int
                        {
                            InjectedInputPenButtons_None = 0,
                            InjectedInputPenButtons_Barrel = 0x1,
                            InjectedInputPenButtons_Inverted = 0x2,
                            InjectedInputPenButtons_Eraser = 0x4,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPenButtons)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPenParameters
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputPenParameters : unsigned int
                        {
                            InjectedInputPenParameters_None = 0,
                            InjectedInputPenParameters_Pressure = 0x1,
                            InjectedInputPenParameters_Rotation = 0x2,
                            InjectedInputPenParameters_TiltX = 0x4,
                            InjectedInputPenParameters_TiltY = 0x8,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPenParameters)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPointerOptions
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputPointerOptions : unsigned int
                        {
                            InjectedInputPointerOptions_None = 0,
                            InjectedInputPointerOptions_New = 0x1,
                            InjectedInputPointerOptions_InRange = 0x2,
                            InjectedInputPointerOptions_InContact = 0x4,
                            InjectedInputPointerOptions_FirstButton = 0x10,
                            InjectedInputPointerOptions_SecondButton = 0x20,
                            InjectedInputPointerOptions_Primary = 0x2000,
                            InjectedInputPointerOptions_Confidence = 0x4000,
                            InjectedInputPointerOptions_Canceled = 0x8000,
                            InjectedInputPointerOptions_PointerDown = 0x10000,
                            InjectedInputPointerOptions_Update = 0x20000,
                            InjectedInputPointerOptions_PointerUp = 0x40000,
                            InjectedInputPointerOptions_CaptureChanged = 0x200000,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputPointerOptions)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputShortcut
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, contract] */
                        enum InjectedInputShortcut : int
                        {
                            InjectedInputShortcut_Back = 0,
                            InjectedInputShortcut_Start = 1,
                            InjectedInputShortcut_Search = 2,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputTouchParameters
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, flags, contract] */
                        enum InjectedInputTouchParameters : unsigned int
                        {
                            InjectedInputTouchParameters_None = 0,
                            InjectedInputTouchParameters_Contact = 0x1,
                            InjectedInputTouchParameters_Orientation = 0x2,
                            InjectedInputTouchParameters_Pressure = 0x4,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(InjectedInputTouchParameters)
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputVisualizationMode
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
                namespace Preview {
                    namespace Injection {
                        /* [v1_enum, contract] */
                        enum InjectedInputVisualizationMode : int
                        {
                            InjectedInputVisualizationMode_None = 0,
                            InjectedInputVisualizationMode_Default = 1,
                            InjectedInputVisualizationMode_Indirect = 2,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPoint
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
                namespace Preview {
                    namespace Injection {
                        /* [contract] */
                        struct InjectedInputPoint
                        {
                            INT32 PositionX;
                            INT32 PositionY;
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPointerInfo
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
                namespace Preview {
                    namespace Injection {
                        /* [contract] */
                        struct InjectedInputPointerInfo
                        {
                            UINT32 PointerId;
                            ABI::Windows::UI::Input::Preview::Injection::InjectedInputPointerOptions PointerOptions;
                            ABI::Windows::UI::Input::Preview::Injection::InjectedInputPoint PixelLocation;
                            UINT32 TimeOffsetInMilliseconds;
                            UINT64 PerformanceCount;
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputRectangle
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
                namespace Preview {
                    namespace Injection {
                        /* [contract] */
                        struct InjectedInputRectangle
                        {
                            INT32 Left;
                            INT32 Top;
                            INT32 Bottom;
                            INT32 Right;
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("20AE9A3F-DF11-4572-A9AB-D75B8A5E48AD"), exclusiveto, contract] */
                        MIDL_INTERFACE("20AE9A3F-DF11-4572-A9AB-D75B8A5E48AD")
                        IInjectedInputGamepadInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Buttons(
                                /* [retval, out] */__RPC__out ABI::Windows::Gaming::Input::GamepadButtons * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Buttons(
                                /* [in] */ABI::Windows::Gaming::Input::GamepadButtons value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftThumbstickX(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LeftThumbstickX(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftThumbstickY(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LeftThumbstickY(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftTrigger(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LeftTrigger(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightThumbstickX(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightThumbstickX(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightThumbstickY(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightThumbstickY(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightTrigger(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightTrigger(
                                /* [in] */DOUBLE value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputGamepadInfo=_uuidof(IInjectedInputGamepadInfo);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("59596876-6C39-4EC4-8B2A-29EF7DE18ACA"), exclusiveto, contract] */
                        MIDL_INTERFACE("59596876-6C39-4EC4-8B2A-29EF7DE18ACA")
                        IInjectedInputGamepadInfoFactory : IInspectable
                        {
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateInstanceFromGamepadReading(
                                /* [in] */ABI::Windows::Gaming::Input::GamepadReading reading,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputGamepadInfoFactory=_uuidof(IInjectedInputGamepadInfoFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("4B46D140-2B6A-5FFA-7EAE-BD077B052ACD"), exclusiveto, contract] */
                        MIDL_INTERFACE("4B46D140-2B6A-5FFA-7EAE-BD077B052ACD")
                        IInjectedInputKeyboardInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyOptions(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyOptions(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputKeyOptions value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScanCode(
                                /* [retval, out] */__RPC__out UINT16 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ScanCode(
                                /* [in] */UINT16 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VirtualKey(
                                /* [retval, out] */__RPC__out UINT16 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_VirtualKey(
                                /* [in] */UINT16 value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputKeyboardInfo=_uuidof(IInjectedInputKeyboardInfo);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("96F56E6B-E47A-5CF4-418D-8A5FB9670C7D"), exclusiveto, contract] */
                        MIDL_INTERFACE("96F56E6B-E47A-5CF4-418D-8A5FB9670C7D")
                        IInjectedInputMouseInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseOptions(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MouseOptions(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputMouseOptions value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MouseData(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MouseData(
                                /* [in] */UINT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaY(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaY(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeltaX(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DeltaX(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeOffsetInMilliseconds(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TimeOffsetInMilliseconds(
                                /* [in] */UINT32 value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputMouseInfo=_uuidof(IInjectedInputMouseInfo);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputPenInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("6B40AD03-CA1E-5527-7E02-2828540BB1D4"), exclusiveto, contract] */
                        MIDL_INTERFACE("6B40AD03-CA1E-5527-7E02-2828540BB1D4")
                        IInjectedInputPenInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerInfo(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerInfo(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenButtons(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputPenButtons * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenButtons(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputPenButtons value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PenParameters(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputPenParameters * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PenParameters(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputPenParameters value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Pressure(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rotation(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Rotation(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltX(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TiltX(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TiltY(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TiltY(
                                /* [in] */INT32 value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputPenInfo=_uuidof(IInjectedInputPenInfo);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("224FD1DF-43E8-5EF5-510A-69CA8C9B4C28"), exclusiveto, contract] */
                        MIDL_INTERFACE("224FD1DF-43E8-5EF5-510A-69CA8C9B4C28")
                        IInjectedInputTouchInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Contact(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputRectangle * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Contact(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputRectangle value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orientation(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Orientation(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerInfo(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PointerInfo(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputPointerInfo value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Pressure(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TouchParameters(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TouchParameters(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputTouchParameters value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInjectedInputTouchInfo=_uuidof(IInjectedInputTouchInfo);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector[] = L"Windows.UI.Input.Preview.Injection.IInputInjector";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("8EC26F84-0B02-4BD2-AD7A-3D4658BE3E18"), exclusiveto, contract] */
                        MIDL_INTERFACE("8EC26F84-0B02-4BD2-AD7A-3D4658BE3E18")
                        IInputInjector : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE InjectKeyboardInput(
                                /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * input
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InjectMouseInput(
                                /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * input
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InitializeTouchInjection(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InjectTouchInput(
                                /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * input
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UninitializeTouchInjection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InitializePenInjection(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputVisualizationMode visualMode
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InjectPenInput(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Preview::Injection::IInjectedInputPenInfo * input
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UninitializePenInjection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InjectShortcut(
                                /* [in] */ABI::Windows::UI::Input::Preview::Injection::InjectedInputShortcut shortcut
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInputInjector=_uuidof(IInputInjector);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Preview.Injection.IInputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector2[] = L"Windows.UI.Input.Preview.Injection.IInputInjector2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("8E7A905D-1453-43A7-9BCB-06D6D7B305F7"), exclusiveto, contract] */
                        MIDL_INTERFACE("8E7A905D-1453-43A7-9BCB-06D6D7B305F7")
                        IInputInjector2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE InitializeGamepadInjection(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE InjectGamepadInput(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Preview::Injection::IInjectedInputGamepadInfo * input
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UninitializeGamepadInjection(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInputInjector2=_uuidof(IInputInjector2);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjectorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("DEAE6943-7402-4141-A5C6-0C01AA57B16A"), exclusiveto, contract] */
                        MIDL_INTERFACE("DEAE6943-7402-4141-A5C6-0C01AA57B16A")
                        IInputInjectorStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE TryCreate(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Preview::Injection::IInputInjector * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInputInjectorStatics=_uuidof(IInputInjectorStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjectorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Preview.Injection.IInputInjectorStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Preview {
                    namespace Injection {
                        /* [object, uuid("A4DB38FB-DD8C-414F-95EA-F87EF4C0AE6C"), exclusiveto, contract] */
                        MIDL_INTERFACE("A4DB38FB-DD8C-414F-95EA-F87EF4C0AE6C")
                        IInputInjectorStatics2 : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE TryCreateForAppBroadcastOnly(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Preview::Injection::IInputInjector * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IInputInjectorStatics2=_uuidof(IInputInjectorStatics2);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Preview */
    } /* Injection */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputPenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InputInjector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Preview.Injection.IInputInjectorStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.Preview.Injection.IInputInjectorStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInputInjector ** Default Interface **
 *    Windows.UI.Input.Preview.Injection.IInputInjector2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InputInjector_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InputInjector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InputInjector[] = L"Windows.UI.Input.Preview.Injection.InputInjector";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2;

#endif // ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;

typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;

typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;

typedef struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl;

interface __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo;

typedef  struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl;

interface __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






typedef enum __x_ABI_CWindows_CGaming_CInput_CGamepadButtons __x_ABI_CWindows_CGaming_CInput_CGamepadButtons;


typedef struct __x_ABI_CWindows_CGaming_CInput_CGamepadReading __x_ABI_CWindows_CGaming_CInput_CGamepadReading;





typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters;


typedef enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode;


typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint;


typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo;


typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle;





























/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputButtonChangeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputButtonChangeKind
{
    InjectedInputButtonChangeKind_None = 0,
    InjectedInputButtonChangeKind_FirstButtonDown = 1,
    InjectedInputButtonChangeKind_FirstButtonUp = 2,
    InjectedInputButtonChangeKind_SecondButtonDown = 3,
    InjectedInputButtonChangeKind_SecondButtonUp = 4,
    InjectedInputButtonChangeKind_ThirdButtonDown = 5,
    InjectedInputButtonChangeKind_ThirdButtonUp = 6,
    InjectedInputButtonChangeKind_FourthButtonDown = 7,
    InjectedInputButtonChangeKind_FourthButtonUp = 8,
    InjectedInputButtonChangeKind_FifthButtonDown = 9,
    InjectedInputButtonChangeKind_FifthButtonUp = 10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputKeyOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions
{
    InjectedInputKeyOptions_None = 0,
    InjectedInputKeyOptions_ExtendedKey = 0x1,
    InjectedInputKeyOptions_KeyUp = 0x2,
    InjectedInputKeyOptions_ScanCode = 0x8,
    InjectedInputKeyOptions_Unicode = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputMouseOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions
{
    InjectedInputMouseOptions_None = 0,
    InjectedInputMouseOptions_Move = 0x1,
    InjectedInputMouseOptions_LeftDown = 0x2,
    InjectedInputMouseOptions_LeftUp = 0x4,
    InjectedInputMouseOptions_RightDown = 0x8,
    InjectedInputMouseOptions_RightUp = 0x10,
    InjectedInputMouseOptions_MiddleDown = 0x20,
    InjectedInputMouseOptions_MiddleUp = 0x40,
    InjectedInputMouseOptions_XDown = 0x80,
    InjectedInputMouseOptions_XUp = 0x100,
    InjectedInputMouseOptions_Wheel = 0x800,
    InjectedInputMouseOptions_HWheel = 0x1000,
    InjectedInputMouseOptions_MoveNoCoalesce = 0x2000,
    InjectedInputMouseOptions_VirtualDesk = 0x4000,
    InjectedInputMouseOptions_Absolute = 0x8000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPenButtons
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons
{
    InjectedInputPenButtons_None = 0,
    InjectedInputPenButtons_Barrel = 0x1,
    InjectedInputPenButtons_Inverted = 0x2,
    InjectedInputPenButtons_Eraser = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPenParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters
{
    InjectedInputPenParameters_None = 0,
    InjectedInputPenParameters_Pressure = 0x1,
    InjectedInputPenParameters_Rotation = 0x2,
    InjectedInputPenParameters_TiltX = 0x4,
    InjectedInputPenParameters_TiltY = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPointerOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions
{
    InjectedInputPointerOptions_None = 0,
    InjectedInputPointerOptions_New = 0x1,
    InjectedInputPointerOptions_InRange = 0x2,
    InjectedInputPointerOptions_InContact = 0x4,
    InjectedInputPointerOptions_FirstButton = 0x10,
    InjectedInputPointerOptions_SecondButton = 0x20,
    InjectedInputPointerOptions_Primary = 0x2000,
    InjectedInputPointerOptions_Confidence = 0x4000,
    InjectedInputPointerOptions_Canceled = 0x8000,
    InjectedInputPointerOptions_PointerDown = 0x10000,
    InjectedInputPointerOptions_Update = 0x20000,
    InjectedInputPointerOptions_PointerUp = 0x40000,
    InjectedInputPointerOptions_CaptureChanged = 0x200000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputShortcut
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut
{
    InjectedInputShortcut_Back = 0,
    InjectedInputShortcut_Start = 1,
    InjectedInputShortcut_Search = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputTouchParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters
{
    InjectedInputTouchParameters_None = 0,
    InjectedInputTouchParameters_Contact = 0x1,
    InjectedInputTouchParameters_Orientation = 0x2,
    InjectedInputTouchParameters_Pressure = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputVisualizationMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode
{
    InjectedInputVisualizationMode_None = 0,
    InjectedInputVisualizationMode_Default = 1,
    InjectedInputVisualizationMode_Indirect = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint
{
    INT32 PositionX;
    INT32 PositionY;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputPointerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo
{
    UINT32 PointerId;
    __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerOptions PointerOptions;
    __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPoint PixelLocation;
    UINT32 TimeOffsetInMilliseconds;
    UINT64 PerformanceCount;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.UI.Input.Preview.Injection.InjectedInputRectangle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

/* [contract] */
struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle
{
    INT32 Left;
    INT32 Top;
    INT32 Bottom;
    INT32 Right;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo";
/* [object, uuid("20AE9A3F-DF11-4572-A9AB-D75B8A5E48AD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Buttons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CInput_CGamepadButtons * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Buttons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CGamepadButtons value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LeftThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LeftThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LeftTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightTrigger )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_Buttons(This,value) \
    ( (This)->lpVtbl->get_Buttons(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_Buttons(This,value) \
    ( (This)->lpVtbl->put_Buttons(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_LeftThumbstickX(This,value) \
    ( (This)->lpVtbl->get_LeftThumbstickX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_LeftThumbstickX(This,value) \
    ( (This)->lpVtbl->put_LeftThumbstickX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_LeftThumbstickY(This,value) \
    ( (This)->lpVtbl->get_LeftThumbstickY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_LeftThumbstickY(This,value) \
    ( (This)->lpVtbl->put_LeftThumbstickY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_LeftTrigger(This,value) \
    ( (This)->lpVtbl->get_LeftTrigger(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_LeftTrigger(This,value) \
    ( (This)->lpVtbl->put_LeftTrigger(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_RightThumbstickX(This,value) \
    ( (This)->lpVtbl->get_RightThumbstickX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_RightThumbstickX(This,value) \
    ( (This)->lpVtbl->put_RightThumbstickX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_RightThumbstickY(This,value) \
    ( (This)->lpVtbl->get_RightThumbstickY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_RightThumbstickY(This,value) \
    ( (This)->lpVtbl->put_RightThumbstickY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_get_RightTrigger(This,value) \
    ( (This)->lpVtbl->get_RightTrigger(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_put_RightTrigger(This,value) \
    ( (This)->lpVtbl->put_RightTrigger(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputGamepadInfoFactory[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory";
/* [object, uuid("59596876-6C39-4EC4-8B2A-29EF7DE18ACA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateInstanceFromGamepadReading )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory * This,
        /* [in] */__x_ABI_CWindows_CGaming_CInput_CGamepadReading reading,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_CreateInstanceFromGamepadReading(This,reading,value) \
    ( (This)->lpVtbl->CreateInstanceFromGamepadReading(This,reading,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo";
/* [object, uuid("4B46D140-2B6A-5FFA-7EAE-BD077B052ACD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputKeyOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScanCode )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ScanCode )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [in] */UINT16 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_VirtualKey )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo * This,
        /* [in] */UINT16 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_get_KeyOptions(This,value) \
    ( (This)->lpVtbl->get_KeyOptions(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_put_KeyOptions(This,value) \
    ( (This)->lpVtbl->put_KeyOptions(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_get_ScanCode(This,value) \
    ( (This)->lpVtbl->get_ScanCode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_put_ScanCode(This,value) \
    ( (This)->lpVtbl->put_ScanCode(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_get_VirtualKey(This,value) \
    ( (This)->lpVtbl->get_VirtualKey(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_put_VirtualKey(This,value) \
    ( (This)->lpVtbl->put_VirtualKey(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputKeyboardInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo";
/* [object, uuid("96F56E6B-E47A-5CF4-418D-8A5FB9670C7D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MouseOptions )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputMouseOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MouseData )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MouseData )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeltaX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DeltaX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeOffsetInMilliseconds )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TimeOffsetInMilliseconds )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_get_MouseOptions(This,value) \
    ( (This)->lpVtbl->get_MouseOptions(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_put_MouseOptions(This,value) \
    ( (This)->lpVtbl->put_MouseOptions(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_get_MouseData(This,value) \
    ( (This)->lpVtbl->get_MouseData(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_put_MouseData(This,value) \
    ( (This)->lpVtbl->put_MouseData(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_get_DeltaY(This,value) \
    ( (This)->lpVtbl->get_DeltaY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_put_DeltaY(This,value) \
    ( (This)->lpVtbl->put_DeltaY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_get_DeltaX(This,value) \
    ( (This)->lpVtbl->get_DeltaX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_put_DeltaX(This,value) \
    ( (This)->lpVtbl->put_DeltaX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_get_TimeOffsetInMilliseconds(This,value) \
    ( (This)->lpVtbl->get_TimeOffsetInMilliseconds(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_put_TimeOffsetInMilliseconds(This,value) \
    ( (This)->lpVtbl->put_TimeOffsetInMilliseconds(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputMouseInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputPenInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo";
/* [object, uuid("6B40AD03-CA1E-5527-7E02-2828540BB1D4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenButtons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenButtons )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenButtons value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PenParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PenParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPenParameters value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_PointerInfo(This,value) \
    ( (This)->lpVtbl->get_PointerInfo(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_PointerInfo(This,value) \
    ( (This)->lpVtbl->put_PointerInfo(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_PenButtons(This,value) \
    ( (This)->lpVtbl->get_PenButtons(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_PenButtons(This,value) \
    ( (This)->lpVtbl->put_PenButtons(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_PenParameters(This,value) \
    ( (This)->lpVtbl->get_PenParameters(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_PenParameters(This,value) \
    ( (This)->lpVtbl->put_PenParameters(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_Pressure(This,value) \
    ( (This)->lpVtbl->put_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_Rotation(This,value) \
    ( (This)->lpVtbl->get_Rotation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_Rotation(This,value) \
    ( (This)->lpVtbl->put_Rotation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_TiltX(This,value) \
    ( (This)->lpVtbl->get_TiltX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_TiltX(This,value) \
    ( (This)->lpVtbl->put_TiltX(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_get_TiltY(This,value) \
    ( (This)->lpVtbl->get_TiltY(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_put_TiltY(This,value) \
    ( (This)->lpVtbl->put_TiltY(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo";
/* [object, uuid("224FD1DF-43E8-5EF5-510A-69CA8C9B4C28"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Contact )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputRectangle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PointerInfo )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputPointerInfo value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TouchParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TouchParameters )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputTouchParameters value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_get_Contact(This,value) \
    ( (This)->lpVtbl->get_Contact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_put_Contact(This,value) \
    ( (This)->lpVtbl->put_Contact(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_get_Orientation(This,value) \
    ( (This)->lpVtbl->get_Orientation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_put_Orientation(This,value) \
    ( (This)->lpVtbl->put_Orientation(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_get_PointerInfo(This,value) \
    ( (This)->lpVtbl->get_PointerInfo(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_put_PointerInfo(This,value) \
    ( (This)->lpVtbl->put_PointerInfo(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_put_Pressure(This,value) \
    ( (This)->lpVtbl->put_Pressure(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_get_TouchParameters(This,value) \
    ( (This)->lpVtbl->get_TouchParameters(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_put_TouchParameters(This,value) \
    ( (This)->lpVtbl->put_TouchParameters(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputTouchInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector[] = L"Windows.UI.Input.Preview.Injection.IInputInjector";
/* [object, uuid("8EC26F84-0B02-4BD2-AD7A-3D4658BE3E18"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InjectKeyboardInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputKeyboardInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *InjectMouseInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputMouseInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *InitializeTouchInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode visualMode
        );
    HRESULT ( STDMETHODCALLTYPE *InjectTouchInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CPreview__CInjection__CInjectedInputTouchInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializeTouchInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
        );
    HRESULT ( STDMETHODCALLTYPE *InitializePenInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputVisualizationMode visualMode
        );
    HRESULT ( STDMETHODCALLTYPE *InjectPenInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputPenInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializePenInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This
        );
    HRESULT ( STDMETHODCALLTYPE *InjectShortcut )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CInjectedInputShortcut shortcut
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InjectKeyboardInput(This,input) \
    ( (This)->lpVtbl->InjectKeyboardInput(This,input) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InjectMouseInput(This,input) \
    ( (This)->lpVtbl->InjectMouseInput(This,input) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InitializeTouchInjection(This,visualMode) \
    ( (This)->lpVtbl->InitializeTouchInjection(This,visualMode) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InjectTouchInput(This,input) \
    ( (This)->lpVtbl->InjectTouchInput(This,input) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_UninitializeTouchInjection(This) \
    ( (This)->lpVtbl->UninitializeTouchInjection(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InitializePenInjection(This,visualMode) \
    ( (This)->lpVtbl->InitializePenInjection(This,visualMode) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InjectPenInput(This,input) \
    ( (This)->lpVtbl->InjectPenInput(This,input) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_UninitializePenInjection(This) \
    ( (This)->lpVtbl->UninitializePenInjection(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_InjectShortcut(This,shortcut) \
    ( (This)->lpVtbl->InjectShortcut(This,shortcut) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjector2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Preview.Injection.IInputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjector2[] = L"Windows.UI.Input.Preview.Injection.IInputInjector2";
/* [object, uuid("8E7A905D-1453-43A7-9BCB-06D6D7B305F7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InitializeGamepadInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *InjectGamepadInput )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInjectedInputGamepadInfo * input
        );
    HRESULT ( STDMETHODCALLTYPE *UninitializeGamepadInjection )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_InitializeGamepadInjection(This) \
    ( (This)->lpVtbl->InitializeGamepadInjection(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_InjectGamepadInput(This,input) \
    ( (This)->lpVtbl->InjectGamepadInput(This,input) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_UninitializeGamepadInjection(This) \
    ( (This)->lpVtbl->UninitializeGamepadInjection(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjectorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics";
/* [object, uuid("DEAE6943-7402-4141-A5C6-0C01AA57B16A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreate )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_TryCreate(This,instance) \
    ( (This)->lpVtbl->TryCreate(This,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Preview.Injection.IInputInjectorStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Preview.Injection.InputInjector
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Input.Preview.Injection.IInputInjectorStatics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_Injection_IInputInjectorStatics2[] = L"Windows.UI.Input.Preview.Injection.IInputInjectorStatics2";
/* [object, uuid("A4DB38FB-DD8C-414F-95EA-F87EF4C0AE6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateForAppBroadcastOnly )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjector * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_TryCreateForAppBroadcastOnly(This,instance) \
    ( (This)->lpVtbl->TryCreateForAppBroadcastOnly(This,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CPreview_CInjection_CIInputInjectorStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfoFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputGamepadInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputGamepadInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputGamepadInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputKeyboardInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputKeyboardInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputKeyboardInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputMouseInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputMouseInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputMouseInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputPenInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputPenInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputPenInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputPenInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInjectedInputTouchInfo ** Default Interface **
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InjectedInputTouchInfo[] = L"Windows.UI.Input.Preview.Injection.InjectedInputTouchInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Preview.Injection.InputInjector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Preview.Injection.IInputInjectorStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Input.Preview.Injection.IInputInjectorStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Preview.Injection.IInputInjector ** Default Interface **
 *    Windows.UI.Input.Preview.Injection.IInputInjector2
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InputInjector_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Preview_Injection_InputInjector_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_Injection_InputInjector[] = L"Windows.UI.Input.Preview.Injection.InputInjector";
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
#endif // __windows2Eui2Einput2Epreview2Einjection_p_h__

#endif // __windows2Eui2Einput2Epreview2Einjection_h__
