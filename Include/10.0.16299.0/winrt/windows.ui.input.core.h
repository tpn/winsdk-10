/* Header file automatically generated from windows.ui.input.core.idl */
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
#ifndef __windows2Eui2Einput2Ecore_h__
#define __windows2Eui2Einput2Ecore_h__
#ifndef __windows2Eui2Einput2Ecore_p_h__
#define __windows2Eui2Einput2Ecore_p_h__


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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    interface IRadialControllerIndependentInputSource;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSource

#endif // ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    interface IRadialControllerIndependentInputSourceStatics;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSourceStatics

#endif // ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                class CoreApplicationView;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Core {
                interface ICoreApplicationView;
            } /* Windows */
        } /* ApplicationModel */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView ABI::Windows::ApplicationModel::Core::ICoreApplicationView

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__








namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                class CoreDispatcher;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Core {
                interface ICoreDispatcher;
            } /* Windows */
        } /* UI */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CCore_CICoreDispatcher ABI::Windows::UI::Core::ICoreDispatcher

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                class RadialController;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                interface IRadialController;
            } /* Windows */
        } /* UI */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CInput_CIRadialController ABI::Windows::UI::Input::IRadialController

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__







namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    class RadialControllerIndependentInputSource;
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Core */} /* ABI */







/*
 *
 * Interface Windows.UI.Input.Core.IRadialControllerIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    /* [object, uuid("3D577EF6-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D577EF6-4CEE-11E6-B535-001BDC06AB3B")
                    IRadialControllerIndependentInputSource : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Controller(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::IRadialController * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dispatcher(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Core::ICoreDispatcher * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRadialControllerIndependentInputSource=_uuidof(IRadialControllerIndependentInputSource);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Input {
                namespace Core {
                    /* [object, uuid("3D577EF5-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D577EF5-4CEE-11E6-B535-001BDC06AB3B")
                    IRadialControllerIndependentInputSourceStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateForView(
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Core::ICoreApplicationView * view,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Input::Core::IRadialControllerIndependentInputSource * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRadialControllerIndependentInputSourceStatics=_uuidof(IRadialControllerIndependentInputSourceStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Input */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Core.IRadialControllerIndependentInputSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Core_RadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.RadialControllerIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;

#endif // ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;

#endif // ____x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;

#endif // ____x_ABI_CWindows_CUI_CCore_CICoreDispatcher_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController __x_ABI_CWindows_CUI_CInput_CIRadialController;

#endif // ____x_ABI_CWindows_CUI_CInput_CIRadialController_FWD_DEFINED__













/*
 *
 * Interface Windows.UI.Input.Core.IRadialControllerIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource";
/* [object, uuid("3D577EF6-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl;

interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_get_Controller(This,value) \
    ( (This)->lpVtbl->get_Controller(This,value) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_get_Dispatcher(This,value) \
    ( (This)->lpVtbl->get_Dispatcher(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics";
/* [object, uuid("3D577EF5-4CEE-11E6-B535-001BDC06AB3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForView )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * view,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_CreateForView(This,view,result) \
    ( (This)->lpVtbl->CreateForView(This,view,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Input.Core.RadialControllerIndependentInputSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Input.Core.IRadialControllerIndependentInputSource ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Input_Core_RadialControllerIndependentInputSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Core_RadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.RadialControllerIndependentInputSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Einput2Ecore_p_h__

#endif // __windows2Eui2Einput2Ecore_h__
