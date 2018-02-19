/* Header file automatically generated from windows.ui.input.inking.core.idl */
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
#ifndef __windows2Eui2Einput2Einking2Ecore_h__
#define __windows2Eui2Einput2Einking2Ecore_h__
#ifndef __windows2Eui2Einput2Einking2Ecore_p_h__
#define __windows2Eui2Einput2Einking2Ecore_p_h__


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
#include "Windows.UI.Composition.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.Inking.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreIncrementalInkStroke;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke ABI::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreIncrementalInkStrokeFactory;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory ABI::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStrokeFactory

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkIndependentInputSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkIndependentInputSourceStatics;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSourceStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreInkPresenterHost;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost ABI::Windows::UI::Input::Inking::Core::ICoreInkPresenterHost

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreWetStrokeUpdateEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreWetStrokeUpdateSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        interface ICoreWetStrokeUpdateSourceStatics;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSourceStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        class CoreWetStrokeUpdateSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        class CoreWetStrokeUpdateEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("67ff75e8-02a4-5254-a965-0b254c7d0788"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource*,ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource*, ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs*, ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource, Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateSource*,ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeUpdateEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource*,ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource*,ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

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
                    namespace Core {
                        class CoreInkIndependentInputSource;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */


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

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b83fbe98-882a-5b69-bd1c-c66690707fef"))
ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*, ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Core::PointerEventArgs*, ABI::Windows::UI::Core::IPointerEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource, Windows.UI.Core.PointerEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::CoreInkIndependentInputSource*,ABI::Windows::UI::Core::PointerEventArgs*> __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*,ABI::Windows::UI::Core::IPointerEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource*,ABI::Windows::UI::Core::IPointerEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_USE */


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
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                class ContainerVisual;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Composition {
                interface IContainerVisual;
            } /* Windows */
        } /* UI */
    } /* Composition */} /* ABI */
#define __x_ABI_CWindows_CUI_CComposition_CIContainerVisual ABI::Windows::UI::Composition::IContainerVisual

#endif // ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__









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






namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        
                        typedef enum CoreWetStrokeDisposition : int CoreWetStrokeDisposition;
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        class CoreIncrementalInkStroke;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        class CoreInkPresenterHost;
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
















/*
 *
 * Struct Windows.UI.Input.Inking.Core.CoreWetStrokeDisposition
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
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum CoreWetStrokeDisposition : int
                        {
                            CoreWetStrokeDisposition_Inking = 0,
                            CoreWetStrokeDisposition_Completed = 1,
                            CoreWetStrokeDisposition_Canceled = 2,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("FDA015D3-9D66-4F7D-A57F-CC70B9CFAA76"), exclusiveto, contract] */
                        MIDL_INTERFACE("FDA015D3-9D66-4F7D-A57F-CC70B9CFAA76")
                        ICoreIncrementalInkStroke : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE AppendInkPoints(
                                /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * result
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateInkStroke(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkStroke * * result
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DrawingAttributes(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointTransform(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Matrix3x2 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BoundingRect(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreIncrementalInkStroke=_uuidof(ICoreIncrementalInkStroke);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("D7C59F46-8DA8-4F70-9751-E53BB6DF4596"), exclusiveto, contract] */
                        MIDL_INTERFACE("D7C59F46-8DA8-4F70-9751-E53BB6DF4596")
                        ICoreIncrementalInkStrokeFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkDrawingAttributes * drawingAttributes,
                                /* [in] */ABI::Windows::Foundation::Numerics::Matrix3x2 pointTransform,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::Core::ICoreIncrementalInkStroke * * result
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreIncrementalInkStrokeFactory=_uuidof(ICoreIncrementalInkStrokeFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("39B38DA9-7639-4499-A5B5-191D00E35B16"), exclusiveto, contract] */
                        MIDL_INTERFACE("39B38DA9-7639-4499-A5B5-191D00E35B16")
                        ICoreInkIndependentInputSource : IInspectable
                        {
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerEntering(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerEntering(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerHovering(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerHovering(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerExiting(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerExiting(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerPressing(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerPressing(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerMoving(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerMoving(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerReleasing(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerReleasing(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_PointerLost(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_PointerLost(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InkPresenter(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreInkIndependentInputSource=_uuidof(ICoreInkIndependentInputSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("73E6011B-80C0-4DFB-9B66-10BA7F3F9C84"), exclusiveto, contract] */
                        MIDL_INTERFACE("73E6011B-80C0-4DFB-9B66-10BA7F3F9C84")
                        ICoreInkIndependentInputSourceStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkPresenter * inkPresenter,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::Core::ICoreInkIndependentInputSource * * inkIndependentInputSource
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreInkIndependentInputSourceStatics=_uuidof(ICoreInkIndependentInputSourceStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkPresenterHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkPresenterHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.ICoreInkPresenterHost";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("396E89E6-7D55-4617-9E58-68C70C9169B9"), exclusiveto, contract] */
                        MIDL_INTERFACE("396E89E6-7D55-4617-9E58-68C70C9169B9")
                        ICoreInkPresenterHost : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InkPresenter(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RootVisual(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Composition::IContainerVisual * * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RootVisual(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Composition::IContainerVisual * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreInkPresenterHost=_uuidof(ICoreInkPresenterHost);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("FB07D14C-3380-457A-A987-991357896C1B"), exclusiveto, contract] */
                        MIDL_INTERFACE("FB07D14C-3380-457A-A987-991357896C1B")
                        ICoreWetStrokeUpdateEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewInkPoints(
                                /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PointerId(
                                /* [retval, out] */__RPC__out UINT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Disposition(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Disposition(
                                /* [in] */ABI::Windows::UI::Input::Inking::Core::CoreWetStrokeDisposition value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreWetStrokeUpdateEventArgs=_uuidof(ICoreWetStrokeUpdateEventArgs);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("1F718E22-EE52-4E00-8209-4C3E5B21A3CC"), exclusiveto, contract] */
                        MIDL_INTERFACE("1F718E22-EE52-4E00-8209-4C3E5B21A3CC")
                        ICoreWetStrokeUpdateSource : IInspectable
                        {
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WetStrokeStarting(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WetStrokeStarting(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WetStrokeContinuing(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WetStrokeContinuing(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WetStrokeStopping(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WetStrokeStopping(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WetStrokeCompleted(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WetStrokeCompleted(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_WetStrokeCanceled(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
                                /* [retval, out] */__RPC__out EventRegistrationToken * cookie
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_WetStrokeCanceled(
                                /* [in] */EventRegistrationToken cookie
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InkPresenter(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::IInkPresenter * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreWetStrokeUpdateSource=_uuidof(ICoreWetStrokeUpdateSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Inking {
                    namespace Core {
                        /* [object, uuid("3DAD9CBA-1D3D-46AE-AB9D-8647486C6F90"), exclusiveto, contract] */
                        MIDL_INTERFACE("3DAD9CBA-1D3D-46AE-AB9D-8647486C6F90")
                        ICoreWetStrokeUpdateSourceStatics : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE Create(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Input::Inking::IInkPresenter * inkPresenter,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Inking::Core::ICoreWetStrokeUpdateSource * * WetStrokeUpdateSource
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ICoreWetStrokeUpdateSourceStatics=_uuidof(ICoreWetStrokeUpdateSourceStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Input */
        } /* Inking */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreInkPresenterHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreInkPresenterHost ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkPresenterHost_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkPresenterHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.CoreInkPresenterHost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint_FWD_DEFINED__


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


#ifndef ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;

#endif // ____x_ABI_CWindows_CUI_CCore_CIPointerEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs_INTERFACE_DEFINED__

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



typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;





typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;




#ifndef ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CComposition_CIContainerVisual __x_ABI_CWindows_CUI_CComposition_CIContainerVisual;

#endif // ____x_ABI_CWindows_CUI_CComposition_CIContainerVisual_FWD_DEFINED__









#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;

#endif // ____x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke_FWD_DEFINED__







typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition;


























/*
 *
 * Struct Windows.UI.Input.Inking.Core.CoreWetStrokeDisposition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition
{
    CoreWetStrokeDisposition_Inking = 0,
    CoreWetStrokeDisposition_Completed = 1,
    CoreWetStrokeDisposition_Canceled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke";
/* [object, uuid("FDA015D3-9D66-4F7D-A57F-CC70B9CFAA76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AppendInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInkStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_AppendInkPoints(This,inkPoints,result) \
    ( (This)->lpVtbl->AppendInkPoints(This,inkPoints,result) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_CreateInkStroke(This,result) \
    ( (This)->lpVtbl->CreateInkStroke(This,result) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_get_DrawingAttributes(This,value) \
    ( (This)->lpVtbl->get_DrawingAttributes(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_get_PointTransform(This,value) \
    ( (This)->lpVtbl->get_PointTransform(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_get_BoundingRect(This,value) \
    ( (This)->lpVtbl->get_BoundingRect(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreIncrementalInkStrokeFactory[] = L"Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory";
/* [object, uuid("D7C59F46-8DA8-4F70-9751-E53BB6DF4596"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes,
        /* [in] */__x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 pointTransform,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStroke * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_Create(This,drawingAttributes,pointTransform,result) \
    ( (This)->lpVtbl->Create(This,drawingAttributes,pointTransform,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreIncrementalInkStrokeFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource";
/* [object, uuid("39B38DA9-7639-4499-A5B5-191D00E35B16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerEntering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerEntering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerHovering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerHovering )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerExiting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerExiting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerPressing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerPressing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerMoving )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerMoving )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerReleasing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerReleasing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerEntering(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerEntering(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerEntering(This,cookie) \
    ( (This)->lpVtbl->remove_PointerEntering(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerHovering(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerHovering(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerHovering(This,cookie) \
    ( (This)->lpVtbl->remove_PointerHovering(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerExiting(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerExiting(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerExiting(This,cookie) \
    ( (This)->lpVtbl->remove_PointerExiting(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerPressing(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerPressing(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerPressing(This,cookie) \
    ( (This)->lpVtbl->remove_PointerPressing(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerMoving(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerMoving(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerMoving(This,cookie) \
    ( (This)->lpVtbl->remove_PointerMoving(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerReleasing(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerReleasing(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerReleasing(This,cookie) \
    ( (This)->lpVtbl->remove_PointerReleasing(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_add_PointerLost(This,handler,cookie) \
    ( (This)->lpVtbl->add_PointerLost(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_remove_PointerLost(This,cookie) \
    ( (This)->lpVtbl->remove_PointerLost(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_get_InkPresenter(This,value) \
    ( (This)->lpVtbl->get_InkPresenter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkIndependentInputSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics";
/* [object, uuid("73E6011B-80C0-4DFB-9B66-10BA7F3F9C84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * * inkIndependentInputSource
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_Create(This,inkPresenter,inkIndependentInputSource) \
    ( (This)->lpVtbl->Create(This,inkPresenter,inkIndependentInputSource) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreInkPresenterHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreInkPresenterHost
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.ICoreInkPresenterHost";
/* [object, uuid("396E89E6-7D55-4617-9E58-68C70C9169B9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RootVisual )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RootVisual )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIContainerVisual * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHostVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_get_InkPresenter(This,value) \
    ( (This)->lpVtbl->get_InkPresenter(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_get_RootVisual(This,value) \
    ( (This)->lpVtbl->get_RootVisual(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_put_RootVisual(This,value) \
    ( (This)->lpVtbl->put_RootVisual(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkPresenterHost_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs";
/* [object, uuid("FB07D14C-3380-457A-A987-991357896C1B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Disposition )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Disposition )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs * This,
        /* [in] */__x_ABI_CWindows_CUI_CInput_CInking_CCore_CCoreWetStrokeDisposition value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_get_NewInkPoints(This,value) \
    ( (This)->lpVtbl->get_NewInkPoints(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_get_PointerId(This,value) \
    ( (This)->lpVtbl->get_PointerId(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_get_Disposition(This,value) \
    ( (This)->lpVtbl->get_Disposition(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_put_Disposition(This,value) \
    ( (This)->lpVtbl->put_Disposition(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource";
/* [object, uuid("1F718E22-EE52-4E00-8209-4C3E5B21A3CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WetStrokeStarting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeStarting )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WetStrokeContinuing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeContinuing )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WetStrokeStopping )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeStopping )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WetStrokeCompleted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeCompleted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_WetStrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateSource_Windows__CUI__CInput__CInking__CCore__CCoreWetStrokeUpdateEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * cookie
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_WetStrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [in] */EventRegistrationToken cookie
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_add_WetStrokeStarting(This,handler,cookie) \
    ( (This)->lpVtbl->add_WetStrokeStarting(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_remove_WetStrokeStarting(This,cookie) \
    ( (This)->lpVtbl->remove_WetStrokeStarting(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_add_WetStrokeContinuing(This,handler,cookie) \
    ( (This)->lpVtbl->add_WetStrokeContinuing(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_remove_WetStrokeContinuing(This,cookie) \
    ( (This)->lpVtbl->remove_WetStrokeContinuing(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_add_WetStrokeStopping(This,handler,cookie) \
    ( (This)->lpVtbl->add_WetStrokeStopping(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_remove_WetStrokeStopping(This,cookie) \
    ( (This)->lpVtbl->remove_WetStrokeStopping(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_add_WetStrokeCompleted(This,handler,cookie) \
    ( (This)->lpVtbl->add_WetStrokeCompleted(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_remove_WetStrokeCompleted(This,cookie) \
    ( (This)->lpVtbl->remove_WetStrokeCompleted(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_add_WetStrokeCanceled(This,handler,cookie) \
    ( (This)->lpVtbl->add_WetStrokeCanceled(This,handler,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_remove_WetStrokeCanceled(This,cookie) \
    ( (This)->lpVtbl->remove_WetStrokeCanceled(This,cookie) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_get_InkPresenter(This,value) \
    ( (This)->lpVtbl->get_InkPresenter(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Core_ICoreWetStrokeUpdateSourceStatics[] = L"Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics";
/* [object, uuid("3DAD9CBA-1D3D-46AE-AB9D-8647486C6F90"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSource * * WetStrokeUpdateSource
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_Create(This,inkPresenter,WetStrokeUpdateSource) \
    ( (This)->lpVtbl->Create(This,inkPresenter,WetStrokeUpdateSource) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreWetStrokeUpdateSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Input.Inking.Core.ICoreIncrementalInkStrokeFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreIncrementalInkStroke ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreIncrementalInkStroke[] = L"Windows.UI.Input.Inking.Core.CoreIncrementalInkStroke";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreInkIndependentInputSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkIndependentInputSource[] = L"Windows.UI.Input.Inking.Core.CoreInkIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreInkPresenterHost
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreInkPresenterHost ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkPresenterHost_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreInkPresenterHost_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreInkPresenterHost[] = L"Windows.UI.Input.Inking.Core.CoreInkPresenterHost";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateEventArgs[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSourceStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Inking.Core.ICoreWetStrokeUpdateSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Core_CoreWetStrokeUpdateSource[] = L"Windows.UI.Input.Inking.Core.CoreWetStrokeUpdateSource";
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
#endif // __windows2Eui2Einput2Einking2Ecore_p_h__

#endif // __windows2Eui2Einput2Einking2Ecore_h__
