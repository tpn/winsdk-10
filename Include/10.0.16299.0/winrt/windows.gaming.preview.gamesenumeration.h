/* Header file automatically generated from windows.gaming.preview.gamesenumeration.idl */
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
#ifndef __windows2Egaming2Epreview2Egamesenumeration_h__
#define __windows2Egaming2Epreview2Egamesenumeration_h__
#ifndef __windows2Egaming2Epreview2Egamesenumeration_p_h__
#define __windows2Egaming2Epreview2Egamesenumeration_p_h__


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

#if !defined(WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION)
#define WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION)

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
#include "Windows.ApplicationModel.h"
#include "Windows.Gaming.Preview.h"
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListChangedEventHandler;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListRemovedEventHandler;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListEntry;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListEntry2;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListStatics;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameListStatics2;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameModeConfiguration;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration ABI::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameModeUserConfiguration;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration ABI::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    interface IGameModeUserConfigurationStatics;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics ABI::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    class GameListEntry;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ed5b903e-5aeb-5d8c-9538-8306f02926c3"))
IIterator<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*, ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
//#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("42b8c8a0-3d03-5d5f-817e-4405c850f646"))
IIterable<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*, ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
//#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0eea1ad9-03e2-5ba9-ae02-daca432f362a"))
IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*, ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
//#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eadac44b-7fdd-5589-b093-1bb73cc64f02"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("721a94fb-a733-5e19-8abf-03249c29870e"))
IAsyncOperation<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry*> __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a77293e0-d508-5582-ac76-8c9605fa1de9"))
IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*, ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#define DEF___FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("37bcb2e2-9c6f-5658-a43b-ed28fe0c8458"))
IAsyncOperation<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*, ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Gaming.Preview.GamesEnumeration.GameListEntry>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntry*> __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t;
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
//#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_USE */


#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





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




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */




#ifndef DEF___FIReference_1_int_USE
#define DEF___FIReference_1_int_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("548cefbd-bc8a-5fa0-8df2-957440fc8bf4"))
IReference<int> : IReference_impl<int> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int32>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<int> __FIReference_1_int_t;
#define __FIReference_1_int ABI::Windows::Foundation::__FIReference_1_int_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_int ABI::Windows::Foundation::IReference<INT32>
//#define __FIReference_1_int_t ABI::Windows::Foundation::IReference<INT32>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_int_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            class AppDisplayInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            interface IAppDisplayInfo;
        } /* Windows */
    } /* ApplicationModel */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo ABI::Windows::ApplicationModel::IAppDisplayInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__




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








#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    
                    typedef enum GameListCategory : int GameListCategory;
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    
                    typedef enum GameListEntryLaunchableState : int GameListEntryLaunchableState;
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */












namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    class GameModeConfiguration;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    class GameModeUserConfiguration;
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */












/*
 *
 * Struct Windows.Gaming.Preview.GamesEnumeration.GameListCategory
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */

#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [v1_enum, contract] */
                    enum GameListCategory : int
                    {
                        GameListCategory_Candidate = 0,
                        GameListCategory_ConfirmedBySystem = 1,
                        GameListCategory_ConfirmedByUser = 2,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Preview.GamesEnumeration.GameListEntryLaunchableState
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 */

#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [v1_enum, contract] */
                    enum GameListEntryLaunchableState : int
                    {
                        GameListEntryLaunchableState_NotLaunchable = 0,
                        GameListEntryLaunchableState_ByLastRunningFullPath = 1,
                        GameListEntryLaunchableState_ByUserProvidedPath = 2,
                        GameListEntryLaunchableState_ByTile = 3,
                    };
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Delegate Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("25F6A421-D8F5-4D91-B40E-53D5E86FDE64"), contract] */
                    MIDL_INTERFACE("25F6A421-D8F5-4D91-B40E-53D5E86FDE64")
                    IGameListChangedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry * game
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListChangedEventHandler=_uuidof(IGameListChangedEventHandler);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("10C5648F-6C8F-4712-9B38-474BC22E76D8"), contract] */
                    MIDL_INTERFACE("10C5648F-6C8F-4712-9B38-474BC22E76D8")
                    IGameListRemovedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in HSTRING identifier
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListRemovedEventHandler=_uuidof(IGameListRemovedEventHandler);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListEntry
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("735924D3-811F-4494-B69C-C641A0C61543"), contract] */
                    MIDL_INTERFACE("735924D3-811F-4494-B69C-C641A0C61543")
                    IGameListEntry : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::IAppDisplayInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE LaunchAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Category(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Preview::GamesEnumeration::GameListCategory * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                            /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCategoryAsync(
                            /* [in] */ABI::Windows::Gaming::Preview::GamesEnumeration::GameListCategory value,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListEntry=_uuidof(IGameListEntry);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameListEntry
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Preview.GamesEnumeration.IGameListEntry
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("D84A8F8B-8749-4A25-90D3-F6C5A427886D"), exclusiveto, contract] */
                    MIDL_INTERFACE("D84A8F8B-8749-4A25-90D3-F6C5A427886D")
                    IGameListEntry2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchableState(
                            /* [retval, out] */__RPC__out ABI::Windows::Gaming::Preview::GamesEnumeration::GameListEntryLaunchableState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LauncherExecutable(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LaunchParameters(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetLauncherExecutableFileAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * executableFile,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE SetLauncherExecutableFileWithParamsAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * executableFile,
                            /* [in] */__RPC__in HSTRING launchParams,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TitleId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetTitleIdAsync(
                            /* [in] */__RPC__in HSTRING id,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GameModeConfiguration(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameModeConfiguration * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListEntry2=_uuidof(IGameListEntry2);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListStatics
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("2DDD0F6F-9C66-4B05-945C-D6ED78491B8C"), exclusiveto, contract] */
                    MIDL_INTERFACE("2DDD0F6F-9C66-4B05-945C-D6ED78491B8C")
                    IGameListStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsyncPackageFamilyName(
                            /* [in] */__RPC__in HSTRING packageFamilyName,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GameAdded(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GameAdded(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GameRemoved(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GameRemoved(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GameUpdated(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler  * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GameUpdated(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListStatics=_uuidof(IGameListStatics);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("395F2098-EA1A-45AA-9268-A83905686F27"), exclusiveto, contract] */
                    MIDL_INTERFACE("395F2098-EA1A-45AA-9268-A83905686F27")
                    IGameListStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE MergeEntriesAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry * left,
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry * right,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE UnmergeEntryAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameListEntry * mergedEntry,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameListStatics2=_uuidof(IGameListStatics2);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("78E591AF-B142-4EF0-8830-55BC2BE4F5EA"), exclusiveto, contract] */
                    MIDL_INTERFACE("78E591AF-B142-4EF0-8830-55BC2BE4F5EA")
                    IGameModeConfiguration : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RelatedProcessNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentGpuTimeAllocatedToGame(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PercentGpuTimeAllocatedToGame(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentGpuMemoryAllocatedToGame(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PercentGpuMemoryAllocatedToGame(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PercentGpuMemoryAllocatedToSystemCompositor(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PercentGpuMemoryAllocatedToSystemCompositor(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxCpuCount(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxCpuCount(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CpuExclusivityMaskLow(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CpuExclusivityMaskLow(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CpuExclusivityMaskHigh(
                            /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CpuExclusivityMaskHigh(
                            /* [in] */__RPC__in_opt __FIReference_1_int * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AffinitizeToExclusiveCpus(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AffinitizeToExclusiveCpus(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameModeConfiguration=_uuidof(IGameModeConfiguration);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("72D34AF4-756B-470F-A0C2-BA62A90795DB"), exclusiveto, contract] */
                    MIDL_INTERFACE("72D34AF4-756B-470F-A0C2-BA62A90795DB")
                    IGameModeUserConfiguration : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GamingRelatedProcessNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * processNames
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameModeUserConfiguration=_uuidof(IGameModeUserConfiguration);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Preview {
                namespace GamesEnumeration {
                    /* [object, uuid("6E50D97C-66EA-478E-A4A1-F57C0E8D00E7"), exclusiveto, contract] */
                    MIDL_INTERFACE("6E50D97C-66EA-478E-A4A1-F57C0E8D00E7")
                    IGameModeUserConfigurationStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetDefault(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration * * userConfiguration
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameModeUserConfigurationStatics=_uuidof(IGameModeUserConfigurationStatics);
                    
                } /* Windows */
            } /* Gaming */
        } /* Preview */
    } /* GamesEnumeration */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2 interface starting with version 2.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameListStatics interface starting with version 1.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameList_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameList[] = L"Windows.Gaming.Preview.GamesEnumeration.GameList";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameListEntry
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameListEntry ** Default Interface **
 *    Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameListEntry_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameListEntry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics interface starting with version 2.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics;

#endif // ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef  struct __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **first);

    END_INTERFACE
} __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
            /* [in] */ __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry;

typedef struct __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl;

interface __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry_INTERFACE_DEFINED__

#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__



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


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIReference_1_int_INTERFACE_DEFINED__)
#define ____FIReference_1_int_INTERFACE_DEFINED__

typedef interface __FIReference_1_int __FIReference_1_int;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_int;

typedef struct __FIReference_1_intVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_int * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_int * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_int * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_int * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_int * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_int * This, /* [retval][out] */ __RPC__out int *value);
    END_INTERFACE
} __FIReference_1_intVtbl;

interface __FIReference_1_int
{
    CONST_VTBL struct __FIReference_1_intVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_int_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_int_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_int_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_int_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_int_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_int_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_int_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_int_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__








#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory;


typedef enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState;
























/*
 *
 * Struct Windows.Gaming.Preview.GamesEnumeration.GameListCategory
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */

#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory
{
    GameListCategory_Candidate = 0,
    GameListCategory_ConfirmedBySystem = 1,
    GameListCategory_ConfirmedByUser = 2,
};
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Gaming.Preview.GamesEnumeration.GameListEntryLaunchableState
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 */

#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState
{
    GameListEntryLaunchableState_NotLaunchable = 0,
    GameListEntryLaunchableState_ByLastRunningFullPath = 1,
    GameListEntryLaunchableState_ByUserProvidedPath = 2,
    GameListEntryLaunchableState_ByTile = 3,
};
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Delegate Windows.Gaming.Preview.GamesEnumeration.GameListChangedEventHandler
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("25F6A421-D8F5-4D91-B40E-53D5E86FDE64"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * game
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_Invoke(This,game) \
    ( (This)->lpVtbl->Invoke(This,game) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.Gaming.Preview.GamesEnumeration.GameListRemovedEventHandler
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("10C5648F-6C8F-4712-9B38-474BC22E76D8"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler * This,
        /* [in] */__RPC__in HSTRING identifier
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_Invoke(This,identifier) \
    ( (This)->lpVtbl->Invoke(This,identifier) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListEntry
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry";
/* [object, uuid("735924D3-811F-4494-B69C-C641A0C61543"), contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayInfo )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CIAppDisplayInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *LaunchAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Category )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCategoryAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * This,
        /* [in] */__x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListCategory value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_get_DisplayInfo(This,value) \
    ( (This)->lpVtbl->get_DisplayInfo(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_LaunchAsync(This,operation) \
    ( (This)->lpVtbl->LaunchAsync(This,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_get_Category(This,value) \
    ( (This)->lpVtbl->get_Category(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_SetCategoryAsync(This,value,action) \
    ( (This)->lpVtbl->SetCategoryAsync(This,value,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameListEntry
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Gaming.Preview.GamesEnumeration.IGameListEntry
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListEntry2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2";
/* [object, uuid("D84A8F8B-8749-4A25-90D3-F6C5A427886D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LaunchableState )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CGameListEntryLaunchableState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LauncherExecutable )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LaunchParameters )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetLauncherExecutableFileAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * executableFile,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SetLauncherExecutableFileWithParamsAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * executableFile,
        /* [in] */__RPC__in HSTRING launchParams,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TitleId )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTitleIdAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GameModeConfiguration )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_get_LaunchableState(This,value) \
    ( (This)->lpVtbl->get_LaunchableState(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_get_LauncherExecutable(This,value) \
    ( (This)->lpVtbl->get_LauncherExecutable(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_get_LaunchParameters(This,value) \
    ( (This)->lpVtbl->get_LaunchParameters(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_SetLauncherExecutableFileAsync(This,executableFile,operation) \
    ( (This)->lpVtbl->SetLauncherExecutableFileAsync(This,executableFile,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_SetLauncherExecutableFileWithParamsAsync(This,executableFile,launchParams,operation) \
    ( (This)->lpVtbl->SetLauncherExecutableFileWithParamsAsync(This,executableFile,launchParams,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_get_TitleId(This,value) \
    ( (This)->lpVtbl->get_TitleId(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_SetTitleIdAsync(This,id,operation) \
    ( (This)->lpVtbl->SetTitleIdAsync(This,id,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_get_GameModeConfiguration(This,value) \
    ( (This)->lpVtbl->get_GameModeConfiguration(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry2_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListStatics
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics";
/* [object, uuid("2DDD0F6F-9C66-4B05-945C-D6ED78491B8C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsyncPackageFamilyName )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */__RPC__in HSTRING packageFamilyName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GameAdded )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GameAdded )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GameRemoved )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListRemovedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GameRemoved )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GameUpdated )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListChangedEventHandler  * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GameUpdated )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FindAllAsync(This,operation) \
    ( (This)->lpVtbl->FindAllAsync(This,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_FindAllAsyncPackageFamilyName(This,packageFamilyName,operation) \
    ( (This)->lpVtbl->FindAllAsyncPackageFamilyName(This,packageFamilyName,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_add_GameAdded(This,handler,token) \
    ( (This)->lpVtbl->add_GameAdded(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_remove_GameAdded(This,token) \
    ( (This)->lpVtbl->remove_GameAdded(This,token) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_add_GameRemoved(This,handler,token) \
    ( (This)->lpVtbl->add_GameRemoved(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_remove_GameRemoved(This,token) \
    ( (This)->lpVtbl->remove_GameRemoved(This,token) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_add_GameUpdated(This,handler,token) \
    ( (This)->lpVtbl->add_GameUpdated(This,handler,token) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_remove_GameUpdated(This,token) \
    ( (This)->lpVtbl->remove_GameUpdated(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameListStatics2[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2";
/* [object, uuid("395F2098-EA1A-45AA-9268-A83905686F27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *MergeEntriesAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * left,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * right,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UnmergeEntryAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListEntry * mergedEntry,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGaming__CPreview__CGamesEnumeration__CGameListEntry * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_MergeEntriesAsync(This,left,right,operation) \
    ( (This)->lpVtbl->MergeEntriesAsync(This,left,right,operation) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_UnmergeEntryAsync(This,mergedEntry,operation) \
    ( (This)->lpVtbl->UnmergeEntryAsync(This,mergedEntry,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameListStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration";
/* [object, uuid("78E591AF-B142-4EF0-8830-55BC2BE4F5EA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RelatedProcessNames )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentGpuTimeAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PercentGpuTimeAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentGpuMemoryAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PercentGpuMemoryAllocatedToGame )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PercentGpuMemoryAllocatedToSystemCompositor )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PercentGpuMemoryAllocatedToSystemCompositor )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxCpuCount )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxCpuCount )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CpuExclusivityMaskLow )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CpuExclusivityMaskLow )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CpuExclusivityMaskHigh )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_int * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CpuExclusivityMaskHigh )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */__RPC__in_opt __FIReference_1_int * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AffinitizeToExclusiveCpus )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AffinitizeToExclusiveCpus )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_IsEnabled(This,value) \
    ( (This)->lpVtbl->get_IsEnabled(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_IsEnabled(This,value) \
    ( (This)->lpVtbl->put_IsEnabled(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_RelatedProcessNames(This,value) \
    ( (This)->lpVtbl->get_RelatedProcessNames(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_PercentGpuTimeAllocatedToGame(This,value) \
    ( (This)->lpVtbl->get_PercentGpuTimeAllocatedToGame(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_PercentGpuTimeAllocatedToGame(This,value) \
    ( (This)->lpVtbl->put_PercentGpuTimeAllocatedToGame(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_PercentGpuMemoryAllocatedToGame(This,value) \
    ( (This)->lpVtbl->get_PercentGpuMemoryAllocatedToGame(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_PercentGpuMemoryAllocatedToGame(This,value) \
    ( (This)->lpVtbl->put_PercentGpuMemoryAllocatedToGame(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_PercentGpuMemoryAllocatedToSystemCompositor(This,value) \
    ( (This)->lpVtbl->get_PercentGpuMemoryAllocatedToSystemCompositor(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_PercentGpuMemoryAllocatedToSystemCompositor(This,value) \
    ( (This)->lpVtbl->put_PercentGpuMemoryAllocatedToSystemCompositor(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_MaxCpuCount(This,value) \
    ( (This)->lpVtbl->get_MaxCpuCount(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_MaxCpuCount(This,value) \
    ( (This)->lpVtbl->put_MaxCpuCount(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_CpuExclusivityMaskLow(This,value) \
    ( (This)->lpVtbl->get_CpuExclusivityMaskLow(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_CpuExclusivityMaskLow(This,value) \
    ( (This)->lpVtbl->put_CpuExclusivityMaskLow(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_CpuExclusivityMaskHigh(This,value) \
    ( (This)->lpVtbl->get_CpuExclusivityMaskHigh(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_CpuExclusivityMaskHigh(This,value) \
    ( (This)->lpVtbl->put_CpuExclusivityMaskHigh(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_get_AffinitizeToExclusiveCpus(This,value) \
    ( (This)->lpVtbl->get_AffinitizeToExclusiveCpus(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_put_AffinitizeToExclusiveCpus(This,value) \
    ( (This)->lpVtbl->put_AffinitizeToExclusiveCpus(This,value) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_SaveAsync(This,operation) \
    ( (This)->lpVtbl->SaveAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration";
/* [object, uuid("72D34AF4-756B-470F-A0C2-BA62A90795DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GamingRelatedProcessNames )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * processNames
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_get_GamingRelatedProcessNames(This,processNames) \
    ( (This)->lpVtbl->get_GamingRelatedProcessNames(This,processNames) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_SaveAsync(This,operation) \
    ( (This)->lpVtbl->SaveAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Preview_GamesEnumeration_IGameModeUserConfigurationStatics[] = L"Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics";
/* [object, uuid("6E50D97C-66EA-478E-A4A1-F57C0E8D00E7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfiguration * * userConfiguration
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_GetDefault(This,userConfiguration) \
    ( (This)->lpVtbl->GetDefault(This,userConfiguration) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CPreview_CGamesEnumeration_CIGameModeUserConfigurationStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameList
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameListStatics2 interface starting with version 2.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameListStatics interface starting with version 1.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameList_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameList[] = L"Windows.Gaming.Preview.GamesEnumeration.GameList";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameListEntry
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameListEntry ** Default Interface **
 *    Windows.Gaming.Preview.GamesEnumeration.IGameListEntry2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameListEntry_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameListEntry_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameListEntry[] = L"Windows.Gaming.Preview.GamesEnumeration.GameListEntry";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameModeConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeConfiguration";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration
 *
 * Introduced to Windows.Gaming.Preview.GamesEnumerationContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfigurationStatics interface starting with version 2.0 of the Windows.Gaming.Preview.GamesEnumerationContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Gaming.Preview.GamesEnumeration.IGameModeUserConfiguration ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Preview_GamesEnumeration_GameModeUserConfiguration[] = L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration";
#endif
#endif // WINDOWS_GAMING_PREVIEW_GAMESENUMERATIONCONTRACT_VERSION >= 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Epreview2Egamesenumeration_p_h__

#endif // __windows2Egaming2Epreview2Egamesenumeration_h__
