/* Header file automatically generated from windows.media.appbroadcasting.idl */
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
#ifndef __windows2Emedia2Eappbroadcasting_h__
#define __windows2Emedia2Eappbroadcasting_h__
#ifndef __windows2Emedia2Eappbroadcasting_p_h__
#define __windows2Emedia2Eappbroadcasting_p_h__


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

#if !defined(WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION)
#define WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION)

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
#include "Windows.System.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                interface IAppBroadcastingMonitor;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor ABI::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                interface IAppBroadcastingStatus;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus ABI::Windows::Media::AppBroadcasting::IAppBroadcastingStatus

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                interface IAppBroadcastingStatusDetails;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails ABI::Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                interface IAppBroadcastingUI;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI ABI::Windows::Media::AppBroadcasting::IAppBroadcastingUI

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                interface IAppBroadcastingUIStatics;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics ABI::Windows::Media::AppBroadcasting::IAppBroadcastingUIStatics

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                class AppBroadcastingMonitor;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */



#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dc64118b-04f9-5161-a7c0-e6a96070a8d1"))
ITypedEventHandler<ABI::Windows::Media::AppBroadcasting::AppBroadcastingMonitor*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Media::AppBroadcasting::AppBroadcastingMonitor*, ABI::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Media.AppBroadcasting.AppBroadcastingMonitor, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Media::AppBroadcasting::AppBroadcastingMonitor*,IInspectable*> __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Media::AppBroadcasting::IAppBroadcastingMonitor*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_USE */


#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace System {
            class User;
        } /* Windows */
    } /* System */} /* ABI */

#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            interface IUser;
        } /* Windows */
    } /* System */} /* ABI */
#define __x_ABI_CWindows_CSystem_CIUser ABI::Windows::System::IUser

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__











namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                class AppBroadcastingStatus;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                class AppBroadcastingStatusDetails;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                class AppBroadcastingUI;
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */











/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingMonitor
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingMonitor
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingMonitor";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                /* [object, uuid("00F95A68-8907-48A0-B8EF-24D208137542"), exclusiveto, contract] */
                MIDL_INTERFACE("00F95A68-8907-48A0-B8EF-24D208137542")
                IAppBroadcastingMonitor : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCurrentAppBroadcasting(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_IsCurrentAppBroadcastingChanged(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_IsCurrentAppBroadcastingChanged(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppBroadcastingMonitor=_uuidof(IAppBroadcastingMonitor);
                
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingStatus
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingStatus
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatus";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                /* [object, uuid("1225E4DF-03A1-42F8-8B80-C9228CD9CF2E"), exclusiveto, contract] */
                MIDL_INTERFACE("1225E4DF-03A1-42F8-8B80-C9228CD9CF2E")
                IAppBroadcastingStatus : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CanStartBroadcast(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Details(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppBroadcasting::IAppBroadcastingStatusDetails * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppBroadcastingStatus=_uuidof(IAppBroadcastingStatus);
                
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                /* [object, uuid("069DADA4-B573-4E3C-8E19-1BAFACD09713"), exclusiveto, contract] */
                MIDL_INTERFACE("069DADA4-B573-4E3C-8E19-1BAFACD09713")
                IAppBroadcastingStatusDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAnyAppBroadcasting(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCaptureResourceUnavailable(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGameStreamInProgress(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGpuConstrained(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAppInactive(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsBlockedForApp(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisabledByUser(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDisabledBySystem(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppBroadcastingStatusDetails=_uuidof(IAppBroadcastingStatusDetails);
                
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingUI
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUI";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                /* [object, uuid("E56F9F8F-EE99-4DCA-A3C3-70AF3DB44F5F"), exclusiveto, contract] */
                MIDL_INTERFACE("E56F9F8F-EE99-4DCA-A3C3-70AF3DB44F5F")
                IAppBroadcastingUI : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStatus(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppBroadcasting::IAppBroadcastingStatus * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowBroadcastUI(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppBroadcastingUI=_uuidof(IAppBroadcastingUI);
                
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics";
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace AppBroadcasting {
                /* [object, uuid("55A8A79D-23CB-4579-9C34-886FE02C045A"), exclusiveto, contract] */
                MIDL_INTERFACE("55A8A79D-23CB-4579-9C34-886FE02C045A")
                IAppBroadcastingUIStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetDefault(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppBroadcasting::IAppBroadcastingUI * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetForUser(
                        /* [in] */__RPC__in_opt ABI::Windows::System::IUser * user,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::AppBroadcasting::IAppBroadcastingUI * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IAppBroadcastingUIStatics=_uuidof(IAppBroadcastingUIStatics);
                
            } /* Windows */
        } /* Media */
    } /* AppBroadcasting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingMonitor
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Media.AppBroadcasting.AppBroadcastingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingMonitor_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.AppBroadcastingMonitor";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingStatus
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingStatus ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatus_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatus";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics interface starting with version 1.0 of the Windows.Media.AppBroadcasting.AppBroadcastingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingUI_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.AppBroadcastingUI";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;

#endif // ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;

#endif // ____x_ABI_CWindows_CSystem_CIUser_FWD_DEFINED__























/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingMonitor
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingMonitor
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingMonitor";
/* [object, uuid("00F95A68-8907-48A0-B8EF-24D208137542"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCurrentAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_IsCurrentAppBroadcastingChanged )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CAppBroadcasting__CAppBroadcastingMonitor_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_IsCurrentAppBroadcastingChanged )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl;

interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_get_IsCurrentAppBroadcasting(This,value) \
    ( (This)->lpVtbl->get_IsCurrentAppBroadcasting(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_add_IsCurrentAppBroadcastingChanged(This,handler,token) \
    ( (This)->lpVtbl->add_IsCurrentAppBroadcastingChanged(This,handler,token) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_remove_IsCurrentAppBroadcastingChanged(This,token) \
    ( (This)->lpVtbl->remove_IsCurrentAppBroadcastingChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingMonitor_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingStatus
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingStatus
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatus";
/* [object, uuid("1225E4DF-03A1-42F8-8B80-C9228CD9CF2E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CanStartBroadcast )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl;

interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_get_CanStartBroadcast(This,value) \
    ( (This)->lpVtbl->get_CanStartBroadcast(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_get_Details(This,value) \
    ( (This)->lpVtbl->get_Details(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails";
/* [object, uuid("069DADA4-B573-4E3C-8E19-1BAFACD09713"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAnyAppBroadcasting )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCaptureResourceUnavailable )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGameStreamInProgress )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGpuConstrained )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAppInactive )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsBlockedForApp )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisabledByUser )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDisabledBySystem )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl;

interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsAnyAppBroadcasting(This,value) \
    ( (This)->lpVtbl->get_IsAnyAppBroadcasting(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsCaptureResourceUnavailable(This,value) \
    ( (This)->lpVtbl->get_IsCaptureResourceUnavailable(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsGameStreamInProgress(This,value) \
    ( (This)->lpVtbl->get_IsGameStreamInProgress(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsGpuConstrained(This,value) \
    ( (This)->lpVtbl->get_IsGpuConstrained(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsAppInactive(This,value) \
    ( (This)->lpVtbl->get_IsAppInactive(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsBlockedForApp(This,value) \
    ( (This)->lpVtbl->get_IsBlockedForApp(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsDisabledByUser(This,value) \
    ( (This)->lpVtbl->get_IsDisabledByUser(This,value) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_get_IsDisabledBySystem(This,value) \
    ( (This)->lpVtbl->get_IsDisabledBySystem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatusDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingUI
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUI";
/* [object, uuid("E56F9F8F-EE99-4DCA-A3C3-70AF3DB44F5F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingStatus * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ShowBroadcastUI )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl;

interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_GetStatus(This,result) \
    ( (This)->lpVtbl->GetStatus(This,result) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_ShowBroadcastUI(This) \
    ( (This)->lpVtbl->ShowBroadcastUI(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_AppBroadcasting_IAppBroadcastingUIStatics[] = L"Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics";
/* [object, uuid("55A8A79D-23CB-4579-9C34-886FE02C045A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetForUser )(
        __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUI * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl;

interface __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_GetDefault(This,result) \
    ( (This)->lpVtbl->GetDefault(This,result) )

#define __x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_GetForUser(This,user,result) \
    ( (This)->lpVtbl->GetForUser(This,user,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics;
#endif /* !defined(____x_ABI_CWindows_CMedia_CAppBroadcasting_CIAppBroadcastingUIStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingMonitor
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Media.AppBroadcasting.AppBroadcastingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingMonitor ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingMonitor_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingMonitor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingMonitor[] = L"Windows.Media.AppBroadcasting.AppBroadcastingMonitor";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingStatus
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingStatus ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatus_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatus_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatus[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatus";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingStatusDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingStatusDetails[] = L"Windows.Media.AppBroadcasting.AppBroadcastingStatusDetails";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Media.AppBroadcasting.AppBroadcastingUI
 *
 * Introduced to Windows.Media.AppBroadcasting.AppBroadcastingContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Media.AppBroadcasting.IAppBroadcastingUIStatics interface starting with version 1.0 of the Windows.Media.AppBroadcasting.AppBroadcastingContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Media.AppBroadcasting.IAppBroadcastingUI ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingUI_DEFINED
#define RUNTIMECLASS_Windows_Media_AppBroadcasting_AppBroadcastingUI_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AppBroadcasting_AppBroadcastingUI[] = L"Windows.Media.AppBroadcasting.AppBroadcastingUI";
#endif
#endif // WINDOWS_MEDIA_APPBROADCASTING_APPBROADCASTINGCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emedia2Eappbroadcasting_p_h__

#endif // __windows2Emedia2Eappbroadcasting_h__
